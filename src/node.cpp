#include "html.h"
#include "node.h"
#include "document.h"

/// <summary>
/// Document
/// </summary>
namespace litehtml
{
	/// <summary>
	/// Returns the currently focused element in the document
	/// </summary>
	/// <value>
	/// The active element.
	/// </value>
	Element* Document::activeElement() { return nullptr; }

	/// <summary>
	/// Attaches an event handler to the document
	/// </summary>
	/// <param name="event">The event.</param>
	/// <param name="function">The function.</param>
	/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
	void Document::addEventListener(tstring event, tstring function, bool useCapture) { }

	/// <summary>
	/// Adopts a node from another document
	/// </summary>
	/// <param name="node">The node.</param>
	/// <returns></returns>
	Node* Document::adoptNode(Node* node) { return nullptr; }

	/// <summary>
	/// Returns a collection of all <a> elements in the document that have a name attribute
	/// </summary>
	/// <value>
	/// The anchors.
	/// </value>
	HTMLCollection& Document::anchors() { return HTMLCollection(); }

	/// <summary>
	/// Returns a collection of all <applet> elements in the document
	/// </summary>
	/// <value>
	/// The applets.
	/// </value>
	HTMLCollection& Document::applets() { return HTMLCollection(); }

	/// <summary>
	/// Returns the absolute base URI of a document
	/// </summary>
	/// <value>
	/// The base URI.
	/// </value>
	tstring Document::baseURI() { return nullptr; }

	/// <summary>
	/// Sets or returns the document's body (the <body> element)
	/// </summary>
	/// <value>
	/// The body.
	/// </value>
	Element* Document::body() { return nullptr; }
	void Document::body(Element* value) { }

	/// <summary>
	/// Closes the output stream previously opened with document.open()
	/// </summary>
	void Document::close() { }

	/// <summary>
	/// Returns all name/value pairs of cookies in the document
	/// </summary>
	/// <value>
	/// The cookie.
	/// </value>
	tstring Document::cookie() { return nullptr; }
	void Document::cookie(tstring value) { }

	/// <summary>
	/// Returns the character encoding for the document
	/// </summary>
	/// <value>
	/// The character set.
	/// </value>
	tstring Document::characterSet() { return nullptr; }

	/// <summary>
	/// Creates an attribute node
	/// </summary>
	/// <param name="attributename">The attributename.</param>
	/// <returns></returns>
	Node* Document::createAttribute(tstring attributename) { return nullptr; }

	/// <summary>
	/// Creates a Comment node with the specified text
	/// </summary>
	/// <param name="text">The text.</param>
	/// <returns></returns>
	Node* Document::createComment(tstring text) { return nullptr; } //: IComment

	/// <summary>
	/// Creates an empty DocumentFragment node
	/// </summary>
	/// <returns></returns>
	DocumentFragment* Document::createDocumentFragment() { return nullptr; }

	/// <summary>
	/// Creates an Element node
	/// </summary>
	/// <param name="nodename">The nodename.</param>
	/// <returns></returns>
	Element* Document::createElement(tstring nodename) { return nullptr; }

	/// <summary>
	/// Creates a new event
	/// </summary>
	/// <param name="type">The type.</param>
	/// <returns></returns>
	Event* Document::createEvent(tstring type) { return nullptr; }

	/// <summary>
	/// Creates a Text node
	/// </summary>
	/// <param name="text">The text.</param>
	/// <returns></returns>
	Node* Document::createTextNode(tstring text) { return nullptr; } //: IText

	/// <summary>
	/// Returns the window object associated with a document, or nullptr if none is available.
	/// </summary>
	/// <value>
	/// The default view.
	/// </value>
	Window* Document::defaultView() { return nullptr; }

	/// <summary>
	/// Controls whether the entire document should be editable or not.
	/// </summary>
	/// <value>
	/// The design mode.
	/// </value>
	tstring Document::designMode() { return nullptr; } //= "off"
	void Document::designMode(tstring value) { }

	/// <summary>
	/// Returns the Document Type Declaration associated with the document
	/// </summary>
	/// <value>
	/// The doctype.
	/// </value>
	DocumentType* Document::doctype() { return nullptr; }

