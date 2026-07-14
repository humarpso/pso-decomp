#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__13TItemEffFlameFPvs(void *arg0, s16 arg1);
void notify_hit__13TItemEffFlameFPv(u8 *arg0);
u8 *notify_hit_and_get_pos__13TItemEffFlameFPv(u8 *arg0);
M2C_UNK TLobby__sub_80103114(void *, M2C_UNK);
M2C_UNK TLobby__sub_80103B04();
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK fn_801566CC(void *);
M2C_UNK obj_getField1c(void *);

struct VBase0x18_80108b5c { char pad[0x18]; };
struct VObj80108B5C_80108b5c : VBase0x18_80108b5c {
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

u8 *notify_hit_and_get_pos__13TItemEffFlameFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108B5C_80108b5c *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
    return arg0 + 0x38;
}

void VObj80108B5C_80108b5c::m0(){}
void VObj80108B5C_80108b5c::m1(){}
void VObj80108B5C_80108b5c::m2(){}
void VObj80108B5C_80108b5c::m3(){}
void VObj80108B5C_80108b5c::m4(){}
void VObj80108B5C_80108b5c::m5(){}
void VObj80108B5C_80108b5c::m6(){}
void VObj80108B5C_80108b5c::m7(){}
void VObj80108B5C_80108b5c::m8(){}
void VObj80108B5C_80108b5c::m9(){}
void VObj80108B5C_80108b5c::m10(){}
void VObj80108B5C_80108b5c::m11(){}
void VObj80108B5C_80108b5c::m12(){}
void VObj80108B5C_80108b5c::m13(){}
void VObj80108B5C_80108b5c::m14(){}
void VObj80108B5C_80108b5c::m15(){}
void VObj80108B5C_80108b5c::m16(){}
void VObj80108B5C_80108b5c::m17(){}
void VObj80108B5C_80108b5c::m18(){}
void VObj80108B5C_80108b5c::m19(){}
void VObj80108B5C_80108b5c::m20(){}
void VObj80108B5C_80108b5c::m21(){}
void VObj80108B5C_80108b5c::m22(){}
void VObj80108B5C_80108b5c::m23(){}
void VObj80108B5C_80108b5c::m24(){}
void VObj80108B5C_80108b5c::m25(){}
void VObj80108B5C_80108b5c::m26(){}
void VObj80108B5C_80108b5c::m27(){}
void VObj80108B5C_80108b5c::m28(){}
void VObj80108B5C_80108b5c::m29(){}
void VObj80108B5C_80108b5c::m30(){}
void VObj80108B5C_80108b5c::m31(){}
void VObj80108B5C_80108b5c::m32(){}
void VObj80108B5C_80108b5c::m33(){}
void VObj80108B5C_80108b5c::m34(){}
void VObj80108B5C_80108b5c::m35(){}
void VObj80108B5C_80108b5c::m36(){}
void VObj80108B5C_80108b5c::m37(){}
void VObj80108B5C_80108b5c::m38(){}
void VObj80108B5C_80108b5c::m39(){}
void VObj80108B5C_80108b5c::m40(){}
void VObj80108B5C_80108b5c::m41(){}
void VObj80108B5C_80108b5c::m42(){}
void VObj80108B5C_80108b5c::m43(){}
void VObj80108B5C_80108b5c::m44(){}
void VObj80108B5C_80108b5c::m45(){}
void VObj80108B5C_80108b5c::m46(){}
void VObj80108B5C_80108b5c::m47(){}
void VObj80108B5C_80108b5c::m48(){}
void VObj80108B5C_80108b5c::m49(){}
void VObj80108B5C_80108b5c::m50(){}
void VObj80108B5C_80108b5c::m51(){}
void VObj80108B5C_80108b5c::m52(){}
void VObj80108B5C_80108b5c::m53(){}
void VObj80108B5C_80108b5c::m54(){}
void VObj80108B5C_80108b5c::m55(){}
void VObj80108B5C_80108b5c::m56(){}
void VObj80108B5C_80108b5c::m57(){}
void VObj80108B5C_80108b5c::m58(){}
void VObj80108B5C_80108b5c::m59(){}
void VObj80108B5C_80108b5c::m60(){}
void VObj80108B5C_80108b5c::m61(){}
void VObj80108B5C_80108b5c::m62(){}
void VObj80108B5C_80108b5c::m63(s32, void *){}

