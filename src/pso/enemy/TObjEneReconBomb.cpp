#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK draw_blob_shadow(int);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK rotate_matrix_zyx(int, int, int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern u32 lbl_805D6AE8;
extern const f32 lbl_805DF398;
extern const f32 lbl_805DF39C;
void render__16TObjEneReconBombFv(u8 *arg0);
}

extern "C" {

u8 *TObjEneReconBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void *__dt__16TObjEneReconBombFv(void *arg0, s16 arg1);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 TObjEneRecon__sub_8031C274(int);
f32 TObjEneRecon__sub_8031C2BC(int);
f32 TObjEneRecon__sub_8031C2C8(int);
f32 TObjEneRecon__sub_8031C2D4(int);
M2C_UNK TObjPlayer__sub_80019038();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, int);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
s16 obj_getField1c(int);

extern M2C_UNK __vt__16TObjEneReconBomb[];

#pragma push
#pragma fp_contract on
void render__16TObjEneReconBombFv(u8 *arg0) {
    struct { f32 x, y, z; } sc;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f1;
    s32 temp_r31;
    s32 temp_r30;
    if ((u32) lbl_805D6AE8 == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r31 = get_bml_model((void *) (lbl_805D6AE8), (int) (2));
    temp_r30 = TObjFish__sub_8001EDB0((void *) (lbl_805D6AE8), (int) (2));
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805DF398 + M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    rotate_matrix_zyx((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    set_global_param__8TObjFishFi((int) (temp_r30));
    draw_chunk_object((int) (temp_r31));
    pop_matrix();
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805DF39C + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    direction_to_rotation_xz((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    rotate_matrix_z((int) (0), (int) (sp8));
    rotate_matrix_x((int) (0), (void *) (spC + 0x4000));
    var_f1 = M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x348);
    if (var_f1 > 40.0f) {
        var_f1 = 40.0f;
    } else if (var_f1 < 0.0f) {
        var_f1 = 0.0f;
    }
    sc.x = sc.y = 0.65f * (1.0f - (var_f1 / 40.0f)) + 0.1f;
    sc.z = 1.0f;
    scale_current_matrix((void *) (&sc));
    draw_blob_shadow((int) (0));
    pop_matrix();
}
#pragma pop

void *__dt__16TObjEneReconBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneReconBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TObjEneReconBomb[];
extern s32 lbl_805D4128;
extern const f32 lbl_805DF3A4;

u8 *TObjEneReconBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    f32 temp_f31;
    u8 *temp_r5;

    TObjPlayer__sub_80019038();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *) __vt__16TObjEneReconBomb;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4128;
    M2C_FIELD(arg0, s32 *, 0x334) = arg2;
    M2C_FIELD(arg0, s16 *, 0x338) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x34C) = TObjEneRecon__sub_8031C2D4((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x350) = TObjEneRecon__sub_8031C2C8((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x354) = TObjEneRecon__sub_8031C2BC((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, s32 *, 0x358) = TObjEneRecon__sub_8031C274((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r5, s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3), (int) (temp_r5));
    temp_f31 = sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_f1 = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f31);
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) lbl_805DF3A4;
    M2C_FIELD(arg0, f32 *, 0x344) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f1);
    M2C_FIELD(arg0, s32 *, 0x360) = 0;
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    return arg0;
}

}