	/// <summary>
	/// Returns the Document Element of the document (the <html> element)
	/// </summary>
	/// <value>
	/// The document element.
	/// </value>
	Element* Document::documentElement() { return nullptr; }

	/// <summary>
	/// Sets or returns the location of the document
	/// </summary>
	/// <value>
	/// The document URI.
	/// </value>
	tstring Document::documentURI() { return nullptr; }
	void Document::documentURI(tstring value) { }

	/// <summary>
	/// Returns the domain name of the server that loaded the document
	/// </summary>
	/// <value>
	/// The domain.
	/// </value>
	tstring Document::domain() { return nullptr; }

	/// <summary>
	/// Returns a collection of all <embed> elements the document
	/// </summary>
	/// <value>
	/// The embeds.
	/// </value>
	HTMLCollection& Document::embeds() { return HTMLCollection(); }

	/// <summary>
	/// Invokes the specified clipboard operation on the element currently having focus.
	/// </summary>
	/// <param name="command">The command.</param>
	/// <param name="showUI">if set to <c>true</c> [show UI].</param>
	/// <param name="value">The value.</param>
	/// <returns></returns>
	bool Document::execCommand(tstring command, bool showUI, void* value) { return false; }

	/// <summary>
	/// Returns a collection of all <form> elements in the document
	/// </summary>
	/// <value>
	/// The forms.
	/// </value>
	HTMLCollection& Document::forms() { return HTMLCollection(); }

	/// <summary>
	/// Returns the current element that is displayed in fullscreen mode
	/// </summary>
	/// <value>
	/// The fullscreen element.
	/// </value>
	Element* Document::fullscreenElement() { return nullptr; }

	/// <summary>
	/// Returns a Boolean value indicating whether the document can be viewed in fullscreen mode
	/// </summary>
	/// <returns></returns>
	bool Document::fullscreenEnabled() { return false; }

	/// <summary>
	/// Returns the element that has the ID attribute with the specified value
	/// </summary>
	/// <param name="elementID">The element identifier.</param>
	/// <returns></returns>
	Element* document::getElementById(tstring elementID)
	{
		css_element_selector elem;
		css_attribute_selector attr;
		attr.val = elementID;
		attr.condition = select_equal;
		attr.attribute = _t("id");
		elem.m_attrs.push_back(attr);
		css_selector sel(elem);
		return m_root->select_one(sel).get();
	}

	/// <summary>
	/// Returns a NodeList containing all elements with the specified class name
	/// </summary>
	/// <param name="classname">The classname.</param>
	/// <returns></returns>
	NodeList document::getElementsByClassName(tstring classname) { return m_root->getElementsByClassName(classname); }

	/// <summary>
	/// Returns a NodeList containing all elements with a specified name
	/// </summary>
	/// <param name="name">The name.</param>
	/// <returns></returns>
	NodeList document::getElementsByName(tstring name)
	{
		css_element_selector elem;
		css_attribute_selector attr;
		attr.val = name;
		attr.condition = select_equal;
		attr.attribute = _t("name");
		elem.m_attrs.push_back(attr);
		css_selector sel(elem);
		return NodeList(m_root->select_all(sel));
	}

	/// <summary>
	/// Returns a NodeList containing all elements with the specified tag name
	/// </summary>
	/// <param name="tagname">The tagname.</param>
	/// <returns></returns>
	NodeList document::getElementsByTagName(tstring tagname) { return m_root->getElementsByTagName(tagname); }

	/// <summary>
	/// Returns a Boolean value indicating whether the document has focus
	/// </summary>
	/// <returns>
	///   <c>true</c> if this instance has focus; otherwise, <c>false</c>.
	/// </returns>
	bool Document::hasFocus() { return false; }

	/// <summary>
	/// Returns the <head> element of the document
	/// </summary>
	/// <value>
	/// The head.
	/// </value>
	Element* Document::head() { return nullptr; }

	/// <summary>
	///Returns a collection of all <img> elements in the document
	/// </summary>
	/// <value>
	/// The images.
	/// </value>
	HTMLCollection& Document::images() { return HTMLCollection(); }

	/// <summary>
	/// Returns the DOMImplementation object that handles this document
	/// </summary>
	/// <value>
	/// The implementation.
	/// </value>
	DocumentImplementation* Document::implementation() { return nullptr; }

