#include "html.h"
#include "el_asset.h"
#include "document.h"

litehtml::el_asset::el_asset(const std::shared_ptr<litehtml::document>& doc) : html_tag(doc)
{
	m_display = display_inline_block;
}

litehtml::el_asset::~el_asset( void )
{

}

void litehtml::el_asset::get_content_size( size& sz, int max_width )
{
	get_document()->container()->get_image_size(m_src.c_str(), 0, &m_attrs, sz);
}

int litehtml::el_asset::calc_max_height(int asset_height)
{
	document::ptr doc = get_document();
	int percentSize = 0;
	if (m_css_max_height.units() == css_units_percentage)
	{
		auto el_parent = parent();
		if (el_parent)
		{
			if (!el_parent->get_predefined_height(percentSize))
			{
				return asset_height;
			}
		}
	}
	return doc->cvt_units(m_css_max_height, m_font_size, percentSize);
}

int litehtml::el_asset::line_height() const
{
	return height();
}

bool litehtml::el_asset::is_replaced() const
{
	return true;
}

int litehtml::el_asset::render( int x, int y, int max_width, bool second_pass )
{
	int parent_width = max_width;

	calc_outlines(parent_width);

	m_pos.move_to(x, y, z);

	document::ptr doc = get_document();

	litehtml::size sz;
	doc->container()->get_image_size(m_src.c_str(), 0, &m_attrs, sz);

	m_pos.width		= sz.width;
	m_pos.height	= sz.height;
    m_pos.depth 	= sz.depth;

	if(m_css_height.is_predefined() && m_css_width.is_predefined())
	{
		m_pos.height	= sz.height;
		m_pos.width		= sz.width;
		m_pos.depth 	= sz.depth;

		// check for max-width
		if(!m_css_max_width.is_predefined())
		{
			int max_width = doc->cvt_units(m_css_max_width, m_font_size, parent_width);
			if(m_pos.width > max_width)
			{
				m_pos.width = max_width;
			}
			m_pos.height = sz.width ? (int)((float)m_pos.width * (float)sz.height / (float)sz.width) : sz.height;
		}

		// check for max-height
		if(!m_css_max_height.is_predefined())
		{
			int max_height = calc_max_height(sz.height);
			if(m_pos.height > max_height)
			{
				m_pos.height = max_height;
			}
			m_pos.width = sz.height ? (int)(m_pos.height * (float)sz.width / (float)sz.height) : sz.width;
		}
	} else if(!m_css_height.is_predefined() && m_css_width.is_predefined())
	{
		if (!get_predefined_height(m_pos.height))
		{
			m_pos.height = (int)m_css_height.val();
		}

		// check for max-height
		if(!m_css_max_height.is_predefined())
		{
			int max_height = calc_max_height(sz.height);
			if(m_pos.height > max_height)
			{
				m_pos.height = max_height;
			}
		}

		m_pos.width = sz.height ? (int)(m_pos.height * (float)sz.width / (float)sz.height) : sz.width;
	} else if(m_css_height.is_predefined() && !m_css_width.is_predefined())
	{
		m_pos.width = (int)m_css_width.calc_percent(parent_width);

		// check for max-width
		if(!m_css_max_width.is_predefined())
		{
			int max_width = doc->cvt_units(m_css_max_width, m_font_size, parent_width);
			if(m_pos.width > max_width)
			{
				m_pos.width = max_width;
			}
		}

		m_pos.height = sz.width ? (int)((float) m_pos.width * (float)sz.height / (float)sz.width) : sz.height;
	} else
	{
		m_pos.width		= (int)m_css_width.calc_percent(parent_width);
		m_pos.height	= 0;
		m_pos.depth		= 0;
		if (!get_predefined_height(m_pos.height))
		{
			m_pos.height = (int)m_css_height.val();
		}

		// check for max-height
		if(!m_css_max_height.is_predefined())
		{
			int max_height = calc_max_height(sz.height);
			if(m_pos.height > max_height)
			{
				m_pos.height = max_height;
			}
		}

		// check for max-height
		if(!m_css_max_width.is_predefined())
		{
			int max_width = doc->cvt_units(m_css_max_width, m_font_size, parent_width);
			if(m_pos.width > max_width)
			{
				m_pos.width = max_width;
			}
		}
	}

	calc_auto_margins(parent_width);

	m_pos.x	+= content_margins_left();
	m_pos.y += content_margins_top();
	m_pos.z += content_margins_front();

	return m_pos.width + content_margins_left() + content_margins_right();
}

void litehtml::el_asset::parse_attributes()
{
	m_src = get_attr(_t("src"), _t(""));

	const tchar_t* attr_height = get_attr(_t("height"));
	if(attr_height)
	{
		m_style.add_property(_t("height"), attr_height, 0, false);
	}
	const tchar_t* attr_width = get_attr(_t("width"));
	if(attr_width)
	{
		m_style.add_property(_t("width"), attr_width, 0, false);
	}
	const tchar_t* attr_depth = get_attr(_t("depth"));
	if(attr_depth)
	{
		m_style.add_property(_t("depth"), attr_depth, 0, false);
	}
}

void litehtml::el_asset::draw( uint_ptr hdc, int x, int y, const position* clip )
{
	position pos = m_pos;
	pos.x += x;
	pos.y += y;
	pos.z += z;

	position el_pos = pos;
	el_pos += m_padding;
	el_pos += m_borders;

	// draw standard background here
	if (el_pos.does_intersect(clip))
	{
		const background* bg = get_background();
		if (bg)
		{
			background_paint bg_paint;
			init_background_paint(pos, bg_paint, bg);

			get_document()->container()->draw_background(hdc, bg_paint);
		}
	}

	// draw image as background
	if(pos.does_intersect(clip))
	{
		if (pos.width > 0 && pos.height > 0) {
			background_paint bg;
			bg.image				= m_src;
			bg.attrs				= m_attrs;
			bg.clip_box				= pos;
			bg.origin_box			= pos;
			bg.border_box			= pos;
			bg.border_box			+= m_padding;
			bg.border_box			+= m_borders;
			bg.repeat				= background_repeat_no_repeat;
			bg.image_size.width		= pos.width;
			bg.image_size.height	= pos.height;
			bg.image_size.depth		= pos.depth;
			bg.border_radius		= m_css_borders.radius.calc_percents(bg.border_box.width, bg.border_box.height, bg.border_box.depth);
			bg.position_x			= pos.x;
			bg.position_y			= pos.y;
			bg.position_z			= pos.z;
			get_document()->container()->draw_background(hdc, bg);
		}
	}

	// draw borders
	if (el_pos.does_intersect(clip))
	{
		position border_box = pos;
		border_box += m_padding;
		border_box += m_borders;

		borders bdr = m_css_borders;
		bdr.radius = m_css_borders.radius.calc_percents(border_box.width, border_box.height);

		get_document()->container()->draw_borders(hdc, bdr, border_box, have_parent() ? false : true);
	}
}

void litehtml::el_asset::parse_styles( bool is_reparse /*= false*/ )
{
	html_tag::parse_styles(is_reparse);

	if(!m_src.empty())
	{
		if(!m_css_height.is_predefined() && !m_css_width.is_predefined())
		{
			get_document()->container()->load_image(m_src.c_str(), 0, &m_attrs, true);
		} else
		{
			get_document()->container()->load_image(m_src.c_str(), 0, &m_attrs, false);
		}
	}
}
