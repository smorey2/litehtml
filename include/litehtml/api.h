#ifndef LH_API_H
#define LH_API_H

#include "events.h"
#include "node.h"

namespace litehtml
{
	class HTMLCollection;
	class Style;
	class Storage;

	/// <summary>
	/// Rect
	/// </summary>
	class Rect
	{
	public:
		int left();
		int top();
		int right();
		int bottom();
		int x();
		int y();
		int width();
		int height();
	};

	/// <summary>
	/// DocumentFragment
	/// </summary>
	class DocumentFragment
	{
	public:
	};

	/// <summary>
	/// DocumentType
	/// </summary>
	class DocumentType
	{
	public:
	};

	/// <summary>
	/// DocumentImplementation
	/// </summary>
	class DocumentImplementation
	{
	public:
	};

	/// <summary>
	/// Attr
	/// https://www.w3schools.com/jsref/dom_obj_attributes.asp
	/// </summary>
	class Attr
	{
	public:
		/// <summary>
		/// Returns true if the attribute is of type Id, otherwise it returns false
		/// </summary>
		/// <value>
		///   <c>true</c> if this instance is identifier; otherwise, <c>false</c>.
		/// </value>
		bool isId();

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
	/// Console
	/// https://www.w3schools.com/jsref/obj_console.asp
	/// </summary>
	class Console
	{
	public:
		/// <summary>
		/// Writes an error message to the console if the assertion is false
		/// </summary>
		/// <param name="expression">The expression.</param>
		/// <param name="message">The message.</param>
		void assert(void* expression, void* message);

		/// <summary>
		/// Clears the console
		/// </summary>
		void clear();

		/// <summary>
		/// Logs the number of times that this particular call to count() has been called
		/// </summary>
		/// <param name="label">The label.</param>
		void count(wchar_t* label = nullptr);

		/// <summary>
		/// Outputs an error message to the console
		/// </summary>
		/// <param name="message">The message.</param>
		void error(void* message);

		/// <summary>
		/// Creates a new inline group in the console. This indents following console messages by an additional level, until console.groupEnd() is called
		/// </summary>
		/// <param name="label">The label.</param>
		void group(wchar_t* label = nullptr);

		/// <summary>
		/// Creates a new inline group in the console. However, the new group is created collapsed. The user will need to use the disclosure button to expand it
		/// </summary>
		/// <param name="label">The label.</param>
		void groupCollapsed(wchar_t* label = nullptr);

		/// <summary>
		/// Exits the current inline group in the console
		/// </summary>
		void groupEnd();

		/// <summary>
		/// Outputs an informational message to the console
		/// </summary>
		/// <param name="message">The message.</param>
		void info(void* message);

		/// <summary>
		/// Outputs a message to the console
		/// </summary>
		/// <param name="message">The message.</param>
		void log(void* message);

		/// <summary>
		/// Displays tabular data as a table
		/// </summary>
		/// <param name="tabledata">The tabledata.</param>
		/// <param name="tablecolumns">The tablecolumns.</param>
		void table(void* tabledata, void** tablecolumns = nullptr);

		/// <summary>
		/// Starts a timer (can track how long an operation takes)
		/// </summary>
		/// <param name="label">The label.</param>
		void time(wchar_t* label = nullptr);

		/// <summary>
		/// Stops a timer that was previously started by console.time()
		/// </summary>
		/// <param name="label">The label.</param>
		void timeEnd(wchar_t* label = nullptr);

		/// <summary>
		/// Outputs a stack trace to the console
		/// </summary>
		/// <param name="label">The label.</param>
		void trace(wchar_t* label = nullptr);

		/// <summary>
		/// Outputs a warning message to the console
		/// </summary>
		/// <param name="message">The message.</param>
		void warn(void* message);
	};

	/// <summary>
	/// Document
	/// https://www.w3schools.com/jsref/dom_obj_document.asp
	/// </summary>
	class Document
	{
	public:
		/// <summary>
		/// Returns the currently focused element in the document
		/// </summary>
		/// <value>
		/// The active element.
		/// </value>
		Element* activeElement();

		/// <summary>
		/// Attaches an event handler to the document
		/// </summary>
		/// <param name="event">The event.</param>
		/// <param name="function">The function.</param>
		/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
		void addEventListener(wchar_t* event, wchar_t* function, bool useCapture = false);

		/// <summary>
		/// Adopts a node from another document
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		Node* adoptNode(Node* node);

		/// <summary>
		/// Returns a collection of all <a> elements in the document that have a name attribute
		/// </summary>
		/// <value>
		/// The anchors.
		/// </value>
		HTMLCollection* anchors();

		/// <summary>
		/// Returns a collection of all <applet> elements in the document
		/// </summary>
		/// <value>
		/// The applets.
		/// </value>
		HTMLCollection* applets();

		/// <summary>
		/// Returns the absolute base URI of a document
		/// </summary>
		/// <value>
		/// The base URI.
		/// </value>
		wchar_t* baseURI();

		/// <summary>
		/// Sets or returns the document's body (the <body> element)
		/// </summary>
		/// <value>
		/// The body.
		/// </value>
		Element* body();
		void body(Element* value);

		/// <summary>
		/// Closes the output stream previously opened with document.open()
		/// </summary>
		void close();

		/// <summary>
		/// Returns all name/value pairs of cookies in the document
		/// </summary>
		/// <value>
		/// The cookie.
		/// </value>
		wchar_t* cookie();
		void cookie(wchar_t* value);

		/// <summary>
		/// Returns the character encoding for the document
		/// </summary>
		/// <value>
		/// The character set.
		/// </value>
		wchar_t* characterSet();

		/// <summary>
		/// Creates an attribute node
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <returns></returns>
		Node* createAttribute(wchar_t* attributename);

		/// <summary>
		/// Creates a Comment node with the specified text
		/// </summary>
		/// <param name="text">The text.</param>
		/// <returns></returns>
		Node* createComment(wchar_t* text); //: IComment

		/// <summary>
		/// Creates an empty DocumentFragment node
		/// </summary>
		/// <returns></returns>
		DocumentFragment* createDocumentFragment();

		/// <summary>
		/// Creates an Element node
		/// </summary>
		/// <param name="nodename">The nodename.</param>
		/// <returns></returns>
		Element* createElement(wchar_t* nodename);

		/// <summary>
		/// Creates a new event
		/// </summary>
		/// <param name="type">The type.</param>
		/// <returns></returns>
		Event* createEvent(wchar_t* type);

		/// <summary>
		/// Creates a Text node
		/// </summary>
		/// <param name="text">The text.</param>
		/// <returns></returns>
		Node* createTextNode(wchar_t* text); //: IText

		/// <summary>
		/// Returns the window object associated with a document, or nullptr if none is available.
		/// </summary>
		/// <value>
		/// The default view.
		/// </value>
		Window* defaultView();

		/// <summary>
		/// Controls whether the entire document should be editable or not.
		/// </summary>
		/// <value>
		/// The design mode.
		/// </value>
		wchar_t* designMode(); //= "off"
		void designMode(wchar_t* value);

		/// <summary>
		/// Returns the Document Type Declaration associated with the document
		/// </summary>
		/// <value>
		/// The doctype.
		/// </value>
		DocumentType* doctype();

		/// <summary>
		/// Returns the Document Element of the document (the <html> element)
		/// </summary>
		/// <value>
		/// The document element.
		/// </value>
		Element* documentElement();

		/// <summary>
		/// Sets or returns the location of the document
		/// </summary>
		/// <value>
		/// The document URI.
		/// </value>
		wchar_t* documentURI();
		void documentURI(wchar_t* value);

		/// <summary>
		/// Returns the domain name of the server that loaded the document
		/// </summary>
		/// <value>
		/// The domain.
		/// </value>
		wchar_t* domain();

		/// <summary>
		/// Returns a collection of all <embed> elements the document
		/// </summary>
		/// <value>
		/// The embeds.
		/// </value>
		HTMLCollection* embeds();

		/// <summary>
		/// Invokes the specified clipboard operation on the element currently having focus.
		/// </summary>
		/// <param name="command">The command.</param>
		/// <param name="showUI">if set to <c>true</c> [show UI].</param>
		/// <param name="value">The value.</param>
		/// <returns></returns>
		bool execCommand(wchar_t* command, bool showUI, void* value = nullptr);

		/// <summary>
		/// Returns a collection of all <form> elements in the document
		/// </summary>
		/// <value>
		/// The forms.
		/// </value>
		HTMLCollection* forms();

		/// <summary>
		/// Returns the current element that is displayed in fullscreen mode
		/// </summary>
		/// <value>
		/// The fullscreen element.
		/// </value>
		Element* fullscreenElement();

		/// <summary>
		/// Returns a Boolean value indicating whether the document can be viewed in fullscreen mode
		/// </summary>
		/// <returns></returns>
		bool fullscreenEnabled();

		/// <summary>
		/// Returns the element that has the ID attribute with the specified value
		/// </summary>
		/// <param name="elementID">The element identifier.</param>
		/// <returns></returns>
		Element* getElementById(wchar_t* elementID);

		/// <summary>
		/// Returns a NodeList containing all elements with the specified class name
		/// </summary>
		/// <param name="classname">The classname.</param>
		/// <returns></returns>
		NodeList* getElementsByClassName(wchar_t* classname);

		/// <summary>
		/// Returns a NodeList containing all elements with a specified name
		/// </summary>
		/// <param name="name">The name.</param>
		/// <returns></returns>
		NodeList* getElementsByName(wchar_t* name);

		/// <summary>
		/// Returns a NodeList containing all elements with the specified tag name
		/// </summary>
		/// <param name="tagname">The tagname.</param>
		/// <returns></returns>
		NodeList* getElementsByTagName(wchar_t* tagname);

		/// <summary>
		/// Returns a Boolean value indicating whether the document has focus
		/// </summary>
		/// <returns>
		///   <c>true</c> if this instance has focus; otherwise, <c>false</c>.
		/// </returns>
		bool hasFocus();

		/// <summary>
		/// Returns the <head> element of the document
		/// </summary>
		/// <value>
		/// The head.
		/// </value>
		Element* head();

		/// <summary>
		///Returns a collection of all <img> elements in the document
		/// </summary>
		/// <value>
		/// The images.
		/// </value>
		HTMLCollection* images();

		/// <summary>
		/// Returns the DOMImplementation object that handles this document
		/// </summary>
		/// <value>
		/// The implementation.
		/// </value>
		DocumentImplementation* implementation();

		/// <summary>
		/// Imports a node from another document
		/// </summary>
		/// <param name="node">The node.</param>
		/// <param name="deep">if set to <c>true</c> [deep].</param>
		/// <returns></returns>
		Node* importNode(Node* node, bool deep);

		/// <summary>
		/// Returns the encoding, character set, used for the document
		/// </summary>
		/// <value>
		/// The input encoding.
		/// </value>
		wchar_t* inputEncoding();

		/// <summary>
		/// Returns the date and time the document was last modified
		/// </summary>
		/// <value>
		/// The last modified.
		/// </value>
		int64_t lastModified(); //: string

