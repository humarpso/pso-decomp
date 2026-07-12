#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003f510 { u8 pad[0x18]; };
struct VObj_8003f510 : Base_8003f510 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56();
};
struct Base_8003F6B4 { char pad[0x18]; };
struct VObj_8003F6B4 : Base_8003F6B4 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20(void *second, f32 c);
};

extern "C" {

void TObjPlayer__sub_8003F6B4(u16 arg0);
void update_topple_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_8003FCD0(void *);
s32 TObjPlayer__sub_8003FD90(void *);
s32 TObjPlayer__sub_80040AE4(M2C_UNK);
s32 TObjPlayer__sub_80141F84(s32, s32);
void *TPhotonMylla__sub_80154CB4(u16);
s32 fn_801423A4(s32, s32, s32);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4C14;
extern s32 lbl_805D4C68;

void update_topple_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        if (TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x398) - 0x4000) <= (s32) lbl_805D4C68) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        }
        break;
    case 1:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C4) - 1;
        M2C_FIELD(arg0, s32 *, 0x3C4) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x60) = fn_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x398) - 0x4000, lbl_805D4C68);
        if (TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x398) - 0x4000) <= (s32) lbl_805D4C68) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        break;
    case 3:
        TOTrapAncient01__sub_80226578(0x4003BC05, arg0, arg0 + 0x38, 0, 0);
        TBoss1Dragon__sub_80143504(arg0);
        M2C_FIELD(arg0, s32 *, 0x390) = (s32) (M2C_FIELD(arg0, s32 *, 0x390) - TObjPlayer__sub_80040AE4(0));
        M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) - TObjPlayer__sub_80040AE4(0));
        TObjPlayer__sub_8003FCD0(arg0);
        M2C_FIELD(arg0, s32 *, 0x398) = TObjPlayer__sub_8003FD90(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x394) <= -0x238E) {
            ((VObj_8003f510*)arg0)->m56();
        }
        break;
    }
    TBoss1Dragon__sub_80143504(arg0);
    if ((s32) lbl_805D4C14 >= 0) {
        minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    }
}

extern u16 lbl_805D271C;
extern f32 lbl_805D86B0;
void TObjPlayer__sub_8003F6B4(u16 arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = TPhotonMylla__sub_80154CB4(lbl_805D271C);
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x3C8) <= 0)) {
        temp_r4 = TPhotonMylla__sub_80154CB4(arg0);
        if (temp_r4 != NULL) {
            f32 temp_f1 = lbl_805D86B0;
            temp_r5 = M2C_FIELD(temp_r3, void **, 0xA4);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x04000000);
            ((VObj_8003F6B4*)temp_r3)->m20(temp_r4, temp_f1);
        }
    }
}

}
