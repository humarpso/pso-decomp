#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80309E10(s32 arg0, s32 arg1);
M2C_UNK TPlyFollowParticleCtrl__sub_8030A650(void *, void *);
s32 obj_getField1c(void *);

void TObjPlayer__sub_80309E10(s32 arg0, s32 arg1) {
    TPlyFollowParticleCtrl__sub_8030A650((void *) (arg0), (void *) (obj_getField1c((void *) (arg1))));
}

}
