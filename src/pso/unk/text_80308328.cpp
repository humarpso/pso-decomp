#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32);
M2C_UNK TObjPlayer__sub_8011EB84(void *, void *, int, int);
void TObjPlayer__sub_80308368(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80308368(u8 *arg0) {
    M2C_UNK sp8;
    draw_icon__10TObjPlayerFPvii(arg0, 1, (s32) &sp8);
    TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0x188)), (int) (0));
}

}
