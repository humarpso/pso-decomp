#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TOSwitchAttack__sub_80087278(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80087638(u32, u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void fn_801C6280(void *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    u32 temp2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20) - 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    if (temp_r0 < 0) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C));
        if (temp_r3 != 0U) {
            temp2 = TOSwitchAttack__sub_80087278(temp_r3 + 0x2FC, 0x20, 0x10);
            if (temp2 != 0U) {
                TObjPlayer__sub_80087638(temp2, M2C_FIELD(arg0, u16 *, 0x1C));
            }
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

}
