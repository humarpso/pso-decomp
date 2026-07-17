#include "types.h"

extern "C" {

s32 get_cursor_pos__14TWindowSubItemFPv(void* p);
int is_flag_4_set__20TWindowSubStatusDispFPv(void* p);
int get_flag__20TWindowSubStatusDispFPv(void* p);

s32 get_cursor_pos__14TWindowSubItemFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
