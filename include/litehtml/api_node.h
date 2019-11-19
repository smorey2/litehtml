#ifndef LH_API_NODE_H
#define LH_API_NODE_H

#include <string>

namespace litehtml
{
	class Document;
	class Attr;
	class NodeList;
	template <typename TNode>
	class NamedNodeMap;

	/// <summary>
	/// Node
	/// </summary>
	class Node
	{
	public:
		/// <summary>
		/// Adds a new child node, to an element, as the last child node
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		Node* appendChild(Node* node);

		/// <summary>
		/// Returns a NamedNodeMap of an element's attributes
		/// </summary>
		/// <value>
		/// The attributes.
		/// </value>
		NamedNodeMap<Attr*>* attributes();

		/// <summary>
		/// Returns the absolute base URI of a node
		/// </summary>
		/// <value>
		/// The base URI.
		/// </value>
		wchar_t* baseURI(); //: Base

		/// <summary>
		/// Returns a collection of an element's child nodes (including text and comment nodes)
		/// </summary>
		NodeList childNodes();

		/// <summary>
		/// Clones an element
		/// </summary>
		/// <param name="deep">if set to <c>true</c> [deep].</param>
		/// <returns></returns>
		Node* cloneNode(bool deep = false);

		/// <summary>
		/// Compares the document position of two elements
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		int compareDocumentPosition(Node node);

		/// <summary>
		/// Returns the first child node of an element
		/// </summary>
		/// <value>
		/// The first child.
		/// </value>
		Node* firstChild();

		///// <summary>
		///// Returns a DOM object which implements the specialized APIs of the specified feature and version
		///// </summary>
		///// <param name="feature">The feature.</param>
		///// <param name="version">The version.</param>
		///// <returns></returns>
		//void* getFeature(wchar_t* feature, wchar_t* version); //: Base

		/// <summary>
		/// Returns the object associated to a key on a this node. The object must first have been set to this node by calling setUserData with the same key
		/// </summary>
		/// <param name="key">The key.</param>
		/// <returns></returns>
		wchar_t* getUserData(wchar_t* key); //: Base

		/// <summary>
		/// Returns true if an element has the specified attribute, otherwise false
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <returns>
		///   <c>true</c> if the specified attributename has attribute; otherwise, <c>false</c>.
		/// </returns>
		bool hasAttribute(wchar_t* attributename);  //: Node

		/// <summary>
		/// Returns true if an element has any attributes, otherwise false
		/// </summary>
		/// <returns>
		///   <c>true</c> if this instance has attributes; otherwise, <c>false</c>.
		/// </returns>
		bool hasAttributes();

		/// <summary>
		/// Returns true if an element has any child nodes, otherwise false
		/// </summary>
		/// <returns>
		///   <c>true</c> if [has child nodes]; otherwise, <c>false</c>.
		/// </returns>
		bool hasChildNodes();

		/// <summary>
		/// Returns true if a specified namespaceURI is the default, otherwise false
		/// </summary>
		/// <param name="namespaceURI">The namespace URI.</param>
		/// <returns>
		///   <c>true</c> if [is default namespace] [the specified namespace URI]; otherwise, <c>false</c>.
		/// </returns>
		bool isDefaultNamespace(wchar_t* namespaceURI);

		/// <summary>
		/// Checks if two elements are equal
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns>
		///   <c>true</c> if [is equal node] [the specified node]; otherwise, <c>false</c>.
		/// </returns>
		bool isEqualNode(Node* node);

		/// <summary>
		/// Checks if two elements are the same node
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns>
		///   <c>true</c> if [is same node] [the specified node]; otherwise, <c>false</c>.
		/// </returns>
		bool isSameNode(Node* node);

		/// <summary>
		/// Returns the last child node of an element
		/// </summary>
		/// <value>
		/// The last child.
		/// </value>
		Node* lastChild();

		/// <summary>
		/// Returns the namespace URI associated with a given prefix
		/// </summary>
		/// <param name="prefix">The prefix.</param>
		/// <returns></returns>
		wchar_t* lookupNamespaceURI(wchar_t* prefix); //: Base

		/// <summary>
		/// Returns the prefix associated with a given namespace URI
		/// </summary>
		/// <param name="namespaceURI">The namespace URI.</param>
		/// <returns></returns>
		wchar_t* lookupPrefix(wchar_t* namespaceURI); //: Base

		/// <summary>
		/// Returns the next node at the same node tree level
		/// </summary>
		/// <value>
		/// The next sibling.
		/// </value>
		Node* nextSibling();

		/// <summary>
		/// Returns the name of a node
		/// </summary>
		/// <value>
		/// The name of the node.
		/// </value>
		wchar_t* nodeName();

		/// <summary>
		/// Returns the node type of a node
		/// </summary>
		/// <value>
		/// The type of the node.
		/// </value>
		int nodeType();

		/// <summary>
		/// Sets or returns the value of a node
		/// </summary>
		/// <value>
		/// The node value.
		/// </value>
		wchar_t* nodeValue();
		void nodeValue(wchar_t* value);

		/// <summary>
		/// Joins adjacent text nodes and removes empty text nodes in an element
		/// </summary>
		void normalize();

