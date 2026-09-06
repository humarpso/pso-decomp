#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern u8 *TObjEneBm5GibonU__data_805D51D0;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA194;
extern const f32 lbl_805DA254;
void TObjEneBm5GibonU__sub_800D10A0(u8 *arg0);
}

extern "C" {

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0);

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x498);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x494);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) < M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) > M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        }
    }
}
void TObjEneBm5GibonU__sub_800D10A0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x354)));
    if (M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneBm5GibonU__data_805DA168) {
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x470) = 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x368) >= 1) {
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
        M2C_FIELD(arg0, s32 *, 0x468) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0x1C);
    } else {
        M2C_FIELD(arg0, s32 *, 0x464) = 0;
        M2C_FIELD(arg0, s32 *, 0x468) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0xC);
    }
    M2C_FIELD(arg0, f32 *, 0x4A0) = (f32) (lbl_805DA254 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x4A4) = (f32) (TObjEneBm5GibonU__data_805DA194 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, f32 *, 0x4A8) = (f32) (TObjEneBm5GibonU__data_805DA194 + M2C_FIELD(arg0, f32 *, 0x364));
}

}
