#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_dbc69f { char pad[0x18]; };

struct VObj_18_dbc69f : VBase_18_dbc69f {
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
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
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
    virtual f32 m85(f64 *, M2C_UNK, f32, f32);
};

struct Vec_8017A3C0 { f32 x, y, z; };

struct Dmg_8017A3C0 { s32 type; f32 v; };

struct VB_8017A3C0 { u8 pad[0x18]; };

struct Trap_8017A3C0 : VB_8017A3C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Dmg_8017A3C0, s32, s32, s32);
    virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84();
    virtual f32 m85(f32);
};

struct Obj_8017A3C0 {
    u8 pad0[0x28];
    s16 f28;
    u8 pad2A[4];
    s16 f2E;
    u8 pad30[8];
    Vec_8017A3C0 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x2A8 - 0x64];
    Obj_8017A3C0 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_8017A3C0 f2FC;
    u8 pad308[0x326 - 0x308];
    s16 mode;
    s16 sub;
    u8 pad32A[0x334 - 0x32A];
    f32 range;
    f32 f338;
    u16 idx;
    u8 pad33E[0x344 - 0x33E];
    f32 f344;
    f32 f348;
    u8 pad34C[0x35C - 0x34C];
    s32 kind;
    s32 level;
};

extern "C" {
u16 find_nearest_visible_player(void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 spawn_particle_effect(void *, int);
f32 horizontal_distance_squared(void *, void *);
void set_indexed_flags(void *, s32, s32);
f32 get_collision_body_radius(void *, s32);
void submit_cursor_candidate(void *, s32);
s32 get_player_by_client_id(u32);
void play_sound_effect(s32, void *, s32, s32);
void * __nw__7TObjectFUl(int);
void create_ex__8TTecFoieFPvPvPvPv(void *, void *, void *, s32);
void create_ex__11TTecGiBartaFPvPvPvPv(void *, void *, s32, s32);
void create__10TTecGiFoieFPvPvPv(void *, void *, s32);
void create__9TTecMegidFiiii(void *, void *, void *, s32);
void construct_bolt_effect__9TTecZondeFPvPvPvPviiff(void *, s32, void *, void *, s32, s32, f32, f32);
void rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
M2C_UNK pop_matrix();
extern const f64 lbl_80442F38;
extern Vec_8017A3C0 lbl_8050BEE0[];
extern Vec_8017A3C0 lbl_8050BF00[];
extern u8 lbl_8058D490[];
extern s32 tl_07;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
extern const f32 lbl_805DBA84;
extern const f32 lbl_805DBA88;
extern const f32 lbl_805DBA8C;
extern const f32 lbl_805DBA90;
extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBA98;
void TOTrapAncient02R__vt79(Obj_8017A3C0 *o);
void set_indexed_flags(void *, s32, s32);
void submit_cursor_candidate(void *, s32);
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
void TOTrapAncient02R__vt80(void *arg0);
}

extern "C" {

struct Obj_8017A8B0 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0x2A8 - 0x44];
    u8 *target;
    u8 pad2ac[0x326 - 0x2AC];
    s16 state;
    u8 pad328[0x334 - 0x328];
    f32 range;
    u8 pad338[0x33C - 0x338];
    u16 idx;
    u8 pad33e[0x364 - 0x33E];
    s32 switchId;
};

struct Vec_8017A988 { f32 x, y, z; };

struct VBase_8017A988 { u8 pad[0x18]; };

struct Obj_8017A988 : VBase_8017A988 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s16 *, s32);
    u16 id;
    u8 pad1e[0x38 - 0x1E];
    Vec_8017A988 pos;
    u8 pad44[0x80 - 0x44];
    u32 x80;
    u8 pad84[0x326 - 0x84];
    s16 state;
    u8 pad328[0x344 - 0x328];
    f32 x344;
    f32 x348;
    u8 pad34c[0x368 - 0x34C];
    s32 timer;
};

struct VBase_8017AB30 { char pad[0x18]; };

