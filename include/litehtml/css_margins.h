#ifndef LH_CSS_MARGINS_H
#define LH_CSS_MARGINS_H

#include "css_length.h"

namespace litehtml
{
	struct css_margins
	{
		css_length	left;
		css_length	right;
		css_length	top;
		css_length	bottom;
		css_length	front;
		css_length	back;

		css_margins()
		{
		}

		css_margins(const css_margins& val)
		{
			left = val.left;
			right = val.right;
			top = val.top;
			bottom = val.bottom;
			front = val.front;
			back = val.back;
		}

		css_margins& operator=(const css_margins& val)
		{
			left = val.left;
			right = val.right;
			top = val.top;
			bottom = val.bottom;
			front = val.front;
			back = val.back;
			return *this;
		}
	};
}

#endif  // LH_CSS_MARGINS_H
