#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0);
void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0);
void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_800ED428(u32, s32);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 lbl_805DA7E0;

void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0) {
    f32 temp_f2;
    f32 temp_f31;

    temp_f31 = TObjEneRe4Sorcerer__data_805DA78C * fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f2 = TObjEneRe4Sorcerer__data_805DA78C * -fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) - temp_f2);
}

void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E6));
    if (temp_r3 != 0U) {
        fn_800ED428((u32)(temp_r3), (s32)(2));
    }
}

void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            fn_800ED428((u32)(temp_r3), (s32)(0));
        }
    } else {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            fn_800ED428((u32)(temp_r3), (s32)(1));
        }
    }
}

}
