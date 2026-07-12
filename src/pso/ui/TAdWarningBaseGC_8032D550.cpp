#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdWarningBaseGC__sub_8032D550(s32 arg0);
M2C_UNK TObjFish__sub_803DA798(u32);
M2C_UNK TWindowSubComCard__sub_803DEECC(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);

extern u32 lbl_805D6D00;
extern f32 lbl_805DF7C0;

void TAdWarningBaseGC__sub_8032D550(s32 arg0) {
    if ((u32) lbl_805D6D00 != 0U) {
        TObjFish__sub_803DA798(lbl_805D6D00);
        TWindowSubStatusDisp__sub_803DEE6C(1);
        TWindowSubStatusDisp__sub_803DF160(0, -1);
        TWindowSubComCard__sub_803DEECC(arg0 + 0x1C, lbl_805DF7C0);
        TWindowSubStatusDisp__sub_803DEEAC();
    }
}

}
