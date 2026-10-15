#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_80470790[];
extern char lbl_804707AC[];
extern const char *bm_obj_labo_infocapsule_model_names[2];
extern BmlResourceDescriptor TOCapsuleLabo__resource_descriptor;
extern const char *bm_obj_labo_infocapsule_motion_names[1];
}

struct VBase802AF370_802af370_802AF2C8 { char pad[0x18]; };
struct VObj802AF370_802af370_802AF2C8 : VBase802AF370_802af370_802AF2C8 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_802AF300_lbl_804DE440 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AF300_lbl_804DE440_size[sizeof(RecoveredGlobal_802AF300_lbl_804DE440) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_802AF4F4_lbl_804DE450 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo {
    s32 value;
    u8 remaining[0x40];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, s32);
extern u32 TOCapsuleLabo__model_resource;
extern s32 *capsule_labo_switch_flags_ptr;
void load_resources__13TOCapsuleLaboFv(void);
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(void *, s32);
s32 set_indexed_flags(void *, int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *);
s32 get_game_play_mode();
extern RecoveredGlobal_802AF4F4_lbl_804DE450 TOCapsuleLabo__collision_parts;
extern s32 __vt__13TOCapsuleLabo[];
extern s32 enable_v2_features;
extern s32 lbl_805D3E7C;
extern u32 TOCapsuleLabo__model_resource;
extern const f32 lbl_805DE1E8;
extern const f32 lbl_805DE1EC;
u8 *TOCapsuleLabo__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TOCapsuleLabo__vt13(void *arg0);
void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1);
void render__13TOCapsuleLaboFv(u8 *arg0);
void unload_static_data__13TOCapsuleLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 draw_ginja_object(int);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
s32 begin_effect_render__13TParticleCtrlFv();
void destroy_key_object__5TOKeyFPvs(void *, int);
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(int);

extern u32 TOCapsuleLabo__model_resource;

void unload_static_data__13TOCapsuleLaboFv(void) {
    if ((u32) TOCapsuleLabo__model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOCapsuleLabo__model_resource, 1);
        TOCapsuleLabo__model_resource = 0U;
    }
}

extern s32 *capsule_labo_switch_flags_ptr;

void load_resources__13TOCapsuleLaboFv(void) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r3_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TOCapsuleLabo__resource_descriptor, 0, 0, 0));
    }
    (*(u8 * *)&TOCapsuleLabo__model_resource) = (unsigned char *) ((void *) var_r0);
    temp_r3_2 = get_bml_model((void *) var_r0, 0);
    if (temp_r3_2 != 0) {
        (*(s32 *)&capsule_labo_switch_flags_ptr) = count_linked_switches__23TObjSeabedSuisoBrakableFUii(temp_r3_2, 3);
    }
}

void render__13TOCapsuleLaboFv(u8 *arg0) {
    s32 temp_r31_3;
    u8 *temp_r31;
    u8 *temp_r31_2;

    *(s32 *)((s8 *)arg0 + 0xE0) = ((VObj802AF370_802af370_802AF2C8 *) arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE0) == 1) {
        set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xCC) == 1) {
            if ((s32 *) capsule_labo_switch_flags_ptr != NULL) {
                *capsule_labo_switch_flags_ptr &= 0xFFFFFFF7;
            }
        } else if ((s32 *) capsule_labo_switch_flags_ptr != NULL) {
            *capsule_labo_switch_flags_ptr |= 8;
        }
        temp_r31 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x34));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
        temp_r31_2 = (unsigned char *) (*(void **)((s8 *)temp_r31 + 0x2C));
        push_matrix();
        post_translate_matrix((void *) (temp_r31_2 + 8));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xE4)));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = *(s32 *)((s8 *)temp_r31_2 + 0x2C);
        begin_effect_render__13TParticleCtrlFv();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        draw_ginja_object((int) (temp_r31_3));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
    }
}

void TOCapsuleLabo__vt13(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0xE4) = (s32) (*(s32 *)((s8 *)arg0 + 0xE4) + 0x222);
}

extern s32 __vt__13TOCapsuleLabo[];

void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TOCapsuleLabo;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802AF4F4_lbl_804DE450_size[sizeof(RecoveredGlobal_802AF4F4_lbl_804DE450) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo_size[sizeof(RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo) == 0x44 ? 1 : -1];
u8 *TOCapsuleLabo__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init__5TOKeyFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo *)&__vt__13TOCapsuleLabo).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3E7C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((void *)((int) ((*(s32 *)&TOCapsuleLabo__model_resource))), (s32)((int) (0)));
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOCapsuleLabo__model_resource)), (int) (0));
    init_collision_body_parts((void *) (arg0), (void *) (&TOCapsuleLabo__collision_parts.value), (int) (1));
    set_indexed_flags((void *) (arg0), (int) (0), (int) (0x1288));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DE1E8;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DE1EC;
    *(s32 *)((s8 *)arg0 + 0xE4) = 0;
    if (((s32) enable_v2_features == 1) && (get_game_play_mode() == 1)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    if (is_split_screen() == 1) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_obj_labo_infocapsule_model_names[2] = { lbl_80470790, NULL };
BmlResourceDescriptor TOCapsuleLabo__resource_descriptor = { lbl_804707AC, bm_obj_labo_infocapsule_model_names, bm_obj_labo_infocapsule_motion_names, 1, 0 };
__declspec(section ".sdata") const char *bm_obj_labo_infocapsule_motion_names[1] = { NULL };
}
