#include "types.h"

extern "C" {

int spawn_window__9TWindowDDFv(void);
s32 TWindowDD__sub_80342218(void* p);

s32 TWindowDD__sub_80342218(void* p) { return *(s32*)((char*)p + 0x68); }
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x68) = (*(int*)((char*)a0 + 0x68) + a1); *(int*)((char*)a0 + 0x8c) = 1; spawn_window__9TWindowDDFv(); }

}
