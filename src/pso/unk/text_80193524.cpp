#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80193A84_lbl_8050DCF0 {
    M2C_UNK value;
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
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
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
    virtual M2C_UNK m18();
};

struct RecoveredGlobal_80193B4C_lbl_8050DCF0 {
    u8 * value;
    u8 remaining[0x14];
};

struct Sw_80193978 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x58]; u16 fE8; };

typedef s32 M2C_UNK;
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
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
s32 fn_80156BBC(void *, void *);
s32 fn_80156C38(void *);
void draw_laser_beam__13TLazerFenceSwFv(void *);
M2C_UNK set_current_scene__6TSceneFi(int);
extern const f32 lbl_805DBE7C;
extern const f32 lbl_805DBE80;
void render__13TLazerFenceSwFv(u8 *arg0);
extern const f32 TLazerFenceSw__data_805DBE84;
void TLazerFenceSw__vt15(u8 *arg0);
void debug_draw_key_id__5TOKeyFPv();
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(int, void *, ...);
extern u16 lbl_80445CB8[];
extern u8 lbl_80445CD8[];
void TLazerFenceSw__vt24(Sw_80193978 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
M2C_UNK fn_80156CEC(void *);
M2C_UNK init_vtable_804AF8D8__14TOAirconCave01FPv(void *);
M2C_UNK init_key__5TOKeyFPv(void *, void *);
u8 *TOKey__ct(void *);
M2C_UNK TLazerFenceSw__sub_8018A554(void *, f32);
extern u16 lbl_80445CB8[];
extern u8 lbl_804B8370[];
extern M2C_UNK __vt__13TLazerFenceSw[];
extern s32 lbl_805D33B0;
extern const f32 TLazerFenceSw__data_805DBE84;
extern const f32 lbl_805DBE8C;
extern const f32 lbl_805DBE90;
void *TLazerFenceSw__ct(void *arg0, void *arg1, void *arg2);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
void construct_collider_proxy__10TObjPlayerFPv(void *);
void init_models__15TObjLazerFence4FPv(void *);
extern u16 lbl_80445BE0[];
extern u8 laser_fence4_collision_body_sets[];
extern M2C_UNK __vt__15TObjLazerFence4[];
extern s32 lazer_fence4_class_name;
extern const f32 lbl_805DBE6C;
void *TObjLazerFence4__ct(void *arg0, void *arg1, void *arg2);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_global_state_in_table__19TContainerAncient01Fv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 load_gvm_texture_file(void *);
s32 get_bml_model(void *, s32);
s32 get_bml_motion(void *, s32);
u8 *count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, int);
extern void *lazer_fence_switch_bml_resource;
extern s32 TLazerFenceSw__texture_list;
extern u8 *lazer_fence_switch_scroll_node;
extern s32 game_difficulty_selection;
extern u8 fe_obj_switch_laz_j_resource_descriptor[];
extern u8 lbl_80445CF0[];
extern u8 lbl_80445D08[];
extern u8 lbl_80445D20[];
void load_resources__13TLazerFenceSwFv(void);
}

