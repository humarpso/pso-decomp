#include "types.h"
extern "C" {
__declspec(section ".sdata2") extern const f32 lbl_805DE640[1] = { 1.0f };
__declspec(section ".sdata2") extern const f32 TOTrapSeabed01__data_805DE644[1] = { 0.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DE648[1] = { 0.5f };
__declspec(section ".sdata2") extern const f32 lbl_805DE64C[1] = { 15.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DE650[1] = { 0.1f };
__declspec(section ".sdata2") extern const f32 lbl_805DE654[1] = { 10.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DE658[2] = { 30.0f, 0.0f };
}

#define lbl_805DE640 (lbl_805DE640[0])
#define TOTrapSeabed01__data_805DE644 (TOTrapSeabed01__data_805DE644[0])
#define lbl_805DE648 (lbl_805DE648[0])
#define lbl_805DE64C (lbl_805DE64C[0])
#pragma push

#include "types.h"

struct VBase_18_f37bb9 { char pad[0x18]; };

struct VObj_18_f37bb9 : VBase_18_f37bb9 {
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
    virtual void m18();
    virtual void m19();
    virtual s32 m20(s32, f32);
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual s32 m65(f32);
};

struct Vec_802C9E3C { f32 x, y, z; };

struct Mtx_802C9E3C { f32 m[3][4]; };

struct SeabedTrapFragmentSpawn {
    s32 id;
    Vec_802C9E3C pos;
    s32 arg;
};

struct Params_802C9E3C {
    u8 pad0[0xC];
    Vec_802C9E3C pos;
    u8 pad18[0x40 - 0x18];
    s32 model;
    s32 f44;
    u8 pad48[0x50 - 0x48];
    s32 arg;
    u8 pad54[0x64 - 0x54];
};

struct Trap_802C9E3C {
    u8 pad0[0x38];
    Vec_802C9E3C pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
};

struct Pair_802C9F70 { s32 a; s32 b; };

struct VBase_802C9F70 { char pad[0x18]; };

struct VObj_802C9F70 : VBase_802C9F70 {
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21(void *, Pair_802C9F70 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *, f32);
};

struct Trap_802C9F70 {
    u8 pad0[0x350];
    Pair_802C9F70 pair;
};

extern "C" {
void set_indexed_flags(void *, s32, s32);
void init_all_slots__10TObjPlayerFv(void);
void check_object_collisions__10TObjPlayerFv(void *);
s32 submit_cursor_candidate(void *, int);
void TOTrapSeabed01__vt80(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32);
f32 horizontal_distance_squared(void *, void *);
f32 TObjPlayer__sub_8017A1A4(int, int);
s32 send_6x2C_impose_hold(int, void *, int, int, f32);
u32 get_player_by_client_id(u32);
s32 sub_802C9C18__14TOTrapSeabed01Fl(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 local_client_id;
void check_hold_player__14TOTrapSeabed01FPv(u8 *arg0);
void calc_attach_pos__10TObjPlayerFv(void *);
void obj_clearFlags30(void *, u32);
void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, u32);
void set_indexed_flags(void *, s32, s32);
void check_hold_player__14TOTrapSeabed01FPv(u8 *arg0);
void TOTrapSeabed01__vt79(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_model(int, int);
s32 set_position_xy__10TObjPlayerFff(f32, f32);
u32 spawn_particle_effect(void *, int);
s32 copy_transform__8TObjChipFPvPv(void *, void *);
void *__nw__7TObjectFUl(int);
s32 __ct__13TObjSuisoChipFv(void *, void *, void *);
s32 sub_802C9C18__14TOTrapSeabed01Fl(void *, int);
s32 matrix_mult_vec(void *, void *, void *);
s32 translate_matrix_vec3(void *, void *);
s32 set_matrix_identity(void *);
s32 rotate_matrix_y(void *, int);
extern u8 TOTrapSeabed01__transform_params[];
extern SeabedTrapFragmentSpawn seabed_trap_fragment_spawns[];
extern s32 TOTrapSeabed01__bml_resource;
extern s32 TOTrapSeabed01__texture_file;
void TOTrapSeabed01__vt83(Trap_802C9E3C *self);
s32 check_value_equals__13TQuestColCtrlFPll(void *, s32);
void *get_battle_param__10TObjPlayerFi(s32);
s32 is_valid_and_active__10TObjPlayerFUl();
extern s32 lbl_805D3530;
s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self);
}

extern "C" {

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0);
void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0);
s32 set_triggered_state__6TOTrapFPvUi(s32, s32, f32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 sub_802C9D38__14TOTrapSeabed01Fv();

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0) {
    sub_802C9D38__14TOTrapSeabed01Fv();
    set_triggered_state__6TOTrapFPvUi(arg0, arg1, farg0);
}

extern u32 TOTrapSeabed01__ginja_model;

void TOTrapSeabed01__vt83(Trap_802C9E3C *self) {
    Mtx_802C9E3C m;
    Params_802C9E3C p;
    SeabedTrapFragmentSpawn *e;
    s32 i;
    f32 y;
    void *o;
    copy_transform__8TObjChipFPvPv(&p, TOTrapSeabed01__transform_params);
    y = TOTrapSeabed01__data_805DE644;
    p.f44 = TOTrapSeabed01__texture_file;
    for (i = 0; i < 6; i++) {
        e = &seabed_trap_fragment_spawns[i];
        VecCopy__FP3VecPC3Vec(&p.pos, &e->pos);
        p.model = get_bml_model(TOTrapSeabed01__bml_resource, e->id);
        p.arg = e->arg;
        o = __nw__7TObjectFUl(0x24C);
        if (o != NULL) {
            __ct__13TObjSuisoChipFv(o, self, &p);
        }
        Vec_802C9E3C v = p.pos;
        v.y = y;
        set_matrix_identity(&m);
        translate_matrix_vec3(&m, &self->pos);
        rotate_matrix_y(&m, self->rotY);
        matrix_mult_vec(&m, &v, &v);
        if (spawn_particle_effect(&v, 0x8B) != 0) {
            set_position_xy__10TObjPlayerFff(lbl_805DE648, lbl_805DE648);
        }
    }
    sub_802C9C18__14TOTrapSeabed01Fl(self, 1);
}

s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self) {
    s32 i;
    VObj_802C9F70 *o;
    for (i = 0; i < 0x10; i++) {
        o = (VObj_802C9F70 *)get_battle_param__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUl() != 0 && check_value_equals__13TQuestColCtrlFPll(o, lbl_805D3530) != 0) {
            Pair_802C9F70 p = self->pair;
            o->m21(self, &p, 0, -1, -1);
            if (self->pair.a < 5) {
                o->m23(self, TOTrapSeabed01__data_805DE644);
            }
        }
    }
    return 1;
}

