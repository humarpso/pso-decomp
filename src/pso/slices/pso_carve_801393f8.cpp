#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80073DB8(u32);
M2C_UNK TLobby__sub_801381D0();
M2C_UNK TLobby__sub_80138244();
M2C_UNK TLobby__sub_801382F0();
M2C_UNK TLobby__sub_80138858();
s32 TWindowSubComCard__sub_80265BF8(void*);
extern u32 lbl_805D55E4;

void TLobby__sub_801393F8(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (TWindowSubComCard__sub_8007341C(lbl_805D55E4) != 0) {
            switch (temp_r31) {
            case 0:
                TLobby__sub_801382F0();
                return;
            case 1:
                TLobby__sub_80138244();
                return;
            case 2:
                TLobby__sub_801381D0();
                return;
            }
        } else if (TWindowSubComCard__sub_80073DB8(lbl_805D55E4) != 0) {
            TLobby__sub_80138858();
        }
    } else {
        TLobby__sub_80138858();
    }
}

}
