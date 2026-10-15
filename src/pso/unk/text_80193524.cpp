#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TLazerFenceSw.h"
#include "pso/object/TObjLazerFence4.h"

extern "C" {
extern char lbl_80445C00[];
extern char lbl_80445C18[];
extern char lbl_80445C34[];
extern char lbl_80445C54[];
extern char lbl_80445C6C[];
extern char lbl_80445C88[];
extern const char *fe_obj_switch_laz_model_names[4];
extern const char *fe_obj_switch_laz_motion_names[3];
extern BmlResourceDescriptor laser_fence_switch_resource_descriptor;
}

struct RecoveredGlobal_80193A84_lbl_8050DCF0 {
    s32 value;
    u8 remaining[0x14];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
    virtual s32 m7();
};

struct VBase_18_582a4f { char pad[0x18]; };

struct VObj_18_582a4f : VBase_18_582a4f {
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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual s32 m18();
};

struct RecoveredGlobal_80193B4C_lbl_8050DCF0 {
    u8 * value;
    u8 remaining[0x14];
};

struct Sw_80193978 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x58]; u16 fE8; };

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
struct Base_801935D8 { char pad[0x18]; };

struct V_801935D8 : Base_801935D8 {
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void init(void *);
};

struct Fence_801935D8 {
    s32 id;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1C[0x30 - 0x1C];
    u32 flags;
    u8 pad34[0x68 - 0x34];
    f32 f68;
    u8 pad6C[0x84 - 0x6C];
    s32 f84;
    u8 pad88[0x8C - 0x88];
    s32 f8C;
    u8 pad90[0xAC - 0x90];
    s32 fAC;
    f32 fB0;
    u8 padB4[0xB8 - 0xB4];
    u16 fB8;
    s16 fBA;
};

struct Node_80193CA4 {
    u8 pad0[4];
    u32 f4;
    u8 pad8[0x30 - 0x8];
    Node_80193CA4 *next;
};

extern "C" {
void TLazerFenceSw__vt14(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 fn_80156BBC(void *, void *);
s32 fn_80156C38(void *);
s32 set_material_alpha_compare_reference(int);
extern const f32 lbl_805DBE7C;
extern const f32 lbl_805DBE80;
extern const f32 TLazerFenceSw__data_805DBE84;
void TLazerFenceSw__vt15(u8 *arg0);
void debug_draw_key_id__5TOKeyFv();
void set_global_count__12TObjNpcEnemyFl(int);
void debug_printf_at(int, void *, ...);
extern u16 lbl_80445CB8[];
extern u8 lbl_80445CD8[];
void TLazerFenceSw__vt24(Sw_80193978 *arg0);
s32 reset_photon_effect__10TObjPlayerFv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 fn_80156CEC(void *);
s32 init_vtable_804AF8D8__14TOAirconCave01Fv(void *);
s32 init_key__5TOKeyFv(void *, void *);
u8 *TOKey__ct(void *);
s32 TLazerFenceSw__sub_8018A554(void *, f32);
extern u16 lbl_80445CB8[];
extern u8 lbl_804B8370[];
extern s32 __vt__13TLazerFenceSw[];
extern s32 lbl_805D33B0;
extern const f32 TLazerFenceSw__data_805DBE84;
extern const f32 lbl_805DBE8C;
extern const f32 lbl_805DBE90;
void *TLazerFenceSw__ct(void *arg0, void *arg1, void *arg2);
s32 reset_photon_effect__10TObjPlayerFv(void *);
void refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
void construct_collider_proxy__10TObjPlayerFv(void *);
void init_models__15TObjLazerFence4Fv(void *);
extern u16 lbl_80445BE0[];
extern u8 laser_fence4_collision_body_sets[];
extern s32 __vt__15TObjLazerFence4[];
extern s32 lazer_fence4_class_name;
extern const f32 lbl_805DBE6C;
void *TObjLazerFence4__ct(void *arg0, void *arg1, void *arg2);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_global_state_in_table__19TContainerAncient01Fv(void);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 load_gvm_texture_file(void *);
s32 get_bml_model(void *, s32);
s32 get_bml_motion(void *, s32);
u8 *count_linked_switches__23TObjSeabedSuisoBrakableFl(u32, int);
extern void *lazer_fence_switch_bml_resource;
extern s32 TLazerFenceSw__texture_list;
extern u8 *lazer_fence_switch_scroll_node;
extern s32 game_difficulty_selection;
extern u8 fe_obj_switch_laz_j_resource_descriptor[];
extern u8 lbl_80445CF0[];
extern u8 lbl_80445D08[];
extern u8 lbl_80445D20[];
}

extern "C" {

void TLazerFenceSw__sub_80193C5C(void);
void TLazerFenceSw__vt16(void *arg0);
void TLazerFenceSw__vt17(void *arg0);
void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1);
void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1);
s32 TLobby__sub_8001FE7C(void *, s32);
void trigger_activate_sound__5TOKeyFv(void *);
s32 reset_and_notify__5TOKeyFv(void *);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
void call_vt21__12TBoss3VoloptFv(void *);
void destroy__14TOAirconCave01Fs(void *, int);
s32 destroy_particle_controller__10TObjPlayerFs(void *, s32);
s32 step_laser_fence_fade(void *);
s32 free_if_valid__10TObjPlayerFl(s32);