		/// <summary>
		/// Returns a collection of all <a> and <area> elements in the document that have a href attribute
		/// </summary>
		/// <value>
		/// The links.
		/// </value>
		HTMLCollection* links();

		/// <summary>
		/// Removes empty Text nodes, and joins adjacent nodes
		/// </summary>
		void normalize();

		/// <summary>
		/// Opens an HTML output stream to collect output from document.write()
		/// </summary>
		/// <param name="MIMEtype">The mim etype.</param>
		/// <param name="replace">The replace.</param>
		void open(wchar_t* MIMEtype = nullptr, wchar_t* replace = nullptr);

		/// <summary>
		/// Returns the first element that matches a specified CSS selector(s) in the document
		/// </summary>
		/// <param name="selectors">The selectors.</param>
		/// <returns></returns>
		Element* querySelector(wchar_t* selectors);

		/// <summary>
		/// Returns a static NodeList containing all elements that matches a specified CSS selector(s) in the document
		/// </summary>
		/// <param name="selectors">The selectors.</param>
		/// <returns></returns>
		NodeList* querySelectorAll(wchar_t* selectors);

		/// <summary>
		/// Returns the (loading) status of the document
		/// </summary>
		/// <value>
		/// The state of the ready.
		/// </value>
		wchar_t* readyState();

		/// <summary>
		/// Returns the URL of the document that loaded the current document
		/// </summary>
		/// <value>
		/// The referrer.
		/// </value>
		wchar_t* referrer();

		/// <summary>
		/// Removes an event handler from the document (that has been attached with the addEventListener() method)
		/// </summary>
		/// <param name="event">The event.</param>
		/// <param name="function">The function.</param>
		/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
		void removeEventListener(wchar_t* event, wchar_t* function, bool useCapture = false);

		/// <summary>
		/// Renames the specified node
		/// </summary>
		/// <param name="node">The node.</param>
		/// <param name="namespaceURI">The namespace URI.</param>
		/// <param name="nodename">The nodename.</param>
		/// <returns></returns>
		Node* renameNode(Node* node, wchar_t* namespaceURI, wchar_t* nodename);

		/// <summary>
		/// Returns a collection of <script> elements in the document
		/// </summary>
		/// <value>
		/// The scripts.
		/// </value>
		HTMLCollection* scripts();

		/// <summary>
		/// Sets or returns whether error-checking is enforced or not
		/// </summary>
		/// <value>
		///   <c>true</c> if [strict error checking]; otherwise, <c>false</c>.
		/// </value>
		bool strictErrorChecking();
		void strictErrorChecking(bool value);

		/// <summary>
		/// Sets or returns the title of the document
		/// </summary>
		/// <value>
		/// The title.
		/// </value>
		wchar_t* title();
		void title(wchar_t* value);

		/// <summary>
		/// Returns the full URL of the HTML document
		/// </summary>
		/// <value>
		/// The URL.
		/// </value>
		wchar_t* URL();

		/// <summary>
		/// Writes HTML expressions or JavaScript code to a document
		/// </summary>
		/// <param name="args">The arguments.</param>
		void write(void** args);

		/// <summary>
		/// Same as write(), but adds a newline character after each statement
		/// </summary>
		/// <param name="args">The arguments.</param>
		void writeln(void** args);
	};

	/// <summary>
	/// Element
	/// https://www.w3schools.com/jsref/dom_obj_all.asp
	/// </summary>
	class Element
	{
	public:
		/// <summary>
		/// Gets or sets the access key.
		/// </summary>
		/// <value>
		/// The access key.
		/// </value>
		char accessKey();
		void accessKey(char value);

		/// <summary>
		/// Adds the event listener.
		/// </summary>
		/// <param name="event">The event.</param>
		/// <param name="function">The function.</param>
		/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
		void addEventListener(wchar_t* event, wchar_t* function, bool useCapture = false);

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
		NamedNodeMap* attributes();

		/// <summary>
		/// Removes focus from an element
		/// </summary>
		void blur();

		/// <summary>
		/// Returns the number of child elements an element has
		/// </summary>
		/// <value>
		/// The child element count.
		/// </value>
		int childElementCount();

		/// <summary>
		/// Returns a collection of an element's child nodes (including text and comment nodes)
		/// </summary>
		NodeList* childNodes();

		/// <summary>
		/// Returns a collection of an element's child element (excluding text and comment nodes)
		/// </summary>
		HTMLCollection* children();

		/// <summary>
		/// Returns the class name(s) of an element
		/// </summary>
		/// <value>
		/// The class list.
		/// </value>
		DOMTokenList* classList();

		/// <summary>
		/// Sets or returns the value of the class attribute of an element
		/// </summary>
		/// <value>
		/// The name of the class.
		/// </value>
		wchar_t* className();
		void className(wchar_t* value);

		/// <summary>
		/// Simulates a mouse-click on an element
		/// </summary>
		void click();

		/// <summary>
		/// Returns the height of an element, including padding
		/// </summary>
		/// <value>
		/// The height of the client.
		/// </value>
		int clientHeight();

		/// <summary>
		/// Returns the width of the left border of an element
		/// </summary>
		/// <value>
		/// The client left.
		/// </value>
		int clientLeft();

		/// <summary>
		/// Returns the width of the top border of an element
		/// </summary>
		/// <value>
		/// The client top.
		/// </value>
		int clientTop();

		/// <summary>
		/// Returns the width of an element, including padding
		/// </summary>
		/// <value>
		/// The width of the client.
		/// </value>
		int clientWidth();

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
		int compareDocumentPosition(Node* node);

		/// <summary>
		/// Returns true if a node is a descendant of a node, otherwise false
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns>
		///   <c>true</c> if [contains] [the specified node]; otherwise, <c>false</c>.
		/// </returns>
		bool contains(Node* node);

		/// <summary>
		/// Sets or returns whether the content of an element is editable or not
		/// </summary>
		/// <value>
		/// The content editable.
		/// </value>
		wchar_t* contentEditable();
		void contentEditable(wchar_t* value);

		/// <summary>
		/// Sets or returns the value of the dir attribute of an element
		/// </summary>
		/// <value>
		/// The dir.
		/// </value>
		wchar_t* dir();
		void dir(wchar_t* value);

		/// <summary>
		/// Cancels an element in fullscreen mode
		/// </summary>
		void exitFullscreen();

		/// <summary>
		/// Returns the first child node of an element
		/// </summary>
		/// <value>
		/// The first child.
		/// </value>
		Node* firstChild();

		/// <summary>
		/// Returns the first child element of an element
		/// </summary>
		/// <value>
		/// The first element child.
		/// </value>
		Node* firstElementChild();

		/// <summary>
		/// Gives focus to an element
		/// </summary>
		void focus();

		/// <summary>
		/// Returns the specified attribute value of an element node
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <returns></returns>
		wchar_t* getAttribute(wchar_t* attributename);

		/// <summary>
		/// Returns the specified attribute node
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <returns></returns>
		Attr* getAttributeNode(wchar_t* attributename);

		/// <summary>
		/// Returns the size of an element and its position relative to the viewport
		/// </summary>
		/// <returns></returns>
		Rect* getBoundingClientRect();

		/// <summary>
		/// Returns a collection of all child elements with the specified class name
		/// </summary>
		/// <param name="classname">The classname.</param>
		/// <returns></returns>
		NodeList* getElementsByClassName(wchar_t* classname);

		/// <summary>
		/// Returns a collection of all child elements with the specified tag name
		/// </summary>
		/// <param name="tagname">The tagname.</param>
		/// <returns></returns>
		NodeList* getElementsByTagName(wchar_t* tagname);

		/// <summary>
		/// Returns true if an element has the specified attribute, otherwise false
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <returns>
		///   <c>true</c> if the specified attributename has attribute; otherwise, <c>false</c>.
		/// </returns>
		bool hasAttribute(wchar_t* attributename);

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
		/// Sets or returns the value of the id attribute of an element
		/// </summary>
		/// <value>
		/// The identifier.
		/// </value>
		wchar_t* id();
		void id(wchar_t* value);

		/// <summary>
		/// Sets or returns the content of an element
		/// </summary>
		/// <value>
		/// The inner HTML.
		/// </value>
		wchar_t* innerHTML();
		void innerHTML(wchar_t* value);

		/// <summary>
		/// Sets or returns the text content of a node and its descendants
		/// </summary>
		/// <value>
		/// The inner text.
		/// </value>
		wchar_t* innerText();
		void innerText(wchar_t* value);

		/// <summary>
		/// Inserts a HTML element at the specified position relative to the current element
		/// </summary>
		/// <param name="position">The position.</param>
		/// <param name="element">The element.</param>
		void insertAdjacentElement(wchar_t* position, Element* element);

		/// <summary>
		/// Inserts a HTML formatted text at the specified position relative to the current element
		/// </summary>
		/// <param name="position">The position.</param>
		/// <param name="text">The text.</param>
		void insertAdjacentHTML(wchar_t* position, wchar_t* text);

		/// <summary>
		/// Inserts text into the specified position relative to the current element
		/// </summary>
		/// <param name="position">The position.</param>
		/// <param name="text">The text.</param>
		void insertAdjacentText(wchar_t* position, wchar_t* text);

		/// <summary>
		/// Inserts a new child node before a specified, existing, child node
		/// </summary>
		/// <param name="newnode">The newnode.</param>
		/// <param name="existingnode">The existingnode.</param>
		Node* insertBefore(Node* newnode, Node* existingnode);

		/// <summary>
		/// Returns true if the content of an element is editable, otherwise false
		/// </summary>
		/// <value>
		///   <c>true</c> if this instance is content editable; otherwise, <c>false</c>.
		/// </value>
		bool isContentEditable();

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
		/// Sets or returns the value of the lang attribute of an element
		/// </summary>
		/// <value>
		/// The language.
		/// </value>
		wchar_t* lang();
		void lang(wchar_t* value);

		/// <summary>
		/// Returns the last child node of an element
		/// </summary>
		/// <value>
		/// The last child.
		/// </value>
		Node* lastChild();

		/// <summary>
		/// Returns the last child element of an element
		/// </summary>
		/// <value>
		/// The last element child.
		/// </value>
		Node* lastElementChild();

		/// <summary>
		/// Returns the namespace URI of an element
		/// </summary>
		/// <value>
		/// The namespace URI.
		/// </value>
		wchar_t* namespaceURI();

		/// <summary>
		/// Returns the next node at the same node tree level
		/// </summary>
		/// <value>
		/// The next sibling.
		/// </value>
		Node* nextSibling();

		/// <summary>
		/// Returns the next element at the same node tree level
		/// </summary>
		/// <value>
		/// The next element sibling.
		/// </value>
		Node* nextElementSibling();

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
		/// Returns the height of an element, including padding, border and scrollbar
		/// </summary>
		/// <value>
		/// The height of the offset.
		/// </value>
		int offsetHeight();

		/// <summary>
		/// Returns the width of an element, including padding, border and scrollbar
		/// </summary>
		/// <value>
		/// The width of the offset.
		/// </value>
		int offsetWidth();