struct VBase0x18_2_80108bb0 { char pad[0x18]; };
struct VObj80108BB0_80108bb0 : VBase0x18_2_80108bb0 {
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

void notify_hit__13TItemEffFlameFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108BB0_80108bb0 *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
}

void VObj80108BB0_80108bb0::m0(){}
void VObj80108BB0_80108bb0::m1(){}
void VObj80108BB0_80108bb0::m2(){}
void VObj80108BB0_80108bb0::m3(){}
void VObj80108BB0_80108bb0::m4(){}
void VObj80108BB0_80108bb0::m5(){}
void VObj80108BB0_80108bb0::m6(){}
void VObj80108BB0_80108bb0::m7(){}
void VObj80108BB0_80108bb0::m8(){}
void VObj80108BB0_80108bb0::m9(){}
void VObj80108BB0_80108bb0::m10(){}
void VObj80108BB0_80108bb0::m11(){}
void VObj80108BB0_80108bb0::m12(){}
void VObj80108BB0_80108bb0::m13(){}
void VObj80108BB0_80108bb0::m14(){}
void VObj80108BB0_80108bb0::m15(){}
void VObj80108BB0_80108bb0::m16(){}
void VObj80108BB0_80108bb0::m17(){}
void VObj80108BB0_80108bb0::m18(){}
void VObj80108BB0_80108bb0::m19(){}
void VObj80108BB0_80108bb0::m20(){}
void VObj80108BB0_80108bb0::m21(){}
void VObj80108BB0_80108bb0::m22(){}
void VObj80108BB0_80108bb0::m23(){}
void VObj80108BB0_80108bb0::m24(){}
void VObj80108BB0_80108bb0::m25(){}
void VObj80108BB0_80108bb0::m26(){}
void VObj80108BB0_80108bb0::m27(){}
void VObj80108BB0_80108bb0::m28(){}
void VObj80108BB0_80108bb0::m29(){}
void VObj80108BB0_80108bb0::m30(){}
void VObj80108BB0_80108bb0::m31(){}
void VObj80108BB0_80108bb0::m32(){}
void VObj80108BB0_80108bb0::m33(){}
void VObj80108BB0_80108bb0::m34(){}
void VObj80108BB0_80108bb0::m35(){}
void VObj80108BB0_80108bb0::m36(){}
void VObj80108BB0_80108bb0::m37(){}
void VObj80108BB0_80108bb0::m38(){}
void VObj80108BB0_80108bb0::m39(){}
void VObj80108BB0_80108bb0::m40(){}
void VObj80108BB0_80108bb0::m41(){}
void VObj80108BB0_80108bb0::m42(){}
void VObj80108BB0_80108bb0::m43(){}
void VObj80108BB0_80108bb0::m44(){}
void VObj80108BB0_80108bb0::m45(){}
void VObj80108BB0_80108bb0::m46(){}
void VObj80108BB0_80108bb0::m47(){}
void VObj80108BB0_80108bb0::m48(){}
void VObj80108BB0_80108bb0::m49(){}
void VObj80108BB0_80108bb0::m50(){}
void VObj80108BB0_80108bb0::m51(){}
void VObj80108BB0_80108bb0::m52(){}
void VObj80108BB0_80108bb0::m53(){}
void VObj80108BB0_80108bb0::m54(){}
void VObj80108BB0_80108bb0::m55(){}
void VObj80108BB0_80108bb0::m56(){}
void VObj80108BB0_80108bb0::m57(){}
void VObj80108BB0_80108bb0::m58(){}
void VObj80108BB0_80108bb0::m59(){}
void VObj80108BB0_80108bb0::m60(){}
void VObj80108BB0_80108bb0::m61(){}
void VObj80108BB0_80108bb0::m62(){}
void VObj80108BB0_80108bb0::m63(s32, void *){}

extern M2C_UNK lbl_8049F038[];

void *destroy__13TItemEffFlameFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F038;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA4) != 0U) {
            TObjPlayer__sub_80154A00(arg0);
            fn_801566CC(arg0);
            obj_getField1c(arg0);
            TLobby__sub_80103B04();
            TLobby__sub_80103114(arg0, 0xFFFF);
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
