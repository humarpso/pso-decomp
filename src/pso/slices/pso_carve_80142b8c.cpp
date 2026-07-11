#include "types.h"
struct E16 { u8 a[4]; s32 f4; u8 b[8]; };
struct E8  { u8 a[4]; s32 f4; };
extern "C" {
void fn_80142B8C(u8 *arg0, s32 arg1) {
    struct E16 *a = *(struct E16 **)(arg0 + 0xD8);
    s32 n = a[arg1].f4;
    struct E8 *b = *(struct E8 **)(arg0 + 0xDC);
    *(s32 *)(arg0 + 0xF8) = b[n].f4;
}
}
