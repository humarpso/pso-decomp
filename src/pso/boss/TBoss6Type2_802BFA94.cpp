#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BB768();
s32 get_phase__11TBoss6Type2FPv(void *);
s16 TBoss6Type2__sub_802BA394(void *);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
void TBoss6Type2__sub_802BFBE4(void* p);

void reset_state_timers__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4EC);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    TBoss6Type2__sub_802BB768();
}
void tick_timer_460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}
void select_attack_state__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (TBoss6Type2__sub_802BA9E4() != 0) {
            TBoss6Type2__sub_802BDDF8(arg0, 0xD);
            return;
        }
        if ((get_phase__11TBoss6Type2FPv(arg0) == 0xD) && (is_ready_to_attack__11TBoss6Type2FPv(arg0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x464) = TBoss6Type2__sub_802BA394(arg0);
            TBoss6Type2__sub_802BDDF8(arg0, 0x18);
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8(arg0, 0xE);
            return;
        }
        if (get_phase__11TBoss6Type2FPv(arg0) == 0xD) {
            M2C_FIELD(arg0, s32 *, 0x428) = TBoss6Type2__sub_802BD7EC(arg0);
            M2C_FIELD(arg0, s32 *, 0x430) = TBoss6Type2__sub_802BD76C(arg0);
            TBoss6Type2__sub_802BDDF8(arg0, 1);
            return;
        }
        TBoss6Type2__sub_802BDDF8(arg0, 2);
    }
}

}