	/// <summary>
	/// Imports a node from another document
	/// </summary>
	/// <param name="node">The node.</param>
	/// <param name="deep">if set to <c>true</c> [deep].</param>
	/// <returns></returns>
	Node* Document::importNode(Node* node, bool deep) { return nullptr; }

	/// <summary>
	/// Returns the encoding, character set, used for the document
	/// </summary>
	/// <value>
	/// The input encoding.
	/// </value>
	tstring Document::inputEncoding() { return nullptr; }

	/// <summary>
	/// Returns the date and time the document was last modified
	/// </summary>
	/// <value>
	/// The last modified.
	/// </value>
	int64_t Document::lastModified() { return 0; }

	/// <summary>
	/// Returns a collection of all <a> and <area> elements in the document that have a href attribute
	/// </summary>
	/// <value>
	/// The links.
	/// </value>
	HTMLCollection& Document::links() { return HTMLCollection(); }

	/// <summary>
	/// Removes empty Text nodes, and joins adjacent nodes
	/// </summary>
	void Document::normalize() { }

	/// <summary>
	/// Opens an HTML output stream to collect output from document.write()
	/// </summary>
	/// <param name="MIMEtype">The mim etype.</param>
	/// <param name="replace">The replace.</param>
	void Document::open(tstring MIMEtype, tstring replace) { }

	/// <summary>
	/// Returns the first element that matches a specified CSS selector(s) in the document
	/// </summary>
	/// <param name="selectors">The selectors.</param>
	/// <returns></returns>
	Element* Document::querySelector(tstring selectors) { return nullptr; }

	/// <summary>
	/// Returns a static NodeList containing all elements that matches a specified CSS selector(s) in the document
	/// </summary>
	/// <param name="selectors">The selectors.</param>
	/// <returns></returns>
	NodeList Document::querySelectorAll(tstring selectors) { return NodeList(); }

	/// <summary>
	/// Returns the (loading) status of the document
	/// </summary>
	/// <value>
	/// The state of the ready.
	/// </value>
	tstring Document::readyState() { return nullptr; }

	/// <summary>
	/// Returns the URL of the document that loaded the current document
	/// </summary>
	/// <value>
	/// The referrer.
	/// </value>
	tstring Document::referrer() { return nullptr; }

	/// <summary>
	/// Removes an event handler from the document (that has been attached with the addEventListener() method)
	/// </summary>
	/// <param name="event">The event.</param>
	/// <param name="function">The function.</param>
	/// <param name="useCapture">if set to <c>true</c> [use capture].</param>
	void Document::removeEventListener(tstring event, tstring function, bool useCapture) { }

	/// <summary>
	/// Renames the specified node
	/// </summary>
	/// <param name="node">The node.</param>
	/// <param name="namespaceURI">The namespace URI.</param>
	/// <param name="nodename">The nodename.</param>
	/// <returns></returns>
	Node* Document::renameNode(Node* node, tstring namespaceURI, tstring nodename) { return nullptr; }

	/// <summary>
	/// Returns a collection of <script> elements in the document
	/// </summary>
	/// <value>
	/// The scripts.
	/// </value>
	HTMLCollection& Document::scripts() { return HTMLCollection(); }

	/// <summary>
	/// Sets or returns whether error-checking is enforced or not
	/// </summary>
	/// <value>
	///   <c>true</c> if [strict error checking]; otherwise, <c>false</c>.
	/// </value>
	bool Document::strictErrorChecking() { return false; }
	void Document::strictErrorChecking(bool value) {}

	/// <summary>
	/// Sets or returns the title of the document
	/// </summary>
	/// <value>
	/// The title.
	/// </value>
	tstring Document::title() { return nullptr; }
	void Document::title(tstring value) { }

	/// <summary>
	/// Returns the full URL of the HTML document
	/// </summary>
	/// <value>
	/// The URL.
	/// </value>
	tstring Document::URL() { return nullptr; }

	/// <summary>
	/// Writes HTML expressions or JavaScript code to a document
	/// </summary>
	/// <param name="args">The arguments.</param>
	void Document::write(void** args) { }

	/// <summary>
	/// Same as write(), but adds a newline character after each statement
	/// </summary>
	/// <param name="args">The arguments.</param>
	void Document::writeln(void** args) { }
}