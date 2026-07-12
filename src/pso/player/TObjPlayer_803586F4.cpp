#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80358824 { char pad[0x18]; };
struct VObj_80358824 : Base_80358824 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
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
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(M2C_UNK, void *);
};

extern "C" {

void TObjPlayer__sub_803586F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TObjPlayer__sub_8035878C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TObjPlayer__sub_80358824(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TLobby__sub_800869A4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjFish__sub_800660D4(s32, s32, s32, s32, M2C_UNK, f32);

extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern f32 lbl_805E0084;

void TObjPlayer__sub_803586F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a;

    if (arg3 == 0) {
        TObjEneDellBiter__sub_80087350((M2C_UNK *)(arg0 + 0x2FC), (M2C_UNK)(0xBD));
    }
    if (arg3 == 1) {
        temp_a = TLobby__sub_800869A4(arg2, 0xBF, 0, 0xF);
        if (temp_a != 0) {
            TObjFish__sub_800660D4(temp_a, TObjFish__sub_8001EDC4(lbl_805D63AC, 0), lbl_805D63B0, TObjFish__sub_8001ED9C(lbl_805D63AC, 0), 0, lbl_805E0084);
        }
    }
}

extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern f32 lbl_805E0084;

void TObjPlayer__sub_8035878C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r30;

    if (arg3 == 0) {
        TObjEneDellBiter__sub_80087350((M2C_UNK *)(arg0 + 0x2FC), (M2C_UNK)(0xBD));
    }
    if (arg3 == 1) {
        temp_r30 = TLobby__sub_800869A4(arg2, 0x9A, 0, 0xF);
        if (temp_r30 != 0) {
            TObjFish__sub_800660D4(temp_r30, TObjFish__sub_8001EDC4(lbl_805D63AC, 0), lbl_805D63B0, TObjFish__sub_8001ED9C(lbl_805D63AC, 0), 0, lbl_805E0084);
        }
    }
}

void TObjPlayer__sub_80358824(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x18];

    if (arg3 == 0) {
        struct VObj_80358824 *o = (struct VObj_80358824 *)arg0;
        o->m63(0x30, &sp8);
        TObjEneDellBiter__sub_80087350((M2C_UNK *)((M2C_UNK *) &sp8), (M2C_UNK)(0x6A));
    }
}

}
