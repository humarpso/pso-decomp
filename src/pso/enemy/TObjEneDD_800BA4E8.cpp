#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDD__sub_800BA4E8(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
M2C_UNK fn_800BC3C4(void *, s32);
M2C_UNK fn_800BC3E8(void *, s32);

extern u8 *lbl_805D5138;
extern const f32 lbl_805D9EA0;

struct EneDDBase2 { char pad[0x18]; };
struct EneDDObj2 : EneDDBase2 {
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
    virtual void m15(void *, void *);
    virtual void m16(void *, void *);
};

void TObjEneDD__sub_800BA4E8(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    fn_800BC3E8(lbl_805D5138, arg0);
    fn_800BC3C4(lbl_805D5138, arg1);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), s32 *, 0x18) = 0x9D03;
    if (M2C_FIELD(arg2, f32 *, 8) > lbl_805D9EA0) {
        ((EneDDObj2*)lbl_805D5138)->m16((void*)(arg2 + 0xC), (void*)arg3);
        return;
    }
    ((EneDDObj2*)lbl_805D5138)->m15((void*)(arg2 + 0xC), (void*)arg3);
}

}
