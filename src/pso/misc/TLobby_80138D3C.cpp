#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GLE_80138D3C { char pad[0x1c]; };
struct GBig_80138D3C { char pad[0x1da8]; GLE_80138D3C arr[1]; };

extern "C" {

void TLobby__sub_80138D3C(void);
M2C_UNK TLobby__sub_8013872C();
M2C_UNK TLobby__sub_80138858();
M2C_UNK TOBoss4Rock__sub_80147A80(s32);
s32 TWindowSubComCard__sub_80131C10(u32);
s32 TWindowSubComCard__sub_80131C34(u32);
M2C_UNK TWindowSubComCard__sub_80244A14(s32);
s32 fn_80131BC4(u32);
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(GBig_80138D3C *, GLE_80138D3C *, M2C_UNK *, s32, GBig_80138D3C *);

extern GBig_80138D3C *lbl_805D5580;
extern s32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern s32 lbl_805D5600;
extern M2C_UNK lbl_805DB0B0;

void TLobby__sub_80138D3C(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55F4 != 0U) {
        if (TWindowSubComCard__sub_80131C10(lbl_805D55F4) != 0) {
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            TLobby__sub_80138858();
            return;
        }
        if (TWindowSubComCard__sub_80131C34(lbl_805D55F4) != 0) {
            temp_r3 = fn_80131BC4(lbl_805D55F4);
            send_action__9TProtocolFR13GameListEntryPcPc(lbl_805D5580, &lbl_805D5580->arr[lbl_805D5600], &lbl_805DB0B0, temp_r3, lbl_805D5580);
            TOBoss4Rock__sub_80147A80(temp_r3);
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            TWindowSubComCard__sub_80244A14(lbl_805D55F0);
            lbl_805D55F0 = 0;
            TLobby__sub_8013872C();
        }
    }
}

}