		/// <summary>
		/// Returns the horizontal offset position of an element
		/// </summary>
		/// <value>
		/// The offset left.
		/// </value>
		int offsetLeft();

		/// <summary>
		/// Returns the offset container of an element
		/// </summary>
		/// <value>
		/// The offset parent.
		/// </value>
		Node* offsetParent();

		/// <summary>
		/// Returns the vertical offset position of an element
		/// </summary>
		/// <value>
		/// The offset top.
		/// </value>
		int offsetTop();

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
		/// Returns the parent element node of an element
		/// </summary>
		/// <value>
		/// The parent element.
		/// </value>
		Element* parentElement();

		/// <summary>
		/// Returns the previous node at the same node tree level
		/// </summary>
		/// <value>
		/// The previous sibling.
		/// </value>
		Node* previousSibling();

		/// <summary>
		/// Returns the previous element at the same node tree level
		/// </summary>
		/// <value>
		/// The previous element sibling.
		/// </value>
		Node* previousElementSibling();

		/// <summary>
		/// Returns the first child element that matches a specified CSS selector(s) of an element
		/// </summary>
		/// <param name="selectors">The selectors.</param>
		/// <returns></returns>
		Element* querySelector(wchar_t* selectors);

		/// <summary>
		/// Returns all child elements that matches a specified CSS selector(s) of an element
		/// </summary>
		/// <param name="selectors">The selectors.</param>
		/// <returns></returns>
		NodeList* querySelectorAll(wchar_t* selectors);

		/// <summary>
		/// Removes a specified attribute from an element
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		void removeAttribute(wchar_t* attributename);

		/// <summary>
		/// Removes a specified attribute node, and returns the removed node
		/// </summary>
		/// <param name="attributenode">The attributenode.</param>
		/// <returns></returns>
		Attr* removeAttributeNode(Attr* attributenode);

		/// <summary>
		/// Removes a child node from an element
		/// </summary>
		/// <param name="node">The node.</param>
		/// <returns></returns>
		Node* removeChild(Node* node);

		/// <summary>
		/// Removes an event handler that has been attached with the addEventListener() method
		/// </summary>
		/// <param name="event">The event.</param>
		/// <param name="function">The function.</param>
		/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
		void removeEventListener(wchar_t* event, wchar_t* function, bool useCapture = false);

		/// <summary>
		/// Replaces a child node in an element
		/// </summary>
		/// <param name="newnode">The newnode.</param>
		/// <param name="oldnode">The oldnode.</param>
		/// <returns></returns>
		Node* replaceChild(Node* newnode, Node* oldnode);

		/// <summary>
		/// Shows an element in fullscreen mode
		/// </summary>
		void requestFullscreen();

		/// <summary>
		/// Returns the entire height of an element, including padding
		/// </summary>
		/// <value>
		/// The height of the scroll.
		/// </value>
		int scrollHeight();

		/// <summary>
		/// Scrolls the specified element into the visible area of the browser window
		/// </summary>
		/// <param name="alignTo">The align to.</param>
		void scrollIntoView(bool alignTo = false);

		/// <summary>
		/// Sets or returns the number of pixels an element's content is scrolled horizontally
		/// </summary>
		/// <value>
		/// The scroll left.
		/// </value>
		int scrollLeft();

		/// <summary>
		/// Sets or returns the number of pixels an element's content is scrolled vertically
		/// </summary>
		/// <value>
		/// The scroll top.
		/// </value>
		int scrollTop();

		/// <summary>
		/// Returns the entire width of an element, including padding
		/// </summary>
		/// <value>
		/// The width of the scroll.
		/// </value>
		int scrollWidth();

		/// <summary>
		/// Sets or changes the specified attribute, to the specified value
		/// </summary>
		/// <param name="attributename">The attributename.</param>
		/// <param name="attributevalue">The attributevalue.</param>
		void setAttribute(wchar_t* attributename, wchar_t* attributevalue);

		/// <summary>
		/// Sets or changes the specified attribute node
		/// </summary>
		/// <param name="attributenode">The attributenode.</param>
		/// <returns></returns>
		Attr* setAttributeNode(Attr* attributenode);

		/// <summary>
		/// Sets or returns the value of the style attribute of an element
		/// </summary>
		/// <value>
		/// The style.
		/// </value>
		Style* style();

		/// <summary>
		/// Sets or returns the value of the tabindex attribute of an element
		/// </summary>
		/// <value>
		/// The index of the tab.
		/// </value>
		int tabIndex();
		void tabIndex(int value);

		/// <summary>
		/// Returns the tag name of an element
		/// </summary>
		/// <value>
		/// The name of the tag.
		/// </value>
		wchar_t* tagName();

		/// <summary>
		/// Sets or returns the textual content of a node and its descendants
		/// </summary>
		/// <value>
		/// The content of the text.
		/// </value>
		wchar_t* textContent();
		void textContent(wchar_t* value);

		/// <summary>
		/// Sets or returns the value of the title attribute of an element
		/// </summary>
		/// <value>
		/// The title.
		/// </value>
		wchar_t* title();
		void title(wchar_t* value);

		/// <summary>
		/// Converts an element to a string
		/// </summary>
		wchar_t* toString();
	};

	/// <summary>
	/// Geolocation
	/// https://www.w3schools.com/jsref/obj_geolocation.asp
	/// </summary>
	class Geolocation
	{
	public:
		/// <summary>
	   /// Returns the position and altitude of the device on Earth
	   /// </summary>
	   /// <value>The coordinates.</value>
	   /// <exception cref="NotImplementedException"></exception>
		void* coordinates();

		/// <summary>
		/// Returns the position of the concerned device at a given time
		/// </summary>
		/// <value>The position.</value>
		/// <exception cref="System.NotImplementedException"></exception>
		void* position();

		/// <summary>
		/// Returns the reason of an error occurring when using the geolocating device
		/// </summary>
		/// <value>The position error.</value>
		wchar_t* positionError();

		/// <summary>
		/// Describes an object containing option properties to pass as a parameter of Geolocation.getCurrentPosition() and Geolocation.watchPosition()
		/// </summary>
		/// <value>The position options.</value>
		void* positionOptions();

		/// <summary>
		/// Unregister location/error monitoring handlers previously installed using Geolocation.watchPosition()
		/// </summary>
		/// <exception cref="System.NotImplementedException"></exception>
		void clearWatch();

		/// <summary>
		/// Returns the current position of the device
		/// </summary>
		/// <returns>System.Object.</returns>
		/// <exception cref="System.NotImplementedException"></exception>
		void* getCurrentPosition();

		/// <summary>
		/// Returns a watch ID value that then can be used to unregister the handler by passing it to the Geolocation.clearWatch() method
		/// </summary>
		/// <returns>System.Int32.</returns>
		/// <exception cref="System.NotImplementedException"></exception>
		int watchPosition();
	};

	/// <summary>
	/// History
	/// https://www.w3schools.com/jsref/obj_history.asp
	/// </summary>
	class History
	{
	public:
		/// <summary>
		/// Returns the number of URLs in the history list
		/// </summary>
		int length();

		/// <summary>
		/// Loads the previous URL in the history list
		/// </summary>
		void back();

		/// <summary>
		/// Loads the next URL in the history list
		/// </summary>
		void forward();

		/// <summary>
		/// Loads the next URL in the history list
		/// </summary>
		void go(int numberURL);
	};

	/// <summary>
	/// HTMLCollection
	/// https://www.w3schools.com/jsref/dom_obj_htmlcollection.asp
	/// </summary>
	class HTMLCollection
	{
	public:
		/// <summary>
		/// Returns the number of elements in an HTMLCollection
		/// </summary>
		/// <value>
		/// The length.
		/// </value>
		int length();

		/// <summary>
		/// Gets the <see cref="System.Object" /> with the specified index.
		/// </summary>
		/// <value>
		/// The <see cref="System.Object" />.
		/// </value>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		Element* this_(int index);

		/// <summary>
		/// Returns the element at the specified index in an HTMLCollection
		/// </summary>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		Element* item(int index);

		/// <summary>
		/// Returns the element with the specified ID, or name, in an HTMLCollection
		/// </summary>
		/// <param name="name">The name.</param>
		/// <returns></returns>
		Element* namedItem(wchar_t* name);
	};

	/// <summary>
	/// Location
	/// https://www.w3schools.com/jsref/obj_location.asp
	/// </summary>
	class Location
	{
	public:
		/// <summary>
		/// Sets or returns the anchor part (#) of a URL
		/// </summary>
		/// <value>
		/// The hash.
		/// </value>
		wchar_t* hash();
		void hash(wchar_t* value);

		/// <summary>
		/// Sets or returns the hostname and port number of a URL
		/// </summary>
		/// <value>
		/// The host.
		/// </value>
		wchar_t* host();
		void host(wchar_t* value);

		/// <summary>
		/// Sets or returns the hostname of a URL
		/// </summary>
		/// <value>
		/// The hostname.
		/// </value>
		wchar_t* hostname();
		void hostname(wchar_t* value);

		/// <summary>
		/// Sets or returns the entire URL
		/// </summary>
		/// <value>
		/// The href.
		/// </value>
		wchar_t* href();
		void href(wchar_t* value);

		/// <summary>
		/// Returns the protocol, hostname and port number of a URL
		/// </summary>
		/// <value>
		/// The origin.
		/// </value>
		wchar_t* origin();

		/// <summary>
		/// Sets or returns the path name of a URL
		/// </summary>
		/// <value>
		/// The pathname.
		/// </value>
		wchar_t* pathname();
		void pathname(wchar_t* value);

		/// <summary>
		/// Sets or returns the port number of a URL
		/// </summary>
		/// <value>
		/// The port.
		/// </value>
		wchar_t* port();
		void port(wchar_t* value);

		/// <summary>
		/// Sets or returns the protocol of a URL
		/// </summary>
		/// <value>
		/// The protocol.
		/// </value>
		wchar_t* protocol();
		void protocol(wchar_t* value);

		/// <summary>
		/// Sets or returns the querystring part of a URL
		/// </summary>
		/// <value>
		/// The search.
		/// </value>
		wchar_t* search();
		void search(wchar_t* value);

		/// <summary>
		/// Loads a new document
		/// </summary>
		/// <param name="URL">The URL.</param>
		void assign(wchar_t* URL);

		/// <summary>
		/// Reloads the current document
		/// </summary>
		/// <param name="forceGet">if set to <c>true</c> [force get].</param>
		void reload(bool forceGet = false);

		/// <summary>
		/// Replaces the current document with a new one
		/// </summary>
		/// <param name="newURL">The new URL.</param>
		void replace(wchar_t* newURL);
	};

	/// <summary>
	/// MediaQueryList
	/// https://www.w3schools.com/jsref/met_win_matchmedia.asp
	/// </summary>
	class MediaQueryList
	{
	public:
		/// <summary>
		/// Used to check the results of a query. Returns a boolean value: true if the document matches the media query list, otherwise false
		/// </summary>
		/// <value>
		/// The matches.
		/// </value>
		void* matches();

