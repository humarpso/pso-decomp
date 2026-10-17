#include "types.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"

s32 TWindowSubItem::get_cursor_pos() { return *(s32*)((char*)this + 0x18); }
