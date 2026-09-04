#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlyPtclObjectLeftHand__ct(void *arg0);
void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1);
void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0);
void TObjPlayer__sub_80154A00(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void TPlyFollowParticleCtrl__ct(void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
s32 get_lifetime__22TPlyFollowParticleCtrlFPv();
M2C_UNK queue_destruction__7TObjectFv(s32);

extern M2C_UNK __vt__22TPlyPtclObjectLeftHand[];
extern void *lbl_805D40C4;

void *TPlyPtclObjectLeftHand__ct(void *arg0) {
    TPlyFollowParticleCtrl__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TPlyPtclObjectLeftHand;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40C4;
    return arg0;
}

void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((u16) get_lifetime__22TPlyFollowParticleCtrlFPv()) == 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__22TPlyFollowParticleCtrl[];

void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TPlyFollowParticleCtrl;
        TObjPlayer__sub_80154A00(arg0);
        clear_obj_links(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