__declspec(section ".data") u32 lazer_fence_sw_ginja_model_table[2];
__declspec(section ".data") u32 lazer_fence_beam_motions[2];
__declspec(section ".data") u32 lazer_fence_beam_node_table[3];
#define lazer_fence_beam_motions (*(RecoveredGlobal_80193A84_lbl_8050DCF0 *)lazer_fence_beam_motions)
extern void *tl_05;

void *TObjLazerFence4::create() {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TObjLazerFence4__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

extern s32 __vt__15TObjLazerFence4[];

void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjLazerFence4;
        unregister_object_by_id((void *)((s32 *)arg0));
        free_collision_body_parts((void *)(arg0));
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern const f32 TLazerFenceSw__data_805DBE84;

#define self ((Fence_801935D8 *)arg0)
void *TObjLazerFence4__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    ((void (*)(void *, void *, void *))construct_collider_proxy__10TObjPlayerFv)(self, arg1, arg2);
    self->vt = (void *)__vt__15TObjLazerFence4;
    self->id = lazer_fence4_class_name;
    ((V_801935D8 *)self)->init(arg2);
    self->fAC = 0;
    self->fB0 = lbl_805DBE6C;
    self->fBA = self->f84;
    i = self->f68;
    if (i < 0) {
        i = 0;
    }
    if (i > 3) {
        i = 3;
    }
    self->fB8 = lbl_80445BE0[i];
    init_models__15TObjLazerFence4Fv(self);
    init_collision_body_parts(self, laser_fence4_collision_body_sets + (self->f8C % 2) * 0xDC, 5);
    self->flags |= 0x40000000;
    reset_photon_effect__10TObjPlayerFv(self);
    refresh_collision_body_centers(self);
    return self;
}
#undef self

#pragma push
#pragma opt_common_subs off
struct Res_8050DCE8 {
    u32 models[2];
    u32 motions[2];
    u32 meshes[3];
};
struct Sw_801936E0 {
    u8 pad0[0x38];
    u8 pos[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xB0 - 0x64];
    f32 fB0;
    u8 padB4[0xD4 - 0xB4];
    s32 fD4;
    u8 padD8[0xE8 - 0xD8];
    u16 fE8;
    u8 padEA[0xEC - 0xEA];
    f32 fEC;
    u8 padF0[0x110 - 0xF0];
    f32 f110;
    u32 f114;
};
void free_children__12TObjDoorJungFPvPv(u32, u16);
s32 set_global_param__8TObjFishFl(int);
void scroll_ginja_mesh_uvs(u32, s32, s32, u16, s32);
void PPCSync(void);
void push_matrix(void);
void post_translate_matrix(void *);
s32 rotate_matrix_y(int, int);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
void pop_matrix(void);
extern u8 *lazer_fence_switch_scroll_node;
extern u32 actor_frame_tick;
extern s32 model_render_flags;
extern const f32 lbl_805DBE78;
extern s32 TLazerFenceSw__texture_list;
void TLazerFenceSw::draw_laser_beam() {
    Sw_801936E0 *self = (Sw_801936E0 *)this;
    s32 i;

    for (i = 0; i < 3; i++) {
        free_children__12TObjDoorJungFPvPv(lazer_fence_beam_node_table[i], self->fE8);
    }
    set_global_param__8TObjFishFl(TLazerFenceSw__texture_list);
    if (actor_frame_tick != self->f114 && self->f110 >= lbl_805DBE78) {
        self->f114 = actor_frame_tick;
        scroll_ginja_mesh_uvs(*(u32 *)(lazer_fence_switch_scroll_node + 4), 0, (s32)self->f110, 5, 1);
        PPCSync();
        self->f110 = self->f110 - (f32)(s32)self->f110;
    }
    switch (self->fD4) {
    case 0:
        push_matrix();
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->f60);
        draw_ginja_object(lazer_fence_sw_ginja_model_table[1]);
        begin_effect_render__13TParticleCtrlFv();
        model_render_flags |= 0x01000000;
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[0], ((u32 *)&lazer_fence_beam_motions)[0], self->fB0);
        model_render_flags &= ~0x01000000;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        break;
    case 1:
        push_matrix();
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->f60);
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[1], ((u32 *)&lazer_fence_beam_motions)[1], self->fEC);
        begin_effect_render__13TParticleCtrlFv();
        model_render_flags |= 0x01000000;
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[0], ((u32 *)&lazer_fence_beam_motions)[0], self->fB0);
        model_render_flags &= ~0x01000000;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        break;
    }
}
void TLazerFenceSw::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBE7C, lbl_805DBE80) != 0) {
        if (get_state_flag__9TMainTaskFv() != 1) {
            set_depth_buffer_settings_id__FUl((int) (3));
            set_material_alpha_compare_reference((int) (0x80));
            if (fn_80156BBC((void *) (arg0 + 0xF0), (void *) (arg0 + 0x38)) != 0) {
                if (fn_80156C38((void *) (arg0 + 0xF0)) != 0) {
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m6();
                    draw_laser_beam();
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m7();
                } else {
                    draw_laser_beam();
                }
            }
            set_material_alpha_compare_reference((int) (0x8F));
            func_80141618__Fv();
        }
    }
}
#pragma pop

