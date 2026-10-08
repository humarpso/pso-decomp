#include "pso/TObjBoss7DustCtrl.h"

#include "types.h"

extern "C" {

typedef struct Vec_802F127C {
    f32 x, y, z;
} Vec_802F127C;

typedef struct Rot_802F127C {
    s32 a;
    s32 b;
} Rot_802F127C;

typedef struct Out_802F127C {
    u8 b[0x10];
} Out_802F127C;

typedef struct Dust_802F127C {
    Vec_802F127C pts[6];
    Rot_802F127C rot[10];
    Out_802F127C out[60];
    s32 ang[10];
} Dust_802F127C;

f32 sin_table_lookup(int);
f32 cos_table_lookup(int, f32);
s32 calc_random_scaled__10TObjPlayerFv();
void matrix_mult_vec(s32, Vec_802F127C *, Out_802F127C *);
void set_matrix_identity__10TObjPlayerFPv(s32);
void translate_matrix(s32, f32, f32, f32);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
void pop_matrix(void);
Vec_802F127C lbl_80541948[6];
Rot_802F127C lbl_80541990[10];
Out_802F127C lbl_805419E0[60];
s32 lbl_80541DA0[10];
extern const f32 lbl_805DEC70;
extern const f32 lbl_805DEC74;
typedef struct Out_802F1454 { f32 x, y, z; u32 c; } Out_802F1454;
extern const f32 lbl_805DEC78;
extern const f32 lbl_805DEC7C;
extern const f32 lbl_805DEC80;
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F1200_lbl_805419E0 {
    M2C_UNK value;
    u8 remaining[0x3E4];
};

extern "C" {
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK post_translate_matrix(int);
M2C_UNK draw_trail_strip__10TObjPlayerFPvPvi(int, int, int);
void boss7_dust_draw_at(M2C_UNK *arg0, s32 arg1);
}

extern "C" {

void boss7_dust_draw_at(M2C_UNK *arg0, s32 arg1) {
    M2C_UNK *var_r30;
    M2C_UNK *var_r3;
    s32 var_r31;
    s32 var_r4;
    s32 var_r5;
    var_r30 = (M2C_UNK *)(arg0);
    var_r31 = arg1;
    end_effect_render__13TParticleCtrlFv();
    push_matrix();
    var_r3 = (M2C_UNK *)(var_r30);
    post_translate_matrix((int) (var_r3));
    var_r5 = var_r31 * 0x60;
    var_r3 = (M2C_UNK *)((M2C_UNK *)lbl_805419E0);
    var_r4 = 6;
    var_r3 = (M2C_UNK *)((u8 *)(M2C_UNK *)lbl_805419E0 + var_r5);
    var_r5 = 0;
    draw_trail_strip__10TObjPlayerFPvPvi((int) (var_r3), (int) (6), (int) (0));
    pop_matrix();
}

}
extern "C" {
extern s32 lbl_805D6958;
void TObjBoss7DustCtrl__sub_802F125C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D6958 + 1;
    lbl_805D6958 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D6958 = 0;
    }
}
}

extern "C" {

#pragma push
#pragma opt_propagation off
void TObjBoss7DustCtrl::run_task() {
    f32 scale;
    s32 *ang;
    Out_802F127C *out;
    s32 *rot;
    s32 i;
    s32 j;

    rot = &lbl_80541990[0].a;
    out = lbl_805419E0;
    push_matrix();
    scale = lbl_805DEC74;
    ang = lbl_80541DA0;
    for (i = 0; i < 10; i++) {
        set_matrix_identity__10TObjPlayerFPv(0);
        translate_matrix(0, lbl_805DEC70, scale * sin_table_lookup(ang[i]), lbl_805DEC70);
        {
            s32 a = ang[i];
            s32 r;
            *rot += 0x1333;
            r = *rot++;
            ang[i] = a + 0x800;
            rotate_matrix_x(0, r);
        }
        *rot += 0x555;
        rotate_matrix_x(0, *rot++);
        for (j = 0; j < 6; j++) {
            matrix_mult_vec(0, &lbl_80541948[j], out++);
        }
    }
    pop_matrix();
}
#pragma pop

}

TObjBoss7DustCtrl::~TObjBoss7DustCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss7DustCtrl__sub_802F125C(void);

extern s32 lbl_805D6958;

}
#include "types.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__17TObjBoss7DustCtrl[];
extern void *lbl_805D3FE0;

void *TObjBoss7DustCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss7DustCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3FE0;
    return arg0;
}

}

extern "C" {

void TObjBoss7DustCtrl__sub_802F1450(void);
void create__17TObjBoss7DustCtrlFv(void);
void* __nw__7TObjectFUl(u32);

extern s32 tl_05;

void create__17TObjBoss7DustCtrlFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        ((void *(*)(void *, s32))TObjBoss7DustCtrl__ct)(obj, tl_05);
    }
}

void TObjBoss7DustCtrl__sub_802F1450(void) {  }

}
extern "C" {

void fn_802F1454(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 6; i++) {
        s32 a = (s32)(lbl_805DEC78 * (f32)i);
        f32 s = lbl_805DEC7C * sin_table_lookup(a);
        lbl_80541948[i].x = s;
        lbl_80541948[i].y = lbl_805DEC80 * (f32)i;
        lbl_80541948[i].z = lbl_805DEC7C * cos_table_lookup(a, s);
    }
    {
        s32 *p = &lbl_80541990[0].a;
        for (i = 0; i < 20; i++) {
            *p++ = calc_random_scaled__10TObjPlayerFv();
        }
    }
    {
        Out_802F1454 *o = (Out_802F1454 *)lbl_805419E0;
        for (i = 0; i < 60; i++) {
            o->x = lbl_805DEC70;
            o->y = lbl_805DEC70;
            o->z = lbl_805DEC70;
            o->c = 0xFF709070;
            o++;
        }
    }
    for (j = 0; j < 10; j++) {
        lbl_80541DA0[j] = calc_random_scaled__10TObjPlayerFv();
    }
    lbl_805D6958 = 0;
}

}
