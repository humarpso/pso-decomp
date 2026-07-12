#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__11TCameraCtrlFPv(u8 *arg0);
s32 get_camera_no__11TCameraCtrlFv();

s32 is_split_screen();

void update_position__11TCameraCtrlFPv(u8 *arg0) {
    u8 *temp_r3;

    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg0, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg0, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg0, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg0, f32 *, 0x1AC);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x1B0);
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) M2C_FIELD(arg0, f32 *, 0x1B4);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    if (is_split_screen() != 0) {
        temp_r3 = arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
        M2C_FIELD(temp_r3, f32 *, 0x138) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
        M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    }
}

}
