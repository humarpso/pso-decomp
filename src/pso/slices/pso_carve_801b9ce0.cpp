#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801B9CE0 { char pad[0x18]; };
struct VObj_801B9CE0 : Base_801B9CE0 {
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
};

extern "C" {

M2C_UNK TObjPlayer__sub_801BF8EC(s32, s32, M2C_UNK);
void *fn_801C675C(s32, s32);

void fn_801B9CE0(s32 arg0) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 9;
    do {
        temp_r3 = fn_801C675C(arg0 + 0xD04, var_r31);
        if (temp_r3 != NULL) {
            TObjPlayer__sub_801BF8EC(arg0 + 0xD04, var_r31, 0);
            ((VObj_801B9CE0*)temp_r3)->m19();
        }
        var_r31 += 1;
    } while (var_r31 <= 0xC);
}

}
