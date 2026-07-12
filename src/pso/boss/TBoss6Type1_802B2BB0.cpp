#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__11TBoss6Type1FPv(void *arg0);
void update_phase__11TBoss6Type1FPv(void *arg0);
void trigger_falz_phase__11TBoss6Type1FPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AC17C();
void TBoss6Type1__sub_802B4B64(void *, int);
void TBoss6Type1__sub_802B4BA8(void *, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
void TBoss6Type1__sub_802B683C(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B8E1C(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK lbl_80470C8C[];

void init_params__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B683C(arg0);
    M2C_FIELD(arg0, u32 *, 0x40C) = 300;
    M2C_FIELD(arg0, u32 *, 0x410) = 300;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1056), lbl_80470C8C);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

void update_phase__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if ((temp_r0 < 0) && (TBoss6PlotFalz__sub_802AC17C() == 0)) {
        TBoss6Type1__sub_802B865C(arg0, 0x1D);
    }
}

void trigger_falz_phase__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) && (TBoss6PlotFalz__sub_802AC17C() != 0)) {
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

}
