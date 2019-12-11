#include "html.h"
#include "api_node.h"
//#include "node.h"
//#include "document.h"

/// <summary>
/// Node
/// </summary>
namespace litehtml
{
	Node::Node() : _elem(nullptr) { }
	Node::~Node() { }

	Element::Element() { _elem = static_cast<element*>(this); }

	/// <summary>
	/// Adds a new child node, to an element, as the last child node
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	Node* Node::appendChild(Node* node)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns a NamedNodeMap of an element's attributes
	/// </summary>
	/// <value>
	/// The attributes.
	/// </value>
	NamedNodeMap Node::attributes()
	{
		return _elem ? NamedNodeMap(dynamic_cast<html_tag*>(_elem)->m_attrs) : NamedNodeMap::Empty;
	}

	/// <summary>
	/// Returns the absolute base URI of a node
	/// </summary>
	/// <value>
	/// The base URI.
	/// </value>
	tstring Node::baseURI() //: Base
	{
		return _t("base");
	}

	/// <summary>
	/// Returns a collection of an element's child nodes (including text and comment nodes)
	/// </summary>
	NodeList Node::childNodes()
	{
		NodeList a;
		return a;
	}

	/// <summary>
	/// Clones an element
	/// </summary>
	/// <param name="deep">if set to <c>true</c> [deep].</param>
	/// <returns></returns>
	Node* Node::cloneNode(bool deep)
	{
		return nullptr;
	}

	/// <summary>
	/// Compares the document position of two elements
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	int Node::compareDocumentPosition(Node* node)
	{
		return 0;
	}

	/// <summary>
	/// Returns the first child node of an element
	/// </summary>
	/// <value>
	/// The first child.
	/// </value>
	Node* Node::firstChild()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns true if an element has any child nodes, otherwise false
	/// </summary>
	/// <returns>
	///   <c>true</c> if [has child nodes]; otherwise, <c>false</c>.
	/// </returns>
	bool Node::hasChildNodes()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns true if a specified namespaceURI is the default, otherwise false
	/// </summary>
	/// <param name="namespaceURI">The namespace URI.</param>
	/// <returns>
	///   <c>true</c> if [is default namespace] [the specified namespace URI]; otherwise, <c>false</c>.
	/// </returns>
	bool Node::isDefaultNamespace(tstring namespaceURI)
	{
		return nullptr;
	}

	/// <summary>
	/// Checks if two elements are equal
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns>
	///   <c>true</c> if [is equal node] [the specified node]; otherwise, <c>false</c>.
	/// </returns>
	bool Node::isEqualNode(Node* node)
	{
		return nullptr;
	}

	/// <summary>
	/// Checks if two elements are the same node
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns>
	///   <c>true</c> if [is same node] [the specified node]; otherwise, <c>false</c>.
	/// </returns>
	bool Node::isSameNode(Node* node)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the last child node of an element
	/// </summary>
	/// <value>
	/// The last child.
	/// </value>
	Node* Node::lastChild()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the namespace URI associated with a given prefix
	/// </summary>
	/// <param name="prefix">The prefix.</param>
	/// <returns></returns>
	tstring Node::lookupNamespaceURI(tstring prefix) //: Base
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the prefix associated with a given namespace URI
	/// </summary>
	/// <param name="namespaceURI">The namespace URI.</param>
	/// <returns></returns>
	tstring Node::lookupPrefix(tstring namespaceURI) //: Base
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the next node at the same node tree level
	/// </summary>
	/// <value>
	/// The next sibling.
	/// </value>
	Node* Node::nextSibling()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the name of a node
	/// </summary>
	/// <value>
	/// The name of the node.
	/// </value>
	tstring Node::nodeName()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the node type of a node
	/// </summary>
	/// <value>
	/// The type of the node.
	/// </value>
	int Node::nodeType()
	{
		return 0;
	}

	/// <summary>
	/// Sets or returns the value of a node
	/// </summary>
	/// <value>
	/// The node value.
	/// </value>
	tstring Node::nodeValue()
	{
		return nullptr;
	}
	void Node::nodeValue(tstring value)
	{
	}

	/// <summary>
	/// Joins adjacent text nodes and removes empty text nodes in an element
	/// </summary>
	void Node::normalize()
	{
	}

	/// <summary>
	/// Returns the root element (document object) for an element
	/// </summary>
	/// <value>
	/// The owner document.
	/// </value>
	Document* Node::ownerDocument()
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the parent node of an element
	/// </summary>
	/// <value>
	/// The parent node.
	/// </value>
	Node* Node::parentNode()
	{
		return nullptr;
	}

	/// <summary>
	/// Sets or returns the namespace prefix of a node
	/// </summary>
	/// <value>
	/// The prefix.
	/// </value>
	tstring Node::prefix() //: Base
	{
		return nullptr;
	}
	void Node::prefix(tstring value)
	{
	}

	/// <summary>
	/// Returns the previous node at the same node tree level
	/// </summary>
	/// <value>
	/// The previous sibling.
	/// </value>
	Node* Node::previousSibling()
	{
		return nullptr;
	}

	/// <summary>
	/// Removes a child node from an element
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	Node* Node::removeChild(Node* node)
	{
		return nullptr;
	}

	/// <summary>
	/// Replaces a child node in an element
	/// </summary>
	/// <param name="newnode">The newnode.</param>
	/// <param name="oldnode">The oldnode.</param>
	/// <returns></returns>
	Node* Node::replaceChild(Node* newnode, Node* oldnode)
	{
		return nullptr;
	}

