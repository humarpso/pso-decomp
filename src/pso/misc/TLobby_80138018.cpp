#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80138018(void);
extern void TLobby__sub_8013703C(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80244A14(s32);
M2C_UNK fn_801DB760(void *);

extern void *lbl_805D5580;
extern s32 lbl_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void TLobby__sub_80138018(void) {
    TLobby__sub_8013990C(6);
    TWindowSubComCard__sub_80244A14(lbl_805D55E0);
    lbl_805D55E0 = 0;
    TWindowSubComCard__sub_80244A14(lbl_805D55E4);
    lbl_805D55E4 = 0;
    M2C_FIELD(lbl_805D5580, void **, 0xBBE4) = (void *)TLobby__sub_8013703C;
    fn_801DB760(lbl_805D5580);
    lbl_805D5594 = 8;
}

}
