#include "html.h"
#include "api.h"

/// <summary>
/// Element
/// </summary>
namespace litehtml
{
	/// <summary>
	/// Gets or sets the access key.
	/// </summary>
	/// <value>
	/// The access key.
	/// </value>
	char Element::accessKey() { return ' '; }
	void Element::accessKey(char value) { }

	/// <summary>
	/// Adds the event listener.
	/// </summary>
	/// <param name="event">The event.</param>
	/// <param name="function">The function.</param>
	/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
	void Element::addEventListener(tstring event, tstring function, bool useCapture) { }

	/// <summary>
	/// Removes focus from an element
	/// </summary>
	void Element::blur() { }

	/// <summary>
	/// Returns the number of child elements an element has
	/// </summary>
	/// <value>
	/// The child element count.
	/// </value>
	int Element::childElementCount() { return _elem->m_children.size(); }

	///// <summary>
	///// Returns a collection of an element's child nodes (including text and comment nodes)
	///// </summary>
	//NodeList childNodes();

	/// <summary>
	/// Returns a collection of an element's child element (excluding text and comment nodes)
	/// </summary>
	HTMLCollection& Element::children() { return HTMLCollection(); } // (_elem._children)

	/// <summary>
	/// Returns the class name(s) of an element
	/// </summary>
	/// <value>
	/// The class list.
	/// </value>
	DOMTokenList& Element::classList() { return DOMTokenList(); }

	/// <summary>
	/// Sets or returns the value of the class attribute of an element
	/// </summary>
	/// <value>
	/// The name of the class.
	/// </value>
	tstring Element::className() { return _elem->get_attr(_t("class")); }
	void Element::className(tstring value) { _elem->set_attr(_t("class"), value.c_str()); }

	/// <summary>
	/// Simulates a mouse-click on an element
	/// </summary>
	void Element::click() { }

	/// <summary>
	/// Returns the height of an element, including padding
	/// </summary>
	/// <value>
	/// The height of the client.
	/// </value>
	int Element::clientHeight() { return 0; }

	/// <summary>
	/// Returns the width of the left border of an element
	/// </summary>
	/// <value>
	/// The client left.
	/// </value>
	int Element::clientLeft() { return 0; }

	/// <summary>
	/// Returns the width of the top border of an element
	/// </summary>
	/// <value>
	/// The client top.
	/// </value>
	int Element::clientTop() { return 0; }

	/// <summary>
	/// Returns the width of an element, including padding
	/// </summary>
	/// <value>
	/// The width of the client.
	/// </value>
	int Element::clientWidth() { return 0; }

	/// <summary>
	/// Returns true if a node is a descendant of a node, otherwise false
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns>
	///   <c>true</c> if [contains] [the specified node]; otherwise, <c>false</c>.
	/// </returns>
	bool Element::contains(Node* node) { return false; }

	/// <summary>
	/// Sets or returns whether the content of an element is editable or not
	/// </summary>
	/// <value>
	/// The content editable.
	/// </value>
	tstring Element::contentEditable() { return nullptr; }
	void Element::contentEditable(tstring value) { }

	/// <summary>
	/// Sets or returns the value of the dir attribute of an element
	/// </summary>
	/// <value>
	/// The dir.
	/// </value>
	tstring Element::dir() { return nullptr; }
	void Element::dir(tstring value) { }

	/// <summary>
	/// Cancels an element in fullscreen mode
	/// </summary>
	void Element::exitFullscreen() { }

	/// <summary>
	/// Returns the first child element of an element
	/// </summary>
	/// <value>
	/// The first element child.
	/// </value>
	Node* Element::firstElementChild() { return !_elem->m_children.empty() ? static_cast<Node*>(_elem->m_children[0].get()) : nullptr; }

	/// <summary>
	/// Gives focus to an element
	/// </summary>
	void Element::focus() { }

	/// <summary>
	/// Returns the specified attribute value of an element node
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	/// <returns></returns>
	tstring Element::getAttribute(tstring attributename) { return tstring(_elem->get_attr(attributename.c_str())); }

	/// <summary>
	/// Returns the specified attribute node
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	/// <returns></returns>
	Attr::ptr Element::getAttributeNode(tstring attributename)
	{
		return std::make_shared<Attr>(&dynamic_cast<html_tag*>(_elem)->m_attrs, attributename);
	}

	/// <summary>
	/// Returns the size of an element and its position relative to the viewport
	/// </summary>
	/// <returns></returns>
	Rect* Element::getBoundingClientRect() { return nullptr; }

	/// <summary>
	/// Returns a collection of all child elements with the specified class name
	/// </summary>
	/// <param name="classname">The classname.</param>
	/// <returns></returns>
	NodeList Element::getElementsByClassName(tstring classname)
	{
		css_element_selector elem;
		css_attribute_selector attr;
		attr.val = classname;
		attr.condition = select_equal;
		attr.attribute = _t("class");
		elem.m_attrs.push_back(attr);
		css_selector sel(elem);
		return NodeList(_elem->select_all(sel));
	}

