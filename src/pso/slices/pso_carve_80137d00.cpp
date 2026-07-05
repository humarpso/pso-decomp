#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80073DB8(u32);
M2C_UNK TLobby__sub_80138858();
M2C_UNK fn_801DB0AC(s32, s32);
s32 TWindowSubComCard__sub_80265BF8(void*);
extern s32 lbl_805D5580;
extern u32 lbl_805D55E4;

void TLobby__sub_80137D00(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (TWindowSubComCard__sub_8007341C(lbl_805D55E4) != 0) {
            fn_801DB0AC(lbl_805D5580, temp_r31);
            TLobby__sub_80138858();
            return;
        }
        if (TWindowSubComCard__sub_80073DB8(lbl_805D55E4) != 0) {
            TLobby__sub_80138858();
        }
    } else {
        TLobby__sub_80138858();
    }
}

}