struct VObj_8017AB30 : VBase_8017AB30 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Base_B_8017AC98 { char pad[0x18]; };

struct V_B_8017AC98 : Base_B_8017AC98 {
    virtual void pv15();
    virtual void pv16();
    virtual void pv17();
    virtual void pv18();
    virtual void pv19();
    virtual void pv20();
    virtual void pv21();
    virtual void pv22();
    virtual s32 m8(f32, f32);
};

struct Base_8017B84C_8017AC98 { char pad[0x18]; };

struct VObj_8017B84C_8017AC98 : Base_8017B84C_8017AC98 {
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
};

struct Obj_8017ACA0 {
    u8 pad[0x326];
    s16 state;
    u8 pad328[0x34C - 0x328];
    s32 angle;
};

struct Trap_8017ADC4 {
    u8 pad0[0x2A8];
    void *target;
    u8 pad2AC[0x326 - 0x2AC];
    s16 mode;
    s16 state;
    u8 pad32A[0x33C - 0x32A];
    u16 player;
    u8 pad33E[0x344 - 0x33E];
    f32 h344;
    f32 h348;
    u8 pad34C[0x350 - 0x34C];
    s32 reset;
    s32 timer;
};

struct Base_8017B6D8 { char pad[0x18]; };

struct V_8017B6D8 : Base_8017B6D8 {
    virtual void pv8();
    virtual void pv9();
    virtual void pv10();
    virtual void pv11();
    virtual void pv12();
    virtual void init(void *);
};

struct Trap_8017B6D8 {
    u32 id;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u32 flags;
    void *f34;
    u8 pad38[0x64 - 0x38];
    s32 f64;
    f32 f68;
    u8 pad6C[0x84 - 0x6C];
    s32 f84;
    u8 pad88[0x326 - 0x88];
    s16 mode;
    s16 state;
    u8 pad32A[0x334 - 0x32A];
    f32 range;
    f32 dist;
    u16 player;
    u8 pad33E[0x344 - 0x33E];
    f32 h344;
    f32 h348;
    s32 f34C;
    s32 reset;
    s32 timer;
    s32 f358;
};

u16 find_nearest_visible_player(void *, int, f32);
void calc_attach_pos__10TObjPlayerFPv(void *);
u16 obj_getField1c(void *);
void obj_setFlags30(void *, u32);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();
void * get_bml_model(void *, int);
void TLobby__sub_8001FE7C(void*, int);
void * load_resource_from_descriptor(void *, int, char *, int, int, int);
void fn_8002AE64(void *);
s32 check_player_flag1__6TLobbyFPv();
void * alloc__23TAdSinglePlyChrSelectGCFPv(u32);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(int);
M2C_UNK load_projection_tex_matrix__15TOTrapAncient02Fi(int);
s32 spawn_particle_effect(void *, int);
M2C_UNK init_position_vectors__10TObjPlayerFi(void *);
void TObjPlayer__sub_800A7798(void *, f32);
u8 * count_linked_switches__23TObjSeabedSuisoBrakableFUii(void *, int);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
f32 horizontal_distance_squared(void *, void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
s32 send_object_state_update(void *, void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
M2C_UNK free_collision_body_parts(void *);
void init_collision_body_parts(void *, void *, s32);
s32 access_object_saved_state(void *, void *, int);
M2C_UNK __dt__6TOTrapFv(void *, M2C_UNK);
void * TOTrap__ct(void *, void *, void *);
void calc_trap_count__16TOTrapAncient02RFPv(void *arg0);
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self);
f32 TOTrapAncient02R__vt20(Obj_8017A988 *self);
void * create__16TOTrapAncient02RFPv(void *arg0);
void * __dt__16TOTrapAncient02RFv(void *arg0, s16 arg1);
void * TOTrapAncient02R__ct(void *arg0, void *arg1, void *arg2);
void TOTrapAncient02__vt84(void);
void TOTrapAncient02__vt86(void);
void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self);
void TOTrapAncient02__vt80(Trap_8017ADC4 *self);
void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0);
void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0);
void draw_model__15TOTrapAncient02FPv(void *arg0);
void * create__15TOTrapAncient02FPv(void *arg0);
void destroy_instance__15TOTrapAncient02Fv(void);
void load_resources__15TOTrapAncient02Fv(void);
void * __dt__15TOTrapAncient02Fv(void *arg0, s16 arg1);
void * TOTrapAncient02__ct(void *arg0, void *arg1, void *arg2);
void TOTrapAncient02R__vt78(void *arg0);
M2C_UNK init_trap_param_clamped(void *);
M2C_UNK clamp_trap_level_param(void *);
M2C_UNK init_trap_object_id(void *);
void submit_cursor_candidate(void *, s32);
void send_code_45_1__10TObjPlayerFi(s32);
s32 get_player_by_client_id(u32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
u32 get_global_state__14TOKeyMachine01Fv();
void play_persistent_sound(int, void *, void *, int, int);
u8 is_current_floor_switch_set(u16);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void scroll_ginja_mesh_uvs(u32, s32, s32, u16, s32);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);

