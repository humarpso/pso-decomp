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
    virtual M2C_UNK m112();
};
extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjEneMe1CanadinLeader__sub_8009AF54(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E504(void *);
M2C_UNK copy_pos__17TObjEneMe1CanadinFPv(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0);
}

extern "C" {

void TObjEneMe1CanadinLeader__sub_8009A7A0(void);
void TObjEneMe1CanadinLeader__sub_8009A934(void);
void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1);
void TObjEneMe1CanadinLeader__vt104(void *arg0);
u8 TObjEneMe1CanadinLeader__vt107(void *arg0);
void TObjEneMe1CanadinLeader__vt111(void *arg0);
void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1);
void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0);
void *TObjEneMe1CanadinLeader__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe1CanadinFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void TObjEneMe1CanadinLeader__sub_8009A7A0(void) {  }

void TObjEneMe1CanadinLeader__sub_8009A934(void) {  }

extern M2C_UNK lbl_8048FE94[];

void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE94;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 TObjEneMe1CanadinLeader__vt107(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x4D0) <= 0);
}

extern s32 *lbl_805D4FE4;
extern s32 *lbl_805D4FE8;

void TObjEneMe1CanadinLeader__vt111(void *arg0) {
    *lbl_805D4FE4 = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FE8 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

extern void *lbl_805D4FD0;

void TObjEneMe1CanadinLeader__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

extern M2C_UNK __vt__23TObjEneMe1CanadinLeader[];

void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        TObjEneMe1CanadinLeader__sub_8009E504((void *) (arg0));
        TObjEneMe1CanadinLeader__sub_8009AF54((void *) (arg0));
    }
    copy_pos__17TObjEneMe1CanadinFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjEneMe1CanadinLeader;
        __dt__17TObjEneMe1CanadinFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F8);
    if (o != NULL) {
        o = TObjEneMe1CanadinLeader__ct(o, tl_04, arg0);
    }
    return o;
}

}
