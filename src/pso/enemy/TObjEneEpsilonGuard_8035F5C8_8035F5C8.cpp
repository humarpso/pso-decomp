#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneEpsilonGuard__sub_8035F950(void* p);
int TObjEneEpsilonGuard__sub_8035F95C(void* p);
int TObjEneEpsilonGuard__sub_8035F968(void);
void tick_stun_timer__19TObjEneEpsilonGuardFPv(void *arg0);
void tick_timer_set_flag__19TObjEneEpsilonGuardFPv(void *arg0);

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