extern u32 TOTrapAncient02__data_805D5AD8;
extern M2C_UNK __vt__15TOTrapAncient02[];
extern M2C_UNK __vt__16TOTrapAncient02R[];
extern char lbl_804B4AD8[];
extern u8 lbl_804B4B20[];
extern u32 lbl_805D31B4;
extern s32 lbl_805D31B8;
extern s32 lbl_805D53A0;
extern s32 lbl_805D53A4;
extern s32 game_difficulty_selection;
extern s32 lbl_805D5ADC;
extern u32 lbl_805D5AE0;
extern s32 lbl_805D5AE4;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA7C;
extern const f32 lbl_805DBA80;
extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBA9C;
extern const f32 lbl_805DBAA0;
extern const f32 lbl_805DBAA4;
extern void *tl_05;

#pragma push
#pragma fp_contract on
void calc_trap_count__16TOTrapAncient02RFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (M2C_FIELD(arg0, f32 *, 0x70) + ((lbl_805DBA7C * (f32) game_difficulty_selection) + lbl_805DBA78));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        return;
    }
    if ((s32) game_difficulty_selection == 3) {
        if (temp_r4 > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x360) = 0x1D;
        }
    } else if (temp_r4 > 0xE) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0xE;
    }
}
extern int fold_flush_0;
#pragma pop

void TOTrapAncient02R__vt80(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    set_indexed_flags(arg0, 0, 1);
    submit_cursor_candidate(arg0, -1);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
    case 1:
        M2C_FIELD(arg0, s16 *, 0x328) = 2;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x354) = (s32) (M2C_FIELD(arg0, s32 *, 0x354) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x354) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            M2C_FIELD(arg0, s32 *, 0x354) = (s32) M2C_FIELD(arg0, s32 *, 0x350);
        }
        break;
    case 3:
        if (lbl_805DBA80 < M2C_FIELD(arg0, f32 *, 0x348)) {
            M2C_FIELD(arg0, f32 *, 0x348) -= lbl_805DBA78;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 4;
        M2C_FIELD(arg0, f32 *, 0x348) = (f32) lbl_805DBA80;
        return;
    case 4:
        if (lbl_805DBA80 < M2C_FIELD(arg0, f32 *, 0x344)) {
            M2C_FIELD(arg0, f32 *, 0x344) -= lbl_805DBA78;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, f32 *, 0x344) = (f32) lbl_805DBA80;
        M2C_FIELD(arg0, u16 *, 0x33C) = 0xFFFF;
        M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
        break;
    }
}

