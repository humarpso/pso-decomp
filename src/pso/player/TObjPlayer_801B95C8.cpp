#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void use_current_item__10TObjPlayerFPv(void *arg0);
M2C_UNK TEffGuard__sub_800849A0(M2C_UNK *);
void *test_flag3__9TItemDataFPv();

}

struct Base_801B95C8 { char pad[0x18]; };
struct VObj_801B95C8 : Base_801B95C8 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34();
    virtual void pad35(); virtual void pad36(); virtual void pad37();
    virtual void pad38(); virtual void pad39(); virtual void pad40();
    virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46();
    virtual void pad47(); virtual void pad48(); virtual void pad49();
    virtual void pad50(); virtual void pad51(); virtual void pad52();
    virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void pad57(); virtual void pad58();
    virtual void pad59(); virtual void pad60(); virtual void pad61();
    virtual void pad62();
    virtual void m63(s32, M2C_UNK *);
};

extern "C" {

void use_current_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    temp_r3 = test_flag3__9TItemDataFPv();
    if (temp_r3 != NULL) {
        ((VObj_801B95C8*)temp_r3)->m28();
        return;
    }
    ((VObj_801B95C8*)arg0)->m63(0x24, &sp8);
    TEffGuard__sub_800849A0(&sp8);
}

}
