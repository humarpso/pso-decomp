#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 OSCreateHeap(int, int);
M2C_UNK LCEnable();
extern s32 lbl_805D7724;
extern s32 lbl_805D7728;
extern s32 lbl_805D7738;
extern s32 lbl_805D773C;
extern s32 lbl_805D7740;
extern s32 lbl_805D7750;
extern s32 lbl_805D7754;

void init_locked_cache_heap(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    LCEnable();
    lbl_805D7740 = M2C_FIELD(arg0, s32 *, 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D773C = temp_r0;
    lbl_805D7738 = temp_r0;
    lbl_805D7728 = M2C_FIELD(arg0, s32 *, 0x10);
    lbl_805D7724 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x18);
    lbl_805D7754 = OSCreateHeap((int) (temp_r3), (int) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x1C)));
    lbl_805D7750 = M2C_FIELD(arg0, s32 *, 0x1C);
}

}