	/// <summary>
	/// Returns a collection of all child elements with the specified tag name
	/// </summary>
	/// <param name="tagname">The tagname.</param>
	/// <returns></returns>
	NodeList Element::getElementsByTagName(tstring tagname)
	{
		css_element_selector elem;
		elem.m_tag = tagname;
		litehtml::lcase(elem.m_tag);
		css_selector sel(elem);
		return NodeList(_elem->select_all(sel));
	}

	/// <summary>
	/// Returns true if an element has the specified attribute, otherwise false
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	/// <returns>
	///   <c>true</c> if the specified attributename has attribute; otherwise, <c>false</c>.
	/// </returns>
	bool Element::hasAttribute(tstring attributename) //: Node
	{
		return nullptr;
	}

	/// <summary>
	/// Returns true if an element has any attributes, otherwise false
	/// </summary>
	/// <returns>
	///   <c>true</c> if this instance has attributes; otherwise, <c>false</c>.
	/// </returns>
	bool Element::hasAttributes()
	{
		return nullptr;
	}

	/// <summary>
	/// Sets or returns the value of the id attribute of an element
	/// </summary>
	/// <value>
	/// The identifier.
	/// </value>
	tstring Element::id() { return _elem->get_attr(_t("id")); }
	void Element::id(tstring value) { _elem->set_attr(_t("id"), value.c_str()); }

	/// <summary>
	/// Sets or returns the content of an element
	/// </summary>
	/// <value>
	/// The inner HTML.
	/// </value>
	tstring Element::innerHTML() { return nullptr; }
	void Element::innerHTML(tstring value) { }

	/// <summary>
	/// Sets or returns the text content of a node and its descendants
	/// </summary>
	/// <value>
	/// The inner text.
	/// </value>
	tstring Element::innerText() { return nullptr; }
	void Element::innerText(tstring value) { }

	/// <summary>
	/// Inserts a HTML element at the specified position relative to the current element
	/// </summary>
	/// <param name="position">The position.</param>
	/// <param name="element">The element.</param>
	void Element::insertAdjacentElement(tstring position, Element* element) { }

	/// <summary>
	/// Inserts a HTML formatted text at the specified position relative to the current element
	/// </summary>
	/// <param name="position">The position.</param>
	/// <param name="text">The text.</param>
	void Element::insertAdjacentHTML(tstring position, tstring text) { }

	/// <summary>
	/// Inserts text into the specified position relative to the current element
	/// </summary>
	/// <param name="position">The position.</param>
	/// <param name="text">The text.</param>
	void Element::insertAdjacentText(tstring position, tstring text) { }

	/// <summary>
	/// Inserts a new child node before a specified, existing, child node
	/// </summary>
	/// <param name="newnode">The newnode.</param>
	/// <param name="existingnode">The existingnode.</param>
	Node* Element::insertBefore(Node* newnode, Node* existingnode) { return nullptr; }

	/// <summary>
	/// Returns true if the content of an element is editable, otherwise false
	/// </summary>
	/// <value>
	///   <c>true</c> if this instance is content editable; otherwise, <c>false</c>.
	/// </value>
	bool Element::isContentEditable() { return false; }

	/// <summary>
	/// Sets or returns the value of the lang attribute of an element
	/// </summary>
	/// <value>
	/// The language.
	/// </value>
	tstring Element::lang() { return nullptr; }
	void Element::lang(tstring value) { }

	/// <summary>
	/// Returns the last child element of an element
	/// </summary>
	/// <value>
	/// The last element child.
	/// </value>
	Node* Element::lastElementChild() { return !_elem->m_children.empty() ? static_cast<Node*>(_elem->m_children[_elem->m_children.size() - 1].get()) : nullptr; }

	/// <summary>
	/// Returns the namespace URI of an element
	/// </summary>
	/// <value>
	/// The namespace URI.
	/// </value>
	tstring Element::namespaceURI() { return nullptr; }

	/// <summary>
	/// Returns the next element at the same node tree level
	/// </summary>
	/// <value>
	/// The next element sibling.
	/// </value>
	Node* Element::nextElementSibling() { return nullptr; }

	/// <summary>
	/// Returns the height of an element, including padding, border and scrollbar
	/// </summary>
	/// <value>
	/// The height of the offset.
	/// </value>
	int Element::offsetHeight() { return 0; }

	/// <summary>
	/// Returns the width of an element, including padding, border and scrollbar
	/// </summary>
	/// <value>
	/// The width of the offset.
	/// </value>
	int Element::offsetWidth() { return 0; }

