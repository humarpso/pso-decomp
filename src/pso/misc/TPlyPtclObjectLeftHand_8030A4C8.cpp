#include "types.h"
#include "pso/misc/TPlyFollowParticleCtrl.h"

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
void set_position_from__14TBoss4DarkFalzFPv(void *, void *);
void reset_photon_effect__10TObjPlayerFv(void *);
void initialize_linked_object_reference(void *, void *);
void construct_collider_proxy__10TObjPlayerFv(void *, int);
extern u8 lbl_804E7578[];
extern s32 __vt__22TPlyFollowParticleCtrl[];
extern s32 TPlyFollowParticleCtrl__class_name;
extern s32 tl_06;
Ctrl_8030A5B8 *TPlyFollowParticleCtrl__ct(Ctrl_8030A5B8 *self, u8 *arg1);
}

extern "C" {

void *TPlyPtclObjectLeftHand__ct(void *arg0, u8 * _w1);
void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1);
void unregister_object_by_id(void *);
u32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
void destroy_particle_controller__10TObjPlayerFs(void *, int);
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
        unregister_object_by_id(arg0);
        clear_obj_links(arg0);
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Ctrl_8030A5B8 *TPlyFollowParticleCtrl__ct(Ctrl_8030A5B8 *self, u8 *arg1) {
    construct_collider_proxy__10TObjPlayerFv(self, tl_06);
    self->vt = ((u8 *)&__vt__22TPlyFollowParticleCtrl);
    *(s32 *)self = TPlyFollowParticleCtrl__class_name;
    initialize_linked_object_reference(self, lbl_804E7578);
    reset_photon_effect__10TObjPlayerFv(self);
    self->link->flags &= 0xFFFFFFFE;
    self->s_ac = obj_getField1c(arg1);
    self->s_ae = 0xFFFF;
    set_position_from__14TBoss4DarkFalzFPv(self, arg1 + 0x74);
    return self;
}

}
