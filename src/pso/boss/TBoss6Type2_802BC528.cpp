#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_countdown__11TBoss6Type2FPv(void *arg0);
s32 is_active__14TBoss6PlotFalzFPv();
M2C_UNK update_attack_switch__11TBoss6Type2FPv(void *);
M2C_UNK play_phase_sound__11TBoss6Type2FPv(void *);
s32 is_active__11TBoss6Type2FPv();
M2C_UNK TBoss6Type2__sub_802BC65C(void *);
void *get_player_by_client_id(u16);

void update_countdown__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    void *temp_r31;

    if (is_active__11TBoss6Type2FPv() != 0) {
        update_attack_switch__11TBoss6Type2FPv(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x518) < -0x12C) {
            M2C_FIELD(arg0, s32 *, 0x518) = -0x12C;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x518) == -0x12C)) {
            temp_r31 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x55C));
            if ((is_active__14TBoss6PlotFalzFPv() != 0) && ((s16) M2C_FIELD(temp_r31, s16 *, 0x326) == 1)) {
                TBoss6Type2__sub_802BC65C(arg0);
            }
        }
    } else {
        if (temp_r0 == 0) {
            play_phase_sound__11TBoss6Type2FPv(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
    }
}

}