		/// <summary>
		/// A String, representing the serialized media query list
		/// </summary>
		/// <value>
		/// The media.
		/// </value>
		wchar_t* media();

		/// <summary>
		/// Adds a new listener function, which is executed whenever the media query's evaluated result changes
		/// </summary>
		/// <param name="functionref">The functionref.</param>
		/// <exception cref="NotImplementedException"></exception>
		void addListener(void* functionref);

		/// <summary>
		/// Removes a previously added listener function from the media query list. Does nothing if the specified listener is not already in the list
		/// </summary>
		/// <param name="functionref">The functionref.</param>
		/// <exception cref="NotImplementedException"></exception>
		void removeListener(void* functionref);
	};

	/// <summary>
	/// Navigator
	/// https://www.w3schools.com/jsref/obj_navigator.asp
	/// </summary>
	class Navigator
	{
	public:
		/// <summary>
	   /// Returns the code name of the browser
	   /// </summary>
	   /// <value>
	   /// The name of the application code.
	   /// </value>
		wchar_t* appCodeName();

		/// <summary>
		/// Returns the name of the browser
		/// </summary>
		/// <value>
		/// The name of the application.
		/// </value>
		wchar_t* appName();

		/// <summary>
		/// Returns the version information of the browser
		/// </summary>
		/// <value>
		/// The application version.
		/// </value>
		wchar_t* appVersion();

		/// <summary>
		/// Determines whether cookies are enabled in the browser
		/// </summary>
		/// <value>
		///   <c>true</c> if [cookie enabled]; otherwise, <c>false</c>.
		/// </value>
		bool cookieEnabled();

		/// <summary>
		/// Returns a Geolocation object that can be used to locate the user's position
		/// </summary>
		/// <value>
		/// The geolocation.
		/// </value>
		Geolocation* geolocation();

		/// <summary>
		/// Returns the language of the browser
		/// </summary>
		/// <value>
		/// The language.
		/// </value>
		wchar_t* language();

		/// <summary>
		/// Determines whether the browser is online
		/// </summary>
		/// <value>
		///   <c>true</c> if [on line]; otherwise, <c>false</c>.
		/// </value>
		bool onLine();

		/// <summary>
		/// Returns for which platform the browser is compiled
		/// </summary>
		/// <value>
		/// The platform.
		/// </value>
		wchar_t* platform();

		/// <summary>
		/// Returns the engine name of the browser
		/// </summary>
		/// <value>
		/// The product.
		/// </value>
		wchar_t* product();

		/// <summary>
		/// Returns the user-agent header sent by the browser to the server
		/// </summary>
		/// <value>
		/// The user agent.
		/// </value>
		wchar_t* userAgent();

		/// <summary>
		/// Specifies whether or not the browser has Java enabled
		/// </summary>
		/// <returns></returns>
		bool javaEnabled();
	};

	/// <summary>
	/// Screen
	/// https://www.w3schools.com/jsref/obj_screen.asp
	/// </summary>
	class Screen
	{
	public:
		/// <summary>
		/// Returns the height of the screen (excluding the Windows Taskbar)
		/// </summary>
		/// <value>
		/// The height of the avail.
		/// </value>
		int availHeight();

		/// <summary>
		/// Returns the width of the screen (excluding the Windows Taskbar)
		/// </summary>
		/// <value>
		/// The width of the avail.
		/// </value>
		int availWidth();

		/// <summary>
		/// Returns the bit depth of the color palette for displaying images
		/// </summary>
		/// <value>
		/// The color depth.
		/// </value>
		int colorDepth();

		/// <summary>
		/// Returns the total height of the screen
		/// </summary>
		/// <value>
		/// The height.
		/// </value>
		int height();

		/// <summary>
		/// Returns the color resolution (in bits per pixel) of the screen
		/// </summary>
		/// <value>
		/// The pixel depth.
		/// </value>
		int pixelDepth();

		/// <summary>
		/// Returns the total width of the screen
		/// </summary>
		/// <value>
		/// The width.
		/// </value>
		int width();
	};

	/// <summary>
	/// Style
	/// https://www.w3schools.com/jsref/dom_obj_style.asp
	/// </summary>
	class Style
	{
	public:
		/// <summary>
		/// Sets or returns the alignment between the lines inside a flexible container when the items do not use all available space
		/// </summary>
		/// <value>The content of the align.</value>
		wchar_t* alignContent();
		void alignContent(wchar_t* value);

		/// <summary>
		/// Sets or returns the alignment for items inside a flexible container
		/// </summary>
		/// <value>
		/// The align items.
		/// </value>
		wchar_t* alignItems();
		void alignItems(wchar_t* value);

		/// <summary>
		/// Sets or returns the alignment for selected items inside a flexible container
		/// </summary>
		/// <value>
		/// The align self.
		/// </value>
		wchar_t* alignSelf();
		void alignSelf(wchar_t* value);

		/// <summary>
		/// A shorthand property for all the animation properties below, except the animationPlayState property
		/// </summary>
		/// <value>
		/// The animation.
		/// </value>
		wchar_t* animation();
		void animation(wchar_t* value);

		/// <summary>
		/// Sets or returns when the animation will start
		/// </summary>
		/// <value>
		/// The animation delay.
		/// </value>
		wchar_t* animationDelay();
		void animationDelay(wchar_t* value);

		/// <summary>
		/// Sets or returns whether or not the animation should play in reverse on alternate cycles
		/// </summary>
		/// <value>
		/// The animation direction.
		/// </value>
		wchar_t* animationDirection();
		void animationDirection(wchar_t* value);

		/// <summary>
		/// Sets or returns how many seconds or milliseconds an animation takes to complete one cycle
		/// </summary>
		/// <value>
		/// The duration of the animation.
		/// </value>
		wchar_t* animationDuration();
		void animationDuration(wchar_t* value);

		/// <summary>
		/// Sets or returns what values are applied by the animation outside the time it is executing
		/// </summary>
		/// <value>
		/// The animation fill mode.
		/// </value>
		wchar_t* animationFillMode();
		void animationFillMode(wchar_t* value);

		/// <summary>
		/// Sets or returns the number of times an animation should be played
		/// </summary>
		/// <value>
		/// The animation iteration count.
		/// </value>
		wchar_t* animationIterationCount();
		void animationIterationCount(wchar_t* value);

		/// <summary>
		/// Sets or returns a name for the @keyframes animation
		/// </summary>
		/// <value>
		/// The name of the animation.
		/// </value>
		wchar_t* animationName();
		void animationName(wchar_t* value);

