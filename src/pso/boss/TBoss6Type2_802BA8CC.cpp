#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct T2_802BA9E4 { u8 pad0[0x38]; u8 f38[0x438]; s32 f470; };

struct Boss_802BA944 { u8 pad[0x4BC]; u32 f4BC; };

extern "C" {
f32 TBoss6PlotFalz__sub_802AB684(void *);
extern const f32 lbl_805DE444;
s32 TBoss6Type2__sub_802BA9E4(T2_802BA9E4 *arg0);
s32 get_hit_count__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BD68C(void *, int, int);
extern s32 lbl_80471350[];
s32 TBoss6Type2__sub_802BA944(Boss_802BA944 *o);
}

extern "C" {

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv();
s32 get_phase__14TBoss6PlotFalzFv();

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if (calc_field4f0_delta__11TBoss6Type2FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
        return 1;
    }
    if ((get_phase__14TBoss6PlotFalzFv() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x420) >= 8)) {
        return 1;
    }
    return 0;
}

s32 TBoss6Type2__sub_802BA944(Boss_802BA944 *o) {
    s32 i;
    if (TBoss6Type2__sub_802BD68C(o, 0xE, 3) != 0) {
        return 0;
    }
    i = 0;
    do {
        if (TBoss6Type2__sub_802BD68C(o, lbl_80471350[i], 2) != 0) {
            return 0;
        }
        i++;
    } while (i < 4);
    return (s32)o->f4BC <= get_hit_count__11TBoss6Type2FPv(o) ? 1 : 0;
}

s32 TBoss6Type2__sub_802BA9E4(T2_802BA9E4 *arg0) {
    if (arg0->f470 >= 3) {
        return 1;
    }
    return TBoss6PlotFalz__sub_802AB684(arg0->f38) >= lbl_805DE444;
}

}
