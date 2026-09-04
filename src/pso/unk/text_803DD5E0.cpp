#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803DDD20(s32 arg0);
void TLobby__sub_803DDD40(s32 arg0, s32 arg1);
void TObjPlayer__sub_803DD5E0(s32 arg0);

extern s32 lbl_805D7788;

void TObjPlayer__sub_803DD5E0(s32 arg0) {
    lbl_805D7788 = arg0;
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

void TLobby__sub_803DDD20(s32 arg0) {
    lbl_805D77A4 = arg0;
    lbl_805D77A0 = arg0;
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

void TLobby__sub_803DDD40(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        lbl_805D77A0 += arg0;
        return;
    case 0:
        lbl_805D77A0 = lbl_805D77A4 + arg0;
        return;
    }
}

}
