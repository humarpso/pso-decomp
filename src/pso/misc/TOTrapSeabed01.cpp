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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m20(s32, f32);
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
    virtual M2C_UNK m65(f32);
};

typedef s32 M2C_UNK;
struct Vec_802C9E3C { f32 x, y, z; };

struct Mtx_802C9E3C { f32 m[3][4]; };

struct Entry_802C9E3C {
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
void check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
void TOTrapSeabed01__vt80(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32);
f32 horizontal_distance_squared(void *, void *);
f32 TObjPlayer__sub_8017A1A4(int, int);
M2C_UNK send_6x2C_impose_hold(int, void *, int, int, f32);
u32 get_player_by_client_id(u32);
M2C_UNK fn_802C9C18(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
void check_hold_player__14TOTrapSeabed01FPv(u8 *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
void obj_clearFlags30(void *, u32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void set_indexed_flags(void *, s32, s32);
void check_hold_player__14TOTrapSeabed01FPv(u8 *arg0);
void TOTrapSeabed01__vt79(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_model(int, int);
M2C_UNK set_position_xy__10TObjPlayerFPvff(f32, f32);
u32 spawn_particle_effect(void *, int);
M2C_UNK copy_transform__8TObjChipFPvPv(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK __ct__13TObjSuisoChipFv(void *, void *, void *);
M2C_UNK fn_802C9C18(void *, int);
M2C_UNK matrix_mult_vec(void *, void *, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(void *, void *);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(void *, int);
extern u8 lbl_80472044[];
extern Entry_802C9E3C lbl_804E0FE4[];
extern s32 TOTrapSeabed01__bml_resource;
extern s32 TOTrapSeabed01__texture_file;
void TOTrapSeabed01__vt83(Trap_802C9E3C *self);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void *get_battle_param__10TObjPlayerFi(s32);
s32 is_valid_and_active__10TObjPlayerFUi();
extern s32 lbl_805D3530;
s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self);
}

extern "C" {

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0);
void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0);
M2C_UNK set_triggered_state__6TOTrapFPvUi(s32, s32, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_802C9D38();

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0) {
    fn_802C9D38();
    set_triggered_state__6TOTrapFPvUi(arg0, arg1, farg0);
}

extern u32 TOTrapSeabed01__ginja_model;

void TOTrapSeabed01__vt83(Trap_802C9E3C *self) {
    Mtx_802C9E3C m;
    Params_802C9E3C p;
    Entry_802C9E3C *e;
    s32 i;
    f32 y;
    void *o;
    copy_transform__8TObjChipFPvPv(&p, lbl_80472044);
    y = TOTrapSeabed01__data_805DE644;
    p.f44 = TOTrapSeabed01__texture_file;
    for (i = 0; i < 6; i++) {
        e = &lbl_804E0FE4[i];
        VecCopy__FP3VecPC3Vec(&p.pos, &e->pos);
        p.model = get_bml_model(TOTrapSeabed01__bml_resource, e->id);
        p.arg = e->arg;
        o = __nw__7TObjectFUl(0x24C);
        if (o != NULL) {
            __ct__13TObjSuisoChipFv(o, self, &p);
        }
        Vec_802C9E3C v = p.pos;
        v.y = y;
        set_matrix_identity__10TObjPlayerFPv(&m);
        set_position_vec3__10TObjPlayerFPvPv(&m, &self->pos);
        rotate_matrix_y(&m, self->rotY);
        matrix_mult_vec(&m, &v, &v);
        if (spawn_particle_effect(&v, 0x8B) != 0) {
            set_position_xy__10TObjPlayerFPvff(lbl_805DE648, lbl_805DE648);
        }
    }
    fn_802C9C18(self, 1);
}

s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self) {
    s32 i;
    VObj_802C9F70 *o;
    for (i = 0; i < 0x10; i++) {
        o = (VObj_802C9F70 *)get_battle_param__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi() != 0 && check_value_equals__13TQuestColCtrlFPvi(o, lbl_805D3530) != 0) {
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
    M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
    M2C_FIELD(arg0, u16 *, 0x33C) = find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x334)));
    id = M2C_FIELD(arg0, u16 *, 0x33C);
    if ((id != 0xFFFF) && (temp_r3 = get_player_by_client_id(id), M2C_FIELD(arg0, u32 *, 0x2A8) = temp_r3, temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x2A8), ((temp_r3_2 == 0U) == 0))) {
        temp_f31 = horizontal_distance_squared((void *) (temp_r3_2 + 0x38), (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, f32 *, 0x338) = (f32) (M2C_FIELD(arg0, f32 *, 0x338) - TObjPlayer__sub_8017A1A4((int) (temp_r3), (int) (0)));
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x338);
        if (temp_f31 < (temp_f0 * temp_f0)) {
            if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
                send_6x2C_impose_hold((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x338)));
            } else if ((s32) M2C_FIELD(arg0, u16 *, 0x33C) == (s32) lbl_805D53A0) {
                send_6x2C_impose_hold((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x338)));
            }
            fn_802C9C18((void *) (arg0), (int) (0));
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x33C) = 0xFFFFU;
        M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
    }
}
#pragma pop