#pragma push
#pragma fp_contract on
void TOTrapAncient02R__vt79(Obj_8017A3C0 *o) {
    f32 d;
    s32 ang;
    set_indexed_flags(o, 0, 1);
    submit_cursor_candidate(o, -1);
    switch (o->sub) {
    case 0:
        if (o->f344 < lbl_805DBA84) {
            o->f344 += lbl_805DBA78;
        } else {
            o->sub = 1;
            o->f344 = lbl_805DBA84;
        }
        break;
    case 1:
        o->f348 += lbl_805DBA78;
        if (lbl_805DBA88 <= o->f348) {
            o->sub = 2;
            o->f348 = lbl_805DBA88;
        }
        break;
    case 2:
        o->idx = find_nearest_visible_player(o, 0, o->range);
        if (o->idx != 0xFFFF) {
            Obj_8017A3C0 *p = (Obj_8017A3C0 *)get_player_by_client_id(o->idx);
            o->target = p;
            if (o->target != NULL && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor() &&
                (o->target->f2E == o->f2E || o->target->f28 == o->f28 || o->target->f28 == o->f2E)) {
                d = horizontal_distance_squared(&o->target->pos, &o->pos);
                o->f338 = o->range + get_collision_body_radius(o->target, 0);
                if (d < o->f338 * o->f338) {
                    o->mode = 3;
                    o->sub = 2;
                    VecCopy__FP3VecPC3Vec(lbl_8050BEE0, &o->pos);
                    lbl_8050BEE0->y += o->f344 + o->f348;
                    VecCopy__FP3VecPC3Vec(lbl_8050BF00, &o->target->f2FC);
                    subtract_vector(lbl_8050BF00, lbl_8050BEE0);
                    if (update_scale__15TObjBoss2TunnelFPv(lbl_8050BF00) < lbl_805DBA8C) {
                        lbl_8050BF00->x = lbl_8050BF00->y = lbl_805DBA80;
                        lbl_8050BF00->z = lbl_805DBA78;
                        push_matrix_from(lbl_8058D490);
                        rotate_matrix_y(0, o->angle);
                        rotate_vector_by_matrix(0, lbl_8050BF00, lbl_8050BF00);
                        pop_matrix();
                    }
                    ang = lbl_80442F38 * get_ad_end_text_start__10TObjPlayerFv(lbl_8050BF00->x, lbl_8050BF00->z);
                    switch (o->kind) {
                    case 1: {
                        Dmg_8017A3C0 dmg;
                        dmg.type = 3;
                        dmg.v = ((Trap_8017A3C0 *)o)->m85(lbl_805DBA94 * (f32)o->level + lbl_805DBA90);
                        ((Trap_8017A3C0 *)o->target)->m21(o, dmg, 0, -1, -1);
                        spawn_particle_effect(lbl_8050BEE0, 0xB9);
                        spawn_particle_effect(lbl_8050BEE0, 0xBA);
                        {
                            void *t = __nw__7TObjectFUl(0x260);
                            if (t != NULL) {
                                construct_bolt_effect__9TTecZondeFPvPvPvPviiff(t, tl_07, lbl_8050BEE0, lbl_8050BF00, 0x14000000, 0x14, o->range, lbl_805DBA98);
                            }
                        }
                        play_sound_effect(0x4002A408, lbl_8050BEE0, 0, 0);
                        break;
                    }
                    case 0:
                        create_ex__8TTecFoieFPvPvPvPv(o, lbl_8050BEE0, &o->target->f2FC, o->level);
                        break;
                    case 2:
                        create_ex__11TTecGiBartaFPvPvPvPv(o, lbl_8050BEE0, ang, o->level);
                        break;
                    case 3:
                        create__9TTecMegidFiiii(o, lbl_8050BEE0, &o->target->f2FC, o->level);
                        break;
                    case 4:
                        create__10TTecGiFoieFPvPvPv(o, lbl_8050BEE0, o->level);
                        break;
                    }
                } else {
                    o->idx = 0xFFFF;
                    o->target = NULL;
                }
            } else {
                o->idx = 0xFFFF;
                o->target = NULL;
            }
        } else {
            o->target = NULL;
        }
        if (o->target == NULL) {
            o->sub = 3;
        }
        break;
    case 3:
        if (lbl_805DBA80 < o->f348) {
            o->f348 -= lbl_805DBA78;
        } else {
            o->sub = 4;
            o->f348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < o->f344) {
            o->f344 -= lbl_805DBA78;
        } else {
            o->mode = 0;
            o->sub = 0;
            o->f344 = lbl_805DBA80;
            o->idx = 0xFFFF;
            o->target = NULL;
        }
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self) {
    clear_player_status_flag__10TObjPlayerFPviUi(self, 0, 1);
    calc_attach_pos__10TObjPlayerFPv(self);
    if (self->switchId == -1 || is_current_floor_switch_set(self->switchId) == 1) {
        self->idx = find_nearest_visible_player(self, 0, self->range);
        if (self->idx != 0xFFFF) {
            self->target = (u8 *)get_player_by_client_id(self->idx);
            if (self->target != NULL) {
                if (horizontal_distance_squared(self->target + 0x38, self->pos) < self->range * self->range) {
                    self->state = 2;
                }
            } else {
                self->idx = 0xFFFF;
                self->target = NULL;
            }
        } else {
            self->target = NULL;
        }
    }
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma fp_contract on
f32 TOTrapAncient02R__vt20(Obj_8017A988 *self) {
    s16 msg;
    if (self->id >= 0x4000 && self->x80 != 0) {
        Vec_8017A988 v = self->pos;
        v.y += self->x344 + self->x348;
        spawn_particle_effect(&v, 0x1D0);
        spawn_particle_effect(&v, 1);
        if (--self->timer <= 0) {
            self->timer = 0;
            if (access_object_saved_state(self, &msg, 1) != 0) {
                self->state = 4;
                msg = self->state;
                send_object_state_update(self, &msg);
                access_object_saved_state(self, &msg, 0);
                self->m4(&msg, 1);
            }
        }
    }
    return lbl_805DBA80;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
void *create__16TOTrapAncient02RFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x36C);
    if (o != NULL) {
        o = TOTrapAncient02R__ct(o, tl_05, arg0);
    }
    return o;
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma fp_contract on
void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOTrapAncient02R;
        ((void (*)(void *, int))__dt__15TOTrapAncient02Fv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void *TOTrapAncient02R__ct(void *arg0, void *arg1, void *arg2) {
    ((M2C_UNK (*)(void *, void *))TOTrapAncient02__ct)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOTrapAncient02R;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31B8;
    ((VObj_8017AB30 *)arg0)->m5(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(void * *)&TOTrapAncient02__data_805D5AD8), void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(void * *)&TOTrapAncient02__data_805D5AD8), void **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x334) = lbl_805DBAA0 * M2C_FIELD(arg0, f32 *, 0x68) + lbl_805DBA9C;
    M2C_FIELD(arg0, f32 *, 0x338) = M2C_FIELD(arg0, f32 *, 0x334);
    M2C_FIELD(arg0, s32 *, 0x350) = (s32) (lbl_805DBA9C + (f32) M2C_FIELD(arg0, s32 *, 0x84));
    if (M2C_FIELD(arg0, s32 *, 0x350) < 0) {
        M2C_FIELD(arg0, s32 *, 0x350) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x354) = M2C_FIELD(arg0, s32 *, 0x350);
    init_trap_object_id(arg0);
    clamp_trap_level_param(arg0);
    calc_trap_count__16TOTrapAncient02RFPv(arg0);
    init_trap_param_clamped(arg0);
    M2C_FIELD(arg0, u16 *, 0x33C) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    M2C_FIELD(arg0, f32 *, 0x348) = lbl_805DBA80;
    M2C_FIELD(arg0, f32 *, 0x344) = lbl_805DBA80;
    M2C_FIELD(arg0, s32 *, 0x34C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x64) > 0) {
        M2C_FIELD(arg0, s32 *, 0x358) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x358) = 0;
    }
    return arg0;
}
extern int fold_flush_5;
#pragma pop

