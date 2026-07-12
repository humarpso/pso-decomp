#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En_800c38d0 { char pad[0x18]; };
struct V_En_800c38d0 : Base_En_800c38d0 {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};
struct Base_Sub_800c38d0 { char pad[0x14]; };
struct V_Sub_800c38d0 : Base_Sub_800c38d0 {
    PADV4
    PADV
    virtual s32 m5();
};
struct Base_800C3A00 { char pad[0x18]; };
struct VObj_800C3A00 : Base_800C3A00 {
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
};

extern "C" {

void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1);
void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TObjEneRe2Flower__sub_800C3B80(void *);
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
M2C_UNK fn_800B98C0(void *);
M2C_UNK fn_800D8C48(void *);
M2C_UNK fn_800D8E80(void *);

void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((V_En_800c38d0 *) arg0)->m93();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 8);
        TObjEneDD__sub_800BBA04(arg0, 2);
        fn_800B98C0(arg0);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3F4);
        if (TObjEneRe2Flower__sub_800C3B80(arg0) != 0) {
            fn_800D8C48(arg0 + 0x38);
            return;
        }
        fn_800D8E80(arg0 + 0x38);
        return;
    case 3:
        if (((V_Sub_800c38d0 *) (arg0 + 0x3F4))->m5() != 0) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (s32)(2));
        }
    case 1:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        ((V_En_800c38d0 *) arg0)->m100();
        ((V_En_800c38d0 *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        break;
    }
}

void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800C3A00 *)arg0)->m93();
        return;
    case 3:
        TObjEneDD__sub_800BBA18((void *)(arg0), (s32)(1));
    case 5:
    case 0:
        return;
    }
}

}
