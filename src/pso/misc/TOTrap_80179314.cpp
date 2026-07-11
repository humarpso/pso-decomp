#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80179314 { char pad[0x18]; };
struct VObj_80179314 : Base_80179314 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20(int, f32);
};
struct Base_80179358 { char pad[0x18]; };
struct VObj_80179358 : Base_80179358 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20(int, f32);
};

extern "C" {

f32 TOTrap__sub_80179314(struct VObj_80179314 *arg0, u32 arg1);
f32 get_scale__6TOTrapFPvUi(struct VObj_80179358 *arg0, u32 arg1);

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

f32 TOTrap__sub_80179314(struct VObj_80179314 *arg0, u32 arg1) {
    if (arg1 != M2C_FIELD(arg0, u32 *, 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

f32 get_scale__6TOTrapFPvUi(struct VObj_80179358 *arg0, u32 arg1) {
    if (arg1 != M2C_FIELD(arg0, u32 *, 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

}
