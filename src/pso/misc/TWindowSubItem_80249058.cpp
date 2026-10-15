#include "types.h"
#include "pso/misc/TWindowSubItem.h"

extern "C" {

int is_flag_4_set__20TWindowSubStatusDispFv(void* p);
int get_flag__20TWindowSubStatusDispFv(void* p);

s32 TWindowSubItem::get_cursor_pos() { return *(s32*)((char*)this + 0x18); }

}