		/// <summary>
		/// Sets or returns the speed curve of the animation
		/// </summary>
		/// <value>
		/// The animation timing function.
		/// </value>
		wchar_t* animationTimingFunction();
		void animationTimingFunction(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the animation is running or paused
		/// </summary>
		/// <value>
		/// The state of the animation play.
		/// </value>
		wchar_t* animationPlayState();
		void animationPlayState(wchar_t* value);

		/// <summary>
		/// Sets or returns all the background properties in one declaration
		/// </summary>
		/// <value>
		/// The background.
		/// </value>
		wchar_t* background();
		void background(wchar_t* value);

		/// <summary>
		/// Sets or returns whether a background-image is fixed or scrolls with the page
		/// </summary>
		/// <value>
		/// The background attachment.
		/// </value>
		wchar_t* backgroundAttachment();
		void backgroundAttachment(wchar_t* value);

		/// <summary>
		/// Sets or returns the background-color of an element
		/// </summary>
		/// <value>
		/// The color of the background.
		/// </value>
		wchar_t* backgroundColor();
		void backgroundColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the background-image for an element
		/// </summary>
		/// <value>
		/// The background image.
		/// </value>
		wchar_t* backgroundImage();
		void backgroundImage(wchar_t* value);

		/// <summary>
		/// Sets or returns the starting position of a background-image
		/// </summary>
		/// <value>
		/// The background position.
		/// </value>
		wchar_t* backgroundPosition();
		void backgroundPosition(wchar_t* value);

		/// <summary>
		/// Sets or returns how to repeat (tile) a background-image
		/// </summary>
		/// <value>
		/// The background repeat.
		/// </value>
		wchar_t* backgroundRepeat();
		void backgroundRepeat(wchar_t* value);

		/// <summary>
		/// Sets or returns the painting area of the background
		/// </summary>
		/// <value>
		/// The background clip.
		/// </value>
		wchar_t* backgroundClip();
		void backgroundClip(wchar_t* value);

		/// <summary>
		/// Sets or returns the positioning area of the background images
		/// </summary>
		/// <value>
		/// The background origin.
		/// </value>
		wchar_t* backgroundOrigin();
		void backgroundOrigin(wchar_t* value);

		/// <summary>
		/// Sets or returns the size of the background image
		/// </summary>
		/// <value>
		/// The size of the background.
		/// </value>
		wchar_t* backgroundSize();
		void backgroundSize(wchar_t* value);

		/// <summary>
		/// Sets or returns whether or not an element should be visible when not facing the screen
		/// </summary>
		/// <value>
		/// The backface visibility.
		/// </value>
		wchar_t* backfaceVisibility();
		void backfaceVisibility(wchar_t* value);

		/// <summary>
		/// Sets or returns borderWidth, borderStyle, and borderColor in one declaration
		/// </summary>
		/// <value>
		/// The border.
		/// </value>
		wchar_t* border();
		void border(wchar_t* value);

		/// <summary>
		/// Sets or returns all the borderBottom properties in one declaration
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottom();
		void borderBottom(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the bottom border
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottomColor();
		void borderBottomColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the shape of the border of the bottom-left corner
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottomLeftRadius();
		void borderBottomLeftRadius(wchar_t* value);

		/// <summary>
		/// Sets or returns the shape of the border of the bottom-right corner
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottomRightRadius();
		void borderBottomRightRadius(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the bottom border
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottomStyle();
		void borderBottomStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the bottom border
		/// </summary>
		/// <value>
		/// The border bottom.
		/// </value>
		wchar_t* borderBottomWidth();
		void borderBottomWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the table border should be collapsed into a single border, or not
		/// </summary>
		/// <value>
		/// The border collapse.
		/// </value>
		wchar_t* borderCollapse();
		void borderCollapse(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of an element's border (can have up to four values)
		/// </summary>
		/// <value>
		/// The color of the border.
		/// </value>
		wchar_t* borderColor();
		void borderColor(wchar_t* value);

		/// <summary>
		/// A shorthand property for setting or returning all the borderImage properties
		/// </summary>
		/// <value>
		/// The border image.
		/// </value>
		wchar_t* borderImage();
		void borderImage(wchar_t* value);

		/// <summary>
		/// Sets or returns the amount by which the border image area extends beyond the border box
		/// </summary>
		/// <value>
		/// The border image outset.
		/// </value>
		wchar_t* borderImageOutset();
		void borderImageOutset(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the image-border should be repeated, rounded or stretched
		/// </summary>
		/// <value>
		/// The border image repeat.
		/// </value>
		wchar_t* borderImageRepeat();
		void borderImageRepeat(wchar_t* value);

		/// <summary>
		/// Sets or returns the inward offsets of the image-border
		/// </summary>
		/// <value>
		/// The border image slice.
		/// </value>
		wchar_t* borderImageSlice();
		void borderImageSlice(wchar_t* value);

		/// <summary>
		/// Sets or returns the image to be used as a border
		/// </summary>
		/// <value>
		/// The border image source.
		/// </value>
		wchar_t* borderImageSource();
		void borderImageSource(wchar_t* value);

		/// <summary>
		/// Sets or returns the widths of the image-border
		/// </summary>
		/// <value>
		/// The width of the border image.
		/// </value>
		wchar_t* borderImageWidth();
		void borderImageWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns all the borderLeft properties in one declaration
		/// </summary>
		/// <value>
		/// The border left.
		/// </value>
		wchar_t* borderLeft();
		void borderLeft(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the left border
		/// </summary>
		/// <value>
		/// The color of the border left.
		/// </value>
		wchar_t* borderLeftColor();
		void borderLeftColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the left border
		/// </summary>
		/// <value>
		/// The border left style.
		/// </value>
		wchar_t* borderLeftStyle();
		void borderLeftStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the left border
		/// </summary>
		/// <value>
		/// The width of the border left.
		/// </value>
		wchar_t* borderLeftWidth();
		void borderLeftWidth(wchar_t* value);

		/// <summary>
		/// A shorthand property for setting or returning all the four borderRadius properties
		/// </summary>
		/// <value>
		/// The border radius.
		/// </value>
		wchar_t* borderRadius();
		void borderRadius(wchar_t* value);

		/// <summary>
		/// Sets or returns all the borderRight properties in one declaration
		/// </summary>
		/// <value>
		/// The border right.
		/// </value>
		wchar_t* borderRight();
		void borderRight(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the right border
		/// </summary>
		/// <value>
		/// The color of the border right.
		/// </value>
		wchar_t* borderRightColor();
		void borderRightColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the right border
		/// </summary>
		/// <value>
		/// The border right style.
		/// </value>
		wchar_t* borderRightStyle();
		void borderRightStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the right border
		/// </summary>
		/// <value>
		/// The width of the border right.
		/// </value>
		wchar_t* borderRightWidth();
		void borderRightWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns the space between cells in a table
		/// </summary>
		/// <value>
		/// The border spacing.
		/// </value>
		wchar_t* borderSpacing();
		void borderSpacing(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of an element's border (can have up to four values)
		/// </summary>
		/// <value>
		/// The border style.
		/// </value>
		wchar_t* borderStyle();
		void borderStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns all the borderTop properties in one declaration
		/// </summary>
		/// <value>
		/// The border top.
		/// </value>
		wchar_t* borderTop();
		void borderTop(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the top border
		/// </summary>
		/// <value>
		/// The color of the border top.
		/// </value>
		wchar_t* borderTopColor();
		void borderTopColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the shape of the border of the top-left corner
		/// </summary>
		/// <value>
		/// The border top left radius.
		/// </value>
		wchar_t* borderTopLeftRadius();
		void borderTopLeftRadius(wchar_t* value);

		/// <summary>
		/// Sets or returns the shape of the border of the top-right corner
		/// </summary>
		/// <value>
		/// The border top right radius.
		/// </value>
		wchar_t* borderTopRightRadius();
		void borderTopRightRadius(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the top border
		/// </summary>
		/// <value>
		/// The border top style.
		/// </value>
		wchar_t* borderTopStyle();
		void borderTopStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the top border
		/// </summary>
		/// <value>
		/// The width of the border top.
		/// </value>
		wchar_t* borderTopWidth();
		void borderTopWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of an element's border (can have up to four values)
		/// </summary>
		/// <value>
		/// The width of the border.
		/// </value>
		wchar_t* borderWidth();
		void borderWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns the bottom position of a positioned element
		/// </summary>
		/// <value>
		/// The bottom.
		/// </value>
		wchar_t* bottom();
		void bottom(wchar_t* value);

		/// <summary>
		/// Sets or returns the behaviour of the background and border of an element at page-break, or, for in-line elements, at line-break.
		/// </summary>
		/// <value>
		/// The box decoration break.
		/// </value>
		wchar_t* boxDecorationBreak();
		void boxDecorationBreak(wchar_t* value);

		/// <summary>
		/// Attaches one or more drop-shadows to the box
		/// </summary>
		/// <value>
		/// The box shadow.
		/// </value>
		wchar_t* boxShadow();
		void boxShadow(wchar_t* value);

		/// <summary>
		/// Allows you to define certain elements to fit an area in a certain way
		/// </summary>
		/// <value>
		/// The box sizing.
		/// </value>
		wchar_t* boxSizing();
		void boxSizing(wchar_t* value);

		/// <summary>
		/// Sets or returns the position of the table caption
		/// </summary>
		/// <value>
		/// The caption side.
		/// </value>
		wchar_t* captionSide();
		void captionSide(wchar_t* value);

		/// <summary>
		/// Sets or returns the position of the element relative to floating objects
		/// </summary>
		/// <value>
		/// The clear.
		/// </value>
		wchar_t* clear();
		void clear(wchar_t* value);

		/// <summary>
		/// Sets or returns which part of a positioned element is visible
		/// </summary>
		/// <value>
		/// The clip.
		/// </value>
		wchar_t* clip();
		void clip(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the text
		/// </summary>
		/// <value>
		/// The color.
		/// </value>
		wchar_t* color();
		void color(wchar_t* value);

		/// <summary>
		/// Sets or returns the number of columns an element should be divided into
		/// </summary>
		/// <value>
		/// The column count.
		/// </value>
		wchar_t* columnCount();
		void columnCount(wchar_t* value);

		/// <summary>
		/// Sets or returns how to fill columns
		/// </summary>
		/// <value>
		/// The column fill.
		/// </value>
		wchar_t* columnFill();
		void columnFill(wchar_t* value);

		/// <summary>
		/// Sets or returns the gap between the columns
		/// </summary>
		/// <value>
		/// The column gap.
		/// </value>
		wchar_t* columnGap();
		void columnGap(wchar_t* value);

		/// <summary>
		/// A shorthand property for setting or returning all the columnRule properties
		/// </summary>
		/// <value>
		/// The column rule.
		/// </value>
		wchar_t* columnRule();
		void columnRule(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the rule between columns
		/// </summary>
		/// <value>
		/// The color of the column rule.
		/// </value>
		wchar_t* columnRuleColor();
		void columnRuleColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the rule between columns
		/// </summary>
		/// <value>
		/// The column rule style.
		/// </value>
		wchar_t* columnRuleStyle();
		void columnRuleStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the rule between columns
		/// </summary>
		/// <value>
		/// The width of the column rule.
		/// </value>
		wchar_t* columnRuleWidth();
		void columnRuleWidth(wchar_t* value);

		/// <summary>
		/// A shorthand property for setting or returning columnWidth and columnCount
		/// </summary>
		/// <value>
		/// The columns.
		/// </value>
		wchar_t* columns();
		void columns(wchar_t* value);

		/// <summary>
		/// Sets or returns how many columns an element should span across
		/// </summary>
		/// <value>
		/// The column span.
		/// </value>
		wchar_t* columnSpan();
		void columnSpan(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the columns
		/// </summary>
		/// <value>
		/// The width of the column.
		/// </value>
		wchar_t* columnWidth();
		void columnWidth(wchar_t* value);

		/// <summary>
		/// Used with the :before and :after pseudo-elements, to insert generated content
		/// </summary>
		/// <value>
		/// The content.
		/// </value>
		wchar_t* content();
		void content(wchar_t* value);

		/// <summary>
		/// Increments one or more counters
		/// </summary>
		/// <value>
		/// The counter increment.
		/// </value>
		wchar_t* counterIncrement();
		void counterIncrement(wchar_t* value);

		/// <summary>
		/// Creates or resets one or more counters
		/// </summary>
		/// <value>
		/// The counter reset.
		/// </value>
		wchar_t* counterReset();
		void counterReset(wchar_t* value);

		/// <summary>
		/// Sets or returns the type of cursor to display for the mouse pointer
		/// </summary>
		/// <value>
		/// The cursor.
		/// </value>
		wchar_t* cursor();
		void cursor(wchar_t* value);

		/// <summary>
		/// Sets or returns the text direction
		/// </summary>
		/// <value>
		/// The direction.
		/// </value>
		wchar_t* direction();
		void direction(wchar_t* value);

		/// <summary>
		/// Sets or returns an element's display type
		/// </summary>
		/// <value>
		/// The display.
		/// </value>
		wchar_t* display();
		void display(wchar_t* value);

		/// <summary>
		/// Sets or returns whether to show the border and background of empty cells, or not
		/// </summary>
		/// <value>
		/// The empty cells.
		/// </value>
		wchar_t* emptyCells();
		void emptyCells(wchar_t* value);

		/// <summary>
		/// Sets or returns image filters (visual effects, like blur and saturation)
		/// </summary>
		/// <value>
		/// The filter.
		/// </value>
		wchar_t* filter();
		void filter(wchar_t* value);

		/// <summary>
		/// Sets or returns the length of the item, relative to the rest
		/// </summary>
		/// <value>
		/// The flex.
		/// </value>
		wchar_t* flex();
		void flex(wchar_t* value);

		/// <summary>
		/// Sets or returns the initial length of a flexible item
		/// </summary>
		/// <value>
		/// The flex basis.
		/// </value>
		wchar_t* flexBasis();
		void flexBasis(wchar_t* value);

		/// <summary>
		/// Sets or returns the direction of the flexible items
		/// </summary>
		/// <value>
		/// The flex direction.
		/// </value>
		wchar_t* flexDirection();
		void flexDirection(wchar_t* value);

		/// <summary>
		/// A shorthand property for the flexDirection and the flexWrap properties
		/// </summary>
		/// <value>
		/// The flex flow.
		/// </value>
		wchar_t* flexFlow();
		void flexFlow(wchar_t* value);

		/// <summary>
		/// Sets or returns how much the item will grow relative to the rest
		/// </summary>
		/// <value>
		/// The flex grow.
		/// </value>
		wchar_t* flexGrow();
		void flexGrow(wchar_t* value);

		/// <summary>
		/// Sets or returns how the item will shrink relative to the rest
		/// </summary>
		/// <value>
		/// The flex shrink.
		/// </value>
		wchar_t* flexShrink();
		void flexShrink(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the flexible items should wrap or not
		/// </summary>
		/// <value>
		/// The flex wrap.
		/// </value>
		wchar_t* flexWrap();
		void flexWrap(wchar_t* value);

		/// <summary>
		/// Sets or returns the horizontal alignment of an element
		/// </summary>
		/// <value>
		/// The CSS float.
		/// </value>
		wchar_t* cssFloat();
		void cssFloat(wchar_t* value);

		/// <summary>
		/// Sets or returns fontStyle, fontVariant, fontWeight, fontSize, lineHeight, and fontFamily in one declaration
		/// </summary>
		/// <value>
		/// The font.
		/// </value>
		wchar_t* font();
		void font(wchar_t* value);

		/// <summary>
		/// Sets or returns the font family for text
		/// </summary>
		/// <value>
		/// The font family.
		/// </value>
		wchar_t* fontFamily();
		void fontFamily(wchar_t* value);

		/// <summary>
		/// Sets or returns the font size of the text
		/// </summary>
		/// <value>
		/// The size of the font.
		/// </value>
		wchar_t* fontSize();
		void fontSize(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the style of the font is normal, italic or oblique
		/// </summary>
		/// <value>
		/// The font style.
		/// </value>
		wchar_t* fontStyle();
		void fontStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the font should be displayed in small capital letters
		/// </summary>
		/// <value>
		/// The font variant.
		/// </value>
		wchar_t* fontVariant();
		void fontVariant(wchar_t* value);

		/// <summary>
		/// Sets or returns the boldness of the font
		/// </summary>
		/// <value>
		/// The font weight.
		/// </value>
		wchar_t* fontWeight();
		void fontWeight(wchar_t* value);

		/// <summary>
		/// Preserves the readability of text when font fallback occurs
		/// </summary>
		/// <value>
		/// The font size adjust.
		/// </value>
		wchar_t* fontSizeAdjust();
		void fontSizeAdjust(wchar_t* value);

		/// <summary>
		/// Selects a normal, condensed, or expanded face from a font family
		/// </summary>
		/// <value>
		/// The font stretch.
		/// </value>
		wchar_t* fontStretch();
		void fontStretch(wchar_t* value);

		/// <summary>
		/// Specifies whether a punctuation character may be placed outside the line box
		/// </summary>
		/// <value>
		/// The hanging punctuation.
		/// </value>
		wchar_t* hangingPunctuation();
		void hangingPunctuation(wchar_t* value);

		/// <summary>
		/// Sets or returns the height of an element
		/// </summary>
		/// <value>
		/// The height.
		/// </value>
		wchar_t* height();
		void height(wchar_t* value);

		/// <summary>
		/// Sets how to split words to improve the layout of paragraphs
		/// </summary>
		/// <value>
		/// The hyphens.
		/// </value>
		wchar_t* hyphens();
		void hyphens(wchar_t* value);

		/// <summary>
		/// Provides the author the ability to style an element with an iconic equivalent
		/// </summary>
		/// <value>
		/// The icon.
		/// </value>
		wchar_t* icon();
		void icon(wchar_t* value);

		/// <summary>
		/// Specifies a rotation in the right or clockwise direction that a user agent applies to an image
		/// </summary>
		/// <value>
		/// The image orientation.
		/// </value>
		wchar_t* imageOrientation();
		void imageOrientation(wchar_t* value);

		/// <summary>
		/// Defines whether an element must create a new stacking content
		/// </summary>
		/// <value>
		/// The isolation.
		/// </value>
		wchar_t* isolation();
		void isolation(wchar_t* value);

		/// <summary>
		/// Sets or returns the alignment between the items inside a flexible container when the items do not use all available space.
		/// </summary>
		/// <value>
		/// The content of the justify.
		/// </value>
		wchar_t* justifyContent();
		void justifyContent(wchar_t* value);

		/// <summary>
		/// Sets or returns the left position of a positioned element
		/// </summary>
		/// <value>
		/// The left.
		/// </value>
		wchar_t* left();
		void left(wchar_t* value);

		/// <summary>
		/// Sets or returns the space between characters in a text
		/// </summary>
		/// <value>
		/// The letter spacing.
		/// </value>
		wchar_t* letterSpacing();
		void letterSpacing(wchar_t* value);

		/// <summary>
		/// Sets or returns the distance between lines in a text
		/// </summary>
		/// <value>
		/// The height of the line.
		/// </value>
		wchar_t* lineHeight();
		void lineHeight(wchar_t* value);

		/// <summary>
		/// Sets or returns listStyleImage, listStylePosition, and listStyleType in one declaration
		/// </summary>
		/// <value>
		/// The list style.
		/// </value>
		wchar_t* listStyle();
		void listStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns an image as the list-item marker
		/// </summary>
		/// <value>
		/// The list style image.
		/// </value>
		wchar_t* listStyleImage();
		void listStyleImage(wchar_t* value);

		/// <summary>
		/// Sets or returns the position of the list-item marker
		/// </summary>
		/// <value>
		/// The list style position.
		/// </value>
		wchar_t* listStylePosition();
		void listStylePosition(wchar_t* value);

		/// <summary>
		/// Sets or returns the list-item marker type
		/// </summary>
		/// <value>
		/// The type of the list style.
		/// </value>
		wchar_t* listStyleType();
		void listStyleType(wchar_t* value);

		/// <summary>
		/// Sets or returns the margins of an element (can have up to four values)
		/// </summary>
		/// <value>
		/// The margin.
		/// </value>
		wchar_t* margin();
		void margin(wchar_t* value);

		/// <summary>
		/// Sets or returns the bottom margin of an element
		/// </summary>
		/// <value>
		/// The margin bottom.
		/// </value>
		wchar_t* marginBottom();
		void marginBottom(wchar_t* value);

		/// <summary>
		/// Sets or returns the left margin of an element
		/// </summary>
		/// <value>
		/// The margin left.
		/// </value>
		wchar_t* marginLeft();
		void marginLeft(wchar_t* value);

		/// <summary>
		/// Sets or returns the right margin of an element
		/// </summary>
		/// <value>
		/// The margin right.
		/// </value>
		wchar_t* marginRight();
		void marginRight(wchar_t* value);

		/// <summary>
		/// Sets or returns the top margin of an element
		/// </summary>
		/// <value>
		/// The margin top.
		/// </value>
		wchar_t* marginTop();
		void marginTop(wchar_t* value);

		/// <summary>
		/// Sets or returns the maximum height of an element
		/// </summary>
		/// <value>
		/// The maximum height.
		/// </value>
		wchar_t* maxHeight();
		void maxHeight(wchar_t* value);

		/// <summary>
		/// Sets or returns the maximum width of an element
		/// </summary>
		/// <value>
		/// The maximum width.
		/// </value>
		wchar_t* maxWidth();
		void maxWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns the minimum height of an element
		/// </summary>
		/// <value>
		/// The minimum height.
		/// </value>
		wchar_t* minHeight();
		void minHeight(wchar_t* value);

		/// <summary>
		/// Sets or returns the minimum width of an element
		/// </summary>
		/// <value>
		/// The minimum width.
		/// </value>
		wchar_t* minWidth();
		void minWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns where to navigate when using the arrow-down navigation key
		/// </summary>
		/// <value>
		/// The nav down.
		/// </value>
		wchar_t* navDown();
		void navDown(wchar_t* value);

		/// <summary>
		/// Sets or returns the tabbing order for an element
		/// </summary>
		/// <value>
		/// The index of the nav.
		/// </value>
		wchar_t* navIndex();
		void navIndex(wchar_t* value);

		/// <summary>
		/// Sets or returns where to navigate when using the arrow-left navigation key
		/// </summary>
		/// <value>
		/// The nav left.
		/// </value>
		wchar_t* navLeft();
		void navLeft(wchar_t* value);

		/// <summary>
		/// Sets or returns where to navigate when using the arrow-right navigation key
		/// </summary>
		/// <value>
		/// The nav right.
		/// </value>
		wchar_t* navRight();
		void navRight(wchar_t* value);

		/// <summary>
		/// Sets or returns where to navigate when using the arrow-up navigation key
		/// </summary>
		/// <value>
		/// The nav up.
		/// </value>
		wchar_t* navUp();
		void navUp(wchar_t* value);

		/// <summary>
		/// Specifies how the contents of a replaced element should be fitted to the box established by its used height and width
		/// </summary>
		/// <value>
		/// The object fit.
		/// </value>
		wchar_t* objectFit();
		void objectFit(wchar_t* value);

		/// <summary>
		/// Specifies the alignment of the replaced element inside its box
		/// </summary>
		/// <value>
		/// The object position.
		/// </value>
		wchar_t* objectPosition();
		void objectPosition(wchar_t* value);

		/// <summary>
		/// Sets or returns the opacity level for an element
		/// </summary>
		/// <value>
		/// The opacity.
		/// </value>
		wchar_t* opacity();
		void opacity(wchar_t* value);

		/// <summary>
		/// Sets or returns the order of the flexible item, relative to the rest
		/// </summary>
		/// <value>
		/// The order.
		/// </value>
		wchar_t* order();
		void order(wchar_t* value);

		/// <summary>
		/// Sets or returns the minimum number of lines for an element that must be left at the bottom of a page when a page break occurs inside an element
		/// </summary>
		/// <value>
		/// The orphans.
		/// </value>
		wchar_t* orphans();
		void orphans(wchar_t* value);

		/// <summary>
		/// Sets or returns all the outline properties in one declaration
		/// </summary>
		/// <value>
		/// The outline.
		/// </value>
		wchar_t* outline();
		void outline(wchar_t*);

		/// <summary>
		/// Sets or returns the color of the outline around a element
		/// </summary>
		/// <value>
		/// The color of the outline.
		/// </value>
		wchar_t* outlineColor();
		void outlineColor(wchar_t* value);

		/// <summary>
		/// Offsets an outline, and draws it beyond the border edge
		/// </summary>
		/// <value>
		/// The outline offset.
		/// </value>
		wchar_t* outlineOffset();
		void outlineOffset(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the outline around an element
		/// </summary>
		/// <value>
		/// The outline style.
		/// </value>
		wchar_t* outlineStyle();
		void outlineStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of the outline around an element
		/// </summary>
		/// <value>
		/// The width of the outline.
		/// </value>
		wchar_t* outlineWidth();
		void outlineWidth(wchar_t* value);

		/// <summary>
		/// Sets or returns what to do with content that renders outside the element box
		/// </summary>
		/// <value>
		/// The overflow.
		/// </value>
		wchar_t* overflow();
		void overflow(wchar_t* value);

		/// <summary>
		/// Specifies what to do with the left/right edges of the content, if it overflows the element's content area
		/// </summary>
		/// <value>
		/// The overflow x.
		/// </value>
		wchar_t* overflowX();
		void overflowX(wchar_t* value);

		/// <summary>
		/// Specifies what to do with the top/bottom edges of the content, if it overflows the element's content area
		/// </summary>
		/// <value>
		/// The overflow y.
		/// </value>
		wchar_t* overflowY();
		void overflowY(wchar_t* value);

		/// <summary>
		/// Sets or returns the padding of an element (can have up to four values)
		/// </summary>
		/// <value>
		/// The padding.
		/// </value>
		wchar_t* padding();
		void padding(wchar_t* value);

		/// <summary>
		/// Sets or returns the bottom padding of an element
		/// </summary>
		/// <value>
		/// The padding bottom.
		/// </value>
		wchar_t* paddingBottom();
		void paddingBottom(wchar_t* value);

		/// <summary>
		/// Sets or returns the left padding of an element
		/// </summary>
		/// <value>
		/// The padding left.
		/// </value>
		wchar_t* paddingLeft();
		void paddingLeft(wchar_t* value);

		/// <summary>
		/// Sets or returns the right padding of an element
		/// </summary>
		/// <value>
		/// The padding right.
		/// </value>
		wchar_t* paddingRight();
		void paddingRight(wchar_t* value);

		/// <summary>
		/// Sets or returns the top padding of an element
		/// </summary>
		/// <value>
		/// The padding top.
		/// </value>
		wchar_t* paddingTop();
		void paddingTop(wchar_t* value);

		/// <summary>
		/// Sets or returns the page-break behavior after an element
		/// </summary>
		/// <value>
		/// The page break after.
		/// </value>
		wchar_t* pageBreakAfter();
		void pageBreakAfter(wchar_t* value);

		/// <summary>
		/// Sets or returns the page-break behavior before an element
		/// </summary>
		/// <value>
		/// The page break before.
		/// </value>
		wchar_t* pageBreakBefore();
		void pageBreakBefore(wchar_t* value);

		/// <summary>
		/// Sets or returns the page-break behavior inside an element
		/// </summary>
		/// <value>
		/// The page break inside.
		/// </value>
		wchar_t* pageBreakInside();
		void pageBreakInside(wchar_t* value);

		/// <summary>
		/// Sets or returns the perspective on how 3D elements are viewed
		/// </summary>
		/// <value>
		/// The perspective.
		/// </value>
		wchar_t* perspective();
		void perspective(wchar_t* value);

		/// <summary>
		/// Sets or returns the bottom position of 3D elements
		/// </summary>
		/// <value>
		/// The perspective origin.
		/// </value>
		wchar_t* perspectiveOrigin();
		void perspectiveOrigin(wchar_t* value);

		/// <summary>
		/// Sets or returns the type of positioning method used for an element (static, relative, absolute or fixed)
		/// </summary>
		/// <value>
		/// The position.
		/// </value>
		wchar_t* position();
		void position(wchar_t* value);

		/// <summary>
		/// Sets or returns the type of quotation marks for embedded quotations
		/// </summary>
		/// <value>
		/// The quotes.
		/// </value>
		wchar_t* quotes();
		void quotes(wchar_t* value);

		/// <summary>
		/// Sets or returns whether or not an element is resizable by the user
		/// </summary>
		/// <value>
		/// The resize.
		/// </value>
		wchar_t* resize();
		void resize(wchar_t* value);

		/// <summary>
		/// Sets or returns the right position of a positioned element
		/// </summary>
		/// <value>
		/// The right.
		/// </value>
		wchar_t* right();
		void right(wchar_t* value);

		/// <summary>
		/// Sets or returns the way to lay out table cells, rows, and columns
		/// </summary>
		/// <value>
		/// The table layout.
		/// </value>
		wchar_t* tableLayout();
		void tableLayout(wchar_t* value);

		/// <summary>
		/// Sets or returns the length of the tab-character
		/// </summary>
		/// <value>
		/// The size of the tab.
		/// </value>
		wchar_t* tabSize();
		void tabSize(wchar_t* value);

		/// <summary>
		/// Sets or returns the horizontal alignment of text
		/// </summary>
		/// <value>
		/// The text align.
		/// </value>
		wchar_t* textAlign();
		void textAlign(wchar_t* value);

		/// <summary>
		/// Sets or returns how the last line of a block or a line right before a forced line break is aligned when text-align is "justify"
		/// </summary>
		/// <value>
		/// The text align last.
		/// </value>
		wchar_t* textAlignLast();
		void textAlignLast(wchar_t* value);

		/// <summary>
		/// Sets or returns the decoration of a text
		/// </summary>
		/// <value>
		/// The text decoration.
		/// </value>
		wchar_t* textDecoration();
		void textDecoration(wchar_t* value);

		/// <summary>
		/// Sets or returns the color of the text-decoration
		/// </summary>
		/// <value>
		/// The color of the text decoration.
		/// </value>
		wchar_t* textDecorationColor();
		void textDecorationColor(wchar_t* value);

		/// <summary>
		/// Sets or returns the type of line in a text-decoration
		/// </summary>
		/// <value>
		/// The text decoration line.
		/// </value>
		wchar_t* textDecorationLine();
		void textDecorationLine(wchar_t* value);

		/// <summary>
		/// Sets or returns the style of the line in a text decoration
		/// </summary>
		/// <value>
		/// The text decoration style.
		/// </value>
		wchar_t* textDecorationStyle();
		void textDecorationStyle(wchar_t* value);

		/// <summary>
		/// Sets or returns the indentation of the first line of text
		/// </summary>
		/// <value>
		/// The text indent.
		/// </value>
		wchar_t* textIndent();
		void textIndent(wchar_t* value);

		/// <summary>
		/// Sets or returns the justification method used when text-align is "justify"
		/// </summary>
		/// <value>
		/// The text justify.
		/// </value>
		wchar_t* textJustify();
		void textJustify(wchar_t* value);

		/// <summary>
		/// Sets or returns what should happen when text overflows the containing element
		/// </summary>
		/// <value>
		/// The text overflow.
		/// </value>
		wchar_t* textOverflow();
		void textOverflow(wchar_t* value);

		/// <summary>
		/// Sets or returns the shadow effect of a text
		/// </summary>
		/// <value>
		/// The text shadow.
		/// </value>
		wchar_t* textShadow();
		void textShadow(wchar_t* value);

		/// <summary>
		/// Sets or returns the capitalization of a text
		/// </summary>
		/// <value>
		/// The text transform.
		/// </value>
		wchar_t* textTransform();
		void textTransform(wchar_t* value);

		/// <summary>
		/// Sets or returns the top position of a positioned element
		/// </summary>
		/// <value>
		/// The top.
		/// </value>
		wchar_t* top();
		void top(wchar_t* value);

		/// <summary>
		/// Applies a 2D or 3D transformation to an element
		/// </summary>
		/// <value>
		/// The transform.
		/// </value>
		wchar_t* transform();
		void transform(wchar_t* value);

		/// <summary>
		/// Sets or returns the position of transformed elements
		/// </summary>
		/// <value>
		/// The transform origin.
		/// </value>
		wchar_t* transformOrigin();
		void transformOrigin(wchar_t* value);

		/// <summary>
		/// Sets or returns how nested elements are rendered in 3D space
		/// </summary>
		/// <value>
		/// The transform style.
		/// </value>
		wchar_t* transformStyle();
		void transformStyle(wchar_t* value);

		/// <summary>
		/// A shorthand property for setting or returning the four transition properties
		/// </summary>
		/// <value>
		/// The transition.
		/// </value>
		wchar_t* transition();
		void transition(wchar_t* value);

		/// <summary>
		/// Sets or returns the CSS property that the transition effect is for
		/// </summary>
		/// <value>
		/// The transition property.
		/// </value>
		wchar_t* transitionProperty();
		void transitionProperty(wchar_t* value);

		/// <summary>
		/// Sets or returns how many seconds or milliseconds a transition effect takes to complete
		/// </summary>
		/// <value>
		/// The duration of the transition.
		/// </value>
		wchar_t* transitionDuration();
		void transitionDuration(wchar_t* value);

		/// <summary>
		/// Sets or returns the speed curve of the transition effect
		/// </summary>
		/// <value>
		/// The transition timing function.
		/// </value>
		wchar_t* transitionTimingFunction();
		void transitionTimingFunction(wchar_t* value);

		/// <summary>
		/// Sets or returns when the transition effect will start
		/// </summary>
		/// <value>
		/// The transition delay.
		/// </value>
		wchar_t* transitionDelay();
		void transitionDelay(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the text should be overridden to support multiple languages in the same document
		/// </summary>
		/// <value>
		/// The unicode bidi.
		/// </value>
		wchar_t* unicodeBidi();
		void unicodeBidi(wchar_t* value);

		/// <summary>
		/// Sets or returns whether the text of an element can be selected or not
		/// </summary>
		/// <value>
		/// The user select.
		/// </value>
		wchar_t* userSelect();
		void userSelect(wchar_t* value);

		/// <summary>
		/// Sets or returns the vertical alignment of the content in an element
		/// </summary>
		/// <value>
		/// The vertical align.
		/// </value>
		wchar_t* verticalAlign();
		void verticalAlign(wchar_t* value);

		/// <summary>
		/// Sets or returns whether an element should be visible
		/// </summary>
		/// <value>
		/// The visibility.
		/// </value>
		wchar_t* visibility();
		void visibility(wchar_t* value);

		/// <summary>
		/// Sets or returns how to handle tabs, line breaks and whitespace in a text
		/// </summary>
		/// <value>
		/// The white space.
		/// </value>
		wchar_t* whiteSpace();
		void whiteSpace(wchar_t* value);

		/// <summary>
		/// Sets or returns the width of an element
		/// </summary>
		/// <value>
		/// The width.
		/// </value>
		wchar_t* width();
		void width(wchar_t* value);

		/// <summary>
		/// Sets or returns line breaking rules for non-CJK scripts
		/// </summary>
		/// <value>
		/// The word break.
		/// </value>
		wchar_t* wordBreak();
		void wordBreak(wchar_t* value);

		/// <summary>
		/// Sets or returns the spacing between words in a text
		/// </summary>
		/// <value>
		/// The word spacing.
		/// </value>
		wchar_t* wordSpacing();
		void wordSpacing(wchar_t* value);

		/// <summary>
		/// Allows long, unbreakable words to be broken and wrap to the next line
		/// </summary>
		/// <value>
		/// The word wrap.
		/// </value>
		wchar_t* wordWrap();
		void wordWrap(wchar_t* value);

		/// <summary>
		/// Sets or returns the minimum number of lines for an element that must be visible at the top of a page
		/// </summary>
		/// <value>
		/// The widows.
		/// </value>
		wchar_t* widows();
		void widows(wchar_t* value);

		/// <summary>
		/// Sets or returns the stack order of a positioned element
		/// </summary>
		/// <value>
		/// The index of the z.
		/// </value>
		wchar_t* zIndex();
		void zIndex(wchar_t* value);
	};

	/// <summary>
	/// Window
	/// https://www.w3schools.com/jsref/obj_window.asp
	/// </summary>
	class Window
	{
	public:
		/// <summary>
	   /// Returns a Boolean value indicating whether a window has been closed or not
	   /// </summary>
	   /// <value>
	   ///   <c>true</c> if closed; otherwise, <c>false</c>.
	   /// </value>
		bool closed();

		/// <summary>
		/// Returns a reference to the Console object, which provides methods for logging information to the browser's console (See Console object)
		/// </summary>
		/// <value>
		/// The console.
		/// </value>
		Console* console();

		/// <summary>
		/// Sets or returns the default text in the statusbar of a window
		/// </summary>
		/// <value>
		/// The default status.
		/// </value>
		wchar_t* defaultStatus();
		void defaultStatus(wchar_t* value);

		/// <summary>
		/// Returns the Document object for the window (See Document object)
		/// </summary>
		/// <value>
		/// The document.
		/// </value>
		Document* document();

		/// <summary>
		/// Returns the <iframe> element in which the current window is inserted
		/// </summary>
		/// <value>
		/// The frame element.
		/// </value>
		Element* frameElement();

		/// <summary>
		/// Returns all <iframe> elements in the current window
		/// </summary>
		/// <value>
		/// The frames.
		/// </value>
		std::vector<Element*> frames();

		/// <summary>
		/// Returns the History object for the window (See History object)
		/// </summary>
		/// <value>
		/// The history.
		/// </value>
		History* history();

		/// <summary>
		/// Returns the height of the window's content area (viewport) including scrollbars
		/// </summary>
		/// <value>
		/// The height of the inner.
		/// </value>
		int innerHeight();

		/// <summary>
		/// Returns the width of a window's content area (viewport) including scrollbars
		/// </summary>
		/// <value>
		/// The width of the inner.
		/// </value>
		int innerWidth();

		/// <summary>
		/// Returns the number of <iframe> elements in the current window
		/// </summary>
		/// <value>
		/// The length.
		/// </value>
		int length();

		/// <summary>
		/// Allows to save key/value pairs in a web browser. Stores the data with no expiration date
		/// </summary>
		/// <value>
		/// The local storage.
		/// </value>
		Storage* localStorage();

		/// <summary>
		/// Returns the Location object for the window (See Location object)
		/// </summary>
		/// <value>
		/// The location.
		/// </value>
		Location* location();

		/// <summary>
		/// Sets or returns the name of a window
		/// </summary>
		/// <value>
		/// The name.
		/// </value>
		wchar_t* name();
		void name(wchar_t* value);

		/// <summary>
		/// Returns the Navigator object for the window (See Navigator object)
		/// </summary>
		/// <value>
		/// The navigator.
		/// </value>
		Navigator* navigator();

		/// <summary>
		/// Returns a reference to the window that created the window
		/// </summary>
		/// <value>
		/// The opener.
		/// </value>
		Window* opener();

		/// <summary>
		/// Returns the height of the browser window, including toolbars/scrollbars
		/// </summary>
		/// <value>
		/// The height of the outer.
		/// </value>
		int outerHeight();

		/// <summary>
		/// Returns the width of the browser window, including toolbars/scrollbars
		/// </summary>
		/// <value>
		/// The width of the outer.
		/// </value>
		int outerWidth();

		/// <summary>
		/// Returns the pixels the current document has been scrolled (horizontally) from the upper left corner of the window
		/// </summary>
		/// <value>
		/// The page x offset.
		/// </value>
		int pageXOffset();

		/// <summary>
		/// Returns the pixels the current document has been scrolled (vertically) from the upper left corner of the window
		/// </summary>
		/// <value>
		/// The page y offset.
		/// </value>
		int pageYOffset();

		/// <summary>
		/// Returns the parent window of the current window
		/// </summary>
		/// <value>
		/// The parent.
		/// </value>
		Window* parent();

		/// <summary>
		/// Returns the Screen object for the window (See Screen object)
		/// </summary>
		/// <value>
		/// The screen.
		/// </value>
		Screen* screen();

		/// <summary>
		/// Returns the horizontal coordinate of the window relative to the screen
		/// </summary>
		/// <value>
		/// The screen left.
		/// </value>
		int screenLeft();

		/// <summary>
		/// Returns the vertical coordinate of the window relative to the screen
		/// </summary>
		/// <value>
		/// The screen top.
		/// </value>
		int screenTop();

		/// <summary>
		/// Returns the horizontal coordinate of the window relative to the screen
		/// </summary>
		/// <value>
		/// The screen x.
		/// </value>
		int screenX();

		/// <summary>
		/// Returns the vertical coordinate of the window relative to the screen
		/// </summary>
		/// <value>
		/// The screen y.
		/// </value>
		int screenY();

		/// <summary>
		/// Allows to save key/value pairs in a web browser. Stores the data for one session
		/// </summary>
		/// <value>
		/// The session storage.
		/// </value>
		Storage* sessionStorage();

		/// <summary>
		/// An alias of pageXOffset
		/// </summary>
		/// <value>
		/// The scroll x.
		/// </value>
		int scrollX();

		/// <summary>
		/// An alias of pageYOffset
		/// </summary>
		/// <value>
		/// The scroll y.
		/// </value>
		int scrollY();

		/// <summary>
		/// Returns the current window
		/// </summary>
		/// <value>
		/// The self.
		/// </value>
		Window* self();

		/// <summary>
		/// Sets or returns the text in the statusbar of a window
		/// </summary>
		/// <value>
		/// The status.
		/// </value>
		wchar_t* status();
		void status(wchar_t* value);

		/// <summary>
		/// Returns the topmost browser window
		/// </summary>
		/// <value>
		/// The top.
		/// </value>
		Window* top();

		/// <summary>
		/// Displays an alert box with a message and an OK button
		/// </summary>
		/// <param name="message">The message.</param>
		void alert(wchar_t* message);

		/// <summary>
		/// Decodes a base-64 encoded string
		/// </summary>
		/// <param name="encodedStr">The encoded string.</param>
		/// <returns></returns>
		wchar_t* atob(wchar_t* encodedStr);

		/// <summary>
		/// Removes focus from the current window
		/// </summary>
		void blur();

		/// <summary>
		/// Encodes a string in base-64
		/// </summary>
		/// <param name="str">The string.</param>
		/// <returns></returns>
		wchar_t* btoa(wchar_t* str);

		/// <summary>
		/// Clears a timer set with setInterval()
		/// </summary>
		/// <param name="var">The variable.</param>
		void clearInterval(wchar_t* var);

		/// <summary>
		/// Clears a timer set with setTimeout()
		/// </summary>
		/// <param name="id_of_settimeout">The identifier of settimeout.</param>
		void clearTimeout(wchar_t* id_of_settimeout);

		/// <summary>
		/// Closes the current window
		/// </summary>
		void close();

		/// <summary>
		/// Displays a dialog box with a message and an OK and a Cancel button
		/// </summary>
		/// <param name="message">The message.</param>
		/// <returns></returns>
		bool confirm(wchar_t* message);

		/// <summary>
		/// Sets focus to the current window
		/// </summary>
		void focus();

		/// <summary>
		/// Gets the current computed CSS styles applied to an element
		/// </summary>
		/// <param name="element">The element.</param>
		/// <param name="pseudoElement">The pseudo element.</param>
		/// <returns></returns>
		Style* getComputedStyle(wchar_t* element, wchar_t* pseudoElement);

		/// <summary>
		/// Returns a Selection object representing the range of text selected by the user
		/// </summary>
		/// <returns></returns>
		void* getSelection();

		/// <summary>
		/// Returns a MediaQueryList object representing the specified CSS media query string
		/// </summary>
		/// <param name="mediaQueryString">The media query string.</param>
		/// <returns></returns>
		MediaQueryList* matchMedia(wchar_t* mediaQueryString);

		/// <summary>
		/// Moves a window relative to its current position
		/// </summary>
		/// <param name="x">The x.</param>
		/// <param name="y">The y.</param>
		void moveBy(int x, int y);

		/// <summary>
		/// Moves a window to the specified position
		/// </summary>
		/// <param name="x">The x.</param>
		/// <param name="y">The y.</param>
		void moveTo(int x, int y);

		/// <summary>
		/// Opens a new browser window
		/// </summary>
		/// <param name="URL">The URL.</param>
		/// <param name="name">The name.</param>
		/// <param name="specs">The specs.</param>
		/// <param name="replace">The replace.</param>
		/// <returns></returns>
		Window* open(wchar_t* URL = nullptr, wchar_t* name = nullptr, wchar_t* specs = nullptr, bool replace = true);

		/// <summary>
		/// Prints the content of the current window
		/// </summary>
		void print();

		/// <summary>
		/// Displays a dialog box that prompts the visitor for input
		/// </summary>
		/// <param name="text">The text.</param>
		/// <param name="defaultText">The default text.</param>
		/// <returns></returns>
		wchar_t* prompt(wchar_t* text, wchar_t* defaultText = nullptr);

		/// <summary>
		/// Requests the browser to call a function to update an animation before the next repaint
		/// </summary>
		/// <returns></returns>
		void* requestAnimationFrame();

		/// <summary>
		/// Resizes the window by the specified pixels
		/// </summary>
		/// <param name="width">The width.</param>
		/// <param name="height">The height.</param>
		void resizeBy(int width, int height);

		/// <summary>
		/// Resizes the window to the specified width and height
		/// </summary>
		/// <param name="width">The width.</param>
		/// <param name="height">The height.</param>
		void resizeTo(int width, int height);

		/// <summary>
		/// Scrolls the document by the specified number of pixels
		/// </summary>
		/// <param name="xnum">The xnum.</param>
		/// <param name="ynum">The ynum.</param>
		void scrollBy(int xnum, int ynum);

		/// <summary>
		/// Scrolls the document to the specified coordinates
		/// </summary>
		/// <param name="xpos">The xpos.</param>
		/// <param name="ypos">The ypos.</param>
		void scrollTo(int xpos, int ypos);

		/// <summary>
		/// Calls a function or evaluates an expression at specified intervals (in milliseconds)
		/// </summary>
		/// <param name="function">The function.</param>
		/// <param name="milliseconds">The milliseconds.</param>
		/// <param name="args">The arguments.</param>
		/// <returns></returns>
		int setInterval(wchar_t* function, int milliseconds, ...);

		/// <summary>
		/// Calls a function or evaluates an expression after a specified number of milliseconds
		/// </summary>
		/// <param name="function">The function.</param>
		/// <param name="milliseconds">The milliseconds.</param>
		/// <param name="args">The arguments.</param>
		/// <returns></returns>
		int setTimeout(wchar_t* function, int milliseconds, ...);

		/// <summary>
		/// Stops the window from loading
		/// </summary>
		void stop();
	};

	/// <summary>
	/// Storage
	/// https://www.w3schools.com/jsref/obj_storage.asp
	/// </summary>
	class Storage
	{
	public:
		/// <summary>
		/// Returns the name of the nth key in the storage
		/// </summary>
		/// <param name="index">The index.</param>
		/// <returns></returns>
		wchar_t* key(int index);

		/// <summary>
		/// Returns the number of data items stored in the Storage object
		/// </summary>
		/// <value>
		/// The length.
		/// </value>
		int length();

		/// <summary>
		/// Returns the value of the specified key name
		/// </summary>
		/// <param name="keyname">The keyname.</param>
		/// <returns></returns>
		wchar_t* getItem(wchar_t* keyname);

		/// <summary>
		/// Adds that key to the storage, or update that key's value if it already exists
		/// </summary>
		/// <param name="keyname">The keyname.</param>
		/// <param name="value">The value.</param>
		/// <returns></returns>
		wchar_t* setItem(wchar_t* keyname, wchar_t* value);

		/// <summary>
		/// Removes that key from the storage
		/// </summary>
		/// <param name="keyname">The keyname.</param>
		void removeItem(wchar_t* keyname);

		/// <summary>
		/// Empty all key out of the storage
		/// </summary>
		void clear();
	};
}

#endif  // LH_API_H