#pragma push
#pragma fp_contract on
void check_hold_player__14TOTrapSeabed01FPv(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f31;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 id;
    *(u32 *)((s8 *)arg0 + 0x2A8) = 0U;
    *(u16 *)((s8 *)arg0 + 0x33C) = find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x334)));
    id = *(u16 *)((s8 *)arg0 + 0x33C);
    if ((id != 0xFFFF) && (temp_r3 = get_player_by_client_id(id), *(u32 *)((s8 *)arg0 + 0x2A8) = temp_r3, temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x2A8), ((temp_r3_2 == 0U) == 0))) {
        temp_f31 = horizontal_distance_squared((void *) (temp_r3_2 + 0x38), (void *) (arg0 + 0x38));
        *(f32 *)((s8 *)arg0 + 0x338) = (f32) (*(f32 *)((s8 *)arg0 + 0x338) - TObjPlayer__sub_8017A1A4((int) (temp_r3), (int) (0)));
        temp_f0 = *(f32 *)((s8 *)arg0 + 0x338);
        if (temp_f31 < (temp_f0 * temp_f0)) {
            if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
                send_6x2C_impose_hold((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x338)));
            } else if ((s32) *(u16 *)((s8 *)arg0 + 0x33C) == (s32) local_client_id) {
                send_6x2C_impose_hold((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x338)));
            }
            sub_802C9C18__14TOTrapSeabed01Fl((void *) (arg0), (int) (0));
            return;
        }
        *(u16 *)((s8 *)arg0 + 0x33C) = 0xFFFFU;
        *(u32 *)((s8 *)arg0 + 0x2A8) = 0U;
    }
}
#pragma pop

