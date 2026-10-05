#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_8034BE5C { f32 x, y, z; };

struct Cam_8034BE5C {
    u8 pad0[0x1C];
    s32 direction;
    s32 ticks;
    s32 angle;
    Vec_8034BE5C pos;
    Vec_8034BE5C target;
    Vec_8034BE5C up;
};

struct Pad_8034BE5C { u8 pad0[0x34]; s16 tilt; u8 pad36[4]; s16 speed; };

extern "C" {
void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__17TAdFloorLoadCamGC[];
extern void *lbl_805D4340;
void TAdMultiChgGameModeGC__sub_8023E834(void *);
void *TAdFloorLoadCamGC__ct(void *arg0, void *arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TCameraCtrl__sub_800687E4(void *);
void set_active_camera_pose(void *, void *);
void activate_camera_mode(int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec_squared_length(void *);
void normalize_vector(void *);
extern Pad_8034BE5C lbl_8050E3B8;
extern const f32 lbl_805DFDB8;
void run_task__17TAdFloorLoadCamGCFv(Cam_8034BE5C *s);
}

extern "C" {

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1);
u16 fn_8034BE30(void* p);
void fn_8034BE38(void* p);
void fn_8034BE48(void* p);
void render__17TAdFloorLoadCamGCFv(void);
void TCameraCtrl__sub_800687C8(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

u16 fn_8034BE30(void* p) { return *(u16*)((char*)p + 0x24); }
void fn_8034BE38(void* p) { *(u32*)((char*)p + 0x334) &= 0xbfffffff; }
void fn_8034BE48(void* p) { *(u32*)((char*)p + 0x334) |= 0x40000000; }
void render__17TAdFloorLoadCamGCFv(void) {  }

extern M2C_UNK __vt__17TAdFloorLoadCamGC[];

extern "C" {
extern const f32 lbl_805DFDA8 = 182.04445f;
extern const f32 lbl_805DFDAC = -0.1f;
extern const f32 lbl_805DFDB0 = 1.2f;
extern const f32 lbl_805DFDB4 = 100.0f;
extern const f32 lbl_805DFDB8 = 0.0f;
extern const f32 lbl_805DFDBC = 99.3f;
extern const f32 lbl_805DFDC0 = 0.4f;
#define lbl_805DFDA8 (*(const f32 *)&lbl_805DFDA8)
#define lbl_805DFDAC (*(const f32 *)&lbl_805DFDAC)
#define lbl_805DFDB0 (*(const f32 *)&lbl_805DFDB0)
#define lbl_805DFDB4 (*(const f32 *)&lbl_805DFDB4)
#define lbl_805DFDB8 (*(const f32 *)&lbl_805DFDB8)
#define lbl_805DFDBC (*(const f32 *)&lbl_805DFDBC)
#define lbl_805DFDC0 (*(const f32 *)&lbl_805DFDC0)
}
#pragma push
#pragma fp_contract on
void run_task__17TAdFloorLoadCamGCFv(Cam_8034BE5C *s) {
    Vec_8034BE5C up;
    f32 x;
    f32 y;
    f32 z;
    f32 dx;
    f32 dy;
    f32 dz;
    s16 tilt;
    s32 a;
    activate_camera_mode(9);
    s->ticks++;
    tilt = lbl_8050E3B8.tilt;
    s->angle += (s32)(lbl_805DFDA8 * (f32)(s32)(lbl_805DFDAC * (f32)lbl_8050E3B8.speed)) / 10 + 0x1B4;
    a = s->angle;
    if (a >= 0x10000) {
        a -= 0x10000;
    }
    s->angle = a;
    s->pos.x = lbl_805DFDB0 * sin_table_lookup(s->angle);
    s->pos.y = lbl_805DFDB4 * cos_table_lookup(s->angle);
    s->pos.z = lbl_805DFDB4 * sin_table_lookup(s->angle);
    s->target.x = lbl_805DFDB8;
    s->target.y = lbl_805DFDBC * cos_table_lookup(s->angle + 0x1B4);
    s->target.z = lbl_805DFDBC * sin_table_lookup(s->angle + 0x1B4);
    if (s->direction == 0) {
        x = lbl_805DFDC0 * (f32)tilt + -s->pos.x;
        y = -s->pos.y;
        z = -s->pos.z;
    } else {
        x = lbl_805DFDC0 * (f32)tilt + s->pos.x;
        y = s->pos.y;
        z = s->pos.z;
    }
    dx = (x - s->up.x) / 15.0f;
    dy = (y - s->up.y) / 15.0f;
    dz = (z - s->up.z) / 15.0f;
    s->up.x += dx;
    s->up.y += dy;
    s->up.z += dz;
    VecCopy__FP3VecPC3Vec(&up, &s->up);
    if (vec_squared_length(&s->up) == lbl_805DFDB8) {
        up.y = 1.0f;
    } else {
        normalize_vector(&up);
    }
    TCameraCtrl__sub_800687E4(&up);
    set_active_camera_pose(&s->pos, &s->target);
}
#pragma pop

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdFloorLoadCamGC;
        TCameraCtrl__sub_800687C8();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TAdFloorLoadCamGC__ct(void *arg0, void *arg1, void *arg2) {
  void *new_var;
  __ct__7TObjectFP7TObject(arg0);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = __vt__17TAdFloorLoadCamGC;
  new_var = lbl_805D4340;
  *((void **) (((s8 *) arg0) + 0x0)) = new_var;
  *((u32 *) (((s8 *) arg0) + 0x20)) = 0;
  *((u32 *) (((s8 *) arg0) + 0x24)) = 0;
  *((f32 *) (((s8 *) arg0) + 0x40)) = lbl_805DFDB8;
  *((f32 *) (((s8 *) arg0) + 0x44)) = lbl_805DFDB8;
  *((f32 *) (((s8 *) arg0) + 0x48)) = lbl_805DFDB8;
  *((void **) (((s8 *) arg0) + 0x1C)) = arg2;
  TAdMultiChgGameModeGC__sub_8023E834(new_var);
  return arg0;
}

}
