#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80080750();
s32 fn_801A85A0();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
extern const f32 lbl_805DBA40;
extern const f32 lbl_805DBA44;

struct TOTrapBase { char pad[0x18]; };
struct TOTrapVObj : TOTrapBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};
#pragma explicit_unused_unused_members on
void render__6TOTrapFv(u8 *arg0) {
    if (fn_801A85A0() == 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((TOTrapVObj*)arg0)->m8(lbl_805DBA40, lbl_805DBA44);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) {
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
            if (fn_80080750() == 1) {
                fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
            }
            fn_803D9B78();
        }
    }
}

}
