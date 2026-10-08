#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_803D8D1C { f32 x, y, z; };

extern "C" {
f32 vec_squared_length(u8 *arg0);
f32 matrix_identity(void *);
extern u8 *lbl_805D7774;
void set_matrix_identity__10TObjPlayerFPv(u8 *arg0);
M2C_UNK PSMTXMultVecSR(int);
extern u8 *lbl_805D7774;
void rotate_vector_by_matrix(u32 arg0);
extern u8 *lbl_805D7774;
void GXGetProjectionv(f32 *p);
void GXGetViewportv(f32 *vp);
void GXProject(f32 x, f32 y, f32 z, u8 *mtx, f32 *pm, f32 *vp, f32 *sx, f32 *sy, f32 *sz);
void project_world_to_screen(u8 *mtx, Vec_803D8D1C *pos, f32 *out);
void PSMTXConcat(void *, void *, void *);
void PSMTXRotAxisRad(void *, void *, f32);
extern u8 *lbl_805D7774;
extern f64 lbl_805E0ED8;
void TObjPlayer__sub_803D8BFC(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void set_monitor_position_vec3__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void set_position_vec3__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK scale_matrix(f32, f32, f32);
M2C_UNK translate_matrix(f32, f32, f32);

void set_monitor_position_vec3__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    scale_matrix((f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 4)), (f32) (M2C_FIELD(arg1, f32 *, 8)));
}

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D8BFC(u8 *arg0, s32 arg1, s32 arg2) {
    u8 sp8[0x30];
    u8 *m;
    if (arg0 == 0) {
        m = lbl_805D7774;
    } else {
        m = arg0;
    }
    if (arg2 != 0) {
        PSMTXRotAxisRad(sp8, (void *)arg1, lbl_805E0ED8 * arg2);
        PSMTXConcat(m, sp8, m);
    }
}
#pragma pop

void set_position_vec3__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    translate_matrix((f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 4)), (f32) (M2C_FIELD(arg1, f32 *, 8)));
}

#pragma push
#pragma scheduling off
void set_matrix_identity__10TObjPlayerFPv(u8 *arg0) {
    u8 *var_r3;
    var_r3 = (u8 *)(arg0);
    if (var_r3 == NULL) {
        var_r3 = (u8 *)(lbl_805D7774);
    }
    matrix_identity(var_r3);
}
#pragma pop

#pragma push
#pragma fp_contract on
f32 vec_squared_length(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    return (temp_f2 * temp_f2) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
}
#pragma pop

#pragma push
#pragma scheduling off
void project_world_to_screen(u8 *mtx, Vec_803D8D1C *pos, f32 *out) {
    f32 proj[7];
    f32 vp[6];
    f32 sz;
    f32 sy;
    f32 sx;
    u8 *m;
    GXGetProjectionv(proj);
    GXGetViewportv(vp);
    if (mtx == 0) {
        m = lbl_805D7774;
    } else {
        m = mtx;
    }
    GXProject(pos->x, pos->y, pos->z, m, proj, vp, &sx, &sy, &sz);
    out[0] = sx;
    out[1] = sy;
}
#pragma pop

#pragma push
#pragma scheduling off
void rotate_vector_by_matrix(u32 arg0) {
    u32 var_r3;
    var_r3 = arg0;
    if (var_r3 == 0U) {
        var_r3 = (*(u32 *)&lbl_805D7774);
    }
    PSMTXMultVecSR((int) (var_r3));
}
#pragma pop

}
