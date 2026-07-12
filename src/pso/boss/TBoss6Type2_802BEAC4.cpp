#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BD014(void *, int);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 check_target__11TBoss6Type2FPv(void *);
s32 is_target_valid__11TBoss6Type2FPv(void *);

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;

    TOTrapAncient01__sub_80226578((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        if (check_target__11TBoss6Type2FPv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2FPv((void *) (arg0)) == 0) {
                TBoss3Volopt__sub_8022675C((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, u16 *, 0x55C)));
            if (temp_r3 != 0U) {
                TObjEneDellBiter__sub_80087350((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        TBoss6Type2__sub_802BD014((void *) (arg0), (int) (0x1B));
    }
}

}
