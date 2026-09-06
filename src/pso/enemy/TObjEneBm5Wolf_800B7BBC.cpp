#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern u8 *TObjEneBm5Wolf__data_805D5120;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
void TObjEneBm5Wolf__sub_800B7EA0(u8 *arg0);
}

extern "C" {

void TObjEneBm5Wolf__sub_800B7F48(void *arg0);
void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0);

void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x404);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x400);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) < M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) > M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        }
    }
}

extern f32 TObjEneBm5Wolf__data_805D9DB4;

void TObjEneBm5Wolf__sub_800B7EA0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x354)));
    if (M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneBm5Wolf__data_805D9D8C) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0xC);
}

void TObjEneBm5Wolf__sub_800B7F48(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x40C));
}

}
