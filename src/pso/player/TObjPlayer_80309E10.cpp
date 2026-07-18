#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK set_type__22TPlyFollowParticleCtrlFPvs(void *, void *);
s32 obj_getField1c(void *);

void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1) {
    set_type__22TPlyFollowParticleCtrlFPvs((void *) (arg0), (void *) (obj_getField1c((void *) (arg1))));
}

}