	/// <summary>
	/// Returns the horizontal offset position of an element
	/// </summary>
	/// <value>
	/// The offset left.
	/// </value>
	int Element::offsetLeft() { return 0; }

	/// <summary>
	/// Returns the offset container of an element
	/// </summary>
	/// <value>
	/// The offset parent.
	/// </value>
	Node* Element::offsetParent() { return nullptr; }

	/// <summary>
	/// Returns the vertical offset position of an element
	/// </summary>
	/// <value>
	/// The offset top.
	/// </value>
	int Element::offsetTop() { return 0; }

	/// <summary>
	/// Returns the parent element node of an element
	/// </summary>
	/// <value>
	/// The parent element.
	/// </value>
	Element* Element::parentElement() { return nullptr; }

	/// <summary>
	/// Returns the previous element at the same node tree level
	/// </summary>
	/// <value>
	/// The previous element sibling.
	/// </value>
	Node* Element::previousElementSibling() { return nullptr; }

	/// <summary>
	/// Returns the first child element that matches a specified CSS selector(s) of an element
	/// </summary>
	/// <param name="selectors">The selectors.</param>
	/// <returns></returns>
	Element* Element::querySelector(tstring selectors) { return static_cast<Element*>(_elem->select_one(selectors).get()); }

	/// <summary>
	/// Returns all child elements that matches a specified CSS selector(s) of an element
	/// </summary>
	/// <param name="selectors">The selectors.</param>
	/// <returns></returns>
	NodeList Element::querySelectorAll(tstring selectors) { return NodeList(); }

	/// <summary>
	/// Removes a specified attribute from an element
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	void Element::removeAttribute(tstring attributename) { }

	/// <summary>
	/// Removes a specified attribute node, and returns the removed node
	/// </summary>
	/// <param name="attributenode">The attributenode.</param>
	/// <returns></returns>
	Attr::ptr Element::removeAttributeNode(Attr::ptr attributenode) { return nullptr; }

	/// <summary>
	/// Removes an event handler that has been attached with the addEventListener() method
	/// </summary>
	/// <param name="event">The event.</param>
	/// <param name="function">The function.</param>
	/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
	void Element::removeEventListener(tstring event, tstring function, bool useCapture) { }

	/// <summary>
	/// Shows an element in fullscreen mode
	/// </summary>
	void Element::requestFullscreen() { }

	/// <summary>
	/// Returns the entire height of an element, including padding
	/// </summary>
	/// <value>
	/// The height of the scroll.
	/// </value>
	int Element::scrollHeight() { return 0; }

	/// <summary>
	/// Scrolls the specified element into the visible area of the browser window
	/// </summary>
	/// <param name="alignTo">The align to.</param>
	void Element::scrollIntoView(bool alignTo) { }

	/// <summary>
	/// Sets or returns the number of pixels an element's content is scrolled horizontally
	/// </summary>
	/// <value>
	/// The scroll left.
	/// </value>
	int Element::scrollLeft() { return 0; }

	/// <summary>
	/// Sets or returns the number of pixels an element's content is scrolled vertically
	/// </summary>
	/// <value>
	/// The scroll top.
	/// </value>
	int Element::scrollTop() { return 0; }

	/// <summary>
	/// Returns the entire width of an element, including padding
	/// </summary>
	/// <value>
	/// The width of the scroll.
	/// </value>
	int Element::scrollWidth() { return 0; }

	/// <summary>
	/// Sets or changes the specified attribute, to the specified value
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	/// <param name="attributevalue">The attributevalue.</param>
	void Element::setAttribute(tstring attributename, tstring attributevalue) { }

	/// <summary>
	/// Sets or changes the specified attribute node
	/// </summary>
	/// <param name="attributenode">The attributenode.</param>
	/// <returns></returns>
	Attr::ptr Element::setAttributeNode(Attr::ptr attributenode) { return nullptr; }

	/// <summary>
	/// Sets or returns the value of the style attribute of an element
	/// </summary>
	/// <value>
	/// The style.
	/// </value>
	Style* Element::style() { return nullptr; }

	/// <summary>
	/// Sets or returns the value of the tabindex attribute of an element
	/// </summary>
	/// <value>
	/// The index of the tab.
	/// </value>
	int Element::tabIndex() { return 0; }
	void Element::tabIndex(int value) { }

	/// <summary>
	/// Returns the tag name of an element
	/// </summary>
	/// <value>
	/// The name of the tag.
	/// </value>
	tstring Element::tagName() { return nullptr; }

	/// <summary>
	/// Sets or returns the value of the title attribute of an element
	/// </summary>
	/// <value>
	/// The title.
	/// </value>
	tstring Element::title() { return nullptr; }
	void Element::title(tstring value) { }

	/// <summary>
	/// Converts an element to a string
	/// </summary>
	tstring Element::toString() { return nullptr; }
}
