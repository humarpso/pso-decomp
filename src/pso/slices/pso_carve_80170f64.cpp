#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base18 { char pad[0x18]; };
struct VObj : Base18 {
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
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77();
};

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TOMineTrap__sub_80170AC8(void *);
M2C_UNK TOMineTrap__sub_80170BEC(void *);
M2C_UNK TOMineTrap__sub_80170CD4(void *);
M2C_UNK TOMineTrap__sub_80170CF4(void *);
M2C_UNK TOMineTrap__sub_80170DD8(void *);
M2C_UNK TOMine__sub_80170F0C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);

void TOMine__sub_80170F64(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    if (check_demo_mode__10TObjPlayerFv() != 1) {
        ((VObj *) arg0)->m77();
        TOMineTrap__sub_80170CF4((void *) (arg0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        switch (temp_r0) {
        case 2:
        case 0:
            TOMine__sub_80170F0C((void *) (arg0));
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x334));
            VecCopy__FP3VecPC3Vec((void *) (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C), (void *) (arg0 + 0x334));
            return;
        case 3:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x8C);
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (temp_r3 - 1);
            if (temp_r3 < 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 4;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x344);
            switch (temp_r0_2) {
            default:
                TOMineTrap__sub_80170CD4((void *) (arg0));
                break;
            case 1:
                TOMineTrap__sub_80170BEC((void *) (arg0));
                break;
            case 2:
                TOMineTrap__sub_80170AC8((void *) (arg0));
                break;
            }
            TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
            return;
        case 4:
            TOMineTrap__sub_80170DD8((void *) (arg0));
            break;
        }
    }
}

}
