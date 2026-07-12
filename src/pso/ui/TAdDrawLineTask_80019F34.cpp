#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__15TAdDrawLineTaskFv(void *arg0);
M2C_UNK allow_rendering__7TObjectFv();
M2C_UNK fn_80019B08(u32, s32);
M2C_UNK TObjLuker__sub_8001A438(void *);

extern const f32 lbl_805D7DD8;

void run_task__15TAdDrawLineTaskFv(void *arg0) {
    allow_rendering__7TObjectFv();
    if ((lbl_805D7DD8 + M2C_FIELD(arg0, f32 *, 0x4C)) < M2C_FIELD(arg0, f32 *, 0x50)) {
        M2C_FIELD(arg0, u8 *, 0xA6) = (u8) (M2C_FIELD(arg0, u8 *, 0xA6) + M2C_FIELD(arg0, u8 *, 0x62));
        M2C_FIELD(arg0, u8 *, 0xA5) = (u8) (M2C_FIELD(arg0, u8 *, 0xA5) + M2C_FIELD(arg0, u8 *, 0x61));
        M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) + M2C_FIELD(arg0, u8 *, 0x60));
        M2C_FIELD(arg0, u8 *, 0xA7) = (u8) (M2C_FIELD(arg0, u8 *, 0xA7) + M2C_FIELD(arg0, u8 *, 0x63));
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) + M2C_FIELD(arg0, f32 *, 0x54));
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x88) + M2C_FIELD(arg0, f32 *, 0x58));
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C) + M2C_FIELD(arg0, f32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + M2C_FIELD(arg0, f32 *, 0x54));
        M2C_FIELD(arg0, f32 *, 0x98) = (f32) (M2C_FIELD(arg0, f32 *, 0x98) + M2C_FIELD(arg0, f32 *, 0x58));
        M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x9C) + M2C_FIELD(arg0, f32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + lbl_805D7DD8);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + M2C_FIELD(arg0, f32 *, 0xA8));
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0xAC));
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0xA8));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0xAC));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    {
        u32 temp = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp != 0U) {
            fn_80019B08(temp, M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
    TObjLuker__sub_8001A438(arg0);
}

}
