#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

    extern unsigned char lbl_805D4EE4;
void fn_80084744(void) { lbl_805D4EE4 = (lbl_805D4EE4 & 0xfffffffb); }

    extern unsigned char lbl_805D4EE4;
void fn_80084754(void) { lbl_805D4EE4 = (lbl_805D4EE4 | 0x4); }

    extern unsigned char lbl_805D4EE4;
void fn_80084764(void) { lbl_805D4EE4 = (lbl_805D4EE4 & 0xffffffef); }

extern u8 lbl_805D4EE4;

s32 fn_80084774(void) {
    return ((u8) lbl_805D4EE4 >> 4U) & 1;
}

    extern unsigned char lbl_805D4EE4;
void fn_80084780(void) { lbl_805D4EE4 = (lbl_805D4EE4 | 0x1); }

}
