#include "types.h"
#include "pso/misc/TUnk_804B2578.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

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
s32 reset_photon_effect__10TObjPlayerFv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 reset_state(void *);
extern RecoveredGlobal_80168C6C_lbl_804B2174 lbl_804B2174;
extern s32 lbl_804B2578[];
extern s32 TOHangceilingCave01__model_archive;
extern s32 turiten_singo_key_model_index;
extern s32 hanging_ceiling_motion_index;
u8 *init_base__27TOHangceilingCave01KeyQuickFPvii(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

int select_melee_contact_body__13TUnk_804B2578FPvf(void);
f32 receive_physical_attack__13TUnk_804B2578FPvf(void);
void apply_knockback_from_attacker__13TUnk_804B2578FPUc(void);
void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1);
void set_scale__13TUnk_804B2578Ff(void* p, f32 v);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_motion_object__13TUnk_804806E8Fs(void *, s32);

extern s32 lbl_804B2578[];

void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B2578;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_motion_object__13TUnk_804806E8Fs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80168C6C_lbl_804B2174_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2174) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80168C6C_lbl_804B2578_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2578) == 0x148 ? 1 : -1];
u8 *init_base__27TOHangceilingCave01KeyQuickFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r4;
    construct_actor_base__10TObjPlayerFPvPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80168C6C_lbl_804B2578 *)&lbl_804B2578).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((void *) (TOHangceilingCave01__model_archive), (void *) (turiten_singo_key_model_index));
    *(s32 *)((s8 *)arg0 + 0xF8) = get_bml_motion((void *) (TOHangceilingCave01__model_archive), (void *) (hanging_ceiling_motion_index));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B2174.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFv((void *) (arg0));
    reset_state((void *) (arg0));
    temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) | 0x1080);
    return arg0;
}

s32 TUnk_804B2578::select_melee_contact_body(void *, f32) { return 1; }

extern f32 lbl_805DB650;

f32 TUnk_804B2578::receive_physical_attack(void *, f32) {
    return lbl_805DB650;
}

void TUnk_804B2578::apply_knockback_from_attacker(u8 *) {  }

void TUnk_804B2578::set_scale(f32 v) { *(f32*)((char*)this + 0x338) = v; }

}
