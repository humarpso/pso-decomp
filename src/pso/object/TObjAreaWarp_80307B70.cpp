#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 find_active_player__12TObjAreaWarpFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u16 obj_getField1c();

u16 find_active_player__12TObjAreaWarpFPv(void *arg0) {
    u32 temp_r31;
    s32 var_r30;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C) & M2C_FIELD(arg0, s32 *, 0x20);
        var_r30 = 0;
loop_2:
        if (!((temp_r31 >> var_r30) & 1) && (TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U)) {
            return (u16) obj_getField1c();
        }
        var_r30 += 1;
        if (var_r30 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0U;
}

}
