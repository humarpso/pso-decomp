#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);

struct VBase0x18_2 { char pad[0x18]; };
struct VObj80108BB0 : VBase0x18_2 {
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

void fn_80108BB0(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108BB0 *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
}

}

void VObj80108BB0::m0(){}
void VObj80108BB0::m1(){}
void VObj80108BB0::m2(){}
void VObj80108BB0::m3(){}
void VObj80108BB0::m4(){}
void VObj80108BB0::m5(){}
void VObj80108BB0::m6(){}
void VObj80108BB0::m7(){}
void VObj80108BB0::m8(){}
void VObj80108BB0::m9(){}
void VObj80108BB0::m10(){}
void VObj80108BB0::m11(){}
void VObj80108BB0::m12(){}
void VObj80108BB0::m13(){}
void VObj80108BB0::m14(){}
void VObj80108BB0::m15(){}
void VObj80108BB0::m16(){}
void VObj80108BB0::m17(){}
void VObj80108BB0::m18(){}
void VObj80108BB0::m19(){}
void VObj80108BB0::m20(){}
void VObj80108BB0::m21(){}
void VObj80108BB0::m22(){}
void VObj80108BB0::m23(){}
void VObj80108BB0::m24(){}
void VObj80108BB0::m25(){}
void VObj80108BB0::m26(){}
void VObj80108BB0::m27(){}
void VObj80108BB0::m28(){}
void VObj80108BB0::m29(){}
void VObj80108BB0::m30(){}
void VObj80108BB0::m31(){}
void VObj80108BB0::m32(){}
void VObj80108BB0::m33(){}
void VObj80108BB0::m34(){}
void VObj80108BB0::m35(){}
void VObj80108BB0::m36(){}
void VObj80108BB0::m37(){}
void VObj80108BB0::m38(){}
void VObj80108BB0::m39(){}
void VObj80108BB0::m40(){}
void VObj80108BB0::m41(){}
void VObj80108BB0::m42(){}
void VObj80108BB0::m43(){}
void VObj80108BB0::m44(){}
void VObj80108BB0::m45(){}
void VObj80108BB0::m46(){}
void VObj80108BB0::m47(){}
void VObj80108BB0::m48(){}
void VObj80108BB0::m49(){}
void VObj80108BB0::m50(){}
void VObj80108BB0::m51(){}
void VObj80108BB0::m52(){}
void VObj80108BB0::m53(){}
void VObj80108BB0::m54(){}
void VObj80108BB0::m55(){}
void VObj80108BB0::m56(){}
void VObj80108BB0::m57(){}
void VObj80108BB0::m58(){}
void VObj80108BB0::m59(){}
void VObj80108BB0::m60(){}
void VObj80108BB0::m61(){}
void VObj80108BB0::m62(){}
void VObj80108BB0::m63(s32, void *){}
