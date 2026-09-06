#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 TObjPlayer__sub_80014108(void *, void *, f32);
void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, u32, s32);
extern const f32 lbl_805E0208;
f32 TObjEneEpsilonGuard__sub_8035F720(u8 *arg0, u8 *arg1, f32 farg0);
}

extern "C" {

int TObjEneEpsilonGuard__sub_8035F950(void* p);
int TObjEneEpsilonGuard__sub_8035F95C(void* p);
int TObjEneEpsilonGuard__sub_8035F968(void);
void tick_stun_timer__19TObjEneEpsilonGuardFPv(void *arg0);
void tick_timer_set_flag__19TObjEneEpsilonGuardFPv(void *arg0);

f32 TObjEneEpsilonGuard__sub_8035F720(u8 *arg0, u8 *arg1, f32 farg0) {
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
    if (!(temp_r5 & 2) && !(temp_r5 & 0x40)) {
        return TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    try_apply_damage__19TObjEneEpsilonGuardFPvUii(arg0, (u32) (arg0 + 0x2FC), 0);
    return lbl_805E0208;
}

int TObjEneEpsilonGuard__sub_8035F950(void* p) { return (*(u32*)((char*)p + 0x438) >> 11) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F95C(void* p) { return (*(u32*)((char*)p + 0x438) >> 5) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F968(void) { return 0; }

void tick_stun_timer__19TObjEneEpsilonGuardFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x444) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 4);
    }
}

void tick_timer_set_flag__19TObjEneEpsilonGuardFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x440) = (s32) (M2C_FIELD(arg0, s32 *, 0x440) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x440) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 8);
    }
}

}