void TOTrapAncient02__vt84(void) {  }

void TOTrapAncient02__vt86(void) {  }

void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self) {
    if (lbl_805D5ADC != lbl_805D53A4 && lbl_805D5AE0 != 0) {
        lbl_805D5ADC = lbl_805D53A4;
        scroll_ginja_mesh_uvs(lbl_805D5AE0, 0, 0xE, lbl_805D5AE4, 1);
    }
    self->angle += 0x888;
    switch (self->state) {
    case 1:
    case 2:
    case 3:
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 3:
        case 4:
        case 5:
            play_persistent_sound(0x4461B, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 6:
        case 7:
            play_persistent_sound(0x4004C612, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 8:
        case 9:
        case 10:
            play_persistent_sound(0x4004C618, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 21:
        case 22:
            play_persistent_sound(0x4004C610, self, (u8 *)self + 0x38, 0, 0);
        case 0:
            return;
        case 1:
            return;
        case 2:
            return;
        case 11:
            return;
        case 12:
            return;
        case 13:
            return;
        case 14:
            return;
        case 15:
            return;
        case 16:
            return;
        case 17:
            return;
        case 18:
            return;
        case 19:
            return;
        case 20:
            return;
        }
        break;
    }
}

void TOTrapAncient02__vt80(Trap_8017ADC4 *self) {
    s32 p;
    submit_cursor_candidate(self, -1);
    switch (self->state) {
    case 0:
    case 1:
        self->state = 2;
    case 2:
        if (self->target != NULL) {
            obj_setFlags30(self->target, 0x200);
            fn_8002AE64(self->target);
            TObjPlayer__sub_800A7798(self->target, lbl_805DBA78);
            self->timer--;
            if (self->timer < 0) {
                self->state = 3;
                self->timer = self->reset;
                if (self->target != NULL && lbl_805D53A0 == obj_getField1c(self->target)) {
                    p = ((s32 (*)(s32))get_player_by_client_id)(lbl_805D53A0);
                    if (p != 0 && check_player_flag1__6TLobbyFPv() != 0) {
                        send_code_45_1__10TObjPlayerFi(p);
                    }
                }
            }
        } else {
            self->state = 3;
            self->timer = self->reset;
        }
        break;
    case 3:
        if (lbl_805DBA80 < self->h348) {
            self->h348 -= lbl_805DBA78;
        } else {
            self->state = 4;
            self->h348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < self->h344) {
            self->h344 -= lbl_805DBA78;
        } else {
            self->mode = 0;
            self->state = 0;
            self->h344 = lbl_805DBA80;
            self->player = 0xFFFF;
            self->target = NULL;
        }
        break;
    }
}

void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    load_projection_tex_matrix__15TOTrapAncient02Fi((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    push_matrix();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    load_projection_tex_matrix__15TOTrapAncient02Fi((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    post_translate_matrix((void *) (temp_r31_3 + 8));
    setup_particle_tev((int) (1));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    load_projection_tex_matrix__15TOTrapAncient02Fi((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    pop_matrix();
    push_matrix();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    post_translate_matrix((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    load_projection_tex_matrix__15TOTrapAncient02Fi((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    pop_matrix();
}

void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    push_matrix();
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    push_matrix();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    post_translate_matrix((void *) (temp_r31_3 + 8));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    pop_matrix();
    push_matrix();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    post_translate_matrix((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    pop_matrix();
}

void draw_model__15TOTrapAncient02FPv(void *arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((V_B_8017AC98 *) arg0)->m8(lbl_805DBAA4, lbl_805DBA94);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) && (((s32) M2C_FIELD(arg0, s32 *, 0x358) == 0) || (is_split_screen() != 0) || (dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) == 0))) {
            set_depth_buffer_settings_id__FUl(3);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x358) != 0) {
                render_particle_chain__15TOTrapAncient02FPv((u8 *)(arg0));
            } else {
                draw_effect_chain__15TOTrapAncient02FPv((u8 *)(arg0));
            }
            func_80141618__Fv();
        }
    }
}

void *create__15TOTrapAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

void destroy_instance__15TOTrapAncient02Fv(void) {
    if ((u32) TOTrapAncient02__data_805D5AD8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapAncient02__data_805D5AD8, 1);
        TOTrapAncient02__data_805D5AD8 = 0U;
    }
}

void load_resources__15TOTrapAncient02Fv(void) {
    char *base = lbl_804B4AD8;
    void *obj;
    switch (((s32 (*)()) get_global_state__14TOKeyMachine01Fv)()) {
    case 0x13:
    case 0x14:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 0x20, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(obj, 0), 2) + 4);
        lbl_805D5AE4 = 2;
        lbl_805D5ADC = 0;
        break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x22:
    case 0x23:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 0x38, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(obj, 0), 2) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    default:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 1, base + 8, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)obj + 0x42C) + 8) + 0x2C) + 0x2C) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    }
}

