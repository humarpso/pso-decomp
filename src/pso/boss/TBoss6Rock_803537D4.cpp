#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0);
M2C_UNK TObjPlayer__sub_80020898(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
        TObjPlayer__sub_80020898((void *) (arg0 + 0x30), (void *) (arg3));
        M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
        M2C_FIELD(arg0, s32 *, 0x40) = arg5;
    }
}

}