void TOTrapSeabed01__vt80(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348) - 1;
    M2C_FIELD(arg0, s32 *, 0x348) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE64C;
        set_indexed_flags(arg0, 0, 0x100);
        init_all_slots__10TObjPlayerFv();
        check_object_collisions__10TObjPlayerFPv(arg0);
        ((VObj_18_f37bb9 *)(arg0))->m65(lbl_805DE640);
        ((VObj_18_f37bb9 *)(arg0))->m20(M2C_FIELD(arg0, s32 *, 0x2A8), lbl_805DE640);
    }
    submit_cursor_candidate((void *) (arg0), (int) (-1));
}

void TOTrapSeabed01__vt79(u8 *arg0) {
    u32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8));
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF8), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xC0) > (f32) temp_r0) {
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) temp_r0;
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        calc_attach_pos__10TObjPlayerFPv(arg0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08001F04U);
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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
s32 load_projection_tex_matrix__15TOTrapAncient02Fi(int);
f32 rotate_matrix_by_node_angles(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
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
M2C_UNK PPCSync();
M2C_UNK scroll_ginja_mesh_uvs(int, int, int, void *, int);
M2C_UNK post_translate_matrix(void *);
void TOTrapSeabed01__vt82(void);
M2C_UNK draw_ginja_model_with_motion(int, int, f32);

M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK func_80141618__Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_npc_enemy_param(void *);

#define trigger_by_id__14TOTrapSeabed01FUi (*(M2C_UNK (*)[1])&trigger_by_id__14TOTrapSeabed01FUi)
extern s32 lbl_805D53A4;
extern s32 TOTrapSeabed01__texture_file;
#define TOTrapSeabed01__ginja_model (*(u8 * *)&TOTrapSeabed01__ginja_model)
extern s32 lbl_805D681C;
extern s32 seabed01_ginja_mesh_index;

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0) {
    set_global_param__8TObjFishFi((void *)((void *) (TOTrapSeabed01__texture_file)));
    if ((s32) lbl_805D53A4 != (s32) lbl_805D681C) {
        if (((void *) TOTrapSeabed01__ginja_model != NULL) && ((s32) seabed01_ginja_mesh_index != -1)) {
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(TOTrapSeabed01__ginja_model, s32 *, 4)), (int) (0), (int) (-0x14), (void *) ((u16) seabed01_ginja_mesh_index), (int) (1));
            PPCSync();
        }
        lbl_805D681C = lbl_805D53A4;
    }
    set_npc_enemy_param((void *) (trigger_by_id__14TOTrapSeabed01FUi));
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    ((M2C_UNK (*)(int, int))rotate_matrix_y)((int)((int) (0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
    set_depth_buffer_settings_3__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (1)));
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    restore_saved_depth_alpha_state();
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (2)));
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    restore_saved_depth_alpha_state();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    set_npc_enemy_param((void *) (NULL));
}

