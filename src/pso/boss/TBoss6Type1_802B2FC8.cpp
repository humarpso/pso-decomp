#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_hp_and_state__11TBoss6Type1FPv(void* p);
void update_charge__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B307C(void* p);
void set_phase_90__11TBoss6Type1FPv(void* p);
void update_timer__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B3178(void* p);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
int TBoss6Type1__sub_802B54F0(void*, void*);
int TBoss6Type1__sub_802B7E7C(void*);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
int TBoss6Type1__sub_802B9204(void*, void*);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_flag_on_threshold__11TBoss6Type1FPv(void *);

void init_hp_and_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 300; *(int*)((char*)p + 0x410) = 300; TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

void update_charge__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x410)), (s32)(M2C_FIELD(arg0, s32 *, 0x40C)));
    TOTrapAncient01__sub_80226578(0x40038F0F, arg0, arg0 + 0x38, 0, 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

void TBoss6Type1__sub_802B307C(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B9204(p, (void*)25); } }

void set_phase_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B7E7C((void*)(p)); TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

void update_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) - 0xF;
    if (temp_r0 >= temp_r4) {
        TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(temp_r0 - temp_r4), (s32)(0xF));
    }
    set_flag_on_threshold__11TBoss6Type1FPv(arg0);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B7E7C((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x414) = 1;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void TBoss6Type1__sub_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; TBoss6Type1__sub_802B54F0(p, (char*)p + 0x420); TBoss3Volopt__sub_8022675C((void*)231170, (void*)0, (void*)0, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

}
