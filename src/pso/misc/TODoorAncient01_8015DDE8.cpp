#include "types.h"

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual s32 m17();
};

struct RecoveredGlobal_8016BF68_lbl_80441B4C {
    s32 value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016C010_lbl_80441B4C {
    s32 value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016BC84_lbl_80441ACC {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8016BC84_lbl_804B2B30 {
    s32 value;
    u8 remaining[0xC];
};

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32 m17();
};

struct RecoveredGlobal_8015E188_lbl_804B0D68 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015E188___vt__15TODoorAncient01 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 is_in_view_depth(void *, f32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_ginja_model(int);
s32 draw_ginja_model_with_motion(void *, int, f32);
extern void *TODoorAncient01__texture_lists;
extern const f32 lbl_805DB3E8;
void render__15TODoorAncient01Fv(u8 *arg0);
u8 *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_804409EC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 bm_fe_obj_o_door01l_resource_descriptor;
extern u32 TODoorAncient01__shared_resource;
extern void *TODoorAncient01__texture_lists;
void load_assets__15TODoorAncient01Fv(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8015E188_lbl_804B0D68 TODoorAncient01__collision_body;
extern s32 __vt__15TODoorAncient01[];
extern s32 lbl_805D2F20;
extern u32 TODoorAncient01__shared_resource;
extern void *TODoorAncient01__texture_lists;
extern const f32 lbl_805DB3E8;
extern const f32 lbl_805DB3EC;
u8 *TODoorAncient01__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TODoorAncient01__vt13(u8 *arg0);
void TODoorAncient01__vt15(u8 *arg0);
void *__dt__15TODoorAncient01Fv(void *arg0, s16 arg1);
void *create__15TODoorAncient01FPv(void *arg0);
void free_statics__15TODoorAncient01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
s32 destroy_ancient_door_base__15TODoorAncient01FPvs(void *, s32);
s32 free__11TOBoss4RockFUi(void*);
s32 free_if_valid__10TObjPlayerFi(s32);
s32 set_indexed_flags(void *, s32, s32);

extern const f32 lbl_805DB3E0;

void TODoorAncient01__vt15(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0xD0) & 1) || (is_any_player_within_radius_xz(lbl_805DB3E0) == 0)) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DB3E4;

void TODoorAncient01__vt13(u8 *arg0) {
    if ((*(s32 *)((s8 *)arg0 + 0xD0) & 1) && (is_any_player_within_radius_xz(lbl_805DB3E4) != 0)) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void render__15TODoorAncient01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    if ((((VObj *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) && (is_in_view_depth((void *) (arg0), (f32) (lbl_805DB3E8)) != 0)) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)(*(s32 *)&TODoorAncient01__texture_lists) + ((*(s32 *)((s8 *)arg0 + 0xD0) * 4) & 4))));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xAC) == 0) {
            temp_r31 = *(u8 **)((s8 *)arg0 + 0x34);
            post_translate_matrix((void *) (temp_r31 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
            temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_2 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
            pop_matrix();
            begin_effect_render__13TParticleCtrlFv();
            temp_r31_3 = *(u8 **)((s8 *)temp_r31_2 + 0x30);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_3 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
            pop_matrix();
            temp_r31_4 = *(u8 **)((s8 *)temp_r31_3 + 0x30);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_4 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_4 + 4)));
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        } else {
            draw_ginja_model_with_motion((void *) (*(u8 **)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
        }
        pop_matrix();
    }
}

void *create__15TODoorAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TODoorAncient01__shared_resource;
extern void *TODoorAncient01__texture_lists;

void free_statics__15TODoorAncient01Fv(void) {
    if ((void *) TODoorAncient01__texture_lists != NULL) {
        free_if_valid__10TObjPlayerFi(*(s32 *)((s8 *)TODoorAncient01__texture_lists + 4));
        if ((void *) TODoorAncient01__texture_lists != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient01__texture_lists);
            TODoorAncient01__texture_lists = NULL;
        }
    }
    if ((u32) TODoorAncient01__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorAncient01__shared_resource, 1);
        TODoorAncient01__shared_resource = 0U;
    }
}

extern s32 __vt__15TODoorAncient01[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void load_assets__15TODoorAncient01Fv(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &bm_fe_obj_o_door01l_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TODoorAncient01__shared_resource) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    (*(s32 * *)&TODoorAncient01__texture_lists) = temp_r3_2;
    *temp_r3_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODoorAncient01__shared_resource) + 0x42C)) + 0xC);
    *(s32 *)((s8 *)(*(s32 * *)&TODoorAncient01__texture_lists) + 4) = load_gvm_texture_file((void *) (&lbl_804409EC.value));
}
typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];
typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];

void *__dt__15TODoorAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TODoorAncient01;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015E188_lbl_804B0D68_size[sizeof(RecoveredGlobal_8015E188_lbl_804B0D68) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015E188___vt__15TODoorAncient01_size[sizeof(RecoveredGlobal_8015E188___vt__15TODoorAncient01) == 0x54 ? 1 : -1];
u8 *TODoorAncient01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8015E188___vt__15TODoorAncient01 *)&__vt__15TODoorAncient01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F20;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODoorAncient01__shared_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 * *)&TODoorAncient01__texture_lists) + 4);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODoorAncient01__shared_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB3EC);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (*(f32 *)((s8 *)arg0 + 0xB4) / lbl_805DB3E8);
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorAncient01__collision_body.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
