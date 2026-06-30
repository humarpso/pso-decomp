#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" void *TPhotonMylla__sub_80154CB4(u16);
extern u16 lbl_805D271C;
extern f32 lbl_805D86B0;

struct Base_8003F6B4 { char pad[0x18]; };
struct VObj_8003F6B4 : Base_8003F6B4 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20(void *second, f32 c);
};

extern "C" void fn_8003F6B4(u16 arg0) {
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