extern s32 TOTrapSeabed01__texture_file;

void draw_object_tree__14TOTrapSeabed01FPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
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
            if ((s32) M2C_FIELD(arg0, s32 *, 0x34C) != 0) {
                setup_particle_tev((int) (0));
                set_global_param__8TObjFishFi((void *)((int) (TOTrapSeabed01__texture_file)));
                load_projection_tex_matrix__15TOTrapAncient02Fi((int) (0x38E));
                draw_ginja_model((int) (M2C_FIELD(var_r30, s32 *, 4)));
                disable_if_single_screen__13TParticleCtrlFv();
            } else {
                draw_ginja_model((int) (M2C_FIELD(var_r30, s32 *, 4)));
            }
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r4 != NULL) {
                draw_object_tree__14TOTrapSeabed01FPvPv(arg0, temp_r4);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

void draw__14TOTrapSeabed01FPv(u8 *arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x34C) == 0)) {
        set_depth_buffer_settings_3__Fv();
        set_depth_buffer_settings_id__FUl((int)(1));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((void *)(TOTrapSeabed01__texture_file));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        ((M2C_UNK (*)(int, int))rotate_matrix_y)((int)(0), (int)(M2C_FIELD(arg0, s32 *, 0x60)));
        draw_object_tree__14TOTrapSeabed01FPvPv((u8 *)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x34)));
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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802CA9AC_lbl_804E0FB8 { M2C_UNK value; u8 remaining[0x28]; };

struct RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 { M2C_UNK value; u8 remaining[0x168]; };

typedef s32 M2C_UNK;
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
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TOTrap__ct(void *);
extern RecoveredGlobal_802CA9AC_lbl_804E0FB8 lbl_804E0FB8;
extern M2C_UNK __vt__14TOTrapSeabed01[];
extern s32 TOTrapSeabed01_class_name;
#define TOTrapSeabed01__bml_resource (*(u32 *)&TOTrapSeabed01__bml_resource)
u8 *TOTrapSeabed01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 get_bml_model(int, int);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, s32);
u32 load_gvm_texture_file(void *);
s32 find_entry_by_name__12TObjDoorJungFPvPv(u32, void *);
extern u8 lbl_804720E8[];
extern u8 lbl_80472100[];
extern u8 lbl_804E0FA8[];

#define TOTrapSeabed01__texture_file (*(u32 *)&TOTrapSeabed01__texture_file)
#define TOTrapSeabed01__ginja_model (*(s32 *)&TOTrapSeabed01__ginja_model)
extern s32 lbl_805D681C;
extern s32 seabed01_ginja_mesh_index;
void load_resources__14TOTrapSeabed01Fv(void);
extern s32 lbl_80472090[];
void clamp_params_and_init__14TOTrapSeabed01FPv(void *arg0);
}

