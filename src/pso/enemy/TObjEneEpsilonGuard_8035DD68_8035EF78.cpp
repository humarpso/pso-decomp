#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK handle_message__19TObjEneEpsilonGuardFPvi(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E430(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E578(void *, s32);
M2C_UNK state_orbit__19TObjEneEpsilonGuardFPvi(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E8C0(void *, s32);
M2C_UNK handle_event__19TObjEneEpsilonGuardFPvi(void *, s32);
void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjEneEpsilonGuard__vt26(void);
void TObjEneEpsilonGuard__vt59(void);
void TObjEneEpsilonGuard__vt60(void);
void TObjEneEpsilonGuard__vt61(void);
s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0);
void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneEpsilonGuard__ct(void *, void *, void *, void *, void *, void *, void *);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
void *__nw__7TObjectFUl(int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 lbl_80479C88;

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f3;

    TObjEneEpsilon__sub_800B96A4();
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    return (s32) (lbl_80479C88 * get_ad_end_text_start__10TObjPlayerFv((f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0x394)), (f32) (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x39C)), (f32) (temp_f3)));
}

void TObjEneEpsilonGuard__vt59(void) {  }
void TObjEneEpsilonGuard__vt60(void) {  }
void TObjEneEpsilonGuard__vt61(void) {  }
void TObjEneEpsilonGuard__vt26(void) {  }

extern void *tl_04;

void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        handle_event__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    case 1:
        TObjEneEpsilonGuard__sub_8035E8C0((void *) (arg0), arg2);
        return;
    case 2:
        state_orbit__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    case 3:
        TObjEneEpsilonGuard__sub_8035E578((void *) (arg0), arg2);
        return;
    case 4:
        TObjEneEpsilonGuard__sub_8035E430((void *) (arg0), arg2);
        return;
    case 5:
        handle_message__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    }
}

void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneEpsilonGuard__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
