#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_8005063C {
    f32 x, y, z;
} Vec_8005063C;

typedef struct Obj_8005063C {
    u8 pad0[0x2FC];
    Vec_8005063C f2fc;
    u8 pad308[0x348 - 0x308];
    Vec_8005063C dir;
    u8 pad354[0x364 - 0x354];
    f32 f364;
    s32 state;
    Vec_8005063C f36c;
    f32 f378;
    f32 f37c;
} Obj_8005063C;

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A58;
extern const f32 lbl_805D8A5C;
void fn_8005076C(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_8005063C *);
void TBoss6Type1__sub_803D9370(Vec_8005063C *, Vec_8005063C *);
void TNpcPlayer__sub_803D97B4(Vec_8005063C *);
f32 xyz_distance(Vec_8005063C *, Vec_8005063C *);
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A48;
extern const f32 lbl_805D8A4C;
extern const f32 lbl_805D8A50;
extern const f32 lbl_805D8A54;
void fn_8005063C(Obj_8005063C *arg0);
}

extern "C" {

#pragma fp_contract on
void fn_8005063C(Obj_8005063C *arg0) {
    Vec_8005063C d;
    f32 k;
    f32 inv;
    VecCopy__FP3VecPC3Vec(&d, &arg0->f36c);
    TBoss6Type1__sub_803D9370(&d, &arg0->f2fc);
    if (TBoss6Kakusan__sub_803D8BD8(&d) <= lbl_805D8A48 ||
        TBoss6Kakusan__sub_803D8BD8(&arg0->dir) <= lbl_805D8A48) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TNpcPlayer__sub_803D97B4(&d);
    TNpcPlayer__sub_803D97B4(&arg0->dir);
    k = lbl_805D8A50 * arg0->f364 + lbl_805D8A4C;
    Vec_8005063C prev = arg0->dir;
    inv = lbl_805D8A34 - k;
    arg0->dir.x = k * arg0->dir.x + inv * d.x;
    arg0->dir.y = k * arg0->dir.y + inv * d.y;
    arg0->dir.z = k * arg0->dir.z + inv * d.z;
    if (arg0->f37c <= arg0->f378 && xyz_distance(&arg0->dir, &prev) <= lbl_805D8A54) {
        arg0->state = 2;
    }
}

void fn_8005076C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x370) - M2C_FIELD(arg0, f32 *, 0x300);
    if (temp_f1 > lbl_805D8A30) {
        M2C_FIELD(arg0, f32 *, 0x34C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34C) + lbl_805D8A58);
    } else {
        M2C_FIELD(arg0, f32 *, 0x34C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34C) - lbl_805D8A58);
    }
    if (get_random_float__8TObjFishFv(temp_f1) < lbl_805D8A5C) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
    }
}

}
