#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
void clear_attack_receipts(void *);
int transition_enemy_state(void*, void*);
void TObjEneMe3Stelth__vt60(u8 *arg0);
}

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__sub_800F4FC8(void);

void TObjEneMe3Stelth__vt60(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 1) {
        clear_attack_receipts(arg0);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 1) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3E0))) {
            transition_enemy_state((void*)(arg0), (void*)(0x12));
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xE) {
        transition_enemy_state((void*)(arg0), (void*)(0xE));
    }
}

}
