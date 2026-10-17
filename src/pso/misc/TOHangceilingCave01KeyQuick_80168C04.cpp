#include "types.h"
#include "pso/misc/TOHangceilingCave01.h"
#include "pso/misc/TOHangceilingCave01KeyQuick.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/misc/TUnk_804B2578.h"

struct RecoveredGlobal_80168C6C_lbl_804B2174 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80168C6C_lbl_804B2578 {
    s32 value;
    u8 remaining[0x144];
};

extern "C" {
s32 construct_actor_base__10TObjPlayerFPvPv(void *);
s32 get_bml_motion(void *, void *);
s32 get_bml_model(void *, void *);
s32 init_collision_body_parts(void *, void *, int);
extern RecoveredGlobal_80168C6C_lbl_804B2174 lbl_804B2174;
extern s32 lbl_804B2578[];
extern s32 TOHangceilingCave01__model_archive;
extern s32 turiten_singo_key_model_index;
extern s32 hanging_ceiling_motion_index;
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);

void *TOHangceilingCave01KeyQuick::destroy_hanging_object(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B2578;
        ((TUnk_804AF8A0 *)this)->unregister_object_by_id();
        free_collision_body_parts(this);
        ((TUnk_804806E8 *)this)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

typedef char RecoveredGlobal_80168C6C_lbl_804B2174_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2174) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80168C6C_lbl_804B2578_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2578) == 0x148 ? 1 : -1];
u8 *TOHangceilingCave01KeyQuick::init_base(s32 arg1, s32 arg2) {
    u8 *temp_r4;
    construct_actor_base__10TObjPlayerFPvPv((void *) (((u8 *)this)));
    *(s32 **)((s8 *)((u8 *)this) + 0x18) = &(*(RecoveredGlobal_80168C6C_lbl_804B2578 *)&lbl_804B2578).value;
    this->apply_object_set_data((void *)arg2);
    *(s32 *)&this->model = get_bml_model((void *) (TOHangceilingCave01__model_archive), (void *) (turiten_singo_key_model_index));
    *(s32 *)&this->unknownF8 = get_bml_motion((void *) (TOHangceilingCave01__model_archive), (void *) (hanging_ceiling_motion_index));
    init_collision_body_parts((void *) (((u8 *)this)), (void *) (&lbl_804B2174.value), 1);
    ((TUnk_804AF8A0 *)((u8 *)this))->refresh_collision_body_centers();
    ((TObjPlayer *)((u8 *)this))->reset_photon_effect();
    reset_state((((u8 *)this)));
    temp_r4 = (u8 *)(*(u8 * *)&this->m_a4);
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) | 0x1080);
    return ((u8 *)this);
}

s32 TUnk_804B2578::select_melee_contact_body(void *, f32) { return 1; }

extern f32 lbl_805DB650;

f32 TUnk_804B2578::receive_physical_attack(void *, f32) {
    return lbl_805DB650;
}

void TUnk_804B2578::apply_knockback_from_attacker(u8 *) {  }

void TUnk_804B2578::set_scale(f32 v) { this->m_338 = v; }

}
