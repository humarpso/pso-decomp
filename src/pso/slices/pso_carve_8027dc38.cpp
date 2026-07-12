#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 *TWindowKeyBoardSoft__sub_80076E2C();
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TWindowSubComCard__sub_802661D4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026659C(M2C_UNK, s32, s32);
M2C_UNK TLobby__sub_80266E0C(s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
extern const f32 lbl_805DD6C0;

s32 fn_8027DC38(void *arg0) {
    s32 temp_r31;
    u32 *temp_r30;

    TLobby__sub_80266E0C(M2C_FIELD(arg0, s32 *, 0x2C));
    temp_r30 = TWindowKeyBoardSoft__sub_80076E2C();
    temp_r31 = TWindowSubComCard__sub_8026659C(TWindowSubComCard__sub_8026CBB8(0x74), 2, TWindowSubStatusDisp__sub_80077760(0x2C));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x7E), 6, 5);
    if ((u32) *temp_r30 != 0U) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x5A), 6, 9);
    } else {
        TWindowSubComCard__sub_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x5A), 6, 9);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD6C0);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