__declspec(section ".rodata") u8 lbl_80445CD8[16] = "<- SELECT COLOR";
void TLazerFenceSw__vt24(Sw_80193978 *arg0) {
    debug_draw_key_id__5TOKeyFv();
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    arg0->fE8 = lbl_80445CB8[arg0->f8C % 4];
    set_global_count__12TObjNpcEnemyFl(0xFF00FF);
    debug_printf_at(0x130022, lbl_80445CD8);
    set_global_count__12TObjNpcEnemyFl(0xF0F0F0FF);
}

void TLazerFenceSw__vt16(void *arg0) {
    trigger_activate_sound__5TOKeyFv(arg0);
    *(f32 *)((s8 *)arg0 + 0xB0) = TLazerFenceSw__data_805DBE84;
    *(f32 *)((s8 *)arg0 + 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 TLazerFenceSw__data_805DBE84;

void TLazerFenceSw__vt17(void *arg0) {
    call_vt21__12TBoss3VoloptFv(arg0);
    *(f32 *)((s8 *)arg0 + 0xB0) = TLazerFenceSw__data_805DBE84;
    *(f32 *)((s8 *)arg0 + 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 lbl_805DBE88;

typedef char RecoveredGlobal_80193A84_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193A84_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt14(u8 *arg0) {
    u32 temp_r4;
    u32 temp_r4_2;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (*(f32 *)((s8 *)arg0 + 0xB0) + *(f32 *)((s8 *)arg0 + 0xB8));
    temp_r4 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(&lazer_fence_beam_motions.value) + 0)) + 4) - 1;
    if (*(f32 *)((s8 *)arg0 + 0xB0) > (f32) temp_r4) {
        *(f32 *)((s8 *)arg0 + 0xB0) = (f32) temp_r4;
    }
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) + *(f32 *)((s8 *)arg0 + 0xB8));
    temp_r4_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(&lazer_fence_beam_motions.value) + 4)) + 4) - 1;
    if (*(f32 *)((s8 *)arg0 + 0xEC) > (f32) temp_r4_2) {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) temp_r4_2;
    }
}

typedef char RecoveredGlobal_80193B4C_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193B4C_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt15(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (*(f32 *)((s8 *)arg0 + 0xB0) + *(f32 *)((s8 *)arg0 + 0xB8));
    if (*(f32 *)((s8 *)arg0 + 0xB0) > (f32) (u32) (*(s32 *)((s8 *)((*(RecoveredGlobal_80193B4C_lbl_8050DCF0 *)&lazer_fence_beam_motions).value) + 4) - 1)) {
        *(f32 *)((s8 *)arg0 + 0xB0) = (f32) TLazerFenceSw__data_805DBE84;
    }
    ((VObj_18_582a4f *)(arg0))->m18();
}

void TLazerFenceSw::run_task() {
    u8 *arg0 = (u8 *)this;
    step_laser_fence_fade(arg0 + 0xF0);
    reset_and_notify__5TOKeyFv(arg0);
    *(f32 *)((s8 *)arg0 + 0x110) = (f32) (*(f32 *)((s8 *)arg0 + 0x110) + lbl_805DBE88);
}

extern void *tl_05;

