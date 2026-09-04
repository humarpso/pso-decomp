#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3Stelth__sub_800F5864(u8 *arg0, s32 arg1);
void TObjEneMe3Stelth__sub_800F5874(u8 *arg0, s32 arg1);
int draw_model__16TObjEneMe3StelthFPv(void* p);
int draw_model__12TObjNpcEnemyFPv(void*);

void TObjEneMe3Stelth__sub_800F5864(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x11C) = (s16) (M2C_FIELD(arg0, s16 *, 0x11C) & ~arg1);
}

void TObjEneMe3Stelth__sub_800F5874(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x11C) = (s16) (M2C_FIELD(arg0, s16 *, 0x11C) | arg1);
}

int draw_model__16TObjEneMe3StelthFPv(void* p) { return draw_model__12TObjNpcEnemyFPv(p); }

}
