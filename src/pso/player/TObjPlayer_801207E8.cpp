#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { f32 sp8; f32 spC; f32 sp10; } FloatTriplet;

s32 draw_icon__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void draw_status_icon__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 TCameraCtrl__sub_80069258();
M2C_UNK TCameraCtrl__sub_803D976C(M2C_UNK, s32);
s32 get_model_joint_matrix(void *, s32);
M2C_UNK TObjPlayer__sub_803D9884(f32 *, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TObjPlayer__sub_803D9324(M2C_UNK, s32);

extern const f32 lbl_805DAC98;

struct VObj_104_801207e8 { char pad[0x18]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(s32); };

s32 draw_icon__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    FloatTriplet floats;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (arg1 == -1) {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x30);
    } else if (arg1 == -2) {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x23);
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U) {
        floats.sp10 = lbl_805DAC98;
        floats.spC = lbl_805DAC98;
        floats.sp8 = lbl_805DAC98;
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9324(0, get_model_joint_matrix(M2C_FIELD(arg0, void **, 0xF0), arg1));
        TCameraCtrl__sub_803D976C(0, TCameraCtrl__sub_80069258());
        TObjPlayer__sub_803D9884(&floats.sp8, arg2);
        pop_matrix();
    } else {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x30);
    }
    return 1;
}

void draw_status_icon__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    draw_icon__10TObjPlayerFPvii((void *)(arg0), (s32)(M2C_FIELD(arg0, s16 *, 0x1CE)), (s32)(arg1));
}

}
