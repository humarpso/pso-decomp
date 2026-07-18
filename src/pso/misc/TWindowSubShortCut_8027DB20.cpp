#include "types.h"

extern "C" {

int is_shortcut_active__18TWindowSubShortCutFPv(void* p);

int is_shortcut_active__18TWindowSubShortCutFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x4; }

}