extern "C" {

void TLazerFenceSw__sub_80193C5C(void);
void TLazerFenceSw__vt16(void *arg0);
void TLazerFenceSw__vt17(void *arg0);
void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1);
void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1);
void *create__13TLazerFenceSwFPv(void *arg0);
void *create__15TObjLazerFence4FPv(void *arg0);
void run_task__13TLazerFenceSwFv(u8 *arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s32);
void trigger_activate_sound__5TOKeyFPv(void *);
M2C_UNK reset_and_notify__5TOKeyFPv(void *);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
void call_vt21__12TBoss3VoloptFPv(void *);
void destroy__14TOAirconCave01FPvs(void *, int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK step_laser_fence_fade(void *);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

__declspec(section ".data") u32 lazer_fence_sw_ginja_model_table[2];
__declspec(section ".data") u32 lazer_fence_beam_motions[2];
__declspec(section ".data") u32 lbl_8050DCF8[3];
#define lazer_fence_beam_motions (*(RecoveredGlobal_80193A84_lbl_8050DCF0 *)lazer_fence_beam_motions)
extern void *tl_05;

void *create__15TObjLazerFence4FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TObjLazerFence4__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TObjLazerFence4[];

void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLazerFence4;
        unregister_object_by_id((void *)((M2C_UNK *)arg0));
        free_collision_body_parts((void *)(arg0));
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
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
    ((void (*)(void *, void *, void *))construct_collider_proxy__10TObjPlayerFPv)(self, arg1, arg2);
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
    init_models__15TObjLazerFence4FPv(self);
    init_collision_body_parts(self, laser_fence4_collision_body_sets + (self->f8C % 2) * 0xDC, 5);
    self->flags |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(self);
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
M2C_UNK set_global_param__8TObjFishFi(int);
void scroll_ginja_mesh_uvs(u32, s32, s32, u16, s32);
void PPCSync(void);
void push_matrix(void);
void post_translate_matrix(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void pop_matrix(void);
extern u8 *lazer_fence_switch_scroll_node;
extern u32 actor_frame_tick;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DBE78;
extern s32 TLazerFenceSw__texture_list;
void draw_laser_beam__13TLazerFenceSwFv(void *arg0) {
    Sw_801936E0 *self = (Sw_801936E0 *)arg0;
    s32 i;

    for (i = 0; i < 3; i++) {
        free_children__12TObjDoorJungFPvPv(lbl_8050DCF8[i], self->fE8);
    }
    set_global_param__8TObjFishFi(TLazerFenceSw__texture_list);
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
        some_id_805c6f74 |= 0x01000000;
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[0], ((u32 *)&lazer_fence_beam_motions)[0], self->fB0);
        some_id_805c6f74 &= ~0x01000000;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        break;
    case 1:
        push_matrix();
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->f60);
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[1], ((u32 *)&lazer_fence_beam_motions)[1], self->fEC);
        begin_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 |= 0x01000000;
        draw_ginja_model_with_motion(lazer_fence_sw_ginja_model_table[0], ((u32 *)&lazer_fence_beam_motions)[0], self->fB0);
        some_id_805c6f74 &= ~0x01000000;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        break;
    }
}
void render__13TLazerFenceSwFv(u8 *arg0) {
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBE7C, lbl_805DBE80) != 0) {
        if (get_state_flag__9TMainTaskFv() != 1) {
            set_depth_buffer_settings_id__FUl((int) (3));
            set_current_scene__6TSceneFi((int) (0x80));
            if (fn_80156BBC((void *) (arg0 + 0xF0), (void *) (arg0 + 0x38)) != 0) {
                if (fn_80156C38((void *) (arg0 + 0xF0)) != 0) {
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m6();
                    draw_laser_beam__13TLazerFenceSwFv((void *) (arg0));
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m7();
                } else {
                    draw_laser_beam__13TLazerFenceSwFv((void *) (arg0));
                }
            }
            set_current_scene__6TSceneFi((int) (0x8F));
            func_80141618__Fv();
        }
    }
}
#pragma pop

__declspec(section ".rodata") u8 lbl_80445CD8[16] = "<- SELECT COLOR";
void TLazerFenceSw__vt24(Sw_80193978 *arg0) {
    debug_draw_key_id__5TOKeyFPv();
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    arg0->fE8 = lbl_80445CB8[arg0->f8C % 4];
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130022, lbl_80445CD8);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TLazerFenceSw__vt16(void *arg0) {
    trigger_activate_sound__5TOKeyFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 TLazerFenceSw__data_805DBE84;

void TLazerFenceSw__vt17(void *arg0) {
    call_vt21__12TBoss3VoloptFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 lbl_805DBE88;

typedef char RecoveredGlobal_80193A84_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193A84_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt14(u8 *arg0) {
    u32 temp_r4;
    u32 temp_r4_2;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_r4 = M2C_FIELD(M2C_FIELD(&lazer_fence_beam_motions.value, u8 **, 0), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xB0) > (f32) temp_r4) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) temp_r4;
    }
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_r4_2 = M2C_FIELD(M2C_FIELD(&lazer_fence_beam_motions.value, u8 **, 4), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xEC) > (f32) temp_r4_2) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) temp_r4_2;
    }
}

