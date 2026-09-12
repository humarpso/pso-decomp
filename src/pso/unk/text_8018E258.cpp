#include "types.h"
#include "pso/object/TObjDoor.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
f32 TObjPlayer__sub_803E1A58(void *, void *);

s32 fn_8018E258(TObjDoor* arg0, s32 arg1, f32 farg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r29;
    s32 var_r29_2;

    switch (arg1) {
    case 1:
        var_r29 = 0;
loop_2:
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r29));
        if (temp_r3 != 0) {
            temp_r31 = TObjPlayer__sub_800196EC();
            if ((get_field_3e4__10TObjPlayerFPv((int) (temp_r3)) == temp_r31) && (TObjPlayer__sub_803E1A58(arg0->position, (void *) (temp_r3 + 0x38)) < farg0)) {
                return 0;
            }
        }
        var_r29 += 1;
        if (var_r29 >= 0xC) {
            return 1;
        }
        goto loop_2;
    case 0:
        var_r29_2 = 0;
loop_10:
        temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r29_2));
        if (temp_r3_2 != 0) {
            temp_r31_2 = TObjPlayer__sub_800196EC();
            if ((get_field_3e4__10TObjPlayerFPv((int) (temp_r3_2)) == temp_r31_2) && (TObjPlayer__sub_803E1A58(arg0->position, (void *) (temp_r3_2 + 0x38)) < farg0)) {
                return 1;
            }
        }
        var_r29_2 += 1;
        if (var_r29_2 >= 0xC) {
            return 0;
        }
        goto loop_10;
    default:
        return 0;
    }
}

}
