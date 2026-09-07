#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DEA5C;
void TBoss7LaserPtcl__sub_802ECE28(u8 *arg0);
}

extern "C" {

void free_laser_light__15TBoss7LaserPtclFPv(void *arg0);
void release_laser_light__15TBoss7LaserPtclFPv(void *arg0);
M2C_UNK TBoss7LaserLight__sub_802EF120(void *);
M2C_UNK TBoss7LaserLight__sub_802EF12C(void *);

void release_laser_light__15TBoss7LaserPtclFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x708);
    if ((u32) temp_r3 != 0U) {
        TBoss7LaserLight__sub_802EF120(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFEF);
}

void free_laser_light__15TBoss7LaserPtclFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x708);
    if ((u32) temp_r3 != 0U) {
        TBoss7LaserLight__sub_802EF12C(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x10);
}
#pragma push
#pragma fp_contract on
void TBoss7LaserPtcl__sub_802ECE28(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x70C, arg0 + 0x4DC);
    M2C_FIELD(arg0, f32 *, 0x70C) = (f32) ((lbl_805DEA5C * M2C_FIELD(arg0, f32 *, 0x4E8)) + M2C_FIELD(arg0, f32 *, 0x70C));
    M2C_FIELD(arg0, f32 *, 0x710) = (f32) ((lbl_805DEA5C * M2C_FIELD(arg0, f32 *, 0x4EC)) + M2C_FIELD(arg0, f32 *, 0x710));
    M2C_FIELD(arg0, f32 *, 0x714) = (f32) ((lbl_805DEA5C * M2C_FIELD(arg0, f32 *, 0x4F0)) + M2C_FIELD(arg0, f32 *, 0x714));
}
#pragma pop

}
