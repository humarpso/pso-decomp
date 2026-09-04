#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800BBC80_800BB804 { char pad[0x18]; };
struct VObj800BBC80_800BB804 : VBase800BBC80_800BB804 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual M2C_UNK m80();
};

extern "C" {
void TObjEneDD__sub_800BBA0C(u8 *arg0);
}

extern "C" {

u8 TObjEneDD__vt84(void *arg0);
void init_position_vectors__9TObjEneDDFPv(u8 *arg0);
void TObjEneDD__vt77(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK call_vt78__10TObjPlayerFPv();
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);
void set_field_378__9TObjEneDDFPvi(void* p, s32 v);

void TObjEneDD__sub_800BBA0C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD(arg0, s16 *, 0x326);
}

u8 TObjEneDD__vt84(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x374) != M2C_FIELD(arg0, s16 *, 0x326));
}

extern const f32 TObjEneDD__data_805D9E8C;

void init_position_vectors__9TObjEneDDFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x248) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x24C) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x250) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    ((VObj800BBC80_800BB804 *) arg0)->m80();
}

}
