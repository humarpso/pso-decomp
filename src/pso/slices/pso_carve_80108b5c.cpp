#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);

struct VBase0x18 { char pad[0x18]; };
struct VObj80108B5C : VBase0x18 {
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
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63(s32, void *);
};

u8 *fn_80108B5C(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108B5C *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
    return arg0 + 0x38;
}

}

void VObj80108B5C::m0(){}
void VObj80108B5C::m1(){}
void VObj80108B5C::m2(){}
void VObj80108B5C::m3(){}
void VObj80108B5C::m4(){}
void VObj80108B5C::m5(){}
void VObj80108B5C::m6(){}
void VObj80108B5C::m7(){}
void VObj80108B5C::m8(){}
void VObj80108B5C::m9(){}
void VObj80108B5C::m10(){}
void VObj80108B5C::m11(){}
void VObj80108B5C::m12(){}
void VObj80108B5C::m13(){}
void VObj80108B5C::m14(){}
void VObj80108B5C::m15(){}
void VObj80108B5C::m16(){}
void VObj80108B5C::m17(){}
void VObj80108B5C::m18(){}
void VObj80108B5C::m19(){}
void VObj80108B5C::m20(){}
void VObj80108B5C::m21(){}
void VObj80108B5C::m22(){}
void VObj80108B5C::m23(){}
void VObj80108B5C::m24(){}
void VObj80108B5C::m25(){}
void VObj80108B5C::m26(){}
void VObj80108B5C::m27(){}
void VObj80108B5C::m28(){}
void VObj80108B5C::m29(){}
void VObj80108B5C::m30(){}
void VObj80108B5C::m31(){}
void VObj80108B5C::m32(){}
void VObj80108B5C::m33(){}
void VObj80108B5C::m34(){}
void VObj80108B5C::m35(){}
void VObj80108B5C::m36(){}
void VObj80108B5C::m37(){}
void VObj80108B5C::m38(){}
void VObj80108B5C::m39(){}
void VObj80108B5C::m40(){}
void VObj80108B5C::m41(){}
void VObj80108B5C::m42(){}
void VObj80108B5C::m43(){}
void VObj80108B5C::m44(){}
void VObj80108B5C::m45(){}
void VObj80108B5C::m46(){}
void VObj80108B5C::m47(){}
void VObj80108B5C::m48(){}
void VObj80108B5C::m49(){}
void VObj80108B5C::m50(){}
void VObj80108B5C::m51(){}
void VObj80108B5C::m52(){}
void VObj80108B5C::m53(){}
void VObj80108B5C::m54(){}
void VObj80108B5C::m55(){}
void VObj80108B5C::m56(){}
void VObj80108B5C::m57(){}
void VObj80108B5C::m58(){}
void VObj80108B5C::m59(){}
void VObj80108B5C::m60(){}
void VObj80108B5C::m61(){}
void VObj80108B5C::m62(){}
void VObj80108B5C::m63(s32, void *){}
