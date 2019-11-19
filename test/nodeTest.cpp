#include <assert.h>
#include "litehtml.h"
#include "test/container_test.h"
using namespace litehtml;

static context ctx;
static container_test container;
static document::ptr MakeDocument(wchar_t* source) { return document::createFromString(source, &container, &ctx); }

static void AttribTest() {
	auto document = MakeDocument(LR"xyz(
<html>
<body>
    <button onclick='myFunction()'>Try it</button>
    <p id='demo'></p>
    <div class='w3-code notranslate'>
        <img src='pic_bulboff.gif' width='100' height='180'>
    </div>
</body>
</html>)xyz");

	// https://www.w3schools.com/jsref/prop_attr_name.asp
	{
		auto x = document->getElementsByTagName(L"BUTTON")[0]->attributes[0].name;
	}

	// https://www.w3schools.com/jsref/prop_attr_value.asp
	{
		auto x = document->getElementsByTagName(L"BUTTON")[0]->attributes[0].value;
	}
	{
		auto x = (Element*)document->getElementsByTagName(L"IMG")[0];
		x->getAttributeNode(L"src").value = "pic_bulbon.gif";
	}

	// https://www.w3schools.com/jsref/prop_attr_specified.asp
	{
		auto x = document->getElementById(L"demo").attributes[0].specified;
	}
}

static void NodemapTest() {
	auto document = MakeDocument(LR"xyz(
<html>
<body>
    <img id='myImg' alt='Flower' src='klematis.jpg' width='150' height='113'>
    <button onclick='myFunction()'>Try it</button>
    <p id='demo'></p>
</body>
</html>)xyz");

	// https://www.w3schools.com/jsref/met_namednodemap_getnameditem.asp
	{
		auto btn = (Element*)document->getElementsByTagName(L"BUTTON")[0];
		auto a = btn->attributes.getNamedItem(L"onclick").value;
	}

	// https://www.w3schools.com/jsref/met_namednodemap_item.asp
	{
		auto x = document->getElementsByTagName(L"BUTTON")[0].attributes.item(0).nodeName;
	}
	{
		auto a = document->getElementsByTagName(L"BUTTON")[0].attributes.item(1);   // The 2nd attribute
	}
	{
		auto a = document->getElementsByTagName(L"BUTTON")[0].attributes[1];        // The 2nd attribute
	}
	{
		document->getElementsByTagName(L"BUTTON")[0].attributes[1].value = "newClass";
	}

	// https://www.w3schools.com/jsref/prop_namednodemap_length.asp
	{
		auto x = document->getElementsByTagName(L"BUTTON")[0].attributes.length;
	}
	{
		auto txt = L"";
		auto x = document->getElementById(L"myBtn").attributes;

		//for (auto i = 0; i < x.length; i++)
		//{
		//	txt += L"Attribute name: " + x[i].name + L"<br>";
		//}
	}
	{
		auto x = document->getElementById(L"myImg").attributes.length;
	}
	{
		auto txt = L"";
		auto x = document->getElementById(L"myImg");

		//for (auto i = 0; i < x.attributes.length; i++)
		//{
		//	txt = txt + x.attributes[i].name + L" = " + x.attributes[i].value + L"<br>";
		//}
	}
}

void nodeTest() {
	AttribTest();
}