#ifndef LH_CSS_POSITION_H
#define LH_CSS_POSITION_H

#include "css_length.h"

namespace litehtml
{
	struct css_position
	{
		css_length	x;
		css_length	y;
		css_length	z;
		css_length	width;
		css_length	height;
		css_length	depth;

		css_position()
		{
		}

		css_position(const css_position& val)
		{
			x = val.x;
			y = val.y;
			z = val.z;
			width = val.width;
			height = val.height;
			depth = val.depth;
		}

		css_position& operator=(const css_position& val)
		{
			x = val.x;
			y = val.y;
			z = val.z;
			width = val.width;
			height = val.height;
			depth = val.depth;
			return *this;
		}
	};
}

#endif  // LH_CSS_POSITION_H
