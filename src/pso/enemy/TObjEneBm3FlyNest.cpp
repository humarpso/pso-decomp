#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
}

extern "C" {

int TObjEneBm3FlyNest__sub_800B3ADC(void);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void TObjEneBm3FlyNest__sub_800B3CBC(void);
int TObjEneBm3FlyNest__sub_800B4158(void);
void copy_pos__17TObjEneBm3FlyNestFPv(void* p);
void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p);
void init_params__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int VecCopy__FP3VecPC3Vec(void*, void*);
s32 check_v2_mode__9TObjEneDDFv();

void init_params__17TObjEneBm3FlyNestFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x390) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x390) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) M2C_FIELD(arg0, f32 *, 0x35C);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
        return;
    }
    if (temp_r0_2 > 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0x1E;
    }
}

s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B8) > 0;
}

int TObjEneBm3FlyNest__sub_800B3ADC(void) { return 0; }

void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p) { TObjEneDD__sub_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }
void copy_pos__17TObjEneBm3FlyNestFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneBm3FlyNest__sub_800B3BE8(void) {  }
void update_state__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) && (check_v2_mode__9TObjEneDDFv() != 0)) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 == 4) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    if (temp_r0 != 7) {
        TObjEneDD__sub_800BBA18(arg0, 7);
    }
}
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8) && (temp_r0 != 4)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 8);
    }
}
void TObjEneBm3FlyNest__sub_800B3CBC(void) {  }

    extern int lbl_805D5108;
int TObjEneBm3FlyNest__sub_800B4158(void) {  return lbl_805D5108; }

}