	/// <summary>
	/// Sets or returns the textual content of a node and its descendants
	/// </summary>
	/// <value>
	/// The content of the text.
	/// </value>
	tstring Node::textContent()
	{
		return nullptr;
	}
	void Node::textContent(tstring value)
	{
	}
}

/// <summary>
/// Attr
/// </summary>
namespace litehtml
{
	Attr::Attr(string_map* attrs, tstring name) : _attrs(attrs), _name(name) { }

	/// <summary>
	/// Returns the name of an attribute
	/// </summary>
	/// <value>
	/// The name.
	/// </value>
	tstring Attr::name()
	{
		return _name;
	}

	/// <summary>
	/// Sets or returns the value of the attribute
	/// </summary>
	/// <value>
	/// The value.
	/// </value>
	tstring Attr::value()
	{
		return (*_attrs)[_name];
	}
	void Attr::value(tstring value)
	{
		(*_attrs)[_name] = value;
	}

	/// <summary>
	/// Returns true if the attribute has been specified, otherwise it returns false
	/// </summary>
	/// <value>
	///   <c>true</c> if specified; otherwise, <c>false</c>.
	/// </value>
	bool Attr::specified()
	{
		return !(*_attrs)[_name].empty();
	}
}

/// <summary>
/// NodeList
/// </summary>
namespace litehtml
{
	NodeList::NodeList() : list((elements_vector)0) { }
	NodeList::NodeList(elements_vector& elements) : list(elements) { }
	NodeList::~NodeList()
	{
		if (list != (elements_vector)0)
			list.clear();
	}
	Node* NodeList::operator[](int index) { return list != (elements_vector)0 ? (Node*)(node*)list[index].get() : nullptr; }
}

/// <summary>
/// NamedNodeMap
/// </summary>
namespace litehtml
{
	NamedNodeMap NamedNodeMap::Empty = NamedNodeMap(string_map());
	NamedNodeMap::NamedNodeMap(string_map& attrs) : m_attrs(attrs) { }

	/// <summary>
	/// Returns a specified attribute node from a NamedNodeMap
	/// </summary>
	Attr::ptr NamedNodeMap::getNamedItem(tstring nodename)
	{
		return m_attrs.find(nodename) != m_attrs.end() ? std::make_shared<Attr>(&m_attrs, nodename) : nullptr;
	}

	/// <summary>
	/// Gets the <see cref="Node"/> with the specified index.
	/// </summary>
	/// <value>
	/// The <see cref="Node"/>.
	/// </value>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	Attr::ptr NamedNodeMap::operator[](int index)
	{
		return index < m_attrs.size() ? std::make_shared<Attr>(&m_attrs, std::next(m_attrs.begin(), index)->first) : nullptr;
	}

	/// <summary>
	/// Returns the attribute node at a specified index in a NamedNodeMap
	/// </summary>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	Attr::ptr NamedNodeMap::item(int index)
	{
		return index < m_attrs.size() ? std::make_shared<Attr>(&m_attrs, std::next(m_attrs.begin(), index)->first) : nullptr;
	}

	/// <summary>
	/// Returns the number of attribute nodes in a NamedNodeMap
	/// </summary>
	/// <value>
	/// The length.
	/// </value>
	int NamedNodeMap::length()
	{
		return (int)m_attrs.size();
	}

	/// <summary>
	/// Removes a specified attribute node
	/// </summary>
	/// <param name="nodename">The nodename.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	Attr::ptr NamedNodeMap::removeNamedItem(tstring nodename)
	{
		//string_map::const_iterator attr = m_attrs->find(nodename);
		return nullptr;
	}

	/// <summary>
	/// Sets the specified attribute node (by name)
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	Attr::ptr NamedNodeMap::setNamedItem(Attr::ptr node)
	{
		return nullptr;
	}
}

/// <summary>
/// DOMTokenList
/// </summary>
namespace litehtml
{
	/// <summary>
	/// Returns the number of classes in the list.
	/// </summary>
	/// <value>
	/// The length.
	/// </value>
	int DOMTokenList::length()
	{
		return 0;
	}

	/// <summary>
	/// Returns a collection of an element's child nodes (including text and comment nodes)
	/// </summary>
	/// <param name="classes">The classes.</param>
	void DOMTokenList::add(...)
	{
	}

	/// <summary>
	/// Returns a Boolean value, indicating whether an element has the specified class name.
	/// </summary>
	/// <param name="class">The class.</param>
	/// <returns>
	///   <c>true</c> if [contains] [the specified class]; otherwise, <c>false</c>.
	/// </returns>
	bool DOMTokenList::contains(tstring class_)
	{
		return true;
	}

	/// <summary>
	/// Returns the class name with a specified index number from an element
	/// </summary>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	tstring DOMTokenList::item(int index)
	{
		return nullptr;
	}

	/// <summary>
	/// Removes one or more class names from an element.
	/// </summary>
	/// <param name="classes">The classes.</param>
	void DOMTokenList::remove(...)
	{
	}

	/// <summary>
	/// Toggles between a class name for an element.
	/// </summary>
	/// <param name="class">The class.</param>
	/// <param name="value">if set to <c>true</c> [value].</param>
	void DOMTokenList::toggle(tstring class_, bool value)
	{
	}
}