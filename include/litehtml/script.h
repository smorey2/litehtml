#ifndef LH_SCRIPT_H
#define LH_SCRIPT_H

#include "attributes.h"
#include <string>

namespace litehtml
{
	class idocument
	{
	};

	class ielement
	{
	};

	class iscript
	{
	public:
		void addScript(const idocument* doc, const tchar_t* function);
		void addEvent(const ielement* el, const tchar_t* event, const tchar_t* function);
	};
}

#endif  // LH_SCRIPT_H
