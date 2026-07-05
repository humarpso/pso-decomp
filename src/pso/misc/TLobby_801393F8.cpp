#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801393F8(void);
void TLobby__sub_80139498(void);
M2C_UNK TLobby__sub_80137D7C();
M2C_UNK TLobby__sub_80137FEC();
M2C_UNK TLobby__sub_80138140();
M2C_UNK TLobby__sub_801381D0();
M2C_UNK TLobby__sub_80138244();
M2C_UNK TLobby__sub_801382F0();
M2C_UNK TLobby__sub_80138354();
M2C_UNK TLobby__sub_80138858();
s32 TWindowSubComCard__sub_8007341C(void*);
s32 TWindowSubComCard__sub_80073DB8(u32);
s32 TWindowSubComCard__sub_80265BF8(void*);

extern u32 lbl_805D55E4;

void TLobby__sub_801393F8(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)((void*)lbl_805D55E4));
        if (TWindowSubComCard__sub_8007341C((void*)(lbl_805D55E4)) != 0) {
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

extern u32 lbl_805D55E0;

void TLobby__sub_80139498(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E0 != 0U) {
        if (TWindowSubComCard__sub_8007341C((void*)((void*)lbl_805D55E0)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8((void*)(lbl_805D55E0));
            switch (temp_r3) {
            case 0:
                TLobby__sub_80138354();
                return;
            case 1:
                TLobby__sub_80138140();
                return;
            case 2:
                TLobby__sub_80137FEC();
                return;
            case 3:
                TLobby__sub_80137D7C();
                return;
            }
        } else if (TWindowSubComCard__sub_80073DB8(lbl_805D55E0) != 0) {
            TLobby__sub_80138858();
        }
    } else {
        TLobby__sub_80138858();
    }
}

}
