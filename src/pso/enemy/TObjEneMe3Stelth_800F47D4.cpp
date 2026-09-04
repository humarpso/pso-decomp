#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0);
int select_and_apply_target__16TObjEneMe3StelthFPv(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x3F0) >= 1);
}

int select_and_apply_target__16TObjEneMe3StelthFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

}