void TOTrapSeabed01__vt80(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x348) - 1;
    *(s32 *)((s8 *)arg0 + 0x348) = temp_r0;
    if (temp_r0 < 0) {
        *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC) = (f32) lbl_805DE64C;
        set_indexed_flags(arg0, 0, 0x100);
        init_all_slots__10TObjPlayerFv();
        check_object_collisions__10TObjPlayerFv(arg0);
        ((VObj_18_f37bb9 *)(arg0))->m65(lbl_805DE640);
        ((VObj_18_f37bb9 *)(arg0))->m20(*(s32 *)((s8 *)arg0 + 0x2A8), lbl_805DE640);
    }
    submit_cursor_candidate((void *) (arg0), (int) (-1));
}

void TOTrapSeabed01__vt79(u8 *arg0) {
    u32 temp_r0;
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (*(f32 *)((s8 *)arg0 + 0xC0) + *(f32 *)((s8 *)arg0 + 0xC8));
    temp_r0 = *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF8)) + 4) - 1;
    if (*(f32 *)((s8 *)arg0 + 0xC0) > (f32) temp_r0) {
        *(f32 *)((s8 *)arg0 + 0xC0) = (f32) temp_r0;
        *(s16 *)((s8 *)arg0 + 0x326) = 3;
        calc_attach_pos__10TObjPlayerFv(arg0);
        clear_player_status_flag__10TObjPlayerFlUl(arg0, 0, 0x08001F04U);
        set_indexed_flags(arg0, 0, 0x8003);
        obj_clearFlags30(arg0, 0x40000U);
        check_hold_player__14TOTrapSeabed01FPv((u8 *)((void *) (arg0)));
    }
}

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0) {
    if (arg0 == (u32) TOTrapSeabed01__ginja_model) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

}

#pragma pop

#undef lbl_805DE640
#undef TOTrapSeabed01__data_805DE644
#undef lbl_805DE648
#undef lbl_805DE64C
#pragma push

#include "types.h"

struct S_802CA550 {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x340 - 0x328];
    s32 f340;
    u8 pad344[0x34C - 0x344];
    s32 f34C;
};

extern "C" {
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 setup_particle_tev(int);
s32 load_projection_tex_matrix__15TOTrapAncient02Fv(int);
f32 rotate_matrix_by_node_angles(void *, void *);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(void *);
s32 draw_ginja_model(int);
extern s32 TOTrapSeabed01__texture_file;
void draw_object_tree__14TOTrapSeabed01FPvPv(u8 *arg0, u8 *arg1);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();
void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
void draw__14TOTrapSeabed01FPv(u8 *arg0);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
void render__14TOTrapSeabed01Fv(S_802CA550 *arg0);
}

