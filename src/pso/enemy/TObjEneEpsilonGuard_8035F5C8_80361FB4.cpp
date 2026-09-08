#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjEneEpsilonGuard__sub_80360948(void *, void *);
s32 update_fade__19TObjEneEpsilonGuardFPvi(void *, void *);
s32 TObjEneEpsilonGuard__sub_80360BF8(void *, void *);
s32 TObjEneEpsilonGuard__sub_80360D9C(void *, void *);
s32 TObjEneEpsilonGuard__sub_803610D0(void *, void *);
s32 action__19TObjEneEpsilonGuardFPvi(void *, void *);
s32 TObjEneEpsilonGuard__sub_80361508(void *, void *);
s32 TObjEneEpsilonGuard__sub_803616E4(void *, void *);
s32 TObjEneEpsilonGuard__sub_80361C70(void *, void *);
s32 TObjEneEpsilonGuard__sub_80361D4C(void *, void *);
void TObjEneEpsilonGuard__sub_803620B4(s32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TObjEneEpsilonGuard__sub_80361FE8(void);
void TObjEneEpsilonGuard__sub_80362038(void);
void TObjEneEpsilonGuard__sub_803620B0(void);
void request_state8__19TObjEneEpsilonGuardFPv(void *arg0);
void set_action_9__19TObjEneEpsilonGuardFPv(void* p);
void update_position__19TObjEneEpsilonGuardFPv(u8 *arg0);
void update_step__19TObjEneEpsilonGuardFPv(void* p);
int TObjEneDD__sub_800BBA18(void*, void*);
int TObjEneDD__vt86(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

void update_step__19TObjEneEpsilonGuardFPv(void* p) { TObjEneDD__vt86(p); update_position__19TObjEneEpsilonGuardFPv((u8 *)(p)); }
void TObjEneEpsilonGuard__sub_80361FE8(void) {  }

extern const f32 lbl_805E0214;

void update_position__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (lbl_805E0214 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (lbl_805E0214));
}

void TObjEneEpsilonGuard__sub_80362038(void) {  }
void request_state8__19TObjEneEpsilonGuardFPv(void *arg0) {
    s32 temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        if (!(temp_r4 & 2) && !(temp_r4 & 0x40)) {
            TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(8));
        }
    }
}
void set_action_9__19TObjEneEpsilonGuardFPv(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneEpsilonGuard__sub_803620B0(void) {  }
void TObjEneEpsilonGuard__sub_803620B4(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneEpsilonGuard__sub_80361D4C((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneEpsilonGuard__sub_80361C70((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneEpsilonGuard__sub_803616E4((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneEpsilonGuard__sub_80361508((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        action__19TObjEneEpsilonGuardFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneEpsilonGuard__sub_803610D0((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneEpsilonGuard__sub_80360D9C((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneEpsilonGuard__sub_80360BF8((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        update_fade__19TObjEneEpsilonGuardFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneEpsilonGuard__sub_80360948((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

}
