#include "types.h"

struct Vec_801097F0 { f32 x, y, z; };

struct TItemEffNeedlePos_801097F0 {
    s32 name;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x30 - 0x1C];
    Vec_801097F0 pos;
    u8 pad3c[0x44 - 0x3C];
    s32 pitch;
    s32 yaw;
    s32 roll;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
f32 newton_sqrtf(f32);
void __ct__18TItemEffNeedleBaseFv(void *, void *, void *);
s32 rand();
extern const f64 lbl_8043E260[];
extern void *__vt__17TItemEffNeedlePos[];
extern s32 TItemEffNeedlePos__class_name;
extern const f32 lbl_805DAB48;
extern const f32 lbl_805DAB4C;
TItemEffNeedlePos_801097F0 *__ct__17TItemEffNeedlePosFv(TItemEffNeedlePos_801097F0 *self, void *a1, void *a2, Vec_801097F0 *pos, Vec_801097F0 *dir);
}

extern "C" {

#pragma push
#pragma fp_contract on
TItemEffNeedlePos_801097F0 *__ct__17TItemEffNeedlePosFv(TItemEffNeedlePos_801097F0 *self, void *a1, void *a2, Vec_801097F0 *pos, Vec_801097F0 *dir) {
    __ct__18TItemEffNeedleBaseFv(self, a1, a2);
    self->vt = __vt__17TItemEffNeedlePos;
    self->name = TItemEffNeedlePos__class_name;
    VecCopy__FP3VecPC3Vec(&self->pos, pos);
    self->pos.x += lbl_805DAB48 * (f32)rand();
    self->pos.y += lbl_805DAB48 * (f32)rand();
    self->pos.z += lbl_805DAB48 * (f32)rand();
    self->yaw = lbl_8043E260[0] * atan2_float(dir->x, dir->z);
    if (lbl_805DAB4C != dir->y) {
        self->pitch = lbl_8043E260[0] * atan2_float(dir->y, newton_sqrtf(dir->x * dir->x + dir->z * dir->z));
        self->roll = 0;
    } else {
        self->roll = 0;
        self->pitch = 0;
    }
    return self;
}
#pragma pop

}
