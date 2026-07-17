#include "types.h"

extern "C" {

int is_flag_4_set__20TWindowSubStatusDispFPv(void* p);
int TWindowSubStatusDisp__sub_8024906C(void* p);
s32 get_cursor_pos__14TWindowSubItemFPv(void* p);

int is_flag_4_set__20TWindowSubStatusDispFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int TWindowSubStatusDisp__sub_8024906C(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
