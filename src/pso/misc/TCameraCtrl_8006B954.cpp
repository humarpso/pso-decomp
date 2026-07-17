#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_camera_params__11TCameraCtrlFPv(void *arg0);
void *get_params__11TCameraCtrlFPv(u32);

extern const f64 lbl_804383C8;
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9000;

void copy_camera_params__11TCameraCtrlFPv(void *arg0) {
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r3 = get_params__11TCameraCtrlFPv(lbl_805D4DF0);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r3, f32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_805D9000 * (f32) M2C_FIELD(temp_r3, s32 *, 0x14));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
    }
}

}
