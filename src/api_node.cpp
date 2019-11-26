#include "html.h"
#include "api_node.h"

namespace litehtml
{
	Node* NodeList::operator[](int index)
	{
		return nullptr;
	}
}

namespace litehtml
{
	/// <summary>
	/// Returns a specified attribute node from a NamedNodeMap
	/// </summary>
	template <class TNode>
	TNode* NamedNodeMap<TNode>::getNamedItem(tstring nodename)
	{
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
	template <class TNode>
	TNode* NamedNodeMap<TNode>::operator[](int index)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the attribute node at a specified index in a NamedNodeMap
	/// </summary>
	/// <param name="index">The index.</param>
	/// <returns></returns>
	template <class TNode>
	TNode* NamedNodeMap<TNode>::item(int index)
	{
		return nullptr;
	}

	/// <summary>
	/// Returns the number of attribute nodes in a NamedNodeMap
	/// </summary>
	/// <value>
	/// The length.
	/// </value>
	template <class TNode>
	int NamedNodeMap<TNode>::length()
	{
		return 0;
	}

	/// <summary>
	/// Removes a specified attribute node
	/// </summary>
	/// <param name="nodename">The nodename.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	template <class TNode>
	TNode* NamedNodeMap<TNode>::removeNamedItem(tstring nodename)
	{
		return nullptr;
	}

	/// <summary>
	/// Sets the specified attribute node (by name)
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	/// <exception cref="NotImplementedException"></exception>
	template <class TNode>
	TNode* NamedNodeMap<TNode>::setNamedItem(TNode* node)
	{
		return nullptr;
	}

	template class NamedNodeMap<Attr>;
}

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