extern "C" {

void draw__14TOTrapSeabed01FPv(u8 *arg0);
void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
s32 PPCSync();
s32 scroll_ginja_mesh_uvs(int, int, int, void *, int);
s32 post_translate_matrix(void *);
void TOTrapSeabed01__vt82(void);
s32 draw_ginja_model_with_motion(int, int, f32);

s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 restore_saved_depth_alpha_state();
s32 func_80141618__Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 set_depth_buffer_settings_1__Fv();
s32 set_depth_buffer_settings_3__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 set_global_param__8TObjFishFl(void *);
s32 set_model_node_callback(void *);

#define trigger_by_id__14TOTrapSeabed01FUi (*(s32 (*)[1])&trigger_by_id__14TOTrapSeabed01FUi)
extern s32 actor_frame_tick;
extern s32 TOTrapSeabed01__texture_file;
#define TOTrapSeabed01__ginja_model (*(u8 * *)&TOTrapSeabed01__ginja_model)
extern s32 lbl_805D681C;
extern s32 seabed01_ginja_mesh_index;

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0) {
    set_global_param__8TObjFishFl((void *)((void *) (TOTrapSeabed01__texture_file)));
    if ((s32) actor_frame_tick != (s32) lbl_805D681C) {
        if (((void *) TOTrapSeabed01__ginja_model != NULL) && ((s32) seabed01_ginja_mesh_index != -1)) {
            scroll_ginja_mesh_uvs((int) (*(s32 *)((s8 *)TOTrapSeabed01__ginja_model + 4)), (int) (0), (int) (-0x14), (void *) ((u16) seabed01_ginja_mesh_index), (int) (1));
            PPCSync();
        }
        lbl_805D681C = actor_frame_tick;
    }
    set_model_node_callback((void *) (trigger_by_id__14TOTrapSeabed01FUi));
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    ((s32 (*)(int, int))rotate_matrix_y)((int)((int) (0)), (int)((int) (*(s32 *)((s8 *)arg0 + 0x60))));
    set_depth_buffer_settings_3__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (1)));
    draw_ginja_model_with_motion((int) (*(s32 *)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xF8)), (f32) (*(f32 *)((s8 *)arg0 + 0xC0)));
    func_80141618__Fv();
    restore_saved_depth_alpha_state();
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (2)));
    draw_ginja_model_with_motion((int) (*(s32 *)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xF8)), (f32) (*(f32 *)((s8 *)arg0 + 0xC0)));
    func_80141618__Fv();
    restore_saved_depth_alpha_state();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    set_model_node_callback((void *) (NULL));
}

extern s32 TOTrapSeabed01__texture_file;

void draw_object_tree__14TOTrapSeabed01FPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = *(s32 *)((s8 *)var_r30 + 0);
        push_matrix();
        if (!(temp_r31 & 1)) {
            post_translate_matrix((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            rotate_matrix_by_node_angles((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            scale_current_matrix((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 8)) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x34C) != 0) {
                setup_particle_tev((int) (0));
                set_global_param__8TObjFishFl((void *)((int) (TOTrapSeabed01__texture_file)));
                load_projection_tex_matrix__15TOTrapAncient02Fv((int) (0x38E));
                draw_ginja_model((int) (*(s32 *)((s8 *)var_r30 + 4)));
                disable_if_single_screen__13TParticleCtrlFv();
            } else {
                draw_ginja_model((int) (*(s32 *)((s8 *)var_r30 + 4)));
            }
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x2C));
            if (temp_r4 != NULL) {
                draw_object_tree__14TOTrapSeabed01FPvPv(arg0, temp_r4);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x30));
    } while (var_r30 != NULL);
}

void draw__14TOTrapSeabed01FPv(u8 *arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || ((s32) *(s32 *)((s8 *)arg0 + 0x34C) == 0)) {
        set_depth_buffer_settings_3__Fv();
        set_depth_buffer_settings_id__FUl((int)(1));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFl((void *)(TOTrapSeabed01__texture_file));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        ((s32 (*)(int, int))rotate_matrix_y)((int)(0), (int)(*(s32 *)((s8 *)arg0 + 0x60)));
        draw_object_tree__14TOTrapSeabed01FPvPv((u8 *)(arg0), (u8 *)(*(s32 *)((s8 *)arg0 + 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
        restore_saved_depth_alpha_state();
    }
}
void render__14TOTrapSeabed01Fv(S_802CA550 *arg0) {
    if (get_state_flag__9TMainTaskFv() != 1 && (arg0->f34C == 0 || is_split_screen() != 0 || dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) == 0) && arg0->f340 == 1) {
        switch (arg0->f326) {
        case 0:
        case 1:
            draw__14TOTrapSeabed01FPv((u8 *)(arg0));
            break;
        case 2:
        case 3:
            render_effect_layers__14TOTrapSeabed01FPv((u8 *)(arg0));
            break;
        }
    }
}

}

