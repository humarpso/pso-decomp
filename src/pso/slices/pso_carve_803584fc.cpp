#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_803584FC { char pad[0x18]; };
struct VObj_803584FC : Base_803584FC {
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
    virtual void m63(s32, M2C_UNK *);
};

extern "C" {

M2C_UNK fn_800868C4(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TOSwitchAttack__sub_80087278(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_80087350(M2C_UNK *, M2C_UNK);

void fn_803584FC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp8;

    if (arg3 == 0) {
        ((VObj_803584FC *)arg0)->m63(0x30, &sp8);
        fn_80087350(&sp8, 0x1A8);
        fn_80087350(&sp8, 0x1A9);
    }
    if (arg3 == 1) {
        TOSwitchAttack__sub_80087278(arg2, 0xC8, 0x40);
        fn_800868C4(arg2, 0x101, 0, 0x1E, 0x40);
    }
}

}