		/// <summary>
		/// Returns the root element (document object) for an element
		/// </summary>
		/// <value>
		/// The owner document.
		/// </value>
		Document* ownerDocument();

		/// <summary>
		/// Returns the parent node of an element
		/// </summary>
		/// <value>
		/// The parent node.
		/// </value>
		Node* parentNode();

		/// <summary>
		/// Sets or returns the namespace prefix of a node
		/// </summary>
		/// <value>
		/// The prefix.
		/// </value>
		wchar_t* prefix(); //: Base
		void prefix(wchar_t* value);

		/// <summary>
		/// Returns the previous node at the same node tree level
		/// </summary>
		/// <value>
		/// The previous sibling.
		/// </value>
		Node* previousSibling();

		/// <summary>
		/// Removes a child node from an element
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		Node* removeChild(Node* node);

		/// <summary>
		/// Replaces a child node in an element
		/// </summary>
		/// <param name="newnode">The newnode.</param>
		/// <param name="oldnode">The oldnode.</param>
		/// <returns></returns>
		Node* replaceChild(Node* newnode, Node* oldnode);

		/// <summary>
		/// Sets the user data.
		/// </summary>
		/// <param name="key">The key.</param>
		/// <param name="data">The data.</param>
		/// <param name="handler">The handler.</param>
		void setUserData(wchar_t* key, wchar_t* data, wchar_t* handler); //: Base

		/// <summary>
		/// Sets or returns the textual content of a node and its descendants
		/// </summary>
		/// <value>
		/// The content of the text.
		/// </value>
		wchar_t* textContent();
		void textContent(wchar_t* value);
	};

	/// <summary>
	/// Attr
	/// https://www.w3schools.com/jsref/dom_obj_attributes.asp
	/// </summary>
	class Attr
	{
	public:
		/// <summary>
		/// Returns the name of an attribute
		/// </summary>
		/// <value>
		/// The name.
		/// </value>
		wchar_t* name();

		/// <summary>
		/// Sets or returns the value of the attribute
		/// </summary>
		/// <value>
		/// The value.
		/// </value>
		wchar_t* value();
		void value(wchar_t* value);

		/// <summary>
		/// Returns true if the attribute has been specified, otherwise it returns false
		/// </summary>
		/// <value>
		///   <c>true</c> if specified; otherwise, <c>false</c>.
		/// </value>
		bool specified();
	};

	/// <summary>
	/// NodeList
	/// </summary>
	class NodeList
	{
		std::vector<Node*> list;
	public:
		// Overloading [] operator to access elements in array style 
		Node &operator[] (int index);
	};

	/// <summary>
	/// NamedNodeMap
	/// </summary>
	template <typename TNode>
	class NamedNodeMap
	{
	public:
		/// <summary>
		/// Returns a specified attribute node from a NamedNodeMap
		/// </summary>
		TNode getNamedItem(wchar_t* nodename);

		/// <summary>
		/// Gets the <see cref="Node"/> with the specified index.
		/// </summary>
		/// <value>
		/// The <see cref="Node"/>.
		/// </value>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		// Overloading [] operator to access elements in array style 
		TNode operator[] (int index);

		/// <summary>
		/// Returns the attribute node at a specified index in a NamedNodeMap
		/// </summary>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		TNode item(int index);

		/// <summary>
		/// Returns the number of attribute nodes in a NamedNodeMap
		/// </summary>
		/// <value>
		/// The length.
		/// </value>
		int length();

		/// <summary>
		/// Removes a specified attribute node
		/// </summary>
		/// <param name="nodename">The nodename.</param>
		/// <returns></returns>
		/// <exception cref="NotImplementedException"></exception>
		TNode removeNamedItem(wchar_t* nodename);

		/// <summary>
		/// Sets the specified attribute node (by name)
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		/// <exception cref="NotImplementedException"></exception>
		TNode setNamedItem(TNode node);
	};

	/// <summary>
	/// DOMTokenList
	/// </summary>
	class DOMTokenList
	{
	public:
		/// <summary>
		/// Returns the number of classes in the list.
		/// </summary>
		/// <value>
		/// The length.
		/// </value>
		int length();

		/// <summary>
		/// Returns a collection of an element's child nodes (including text and comment nodes)
		/// </summary>
		/// <param name="classes">The classes.</param>
		void add(...);

		/// <summary>
		/// Returns a Boolean value, indicating whether an element has the specified class name.
		/// </summary>
		/// <param name="class">The class.</param>
		/// <returns>
		///   <c>true</c> if [contains] [the specified class]; otherwise, <c>false</c>.
		/// </returns>
		bool contains(wchar_t* class_);

		/// <summary>
		/// Returns the class name with a specified index number from an element
		/// </summary>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		wchar_t* item(int index);

		/// <summary>
		/// Removes one or more class names from an element.
		/// </summary>
		/// <param name="classes">The classes.</param>
		void remove(...);

		/// <summary>
		/// Toggles between a class name for an element.
		/// </summary>
		/// <param name="class">The class.</param>
		/// <param name="value">if set to <c>true</c> [value].</param>
		void toggle(wchar_t* class_, bool value);
	};
}

#endif  // LH_API_NODE_H
