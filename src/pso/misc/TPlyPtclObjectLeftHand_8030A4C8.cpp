#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPlyFollowParticleCtrl.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/player/TObjPlayer.h"

struct Link_8030A5B8 { u8 pad[0x18]; u32 flags; };

struct Ctrl_8030A5B8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1[0xa4 - 0x1c];
    Link_8030A5B8 *link;
    u8 pad2[4];
    s16 s_ac;
    u16 s_ae;
};

extern "C" {
s16 obj_getField1c(void *);
void initialize_linked_object_reference__13TUnk_804AF8A0FPv(void *, void *);
void construct_collider_proxy__13TUnk_804AF8A0Fv(void *, int);
extern u8 lbl_804E7578[];
extern s32 __vt__22TPlyFollowParticleCtrl[];
extern s32 TPlyFollowParticleCtrl__class_name;
extern s32 tl_06;
Ctrl_8030A5B8 *TPlyFollowParticleCtrl__ct(Ctrl_8030A5B8 *self, u8 *arg1);
}

extern "C" {

void *TPlyPtclObjectLeftHand__ct(void *arg0, u8 * _w1);
void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1);
void unregister_object_by_id__13TUnk_804AF8A0Fv(void *);
u32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
void clear_obj_links__13TUnk_804AF8A0Fv(void *);
s32 get_lifetime__22TPlyFollowParticleCtrlFv();
s32 queue_destruction__7TObjectFv(s32);

extern s32 __vt__22TPlyPtclObjectLeftHand[];
extern void *TPlyPtclObjectLeftHand__class_name;

void *TPlyPtclObjectLeftHand__ct(void *arg0, u8 * _w1) {
    TPlyFollowParticleCtrl__ct((Ctrl_8030A5B8 *)(arg0), (u8 *)(_w1));
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TPlyPtclObjectLeftHand;
    *(void **)((s8 *)arg0 + 0x0) = TPlyPtclObjectLeftHand__class_name;
    return arg0;
}

void TPlyFollowParticleCtrl::destroy_if_inactive(s32 arg0) {
    if (get_player_by_client_id((u16) get_lifetime__22TPlyFollowParticleCtrlFv()) == 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

extern s32 __vt__22TPlyFollowParticleCtrl[];

void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TPlyFollowParticleCtrl;
        unregister_object_by_id__13TUnk_804AF8A0Fv(arg0);
        clear_obj_links__13TUnk_804AF8A0Fv(arg0);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Ctrl_8030A5B8 *TPlyFollowParticleCtrl__ct(Ctrl_8030A5B8 *self, u8 *arg1) {
    construct_collider_proxy__13TUnk_804AF8A0Fv(self, tl_06);
    self->vt = ((u8 *)&__vt__22TPlyFollowParticleCtrl);
    *(s32 *)self = TPlyFollowParticleCtrl__class_name;
    initialize_linked_object_reference__13TUnk_804AF8A0FPv(self, lbl_804E7578);
    ((TObjPlayer *)self)->reset_photon_effect();
    self->link->flags &= 0xFFFFFFFE;
    self->s_ac = obj_getField1c(arg1);
    self->s_ae = 0xFFFF;
    ((TBoss4DarkFalz *)self)->set_position_from(arg1 + 0x74);
    return self;
}

}
