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

extern "C" {
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneRe2Flower__sub_800C3B8C(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801417E8();
M2C_UNK TObjPlayer__sub_80141820(int);
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
}

extern "C" {

int TObjEneLappy__sub_800C2014(void);
void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1);
void fn_800C20B0(void *arg0);
void fn_800C20C0(void *arg0);
void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 get_instance__6TLobbyFv();

extern M2C_UNK lbl_80492F28[];

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492F28;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TObjEneLappy__sub_800C2014(void) { return 0; }

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
    TObjPlayer__sub_80141820(0);
    draw_chunk_object(o->f34);
    TObjPlayer__sub_801417E8();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    if (get_flag_11__16TObjEneRe2FlowerFPv(o) == 0 && TObjEneRe2Flower__sub_800C3B8C(o) != 0) {
        o->model->mat->f8 = save8;
        o->model->mat->f14 = save14;
    }
}

}
