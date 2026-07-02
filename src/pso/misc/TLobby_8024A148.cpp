#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8024A148(void);
s32 TWindowSubComCard__sub_80202990(M2C_UNK);
M2C_UNK fn_80077798(s32, s32 *);
s32 fn_8013A324(s32);
M2C_UNK fn_801DB244(s32, s32 *);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5580;

void TLobby__sub_8024A148(void) {
    s32 sp8[5];
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_80202990(0xFFFF);
    sp8[0] = fn_8013A324(lbl_805D53A0) ? 1 : 0;
    fn_80077798(temp_r31 + 0x22EC, sp8);
    fn_801DB244(lbl_805D5580, sp8);
}

}
