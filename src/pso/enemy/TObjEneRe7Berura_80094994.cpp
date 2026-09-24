#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En_80094994 { char pad[0x18]; };
struct V_En_80094994 : Base_En_80094994 {
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
struct Base_Sub_80094994 { char pad[0x14]; };
struct V_Sub_80094994 : Base_Sub_80094994 {
    PADV4
    PADV
    virtual s32 m5();
};
struct Base_80094BA4_80094994 { char pad[0x18]; };
struct VObj_80094BA4_80094994 : Base_80094BA4_80094994 {
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
    virtual s32  m97();
};

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
extern const f32 TObjEneRe7Berura__data_805D9764;
extern const f32 lbl_805D9770;
void TObjEneRe7Berura__sub_80094BFC(u8 *arg0);
void TObjEneRe7Berura__sub_80094D98(u8 *arg0);
s32 TObjEneRe7Berura__sub_8009331C(void *, void *);
s32 TObjEneRe7Berura__sub_80093470(void *, void *);
s32 state_patrol__16TObjEneRe7BeruraFPvi(void *, void *);
s32 TObjEneRe7Berura__sub_800936A8(void *, void *);
s32 TObjEneRe7Berura__sub_80093888(void *, void *);
s32 TObjEneRe7Berura__sub_80093C80(void *, void *);
s32 TObjEneRe7Berura__sub_800940E8(void *, void *);
s32 TObjEneRe7Berura__sub_80094470(void *, void *);
s32 TObjEneRe7Berura__sub_80094624(void *, void *);
s32 TObjEneRe7Berura__sub_8009472C(void *, void *);
void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1);
void TObjEneRe7Berura__vt85(s32 arg0, u32 arg1, s32 arg2);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void TObjEneRe7Berura__sub_80094A9C(void *self, s32 msg);
}

extern "C" {

s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0);
void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK init_fields4B8__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);

void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En_80094994 *) arg0)->m93();
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        TObjPlayer__sub_800A0554(arg0 + 0x3D8);
        TBoss3Volopt__sub_800D8C48(arg0 + 0x38);
        init_fields4B8__16TObjEneRe7BeruraFPv(arg0);
        return;
    case 3:
        if (((V_Sub_80094994 *) (arg0 + 0x3D8))->m5() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        return;
    case 0:
        ((V_En_80094994 *) arg0)->m100();
        ((V_En_80094994 *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
        break;
    }
}

void TObjEneRe7Berura__sub_80094A9C(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        TObjEneDD__sub_800BBA18((void *)(self), (M2C_UNK)(1));
        break;
    }
}

void TObjEneRe7Berura__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRe7Berura__sub_80094A9C((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        state_attack__16TObjEneRe7BeruraFPvi((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneRe7Berura__sub_8009472C((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneRe7Berura__sub_80094624((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        TObjEneRe7Berura__sub_80094470((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneRe7Berura__sub_800940E8((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneRe7Berura__sub_80093C80((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRe7Berura__sub_80093888((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneRe7Berura__sub_800936A8((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        state_patrol__16TObjEneRe7BeruraFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        TObjEneRe7Berura__sub_80093470((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        TObjEneRe7Berura__sub_8009331C((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0) {
    struct VObj_80094BA4_80094994 *o = (struct VObj_80094BA4_80094994 *)arg0;
    if (o->m97() != 0) {
        TObjEneDD__sub_800BBA18(arg0, 9);
        return 1;
    }
    return 0;
}
#pragma push
#pragma fp_contract on
void TObjEneRe7Berura__sub_80094BFC(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D9770) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneRe7Berura__data_805D9764) != 0)) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003BC1F)), (u32) (arg0 + 0x38), 0, 0);
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void TObjEneRe7Berura__sub_80094D98(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x3F4) * 4));
    M2C_FIELD(temp_r3, s32 *, 0x418) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x418) & 0xFFFFFFFD);
}
#pragma pop

}
