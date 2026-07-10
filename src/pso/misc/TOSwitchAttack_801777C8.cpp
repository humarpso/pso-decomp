#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__14TOSwitchAttackFPv(void *arg0);

extern const f64 lbl_80442C78;
extern s32 lbl_805D5550;
extern const f32 lbl_805DBA00;

void init_params__14TOSwitchAttackFPv(void *arg0) {
    f32 temp_f0;

    M2C_FIELD(arg0, u8 *, 0xA7) = (u8) M2C_FIELD(arg0, s32 *, 0x5C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (temp_f0 * temp_f0);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) * (lbl_805DBA00 * (f32) (lbl_805D5550 + 1)));
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    if ((u8) M2C_FIELD(arg0, u8 *, 0xA7) >= 0x15U) {
        M2C_FIELD(arg0, u8 *, 0xA7) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, u16 *, 0xA0) = (u16) M2C_FIELD(arg0, s32 *, 0x84);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA0) >= 0x100U) {
        M2C_FIELD(arg0, u16 *, 0xA0) = 0xFFFFU;
    }
    M2C_FIELD(arg0, u16 *, 0xA2) = (u16) M2C_FIELD(arg0, s32 *, 0x88);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA2) >= 0x100U) {
        M2C_FIELD(arg0, u16 *, 0xA2) = 0xFFFFU;
    }
    M2C_FIELD(arg0, u16 *, 0xA4) = (u16) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((u16) M2C_FIELD(arg0, u16 *, 0xA4) > 1U) {
        M2C_FIELD(arg0, u16 *, 0xA4) = 1U;
    }
}

}