#pragma pop

#undef trigger_by_id__14TOTrapSeabed01FUi
#undef TOTrapSeabed01__ginja_model
#define lbl_805DE640 (lbl_805DE640[0])
#define lbl_805DE658 (lbl_805DE658[0])
#pragma push

#include "types.h"
#include "pso/misc/TOTrapSeabed01.h"
#include "pso/misc/TOTrap.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Base_802CA8C8_eabed01 { char pad[0x18]; };
struct VObj_802CA8C8_eabed01 : Base_802CA8C8_eabed01 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)
#undef V
    virtual void m83();
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct SeabedTrapResourceDescriptor {
    const char *bml_filename;
    const char *const *model_filenames;
    const char *const *motion_filenames;
    s16 model_count;
    s16 motion_count;
};
struct SeabedTrapCollisionBody {
    f32 local_center[3];
    f32 radius;
    f32 field_10;
    s32 field_14;
    u32 flags;
    f32 world_center[3];
    f32 field_28;
};
typedef char SeabedTrapResourceDescriptor_size[(sizeof(SeabedTrapResourceDescriptor) == 0x10) ? 1 : -1];
typedef char SeabedTrapCollisionBody_size[(sizeof(SeabedTrapCollisionBody) == 0x2C) ? 1 : -1];

struct RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 { s32 value; u8 remaining[0x168]; };

#pragma inline_depth(4)
#pragma dont_inline off
struct VBase_802CA5F4 { char pad[0x18]; };

struct VObj_802CA5F4 : VBase_802CA5F4 {
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual f32 m85(f32);
};

extern "C" {
s32 get_bml_motion(int, int);
s32 get_bml_model(int, int);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TOTrap__ct(void *);
extern SeabedTrapCollisionBody seabed_trap_collision_body;
extern void *__vt__14TOTrapSeabed01[];
extern s32 TOTrapSeabed01_class_name;
#define TOTrapSeabed01__bml_resource (*(u32 *)&TOTrapSeabed01__bml_resource)
u8 *TOTrapSeabed01__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_bml_model(int, int);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32);
u32 load_gvm_texture_file(void *);
s32 find_entry_by_name__12TObjDoorJungFPvPv(u32, void *);
extern u8 lbl_804720E8[];
extern u8 lbl_80472100[];
extern SeabedTrapResourceDescriptor seabed_trap_resource_descriptor;

#define TOTrapSeabed01__texture_file (*(u32 *)&TOTrapSeabed01__texture_file)
#define TOTrapSeabed01__ginja_model (*(s32 *)&TOTrapSeabed01__ginja_model)
extern s32 lbl_805D681C;
extern s32 seabed01_ginja_mesh_index;
extern s32 trap_seabed01_param_index_table[];
}

