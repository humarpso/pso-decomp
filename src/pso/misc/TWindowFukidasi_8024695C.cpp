#include "types.h"

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
int get_visible_flag__15TWindowFukidasiFPv(void* p);
int is_bit10_set__15TWindowFukidasiFPv(void* p);

int TWindowFukidasi__sub_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }

}
