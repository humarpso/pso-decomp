#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__22TWindowLoadItemTextureFv(u8 *arg0);
u32 TItemTexLoad__sub_8011D164(s32);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK fn_8026287C(void *);

void render__22TWindowLoadItemTextureFv(u8 *arg0) {
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, u8 *, 0x60) == 1) {
        M2C_FIELD(arg0, u32 *, 0x70) = TItemTexLoad__sub_8011D164(M2C_FIELD(arg0, s32 *, 0x6C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            fn_8026287C(arg0);
            M2C_FIELD(arg0, u8 *, 0x60) = 1U;
        }
    }
    temp_r31 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x64);
    if (M2C_FIELD(arg0, u8 *, 0x61) & 1) {
        TWindowSubComCard__sub_80245F98(arg0, temp_r31);
    }
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r31);
}

}
