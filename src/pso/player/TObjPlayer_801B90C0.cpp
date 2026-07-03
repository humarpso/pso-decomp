#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801B90C0(void *arg0, u8 *arg1);
void TObjPlayer__sub_801B91B0(s32 arg0, s32 arg1);
s32 TItemObject__sub_80101A1C();
M2C_UNK fn_80101CFC(s32, M2C_UNK *);
s32 fn_8010CD6C(u8 *);
u32 fn_8010ED0C(u8 *);
u32 fn_801D4E10(void *, u8 *);
void *fn_801D5764();

s32 obj_getPtr2B0_20(void *);

}

struct Base_B { char pad[0x18]; };
struct V_B : Base_B {
    virtual void f0();
    virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12();
    virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16(); virtual void f17(); virtual void f18();
    virtual void f19(); virtual void f20(); virtual void f21();
    virtual void f22(); virtual void f23(); virtual void f24();
    virtual void f25(); virtual void f26(); virtual void f27();
    virtual void f28(); virtual void f29(); virtual void f30();
    virtual void f31(); virtual void f32(); virtual void f33();
    virtual s32 m34();
};

extern "C" {

s32 TObjPlayer__sub_801B90C0(void *arg0, u8 *arg1) {
    s32 temp_r31;
    s32 temp_r31_2;
    void *temp_r3;

    if (fn_8010CD6C(arg1) != 0) {
        if ((u8) *arg1 == 4) {
            return obj_getPtr2B0_20(arg0) < 0xF423F;
        }
        if (fn_801D4E10(M2C_FIELD(arg0, void **, 0xD00), arg1) != 0U) {
            temp_r3 = fn_801D5764();
            if (temp_r3 == NULL) {
                return 0;
            }
            temp_r31_2 = TItemObject__sub_80101A1C();
            temp_r31 = temp_r31_2 - ((V_B *)temp_r3)->m34();
            return ((s32) fn_8010ED0C(arg1) <= temp_r31) ? 1 : 0;
        }
        goto block_7;
    }
block_7:
    if ((s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xD00), s16 *, 0x1C) >= 0x1E) {
        return 0;
    }
    return 1;
}

void TObjPlayer__sub_801B91B0(s32 arg0, s32 arg1) {
    M2C_UNK sp8[5];

    fn_80101CFC(arg1, sp8);
    TObjPlayer__sub_801B90C0(arg0, sp8);
}

}
