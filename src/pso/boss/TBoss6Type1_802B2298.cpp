#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_ready__11TBoss6Type1FPv(void *arg0);
void set_phase_555__11TBoss6Type1FPv(void* p);
void update_countdown__11TBoss6Type1FPv(void *arg0);
void update_state__11TBoss6Type1FPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AC17C();
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
s32 TBoss6Type1__sub_802B5D9C();
int TBoss6Type1__sub_802B6504(void*);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B8E1C(void *);
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *);

void update_if_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) || (TBoss6Type1__sub_802B5D9C() != 0)) {
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

void set_phase_555__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 555; *(int*)((char*)p + 0x410) = 555; TBoss6Type1__sub_802B6504(p); TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); TBoss6Type1__sub_802B4BA8(p, (void*)3); }

void update_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

void update_state__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6PlotFalz__sub_802AC17C() != 0) {
            TBoss6Type1__sub_802B8E1C(arg0);
            return;
        }
        if (is_field3F8_over_0x20__11TBoss6Type1FPv(arg0) != 0) {
            TBoss6Type1__sub_802B9204(arg0, 0x25);
            return;
        }
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

}