void *__dt__15TOTrapAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOTrapAncient02;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            ((M2C_UNK (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TOTrapAncient02__ct(void *arg0, void *arg1, void *arg2) {
    TOTrap__ct(((Trap_8017B6D8 *)arg0), arg1, arg2);
    ((Trap_8017B6D8 *)arg0)->vt = (void *)__vt__15TOTrapAncient02;
    ((Trap_8017B6D8 *)arg0)->id = lbl_805D31B4;
    ((V_8017B6D8 *)((Trap_8017B6D8 *)arg0))->init(arg2);
    ((void (*)(void *))init_position_vectors__10TObjPlayerFi)(((Trap_8017B6D8 *)arg0));
    calc_attach_pos__10TObjPlayerFPv(((Trap_8017B6D8 *)arg0));
    ((Trap_8017B6D8 *)arg0)->f34 = *(void **)(*(u8 **)(TOTrapAncient02__data_805D5AD8 + 0x42C) + 8);
    ((Trap_8017B6D8 *)arg0)->f24 = *(s32 *)(*(u8 **)(TOTrapAncient02__data_805D5AD8 + 0x42C) + 0xC);
    ((Trap_8017B6D8 *)arg0)->mode = 0;
    ((Trap_8017B6D8 *)arg0)->state = 0;
    ((Trap_8017B6D8 *)arg0)->range = lbl_805DBAA0 * ((Trap_8017B6D8 *)arg0)->f68 + lbl_805DBA9C;
    ((Trap_8017B6D8 *)arg0)->dist = ((Trap_8017B6D8 *)arg0)->range;
    ((Trap_8017B6D8 *)arg0)->reset = lbl_805DBA9C + (f32)((Trap_8017B6D8 *)arg0)->f84;
    if (((Trap_8017B6D8 *)arg0)->reset < 0) {
        ((Trap_8017B6D8 *)arg0)->reset = 0;
    }
    ((Trap_8017B6D8 *)arg0)->timer = ((Trap_8017B6D8 *)arg0)->reset;
    ((Trap_8017B6D8 *)arg0)->player = 0xFFFF;
    init_collision_body_parts(((Trap_8017B6D8 *)arg0), lbl_804B4B20, 1);
    refresh_collision_body_centers(((Trap_8017B6D8 *)arg0));
    ((Trap_8017B6D8 *)arg0)->flags |= 0x60000000;
    reset_photon_effect__10TObjPlayerFPv(((Trap_8017B6D8 *)arg0));
    ((Trap_8017B6D8 *)arg0)->h348 = lbl_805DBA80;
    ((Trap_8017B6D8 *)arg0)->h344 = lbl_805DBA80;
    ((Trap_8017B6D8 *)arg0)->f34C = 0;
    if (((Trap_8017B6D8 *)arg0)->f64 > 0) {
        ((Trap_8017B6D8 *)arg0)->f358 = 1;
    } else {
        ((Trap_8017B6D8 *)arg0)->f358 = 0;
    }
    return ((Trap_8017B6D8 *)arg0);
}
extern int fold_flush_6;
#pragma pop

void TOTrapAncient02R__vt78(void *arg0) {
    struct VObj_8017B84C_8017AC98 *o = (struct VObj_8017B84C_8017AC98 *)arg0;
    o->m77();
}

}
