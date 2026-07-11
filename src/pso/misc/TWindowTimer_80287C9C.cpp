#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TWindowChallengeResult__sub_80228DB4(s32, M2C_UNK);
M2C_UNK TWindowHelpItem__sub_8025A9B4(s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(s32, s32, M2C_UNK);
s32 TLobby__sub_8001DC24();
M2C_UNK fn_80229080(M2C_UNK *);

extern M2C_UNK lbl_8044FCE0[];
extern M2C_UNK lbl_805DD884;

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    TWindowSubStatusDisp__sub_802290E0();
    fn_80229080(&lbl_805DD884);
    TWindowChallengeResult__sub_80228DB4(arg1, 3);
    fn_80229080(lbl_8044FCE0);
    TWindowChallengeResult__sub_80228DB4(arg2, 3);
    TWindowSubStatusDisp__sub_8025AC50(temp_r31, TLobby__sub_8001DC24(), 0x20);
    TWindowHelpItem__sub_8025A9B4(temp_r31);
}

}