extern "C" {

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2);
void TOTrapSeabed01__vt82(void);
void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1);
void *create__14TOTrapSeabed01FPv(void *arg0);
void free_static_resources__14TOTrapSeabed01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK stop_sound_request(s32);
M2C_UNK TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__6TOTrapFv(void *, int);
void *__nw__7TObjectFUl(int);

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK set_flag8__6TLobbyFPv(void *);

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
void clamp_params_and_init__14TOTrapSeabed01FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x68) = clampf_802CA5F4(lbl_805DE650[0], lbl_805DE654[0], M2C_FIELD(arg0, f32 *, 0x68));
    M2C_FIELD(arg0, s32 *, 0x84) = CLAMPI(M2C_FIELD(arg0, s32 *, 0x84), 1, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x88) = CLAMPI(M2C_FIELD(arg0, s32 *, 0x88), 0, 1);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, f32 *, 0x334) = lbl_805DE64C[0];
    M2C_FIELD(arg0, f32 *, 0x338) = lbl_805DE64C[0];
    M2C_FIELD(arg0, s32 *, 0x348) = (s32) (lbl_805DE658 * (f32) M2C_FIELD(arg0, s32 *, 0x84));
    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        M2C_FIELD(arg0, s32 *, 0x34C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x34C) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xC8) = M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0x6C) < TOTrapSeabed01__data_805DE644[0]) {
        M2C_FIELD(arg0, f32 *, 0x6C) = TOTrapSeabed01__data_805DE644[0];
    }
    M2C_FIELD(arg0, f32 *, 0x354) = ((VObj_802CA5F4 *)arg0)->m85(M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, s32 *, 0x8C) = CLAMPI(M2C_FIELD(arg0, s32 *, 0x8C), 0, 5);
    M2C_FIELD(arg0, s32 *, 0x350) = lbl_80472090[M2C_FIELD(arg0, s32 *, 0x8C)];
}
#pragma pop

void *create__14TOTrapSeabed01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapSeabed01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void free_static_resources__14TOTrapSeabed01Fv(void) {
    if ((u32) TOTrapSeabed01__texture_file != 0U) {
        TLobby__sub_803DA16C((void*)TOTrapSeabed01__texture_file);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOTrapSeabed01__texture_file);
        TOTrapSeabed01__texture_file = 0U;
    }
    if ((u32) TOTrapSeabed01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapSeabed01__bml_resource, 1);
        TOTrapSeabed01__bml_resource = 0U;
    }
}

void load_resources__14TOTrapSeabed01Fv(void) {
    void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != 0) {
        p = load_resource_from_descriptor(p, 5, lbl_804E0FA8, 0, 0, 0);
    }
    TOTrapSeabed01__bml_resource = (u32)p;
    TOTrapSeabed01__texture_file = load_gvm_texture_file(lbl_804720E8);
    s32 n = count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(TOTrapSeabed01__bml_resource, 0), 5);
    u32 t = TOTrapSeabed01__texture_file;
    TOTrapSeabed01__ginja_model = n;
    lbl_805D681C = 0;
    seabed01_ginja_mesh_index = -1;
    if (t != 0U) {
        seabed01_ginja_mesh_index = find_entry_by_name__12TObjDoorJungFPvPv(t, lbl_80472100);
    }
}

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_802CA8C8_eabed01 *)arg0)->m83();
        }
        s32 tmp = M2C_FIELD(arg0, s32 *, 0x358);
        if (tmp >= 0) {
            stop_sound_request(tmp);
            tmp = -1;
            M2C_FIELD(arg0, s32 *, 0x358) = tmp;
        }
        ((M2C_UNK (*)(void *))fn_802C9D38)(arg0);
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__14TOTrapSeabed01[];

void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOTrapSeabed01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOTrapSeabed01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOTrap__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 *)&__vt__14TOTrapSeabed01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOTrapSeabed01_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) ((*(s32 *)&TOTrapSeabed01__bml_resource)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0xF8) = get_bml_motion((int) ((*(s32 *)&TOTrapSeabed01__bml_resource)), (int) (0));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DE640;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) TOTrapSeabed01__data_805DE644[0];
    clamp_params_and_init__14TOTrapSeabed01FPv((void *)((void *) (arg0)));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804E0FB8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60040000);
    M2C_FIELD(arg0, s32 *, 0x344) = 0;
    M2C_FIELD(arg0, s32 *, 0x358) = -1;
    return arg0;
}

}

#pragma pop

#undef lbl_805DE640
#undef lbl_805DE658
#undef TOTrapSeabed01__bml_resource
#undef TOTrapSeabed01__texture_file
#undef TOTrapSeabed01__ginja_model