extern "C" {

void vfunc_6__14TOTrapSeabed01FPsl(void *arg0, s16 *arg1, s32 arg2);
void TOTrapSeabed01__vt82(void);
void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 stop_sound_request(s32);
s32 TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__6TOTrapFv(void *, int);
void *__nw__7TObjectFUl(int);

s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__13TUnk_804AF8A0Fv(void *);

void TOTrapSeabed01__vt82(void) {  }

extern void *tl_05;

inline f32 clampf_802CA5F4(f32 lo, f32 hi, f32 v) {
    f32 r;
    if (lo > v) {
        r = lo;
    } else if (hi < v) {
        r = hi;
    } else {
        r = v;
    }
    return r;
}
inline s32 CLAMPI(s32 v, s32 lo, s32 hi) {
    s32 r;
    if (v < lo) {
        r = lo;
    } else {
        r = hi;
        if (v <= hi) {
            r = v;
        }
    }
    return r;
}
inline s32 clampi_802CA5F4(s32 lo, s32 hi, s32 v) {
    if (v < lo) {
        return lo;
    }
    if (v > hi) {
        return hi;
    }
    return v;
}
#pragma push
#pragma opt_common_subs off
void TOTrapSeabed01::clamp_params_and_init() {
    this->scale = clampf_802CA5F4(lbl_805DE650[0], lbl_805DE654[0], this->scale);
    this->m_84 = CLAMPI(this->m_84, 1, 0x3C);
    *(s32 *)&this->m_88 = CLAMPI(*(s32 *)&this->m_88, 0, 1);
    this->mode = 0;
    this->range = lbl_805DE64C[0];
    this->dist = lbl_805DE64C[0];
    *(s32 *)&this->m_348 = (s32) (lbl_805DE658 * (f32) this->m_84);
    if (*(s32 *)&this->m_88 != 0) {
        *(s32 *)&this->m_34c = 1;
    } else {
        *(s32 *)&this->m_34c = 0;
    }
    this->m_c8 = this->scale;
    if (this->target_scale < TOTrapSeabed01__data_805DE644[0]) {
        this->target_scale = TOTrapSeabed01__data_805DE644[0];
    }
    *(f32 *)&this->m_354 = ((VObj_802CA5F4 *)this)->m85(this->target_scale);
    *(s32 *)&this->unk_8C = CLAMPI(*(s32 *)&this->unk_8C, 0, 5);
    *(s32 *)&this->m_350 = trap_seabed01_param_index_table[*(s32 *)&this->unk_8C];
}
#pragma pop

void *TOTrapSeabed01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapSeabed01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOTrapSeabed01::free_static_resources() {
    if ((u32) TOTrapSeabed01__texture_file != 0U) {
        TLobby__sub_803DA16C((void*)TOTrapSeabed01__texture_file);
        TAdSinglePlyChrSelectGC::safe_free(TOTrapSeabed01__texture_file);
        TOTrapSeabed01__texture_file = 0U;
    }
    if ((u32) TOTrapSeabed01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapSeabed01__bml_resource, 1);
        TOTrapSeabed01__bml_resource = 0U;
    }
}

void TOTrapSeabed01::load_resources() {
    void *p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (p != 0) {
        p = load_resource_from_descriptor(p, 5, (void *)&seabed_trap_resource_descriptor, 0, 0, 0);
    }
    TOTrapSeabed01__bml_resource = (u32)p;
    TOTrapSeabed01__texture_file = load_gvm_texture_file(lbl_804720E8);
    s32 n = ((TObjSeabedSuisoBrakable *)(get_bml_model(TOTrapSeabed01__bml_resource, 0)))->count_linked_switches(5);
    u32 t = TOTrapSeabed01__texture_file;
    TOTrapSeabed01__ginja_model = n;
    lbl_805D681C = 0;
    seabed01_ginja_mesh_index = -1;
    if (t != 0U) {
        seabed01_ginja_mesh_index = find_entry_by_name__12TObjDoorJungFPvPv(t, lbl_80472100);
    }
}

void TOTrapSeabed01::vfunc_6(s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_802CA8C8_eabed01 *)this)->m83();
        }
        s32 tmp = *(s32 *)&this->m_358;
        if (tmp >= 0) {
            stop_sound_request(tmp);
            tmp = -1;
            *(s32 *)&this->m_358 = tmp;
        }
        ((s32 (*)(void *))sub_802C9D38__14TOTrapSeabed01Fv)(this);
        set_flag8__13TUnk_804AF8A0Fv(this);
        queue_destruction__7TObjectFv(this);
    }
}

extern void *__vt__14TOTrapSeabed01[];

