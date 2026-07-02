#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D2CE4(void);
void TLobby__sub_802D2D20(void);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK fn_801DA2A4(s32);

extern s32 lbl_805D5580;
extern u16 lbl_805D6888;

void TLobby__sub_802D2CE4(void) {
    if (lbl_805D6888 & 0x400) {
        fn_801DA2A4(lbl_805D5580);
        lbl_805D6888 &= 0xFFFFFBFF;
    }
}

extern u32 lbl_805D6894;
extern u32 lbl_805D6898;
extern u32 lbl_805D689C;

void TLobby__sub_802D2D20(void) {
    if (((u32) lbl_805D6894 == 0U) && ((u32) lbl_805D6898 == 0U) && ((u32) lbl_805D689C == 0U)) {
        TLobby__sub_802D2D64();
    }
}

}