typedef char RecoveredGlobal_80193B4C_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193B4C_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt15(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    if (M2C_FIELD(arg0, f32 *, 0xB0) > (f32) (u32) (M2C_FIELD((*(RecoveredGlobal_80193B4C_lbl_8050DCF0 *)&lazer_fence_beam_motions).value, s32 *, 4) - 1)) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TLazerFenceSw__data_805DBE84;
    }
    ((VObj_18_582a4f *)(arg0))->m18();
}

void run_task__13TLazerFenceSwFv(u8 *arg0) {
    step_laser_fence_fade(arg0 + 0xF0);
    reset_and_notify__5TOKeyFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (M2C_FIELD(arg0, f32 *, 0x110) + lbl_805DBE88);
}

extern void *tl_05;

void *create__13TLazerFenceSwFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x118);
    if (o != NULL) {
        o = TLazerFenceSw__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
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
    free_if_valid__10TObjPlayerFi(TLazerFenceSw__texture_list);
    TLazerFenceSw__texture_list = 0;
}

extern M2C_UNK __vt__13TLazerFenceSw[];

#pragma push
#pragma opt_propagation off
void load_resources__13TLazerFenceSwFv(void) {
    s32 state;
    void *obj;
    s32 j;
    s32 i;
    Node_80193CA4 *n;
    lazer_fence_switch_bml_resource = 0;
    state = get_global_state__14TOKeyMachine01Fv();
    if (is_global_state_in_table__19TContainerAncient01Fv() == 1 || state == 0x1C || state == 0x1D) {
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != NULL) {
            obj = load_resource_from_descriptor(obj, 5, fe_obj_switch_laz_j_resource_descriptor, 0, 0, 0);
        }
        lazer_fence_switch_bml_resource = obj;
        TLazerFenceSw__texture_list = load_gvm_texture_file(lbl_80445CF0);
    } else {
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
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
        lbl_8050DCF8[j] = 0;
    }
    i = 0;
    n = *(Node_80193CA4 **)(lazer_fence_sw_ginja_model_table[0] + 0x2C);
    if (n != NULL) {
        lbl_8050DCF8[i] = n->f4;
        i++;
        n = n->next;
        while (n != NULL && i < 3) {
            lbl_8050DCF8[i] = n->f4;
            i++;
            n = n->next;
        }
    }
    lazer_fence_switch_scroll_node = count_linked_switches__23TObjSeabedSuisoBrakableFUii(lazer_fence_sw_ginja_model_table[1], 3);
}
#pragma pop

void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TLazerFenceSw;
        unregister_object_by_id((void *)(arg0));
        free_collision_body_parts((void *)(arg0));
        destroy__14TOAirconCave01FPvs((s8 *)arg0 + 0xF0, -1);
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
    M2C_FIELD(arg0, u8 **, 0x18) = ((u8 *)&__vt__13TLazerFenceSw);
    init_vtable_804AF8D8__14TOAirconCave01FPv((u8 *)arg0 + 0xF0);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D33B0;
    init_key__5TOKeyFPv(arg0, arg2);
    if (M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    M2C_FIELD(arg0, u16 *, 0xE8) = lbl_80445CB8[M2C_FIELD(arg0, s32 *, 0x8C) % 4];
    M2C_FIELD(arg0, f32 *, 0xB8) = lbl_805DBE8C;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
    init_collision_body_parts(arg0, lbl_804B8370, 1);
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(arg0);
    fn_80156CEC((u8 *)arg0 + 0xF0);
    TLazerFenceSw__sub_8018A554((u8 *)arg0 + 0xF0, lbl_805DBE90);
    M2C_FIELD(arg0, f32 *, 0x110) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    return arg0;
}
#pragma pop

}

extern "C" {
__declspec(section ".data") const char *fe_obj_switch_laz_model_names[4] = { lbl_80445C00, lbl_80445C18, lbl_80445C34, NULL };
__declspec(section ".data") const char *fe_obj_switch_laz_motion_names[3] = { lbl_80445C54, lbl_80445C6C, NULL };
BmlResourceDescriptor laser_fence_switch_resource_descriptor = { lbl_80445C88, fe_obj_switch_laz_model_names, fe_obj_switch_laz_motion_names, 3, 2 };
}
