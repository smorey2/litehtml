#include "html.h"
#include "api_node.h"

/// <summary>
/// NodeList
/// </summary>
namespace litehtml
{
	Node* NodeList::operator[](int index)
	{
		return nullptr;
	}
}

/// <summary>
/// NamedNodeMap
/// </summary>
namespace litehtml
{
	NamedNodeMap* NamedNodeMap::Empty;
	NamedNodeMap::NamedNodeMap(string_map* attrs) : m_attrs(attrs) { }

	/// <summary>
	/// Returns a specified attribute node from a NamedNodeMap
	/// </summary>
	Attr* NamedNodeMap::getNamedItem(tstring nodename)
	{
		string_map::const_iterator attr = m_attrs->find(nodename);
		//if (attr != m_attrs->end())
		//{
		//	return new attr(attr->second.c_str());
		//}
		return nullptr;
	}

	/// <summary>
	/// Gets the <see cref="Node"/> with the specified index.
	/// </summary>
	/// <value>
	/// The <see cref="Node"/>.
	/// </value>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	// Overloading [] operator to access elements in array style 
	Attr* NamedNodeMap::operator[](int index)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the attribute node at a specified index in a NamedNodeMap
	/// </summary>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	Attr* NamedNodeMap::item(int index)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the number of attribute nodes in a NamedNodeMap
	/// </summary>
	/// <value>
	/// The length.
	/// </value>
	int NamedNodeMap::length()
	{
		return 0;
	}

	/// <summary>
	/// Removes a specified attribute node
	/// </summary>
	/// <param name="nodename">The nodename.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	Attr* NamedNodeMap::removeNamedItem(tstring nodename)
	{
		return nullptr;
	}

	/// <summary>
	/// Sets the specified attribute node (by name)
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	Attr* NamedNodeMap::setNamedItem(Attr* node)
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