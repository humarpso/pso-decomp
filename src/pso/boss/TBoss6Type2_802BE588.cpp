#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9930();
u16 TBoss6Type2__sub_802BA394(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BC23C();
s32 update_attack_target__11TBoss6Type2FPv(void* a0 = 0);
s32 TBoss6Type2__sub_802BDDF8(void * a0 = 0, s32 a1 = 0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);

void TBoss6Type2__sub_802BE588(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss6Type2__sub_802BDDF8(arg0, 0x23);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        TBoss6Type2__sub_802BDDF8(arg0, 0x1B);
        return;
    }
    TBoss6Type2__sub_802BDDF8(arg0, 0);
}
void TBoss6Type2__sub_802BE5DC(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}

}
