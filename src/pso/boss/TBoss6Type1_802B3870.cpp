#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802B3BEC_lbl_80470CE0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_802B4898 { f32 x, y, z; };

struct Boss_802B4898 {
    u8 pad0[0x38];
    Vec_802B4898 pos;
    u8 pad44[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    u8 pad64[0x4D4 - 0x64];
    f32 f4D4, f4D8;
    u8 pad4DC[0x4E8 - 0x4DC];
    f32 f4E8;
};

struct Vec_802B49A4 { f32 x, y, z; };

struct Params_802B49A4 {
    u8 pad[0xC];
    Vec_802B49A4 pos;
    s32 a;
    s32 b;
    s32 c;
    Vec_802B49A4 rot;
    s32 d;
    s32 e;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
int TBoss6Type1__sub_802B4BA8(void*, void*);
extern RecoveredGlobal_802B3BEC_lbl_80470CE0 lbl_80470CE0;
void TBoss6Type1__sub_802B3BEC(u8 *arg0);
void toggle_particle_effect__10TObjPlayerFv();
void end_effect_render__13TParticleCtrlFv();
void update_camera_target__14TBoss6PlotFalzFv();
void TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6Type1__sub_802B81A4(void *);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, int);
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
void TOHangerMachine01__sub_803D9C00(Vec_802B4898 *);
void TBoss6Type1__sub_802B4898(Boss_802B4898 *o);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create__10TObjMapCsnFi(void *);
M2C_UNK TObjPlayer__sub_803D8CD4(s32);
M2C_UNK TScene__sub_803D8DB4(s32, void *, void *);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
extern u8 lbl_80471020[];
extern u8 lbl_8047102C[];
extern const f32 TBoss6Type1__data_805DE2D0;
void TBoss6Type1__sub_802B49A4(u8 *arg0);
}

extern "C" {

void TBoss6Type1__sub_802B3B94(void *arg0);
void init_attack_timers__11TBoss6Type1FPv(void *arg0);
void init_state_90__11TBoss6Type1FPv(void* p);
void release_object__11TBoss6Type1FPv(void* p);
void render__11TBoss6Type1Fv(void* p);
void start_attack__11TBoss6Type1FPv(u8 *arg0);
void tick_countdown__11TBoss6Type1FPv(void *arg0);
void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5140(void *, M2C_UNK, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
int TBoss6Type1__sub_802B626C(void*);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK latch_phase_counter__11TBoss6Type1FPv(void *);
int queue_destruction__7TObjectFv(void*);

void init_state_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void start_attack__11TBoss6Type1FPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    } else {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    }
    TBoss3Volopt__sub_8022675C(0x40039706, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
    if (TBoss6Type1__sub_802B529C(arg0, 0x19, 4) > 0) {
        latch_phase_counter__11TBoss6Type1FPv(arg0);
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void tick_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

void init_attack_timers__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4A8);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4A4);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    }
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B3B94(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) < 0x1E) {
        TBoss6Type1__sub_802B5140(arg0, M2C_FIELD(arg0, s32 *, 0x410), 0x1E);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

typedef char RecoveredGlobal_802B3BEC_lbl_80470CE0_size[sizeof(RecoveredGlobal_802B3BEC_lbl_80470CE0) == 0xC ? 1 : -1];
void TBoss6Type1__sub_802B3BEC(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470CE0.value);
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B4898(Boss_802B4898 *o) {
    toggle_particle_effect__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    Vec_802B4898 v = o->pos;
    v.y = v.y + o->f4E8;
    TOHangerMachine01__sub_803D9C00(&v);
    rotate_matrix_y(0, o->f60);
    rotate_matrix_x(0, o->f5C);
    TBoss6PlotFalz__sub_802AC008(o->f4D4, o->f4D8);
    TBoss6Type1__sub_802B81A4(o);
    update_camera_target__14TBoss6PlotFalzFv();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void render__11TBoss6Type1Fv(void* p) { TBoss6Type1__sub_802B4898((Boss_802B4898 *)(p)); TBoss6Type1__sub_802B626C(p); }

void release_object__11TBoss6Type1FPv(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }
void TBoss6Type1__sub_802B49A4(u8 *arg0) {
    Params_802B49A4 prm;
    Vec_802B49A4 tmp;
    VecCopy__FP3VecPC3Vec(&prm.pos, arg0 + 0x38);
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    TScene__sub_803D8DB4(0, lbl_80471020, &tmp);
    prm.pos.x += tmp.x;
    prm.pos.y = TBoss6Type1__data_805DE2D0;
    prm.pos.z += tmp.z;
    pop_matrix();
    prm.a = 0;
    prm.b = M2C_FIELD(arg0, s32 *, 0x60);
    prm.c = 0;
    VecCopy__FP3VecPC3Vec(&prm.rot, lbl_8047102C);
    prm.d = 2;
    prm.e = 0;
    M2C_FIELD(arg0, s32 *, 0x680) = create__10TObjMapCsnFi(&prm);
}

}
