#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Vec_800C20D0 {
    f32 x, y, z;
} Vec_800C20D0;

typedef struct Mat_800C20D0 {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C20D0;

typedef struct Model_800C20D0 {
    Mat_800C20D0 *mat;
} Model_800C20D0;

struct VBase_800C20D0 {
    char pad0[0x18];
};

struct VObj_800C20D0 : VBase_800C20D0 {
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

struct Obj_800C20D0 : VObj_800C20D0 {
    u8 pad1C[0x24 - 0x1C];
    Model_800C20D0 *model;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_800C20D0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

typedef struct Vec_800C220C { f32 x, y, z; } Vec_800C220C;

typedef struct Mat_800C220C {
    u8 pad0[0x8];
    s32 f8;
    u8 padC[0x14 - 0xC];
    s32 f14;
    u8 pad18[0x20 - 0x18];
    s32 f20;
    u8 pad24[0x2C - 0x24];
    s32 f2C;
} Mat_800C220C;

typedef struct Model_800C220C { Mat_800C220C *mat; } Model_800C220C;

struct SBase_800C220C { char pad0[0x14]; };

struct Sub_800C220C : SBase_800C220C {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5();
    virtual void m6(); virtual void m7(); virtual s32 m8();
};

struct VBase_800C220C { char pad0[0x18]; };

struct VObj_800C220C : VBase_800C220C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void m104();
};

struct Obj_800C220C : VObj_800C220C {
    u8 pad1C[0x24 - 0x1C];
    Model_800C220C *model;
    u8 pad28[0x38 - 0x28];
    Vec_800C220C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x326 - 0x64];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    s32 f3C0;
    u32 f3C4;
    f32 f3C8;
    u8 pad3CC[0x3D8 - 0x3CC];
    s32 f3D8;
    f32 f3DC;
    f32 f3E0;
    f32 f3E4;
    f32 f3E8;
    f32 f3EC;
    f32 f3F0;
    Sub_800C220C sub;
};

extern "C" {
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(int);
extern Vec_800C20D0 lbl_8043BBC0[];
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
s32 is_main_phase_15__9TObjEneDDFv(void);
void update_secondary_light__9TObjEneDDFPv(void *);
void update_primary_light__9TObjEneDDFPv(void *);
void translate_matrix(int, f32, f32, f32);
void scale_matrix(int, f32, f32, f32);
void set_global_state__16TObjEneRe7BeruraFi(void *);
void update_effect_sequence__10TObjPlayerFv(void);
void draw_with_alt_model__10TObjPlayerFPvi(void *, int);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void draw__16TObjEneRe7BeruraFPv(void *);
void render_world_model__10TObjPlayerFPv(void *);
extern Vec_800C220C lbl_8043BBB4[];
extern s32 some_id_805c6f74;
extern s32 lbl_805D5660;
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern f32 *lbl_805D5180;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805D9FA0;
extern const f32 lbl_805D9FA4;
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FB0;
extern const f32 lbl_805D9FB4;
extern const f32 lbl_805D9FB8;
void TObjPlayer__sub_800C220C(Obj_800C220C *o);
}

extern "C" {

int is_lying_down__12TObjEneLappyFv(void);
void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1);
void fn_800C20B0(void *arg0);
void fn_800C20C0(void *arg0);
void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 get_instance__6TLobbyFv();

extern M2C_UNK lbl_80492F28[];

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492F28;
        free_collision_body_parts(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int is_lying_down__12TObjEneLappyFv(void) { return 0; }

extern void *lbl_805D5164;
extern s32 lbl_805D516C;

void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (get_instance__6TLobbyFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
    } else {
        if (arg1 == 0) {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
        } else {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0x18);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    }
    if (arg1 == 0) {
        var_r0_2 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0_2 = lbl_805D516C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_2;
}

void fn_800C20B0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) & 0xFFFFFFFE);
}

