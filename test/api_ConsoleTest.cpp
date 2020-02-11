#include <assert.h>
#include "litehtml.h"
#include "test/container_test.h"
using namespace litehtml;

static context ctx;
static container_test container;
static document::ptr MakeDocument(wchar_t* source) { return document::createFromString(source, &container, &ctx); }

static void Test() {

	Console* console;
	document::ptr thedoc;
	// https://www.w3schools.com/jsref/met_console_assert.asp
	{
		auto document = thedoc = MakeDocument(LR"xyz(
<html>
<body>
<p id="demo"></p>
</body>
</html>)xyz");
		{
			console->assert_(document->getElementById(_t("demo")), _t("You have no element with ID 'demo'"));
		}
		{
			std::map<tstring, tstring> myObj = { {_t("firstname"), _t("John")}, {_t("lastname"), _t("Doe")} };
			console->assert_(document->getElementById(_t("demo")), myObj);
		}
		{
			tstring myArr[] = { _t("Orange"), _t("Banana"), _t("Mango"), _t("Kiwi") };
			console->assert_(document->getElementById(_t("demo")), myArr);
		}
	}

	// https://www.w3schools.com/jsref/met_console_clear.asp
	{
		{
			console->clear();
		}
	}

	// https://www.w3schools.com/jsref/met_console_count.asp
	{
		{
			int i;
			for (i = 0; i < 10; i++)
			{
				console->count();
			}
		}
		{
			console->count();
			console->count();
		}
		{
			console->count(_t(""));
			console->count(_t(""));
		}
		{
			console->count(_t("myLabel"));
			console->count(_t("myLabel"));
		}
	}

	// https://www.w3schools.com/jsref/met_console_error.asp
	{
		{
			console->error(_t("You made a mistake"));
		}
		{
			std::map<tstring, tstring> myObj = { {_t("firstname"), _t("John")}, {_t("lastname"), _t("Doe")} };
			console->error(myObj);
		}
		{
			tstring myArr[] = { _t("Orange"), _t("Banana"), _t("Mango"), _t("Kiwi") };
			console->error(myArr);
		}
	}

	// https://www.w3schools.com/jsref/met_console_group.asp
	{
		{
			console->log(_t("Hello world!"));
			console->group();
			console->log(_t("Hello again, this time inside a group!"));
		}
		{
			console->log(_t("Hello world!"));
			console->group();
			console->log(_t("Hello again, this time inside a group!"));
			console->groupEnd();
			console->log(_t("and we are back."));
		}
		{
			console->log(_t("Hello world!"));
			console->group(_t("myLabel"));
			console->log(_t("Hello again, this time inside a group, with a label!"));
		}
	}

	// https://www.w3schools.com/jsref/met_console_groupcollapsed.asp
	{
		{
			console->log(_t("Hello world!"));
			console->groupCollapsed();
			console->log(_t("Hello again, this time inside a collapsed group!"));
		}
		{
			console->log(_t("Hello world!"));
			console->groupCollapsed();
			console->log(_t("Hello again, this time inside a collapsed group!"));
			console->groupEnd();
			console->log(_t("and we are back."));
		}
		{
			console->log(_t("Hello world!"));
			console->groupCollapsed(_t("myLabel"));
			console->log(_t("Hello again, this time inside a collapsed group, with a label!"));
		}
	}

	// https://www.w3schools.com/jsref/met_console_groupend.asp
	{
		{
			console->log(_t("Hello world!"));
			console->group();
			console->log(_t("Hello again, this time inside a group!"));
			console->groupEnd();
			console->log(_t("and we are back."));
		}
	}

	// https://www.w3schools.com/jsref/met_console_info.asp
	{
		{
			console->info(_t("Hello world!"));
		}
		{
			std::map<tstring, tstring> myObj = { {_t("firstname"), _t("John")}, {_t("lastname"), _t("Doe")} };
			console->info(myObj);
		}
		{
			tstring myArr[] = { _t("Orange"), _t("Banana"), _t("Mango"), _t("Kiwi") };
			console->info(myArr);
		}
	}

	// https://www.w3schools.com/jsref/met_console_log.asp
	{
		{
			console->log(_t("Hello world!"));
		}
		{
			std::map<tstring, tstring> myObj = { {_t("firstname"), _t("John")}, {_t("lastname"), _t("Doe")} };
			console->log(myObj);
		}
		{
			tstring myArr[] = { _t("Orange"), _t("Banana"), _t("Mango"), _t("Kiwi") };
			console->log(myArr);
		}
	}

	// https://www.w3schools.com/jsref/met_console_table.asp
	{
		{
			tstring p0[] = { _t("Audi"), _t("Volvo"), _t("Ford") };
			console->table(p0);
		}
		{
			std::map<tstring, tstring> myObj = { { _t("firstname"), _t("John") }, { _t("lastname"), _t("Doe") } };
		}
		{
			std::map<tstring, tstring> car1 = { {_t("name"), _t("Audi")}, {_t("model"), _t("A4")} };
			std::map<tstring, tstring> car2 = { {_t("name"), _t("Volvo")}, {_t("model"), _t("XC90")} };
			std::map<tstring, tstring> car3 = { {_t("name"), _t("Ford")}, {_t("model"), _t("Fusion")} };

			std::map<tstring, tstring> p0[] = { car1, car2, car3 };
			console->table(p0);
		}
		{
			std::map<tstring, tstring> car1 = { {_t("name"), _t("Audi")}, {_t("model"), _t("A4")} };
			std::map<tstring, tstring> car2 = { {_t("name"), _t("Volvo")}, {_t("model"), _t("XC90")} };
			std::map<tstring, tstring> car3 = { {_t("name"), _t("Ford")}, {_t("model"), _t("Fusion")} };

			std::map<tstring, tstring> p0[] = { car1, car2, car3 }; tstring p1[] = { _t("model") };
			console->table(p0, p1);
		}
	}

	// https://www.w3schools.com/jsref/met_console_time.asp
	{
		{
			console->time();
			for (int i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd();
		}
		{
			console->time(_t("test1"));
			for (int i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd(_t("test1"));
		}
		{
			int i;
			console->time(_t("test for loop"));
			for (i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd(_t("test for loop"));

			i = 0;
			console->time(_t("test while loop"));
			while (i < 1000000)
			{
				i++;
			}
			console->timeEnd(_t("test while loop"));
		}
	}

	// https://www.w3schools.com/jsref/met_console_timeend.asp
	{
		{
			console->time();
			for (int i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd();
		}
		{
			console->time(_t("test1"));
			for (int i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd(_t("test1"));
		}
		{
			int i;
			console->time(_t("test for loop"));
			for (i = 0; i < 100000; i++)
			{
				// some code
			}
			console->timeEnd(_t("test for loop"));

			i = 0;
			console->time(_t("test while loop"));
			while (i < 1000000)
			{
				i++;
			}
			console->timeEnd(_t("test while loop"));
		}
	}

	// https://www.w3schools.com/jsref/met_console_trace.asp
	{
		{
			std::function<void()> myOtherFunction;

			std::function<void()> myFunction = [myOtherFunction]()
			{
				myOtherFunction();
			};

			myOtherFunction = [console]()
			{
				console->trace();
			};

			myFunction();
		}
	}

	// https://www.w3schools.com/jsref/met_console_warn.asp
	{
		{
			console->warn(_t("This is a warning!"));
		}
		{
			std::map<tstring, tstring> myObj = { { _t("firstname"), _t("John") }, { _t("lastname"), _t("Doe") } };
			console->warn(myObj);
		}
		{
			tstring myArr[] = { _t("Orange"), _t("Banana"), _t("Mango"), _t("Kiwi") };
			console->warn(myArr);
		}
	}
}

void api_ConsoleTest() {
	Test();
}