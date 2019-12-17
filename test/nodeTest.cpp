#include <assert.h>
#include "litehtml.h"
#include "test/container_test.h"
using namespace std;
using namespace litehtml;

static context ctx;
static container_test container;
static document::ptr MakeDocument(wchar_t* source) { return document::createFromString(source, &container, &ctx); }

static void AttribTest() {
	auto document = MakeDocument(LR"xyz(
<html>
<body>
    <button onclick="myFunction()">Try it</button>
    <p id="demo"></p>
    <div class="w3-code notranslate">
        <img src="pic_bulboff.gif" width="100" height="180">
    </div>
</body>
</html>)xyz");

	// https://www.w3schools.com/jsref/prop_attr_name.asp
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes()[0]->name();
		assert(!t_strcmp(_t("onclick"), x.c_str()));
	}

	// https://www.w3schools.com/jsref/prop_attr_value.asp
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes()[0]->value();
		assert(!t_strcmp(_t("myFunction()"), x.c_str()));
	}
	{
		auto x = (Element*)document->getElementsByTagName(_t("IMG"))[0];
		x->getAttributeNode(_t("src"))->value(_t("pic_bulbon.gif"));
		assert(!t_strcmp(_t("pic_bulbon.gif"), x->getAttributeNode(_t("src"))->value().c_str()));
	}

	// https://www.w3schools.com/jsref/prop_attr_specified.asp
	{
		auto x = document->getElementById(_t("demo"))->attributes()[0]->specified();
		assert(x);
	}
}

static void NodemapTest() {
	auto document = MakeDocument(LR"xyz(
<html>
<body>
	<h1>Hello World</h1>
	<input type="button" value="OK" />
    <img id="myImg" alt="Flower" src="klematis.jpg" width="150" height="113">
    <button id="myBtn" onclick="myFunction()" class="example">Try it</button>
    <p id="demo"></p>
</body>
</html>)xyz");

	// https://www.w3schools.com/jsref/met_namednodemap_getnameditem.asp
	{
		auto btn = (Element*)document->getElementsByTagName(_t("BUTTON"))[0];
		auto x = btn->attributes().getNamedItem(_t("onclick"))->value();
		assert(!t_strcmp(_t("myFunction()"), x.c_str()));
	}

	// https://www.w3schools.com/jsref/met_namednodemap_item.asp
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes().item(0)->nodeName();
		assert(!t_strcmp(_t("class"), x.c_str()));
	}
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes().item(1);   // The 2nd attribute
		assert(x != nullptr);
	}
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes()[1];        // The 2nd attribute
		assert(x != nullptr);
	}
	{
		document->getElementsByTagName(_t("BUTTON"))[0]->attributes()[1]->value(_t("newClass"));
	}

	// https://www.w3schools.com/jsref/prop_namednodemap_length.asp
	{
		auto x = document->getElementsByTagName(_t("BUTTON"))[0]->attributes().length();
		assert(x == 3);
	}
	{
		auto txt = wstring();
		auto x = document->getElementById(_t("myBtn"))->attributes();

		for (auto i = 0; i < x.length(); i++)
		{
			txt += _t("Attribute name: ") + tstring(x[i]->name()) + _t("<br>");
		}
		assert(!t_strcmp(_t("Attribute name: class<br>Attribute name: id<br>Attribute name: onclick<br>"), txt.c_str()));
	}
	{
		auto x = document->getElementById(_t("myImg"))->attributes().length();
		assert(x == 5);
	}
	{
		auto txt = wstring();
		auto x = document->getElementById(_t("myImg"));

		for (auto i = 0; i < x->attributes().length(); i++)
		{
			txt = txt + wstring(x->attributes()[i]->name()) + _t(" = ") + tstring(x->attributes()[i]->value()) + _t("<br>");
		}
		assert(!t_strcmp(_t("alt = Flower<br>height = 113<br>id = myImg<br>src = klematis.jpg<br>width = 150<br>"), txt.c_str()));
	}

	// https://www.w3schools.com/jsref/met_namednodemap_removenameditem.asp
	{
		auto btn = document->getElementsByTagName(_t("INPUT"))[0];
		btn->attributes().removeNamedItem(_t("type"));
	}

	// https://www.w3schools.com/jsref/met_namednodemap_setnameditem.asp
	{
		auto h = document->getElementsByTagName(_t("H1"))[0];
		auto typ = document->createAttribute(_t("class"));
		//typ->value(_t("democlass"));
		//h->attributes().setNamedItem(typ);
	}
}

void nodeTest() {
	AttribTest();
	NodemapTest();
}