void *TLazerFenceSw::create() {
    void *o = __nw__7TObjectFUl(0x118);
    if (o != NULL) {
        o = TLazerFenceSw__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

extern void *lazer_fence_switch_bml_resource;
extern s32 TLazerFenceSw__texture_list;

void TLazerFenceSw__sub_80193C5C(void) {
    if (lazer_fence_switch_bml_resource != 0) {
        TLobby__sub_8001FE7C(lazer_fence_switch_bml_resource, 1);
        lazer_fence_switch_bml_resource = 0;
    }
    free_if_valid__10TObjPlayerFl(TLazerFenceSw__texture_list);
    TLazerFenceSw__texture_list = 0;
}

extern s32 __vt__13TLazerFenceSw[];

#pragma push
#pragma opt_propagation off
void TLazerFenceSw::load_resources() {
    s32 state;
    void *obj;
    s32 j;
    s32 i;
    Node_80193CA4 *n;
    lazer_fence_switch_bml_resource = 0;
    state = get_global_state__14TOKeyMachine01Fv();
    if (is_global_state_in_table__19TContainerAncient01Fv() == 1 || state == 0x1C || state == 0x1D) {
        obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (obj != NULL) {
            obj = load_resource_from_descriptor(obj, 5, fe_obj_switch_laz_j_resource_descriptor, 0, 0, 0);
        }
        lazer_fence_switch_bml_resource = obj;
        TLazerFenceSw__texture_list = load_gvm_texture_file(lbl_80445CF0);
    } else {
        obj = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (obj != NULL) {
            obj = load_resource_from_descriptor(obj, 5, &laser_fence_switch_resource_descriptor, 0, 0, 0);
        }
        lazer_fence_switch_bml_resource = obj;
        if (game_difficulty_selection == 3) {
            TLazerFenceSw__texture_list = load_gvm_texture_file(lbl_80445D08);
        } else {
            TLazerFenceSw__texture_list = load_gvm_texture_file(lbl_80445D20);
        }
    }
    lazer_fence_sw_ginja_model_table[0] = get_bml_model(lazer_fence_switch_bml_resource, 0);
    lazer_fence_sw_ginja_model_table[1] = get_bml_model(lazer_fence_switch_bml_resource, 1);
    ((u32 *)&lazer_fence_beam_motions)[0] = get_bml_motion(lazer_fence_switch_bml_resource, 0);
    ((u32 *)&lazer_fence_beam_motions)[1] = get_bml_motion(lazer_fence_switch_bml_resource, 1);
    for (j = 0; j < 3; j++) {
        lazer_fence_beam_node_table[j] = 0;
    }
    i = 0;
    n = *(Node_80193CA4 **)(lazer_fence_sw_ginja_model_table[0] + 0x2C);
    if (n != NULL) {
        lazer_fence_beam_node_table[i] = n->f4;
        i++;
        n = n->next;
        while (n != NULL && i < 3) {
            lazer_fence_beam_node_table[i] = n->f4;
            i++;
            n = n->next;
        }
    }
    lazer_fence_switch_scroll_node = count_linked_switches__23TObjSeabedSuisoBrakableFl(lazer_fence_sw_ginja_model_table[1], 3);
}
#pragma pop

void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TLazerFenceSw;
        unregister_object_by_id((void *)(arg0));
        free_collision_body_parts((void *)(arg0));
        destroy__14TOAirconCave01Fs((s8 *)arg0 + 0xF0, -1);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
void *TLazerFenceSw__ct(void *arg0, void *arg1, void *arg2) {
    TOKey__ct(arg0);
    *(u8 **)((s8 *)arg0 + 0x18) = ((u8 *)&__vt__13TLazerFenceSw);
    init_vtable_804AF8D8__14TOAirconCave01Fv((u8 *)arg0 + 0xF0);
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D33B0;
    init_key__5TOKeyFv(arg0, arg2);
    if (*(s32 *)((s8 *)arg0 + 0x8C) < 0) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 0;
    }
    *(u16 *)((s8 *)arg0 + 0xE8) = lbl_80445CB8[*(s32 *)((s8 *)arg0 + 0x8C) % 4];
    *(f32 *)((s8 *)arg0 + 0xB8) = lbl_805DBE8C;
    *(f32 *)((s8 *)arg0 + 0xEC) = TLazerFenceSw__data_805DBE84;
    init_collision_body_parts(arg0, lbl_804B8370, 1);
    *(s32 *)((s8 *)arg0 + 0x30) |= 0x40000000;
    reset_photon_effect__10TObjPlayerFv(arg0);
    fn_80156CEC((u8 *)arg0 + 0xF0);
    TLazerFenceSw__sub_8018A554((u8 *)arg0 + 0xF0, lbl_805DBE90);
    *(f32 *)((s8 *)arg0 + 0x110) = TLazerFenceSw__data_805DBE84;
    *(s32 *)((s8 *)arg0 + 0x114) = 0;
    return arg0;
}
#pragma pop

}

extern "C" {
__declspec(section ".data") const char *fe_obj_switch_laz_model_names[4] = { lbl_80445C00, lbl_80445C18, lbl_80445C34, NULL };
__declspec(section ".data") const char *fe_obj_switch_laz_motion_names[3] = { lbl_80445C54, lbl_80445C6C, NULL };
BmlResourceDescriptor laser_fence_switch_resource_descriptor = { lbl_80445C88, fe_obj_switch_laz_model_names, fe_obj_switch_laz_motion_names, 3, 2 };
}
