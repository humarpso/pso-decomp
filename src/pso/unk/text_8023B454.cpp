#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_8023B454 { f32 x, y, z; } Vec_8023B454;

typedef struct TTecSlicerTargets_8023B454 {
    u16 ids[10];
    s8 parts[10];
    s8 count;
    s8 idx;
} TTecSlicerTargets_8023B454;

typedef struct TObjPlayer_8023B454 {
    u8 pad0[0xA4];
    f32 (*bodies)[11];
} TObjPlayer_8023B454;

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8023B454 *, const Vec_8023B454 *);
TObjPlayer_8023B454 *resolve_hittable_target(int, int);
s32 fn_8023B454(TTecSlicerTargets_8023B454 *self, Vec_8023B454 *out_pos, u16 *out_id, s8 *out_part, f32 *out_f);
}

extern "C" {

s32 fn_8023B454(TTecSlicerTargets_8023B454 *self, Vec_8023B454 *out_pos, u16 *out_id, s8 *out_part, f32 *out_f) {
    TObjPlayer_8023B454 *hit;
    s32 found;
    if (out_pos == NULL) {
        goto fail;
    }
    while (self->idx < self->count && self->idx < 10) {
        found = 0;
        hit = resolve_hittable_target(self->ids[self->idx], self->parts[self->idx]);
        if (hit != NULL) {
            *out_id = self->ids[self->idx];
            *out_part = self->parts[self->idx];
            VecCopy__FP3VecPC3Vec(out_pos, (const Vec_8023B454 *) &hit->bodies[self->parts[self->idx]][7]);
            found = 1;
            *out_f = hit->bodies[self->parts[self->idx]][3];
        }
        self->idx++;
        if (found != 0) {
            return 1;
        }
    }
fail:
    *out_id = 0xFFFF;
    *out_part = 0;
    return 0;
}

}