void fn_800C20C0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 1);
}
void TObjPlayer__sub_800C20D0(Obj_800C20D0 *o) {
    s32 save8;
    s32 save14;
    if (o->m8(lbl_805D9FA0, lbl_805D9FA4) == 0) {
        return;
    }
    Vec_800C20D0 v = lbl_8043BBC0[0];
    update_player_state__9TObjEneDDFPv(o, &v, 0);
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        save8 = o->model->mat->f8;
        save14 = o->model->mat->f14;
        o->model->mat->f8 = o->model->mat->f20;
        o->model->mat->f14 = o->model->mat->f2C;
    }
    set_global_param__8TObjFishFi(o->model);
    push_matrix();
    post_translate_matrix(&o->pos);
    rotate_matrix_y(0, o->f60);
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    set_scene_override(0);
    draw_chunk_object(o->f34);
    restore_default_scene();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        o->model->mat->f8 = save8;
        o->model->mat->f14 = save14;
    }
}
void TObjPlayer__sub_800C220C(Obj_800C220C *o) {
    s32 visible;
    s32 save8;
    s32 save14;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        o->m104();
        return;
    }
    if (o->f326 == 11) {
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) != 0) {
            visible = o->m9(600.0f, 600.0f, lbl_805D9FA4);
        } else {
            visible = o->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D9FA4);
        }
    } else if (o->m8(lbl_805D9FA0, lbl_805D9FA4) != 0) {
        visible = 1;
    } else {
        visible = 0;
    }
    if (visible != 0) {
        if (o->f326 != 10) {
            Vec_800C220C v = lbl_8043BBB4[0];
            update_player_state__9TObjEneDDFPv(o, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            save8 = o->model->mat->f8;
            save14 = o->model->mat->f14;
            o->model->mat->f8 = o->model->mat->f20;
            o->model->mat->f14 = o->model->mat->f2C;
        }
        set_global_param__8TObjFishFi(o->model);
        push_matrix();
        post_translate_matrix(&o->pos);
        rotate_matrix_y(0, o->f3C0);
        lbl_805D5660 = some_id_805c6f74;
        set_scene_override(0);
        clear_global_flag_400__9TObjEneDDFv();
        translate_matrix(0, lbl_805D9FAC, o->f3C8, lbl_805D9FAC);
        lbl_805D517C = o->f60 - o->f3C0;
        lbl_805D5180 = &o->f3DC;
        o->f3DC = lbl_805D9FAC;
        o->f3E0 = lbl_805D9FB0;
        o->f3E4 = lbl_805D9FAC;
        o->f3E8 = lbl_805D9FAC;
        o->f3EC = lbl_805D9FB4;
        o->f3F0 = lbl_805D9FAC;
        scale_matrix(0, lbl_805D9FB8, lbl_805D9FB8, lbl_805D9FB8);
        set_global_state__16TObjEneRe7BeruraFi((void *)update_effect_sequence__10TObjPlayerFv);
        if (o->f326 == 8) {
            s32 c = (o->f3D8 & 0xFF) << 16;
            lbl_805D5178 = -1;
            toggle_particle_effect__10TObjPlayerFv();
            draw_with_alt_model__10TObjPlayerFPvi(o, c);
            end_effect_render__13TParticleCtrlFv();
        } else {
            lbl_805D5178 = 0;
            toggle_particle_effect__10TObjPlayerFv();
            if (o->f3C4 & 8) {
                if (o->sub.m8() != 0) {
                    o->sub.m6();
                    if (toggle_flag_9__10TObjPlayerFPv(o) == 0) {
                        draw__16TObjEneRe7BeruraFPv(o);
                    }
                    o->sub.m7();
                }
            } else if (visible == 1) {
                draw__16TObjEneRe7BeruraFPv(o);
            } else {
                render_world_model__10TObjPlayerFPv(o);
            }
            end_effect_render__13TParticleCtrlFv();
        }
        set_global_state__16TObjEneRe7BeruraFi(0);
        restore_default_scene();
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
        update_primary_light__9TObjEneDDFPv(o);
        if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
            o->model->mat->f8 = save8;
            o->model->mat->f14 = save14;
        }
        return;
    }
    o->f3DC = o->pos.x;
    o->f3E0 = lbl_805D9FB0 + o->pos.y;
    o->f3E4 = o->pos.z;
    o->f3E8 = o->pos.x;
    o->f3EC = lbl_805D9FB4 + o->pos.y;
    o->f3F0 = o->pos.z;
}

}
