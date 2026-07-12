#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseVT { char pad[0x18]; };
struct VObj : BaseVT {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
};

extern "C" {

void state_return_home__13TObjEneMe1GeeFPvi(VObj *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneEpsilon__sub_800B9680(void *, void *);
s32 TObjEneEpsilon__sub_800B96D4(void *, f32);
M2C_UNK update_angle__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
M2C_UNK TObjEneMe1Gee__sub_800CBEC4(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();

extern const f32 TObjEneMe1Gee__data_805DA0A8;
extern const f32 lbl_805DA0CC;
extern const f32 lbl_805DA0D0;

void state_return_home__13TObjEneMe1GeeFPvi(VObj *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        TObjEneDD__sub_800BBA04(arg0, 0xF);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        arg0->m94();
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 2) {
            arg0->m103();
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (TObjEneEpsilon__sub_800B96D4(arg0, TObjEneMe1Gee__data_805DA0A8) != 0) {
            M2C_FIELD(arg0, s32 *, 0x434) = 2;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x434);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x438) >= 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
            }
            TObjEneMe1Gee__sub_800CBE6C(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4));
            break;
        case 1:
            TObjEneEpsilon__sub_800B9680(arg0, (u8 *)arg0 + 0x50);
            update_velocity__9TObjEneDDFPv(arg0);
            update_angle__13TObjEneMe1GeeFPv(arg0);
            TObjEneMe1Gee__sub_800CBEC4(arg0);
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DA0CC) {
                TObjEneDD__sub_800BAC14(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805DA0D0);
            }
            break;
        }
        arg0->m87();
        break;
    }
}

}
