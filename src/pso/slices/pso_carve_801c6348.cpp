#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TOSwitchAttack__sub_80087278(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80087638(u32, u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __ct__7TObjectFP7TObject();
extern M2C_UNK lbl_804C3FC0[];

void *fn_801C6348(void *arg0, u16 arg1, u16 arg2) {
    u32 temp_r3;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FC0;
    M2C_FIELD(arg0, u16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C));
    if (temp_r3 != 0U) {
        temp_r3 = TOSwitchAttack__sub_80087278(temp_r3 + 0x2FC, 0x23, 0x10);
        if (temp_r3 != 0U) {
            TObjPlayer__sub_80087638(temp_r3, M2C_FIELD(arg0, u16 *, 0x1C));
        }
    }
    return arg0;
}

}
