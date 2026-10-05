#include "pso/TObjBoss2DustCtrl.h"

#include "types.h"

extern "C" {

typedef struct Vec_8003AB7C {
    f32 x, y, z;
} Vec_8003AB7C;

typedef struct Rot_8003AB7C {
    s32 a;
    s32 b;
} Rot_8003AB7C;

typedef struct Out_8003AB7C {
    u8 b[0x10];
} Out_8003AB7C;

typedef struct Dust_8003AB7C {
    Vec_8003AB7C pts[6];
    Rot_8003AB7C rot[10];
    Out_8003AB7C out[60];
    s32 ang[10];
} Dust_8003AB7C;

f32 sin_table_lookup(s32);
void matrix_mult_vec(s32, Vec_8003AB7C *, Out_8003AB7C *);
void TObjPlayer__sub_803D8CD4(s32);
void translate_matrix(s32, f32, f32, f32);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
void pop_matrix(void);
Vec_8003AB7C lbl_804FE9E8[6];
Rot_8003AB7C lbl_804FEA30[10];
Out_8003AB7C lbl_804FEA80[60];
s32 lbl_804FEE40[10];
extern const f32 lbl_805D85B8;
extern const f32 lbl_805D85BC;

#pragma push
#pragma opt_propagation off
void TObjBoss2DustCtrl::run_task() {
    f32 scale;
    s32 *ang;
    Out_8003AB7C *out;
    s32 *rot;
    s32 i;
    s32 j;

    rot = &lbl_804FEA30[0].a;
    out = lbl_804FEA80;
    push_matrix();
    scale = lbl_805D85BC;
    ang = lbl_804FEE40;
    for (i = 0; i < 10; i++) {
        TObjPlayer__sub_803D8CD4(0);
        translate_matrix(0, lbl_805D85B8, scale * sin_table_lookup(ang[i]), lbl_805D85B8);
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
            matrix_mult_vec(0, &lbl_804FE9E8[j], out++);
        }
    }
    pop_matrix();
}
#pragma pop

}

TObjBoss2DustCtrl::~TObjBoss2DustCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2DustCtrl__sub_8003AB5C(void);

extern s32 lbl_805D4BF0;

void TObjBoss2DustCtrl__sub_8003AB5C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D4BF0 + 1;
    lbl_805D4BF0 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D4BF0 = 0;
    }
}

}
