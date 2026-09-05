#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual M2C_UNK m115();
};
extern "C" {
void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Shinowa__vt60(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p);
void TObjEneMe3Shinowa__sub_800E7724(u8 *arg0);
}

extern "C" {

void *TObjEneMe3Shinowa__ct(void *arg0);
void TObjEneMe3Shinowa__sub_800E767C(void);
void TObjEneMe3Shinowa__sub_800E7720(void);
void TObjEneMe3Shinowa__vt61(void* p);
void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1);
void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p);
void fn_800E762C(void);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneGibbles__sub_80156720(void *);
int VecCopy__FP3VecPC3Vec(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void queue_destruction__7TObjectFv(void *);

void fn_800E762C(void) {  }

void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3CC) + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneMe3Shinowa__sub_800E767C(void) {  }

void TObjEneMe3Shinowa__vt60(u8 *arg0) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TBoss8Dragon__sub_800BB780((void *) (arg0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 1) {
        TBoss8Dragon__sub_800BB780((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC) {
        TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (0xC)));
    }
}

void TObjEneMe3Shinowa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 13) { TObjEneDD__sub_800BBA18(p, (void*)13); } }
void TObjEneMe3Shinowa__sub_800E7720(void) {  }

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];

void TObjEneMe3Shinowa__sub_800E7724(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m115();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    }
    copy_position_vector__17TObjEneMe3ShinowaFPv((void*)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E4));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E4) = 0;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E0));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E0) = 0;
        if (M2C_FIELD(arg0, void **, 0x424) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x424)); M2C_FIELD(arg0, M2C_UNK *, 0x424) = 0; }
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3E8, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];
extern void *lbl_805D2AC8;

void *TObjEneMe3Shinowa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1000));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AC8;
    return arg0;
}

}
