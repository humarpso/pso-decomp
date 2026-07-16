#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase18c { char pad[0x18]; };
struct VObj18c : VBase18c {
    virtual M2C_UNK m0();  virtual M2C_UNK m1();  virtual M2C_UNK m2();
    virtual M2C_UNK m3();  virtual M2C_UNK m4();  virtual M2C_UNK m5();
    virtual M2C_UNK m6();  virtual M2C_UNK m7();  virtual M2C_UNK m8();
    virtual M2C_UNK m9();  virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14();
    virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17();
    virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20();
    virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26();
    virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29();
    virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32();
    virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35();
    virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38();
    virtual M2C_UNK m39(); virtual M2C_UNK m40(); virtual M2C_UNK m41();
    virtual M2C_UNK m42(); virtual M2C_UNK m43(); virtual M2C_UNK m44();
    virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47();
    virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50();
    virtual M2C_UNK m51(); virtual M2C_UNK m52(); virtual M2C_UNK m53();
    virtual M2C_UNK m54(); virtual M2C_UNK m55(); virtual M2C_UNK m56();
    virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59();
    virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

u8 *TObjPlayer__sub_8011E6E8(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xF0));
    if (temp_r3 != NULL) {
        ((VObj18c *) temp_r3)->m63(0x30, arg0 + 0x1AC);
    }
    return arg0 + 0x1AC;
}

}