void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__14TOTrapSeabed01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOTrapSeabed01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TOTrap__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 *)&__vt__14TOTrapSeabed01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOTrapSeabed01_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) ((*(s32 *)&TOTrapSeabed01__bml_resource)), (int) (0));
    *(s32 *)((s8 *)arg0 + 0xF8) = get_bml_motion((int) ((*(s32 *)&TOTrapSeabed01__bml_resource)), (int) (0));
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DE640;
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) TOTrapSeabed01__data_805DE644[0];
    ((TOTrapSeabed01 *)arg0)->clamp_params_and_init();
    init_collision_body_parts((void *) (arg0), (void *) (&seabed_trap_collision_body), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60040000);
    *(s32 *)((s8 *)arg0 + 0x344) = 0;
    *(s32 *)((s8 *)arg0 + 0x358) = -1;
    return arg0;
}

}

#pragma pop

#undef lbl_805DE640
#undef lbl_805DE658
#undef TOTrapSeabed01__bml_resource
#undef TOTrapSeabed01__texture_file
#undef TOTrapSeabed01__ginja_model

extern "C" {
void TOTrap__sub_80178BC0();
void TOTrap__sub_801792AC();
void TOTrap__sub_801792B0();
void vfunc_26__6TOTrapFll();
void TOTrap__sub_801792CC();
void TOTrap__sub_801792E4();
void TOTrap__sub_801792FC();
void vfunc_25__6TOTrapFPUc();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A78();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014884();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void vfunc_13__13TUnk_804AF8A0Fl();
void vfunc_12__13TUnk_804B9870Fv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_shock_status__10TObjPlayerFv();
void apply_slow_status__10TObjPlayerFPv();
void apply_switch_attack__10TObjPlayerFi();
void check_trigger_range__6TOTrapFUl();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void consume_timer_field__10TObjPlayerFPvi();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void find_target_player__6TOTrapFv();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void vfunc_9__13TUnk_804806E8Fv();
void get_actor_level_index();
void get_pos__10TObjPlayerFii();
void get_scale__6TOTrapFUl();
void is_actor_cadence_frame();
void is_any_player_matching_stat__6TOTrapFv();
void is_target_in_attack_range__10TObjPlayerFv();
void render_shadows__7TObjectFv();
void reset_motion_fields__13TUnk_804806E8Fv();
void reset_pose__10TObjPlayerFPv();
void submit_cursor_and_notify__6TOTrapFv();
void trigger_switch_attack__10TObjPlayerFi();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void update_poison_status__10TObjPlayerFv();
void update_shock_clock__10TObjPlayerFPv();
void run_task__6TOTrapFv();
extern const char lbl_80471FB8[];
extern const char lbl_80471FD0[];
extern const char lbl_80471FF0[];
extern const char lbl_80472010[];
extern const char lbl_80472028[];
const char *seabed_trap_model_filenames[4] = { lbl_80471FB8, lbl_80471FD0, lbl_80471FF0, 0 };
__declspec(section ".data") const char *seabed_trap_motion_filenames[2] = { lbl_80472010, 0 };
SeabedTrapResourceDescriptor seabed_trap_resource_descriptor = { lbl_80472028, seabed_trap_model_filenames, seabed_trap_motion_filenames, 3, 1 };
SeabedTrapCollisionBody seabed_trap_collision_body = { { 0.0f, 20.0f, 0.0f }, 14.0f, 0.0f, 0, 0x08011F04, { 0.0f, 0.0f, 0.0f }, 0.0f };
SeabedTrapFragmentSpawn seabed_trap_fragment_spawns[6] = {
    { 2, { 9.0f, 21.0f, 9.0f }, -24576 },
    { 2, { 9.0f, 21.0f, -9.0f }, -8192 },
    { 2, { -9.0f, 21.0f, 9.0f }, 24576 },
    { 2, { -9.0f, 21.0f, -9.0f }, 8192 },
    { 1, { -4.0f, 0.0f, -4.0f }, 0 },
    { 1, { 4.0f, 0.0f, 4.0f }, 32768 },
};
void *__vt__14TOTrapSeabed01[91] = {
    0,
    0,
    (void *)&__dt__14TOTrapSeabed01Fv,
    (void *)&run_task__6TOTrapFv,
    (void *)&render__14TOTrapSeabed01Fv,
    (void *)&render_shadows__7TObjectFv,
    (void *)&vfunc_6__14TOTrapSeabed01FPsl,
    (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv,
    (void *)&vfunc_9__13TUnk_804806E8Fv,
    (void *)&update_object_view_visibility__13TUnk_804B9870Fff,
    (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__13TUnk_804B9870Fv,
    (void *)&vfunc_13__13TUnk_804AF8A0Fl,
    (void *)&add_actor_exp,
    (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index,
    (void *)&update_actor_ground_y,
    (void *)&TObjPlayer__sub_80018E6C,
    (void *)&is_actor_cadence_frame,
    (void *)&TOTrap__sub_801792E4,
    (void *)&TOTrap__sub_801792FC,
    (void *)&TOTrapSeabed01__vt20,
    (void *)&check_trigger_range__6TOTrapFUl,
    (void *)&get_scale__6TOTrapFUl,
    (void *)&vfunc_25__6TOTrapFPUc,
    (void *)&vfunc_26__6TOTrapFll,
    (void *)&TOTrap__sub_801792CC,
    (void *)&TObjPlayer__sub_80011010,
    (void *)&TObjPlayer__sub_8000FF3C,
    (void *)&is_target_in_attack_range__10TObjPlayerFv,
    (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512,
    (void *)&TObjPlayer::has_flag_0x800,
    (void *)&TObjPlayer::test_flag_1000,
    (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv,
    (void *)&update_action_timer__10TObjPlayerFPv,
    (void *)&update_flag30_timer__10TObjPlayerFPv,
    (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv,
    (void *)&update_attack_stat_status,
    (void *)&update_defense_stat_status,
    (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv,
    (void *)&apply_paralysis__10TObjPlayerFv,
    (void *)&apply_slow_status__10TObjPlayerFPv,
    (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv,
    (void *)&apply_shock_status__10TObjPlayerFv,
    (void *)&clear_harmful_statuses__10TObjPlayerFv,
    (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status,
    (void *)&cure_poison_ailment,
    (void *)&cure_paralysis__10TObjPlayerFv,
    (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status,
    (void *)&apply_anti_technique__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80014898,
    (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890,
    (void *)&TObjPlayer__sub_8001488C,
    (void *)&TObjPlayer__sub_80014888,
    (void *)&TObjPlayer__sub_80014884,
    (void *)&reset_pose__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_80014840,
    (void *)&TObjPlayer__sub_80014838,
    (void *)&TOTrapSeabed01__vt65,
    (void *)&get_pos__10TObjPlayerFii,
    (void *)&apply_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_jellen_effect,
    (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect,
    (void *)&TObjPlayer__sub_80010A80,
    (void *)&TObjPlayer__sub_80010A78,
    (void *)&fn_80010EC8,
    (void *)&fn_80010EC4,
    (void *)&fn_80010EC0,
    (void *)&fn_80010EBC,
    (void *)&find_target_player__6TOTrapFv,
    (void *)&submit_cursor_and_notify__6TOTrapFv,
    (void *)&TOTrapSeabed01__vt79,
    (void *)&TOTrapSeabed01__vt80,
    (void *)&is_any_player_matching_stat__6TOTrapFv,
    (void *)&TOTrapSeabed01__vt82,
    (void *)&TOTrapSeabed01__vt83,
    (void *)&TOTrap__sub_801792AC,
    (void *)&TOTrap::scale_by_table_value,
    (void *)&TOTrap__sub_801792B0,
    (void *)&TOTrap__sub_80178BC0,
    0
};
}
