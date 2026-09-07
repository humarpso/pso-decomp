#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_80042888_lbl_80483DD4 {
    M2C_UNK value;
    u8 remaining[0xDC];
};

struct RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor {
    M2C_UNK value;
    u8 remaining[0x14C];
};

extern "C" {
void TBoss3VoloptMonitor__sub_8004292C(u8 *arg0);
s32 TBoss3VoloptMonitor__sub_80042510(void *);
s32 TBoss3VoloptMonitor__sub_80042944(void *, int);
s32 TObjEnemyCustom__ct(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
extern RecoveredGlobal_80042888_lbl_80483DD4 lbl_80483DD4;
extern M2C_UNK __vt__19TBoss3VoloptMonitor[];
extern s32 lbl_805D2740;
u8 *TBoss3VoloptMonitor__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TBoss3VoloptMonitor__sub_800420D8(void);
void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1);
void *create__19TBoss3VoloptMonitorFPv(void *arg0);
void release__19TBoss3VoloptMonitorFv(void);
void set_flags_30__19TBoss3VoloptMonitorFPv(void* p);
void update_state__19TBoss3VoloptMonitorFPv(void *arg0);
s32 TBoss3VoloptHiraisin__sub_80041D0C();
s32 TBoss3VoloptHiraisin__sub_80041D3C();
void TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 fn_80041E88();
s32 update_state__20TBoss3VoloptHiraisinFPv();

void TBoss3VoloptMonitor__sub_800420D8(void) {  }
void update_state__19TBoss3VoloptMonitorFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_state__20TBoss3VoloptHiraisinFPv();
        return;
    case 1:
        TBoss3VoloptHiraisin__sub_80041D0C();
        return;
    case 4:
        fn_80041E88();
        return;
    case 5:
        TBoss3VoloptHiraisin__sub_80041D3C();
        return;
    }
}

extern u32 lbl_805D4CA4;

void release__19TBoss3VoloptMonitorFv(void) {
    if ((u32) lbl_805D4CA4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4CA4);
        lbl_805D4CA4 = 0U;
    }
}

extern void *tl_04;

void *create__19TBoss3VoloptMonitorFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x394);
    if (o != NULL) {
        o = TBoss3VoloptMonitor__ct((u8 *)(o), (M2C_UNK)(tl_04), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__19TBoss3VoloptMonitor[];

void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss3VoloptMonitor;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80042888_lbl_80483DD4_size[sizeof(RecoveredGlobal_80042888_lbl_80483DD4) == 0xE0 ? 1 : -1];
typedef char RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor_size[sizeof(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor) == 0x150 ? 1 : -1];
u8 *TBoss3VoloptMonitor__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjEnemyCustom__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80042888___vt__19TBoss3VoloptMonitor *)&__vt__19TBoss3VoloptMonitor).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2740;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    M2C_FIELD(arg0, s16 *, 0x33C) = 0;
    TBoss3VoloptMonitor__sub_80042510((void *) (arg0));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80483DD4.value), (int) (1));
    TBoss3VoloptMonitor__sub_80042944((void *) (arg0), (int) (1));
    return arg0;
}

void set_flags_30__19TBoss3VoloptMonitorFPv(void* p) { *(u32*)((char*)p + 0x30) |= 0x4040000; }

void TBoss3VoloptMonitor__sub_8004292C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
}

}
