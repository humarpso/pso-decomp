#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 get_lifetime__22TPlyFollowParticleCtrlFPv();
M2C_UNK queue_destruction__7TObjectFv(s32);

void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((u16) get_lifetime__22TPlyFollowParticleCtrlFPv()) == 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
