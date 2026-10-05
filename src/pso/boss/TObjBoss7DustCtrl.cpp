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

f32 sin_table_lookup(s32);
void matrix_mult_vec(s32, Vec_802F127C *, Out_802F127C *);
void TObjPlayer__sub_803D8CD4(s32);
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
        TObjPlayer__sub_803D8CD4(0);
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

void TObjBoss7DustCtrl__sub_802F125C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D6958 + 1;
    lbl_805D6958 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D6958 = 0;
    }
}

}
