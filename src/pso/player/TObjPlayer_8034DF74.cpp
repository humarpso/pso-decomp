#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_4p_battle_ctrls__10TObjPlayerFv(void);
M2C_UNK send_item_pickup_request__10TObjPlayerFi();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

void update_4p_battle_ctrls__10TObjPlayerFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
            send_item_pickup_request__10TObjPlayerFi();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
