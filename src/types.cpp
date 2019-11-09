#include "html.h"

int litehtml::Rect::left() { return static_cast<position*>(this)->left(); }
int litehtml::Rect::top() { return static_cast<position*>(this)->top(); }
int litehtml::Rect::right() { return static_cast<position*>(this)->right(); }
int litehtml::Rect::bottom() { return static_cast<position*>(this)->bottom(); }
int litehtml::Rect::x() { return static_cast<position*>(this)->x; }
int litehtml::Rect::y() { return static_cast<position*>(this)->y; }
int litehtml::Rect::width() { return static_cast<position*>(this)->width; }
int litehtml::Rect::height() { return static_cast<position*>(this)->height; }