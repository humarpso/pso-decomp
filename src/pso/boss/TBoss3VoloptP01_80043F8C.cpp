#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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

struct RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 { M2C_UNK value; u8 remaining[0x148]; };

extern "C" {
int TObjPlayer__sub_8004433C(s32);
u8 * __ct__17TObjVoloptShutterFv(void *, s32);
u8 * TObjEnemyCustom__ct(void *);
M2C_UNK TBoss3VoloptP01__sub_80044038(void *);
void *__nw__7TObjectFUl(int);
extern M2C_UNK __vt__15TBoss3VoloptP01[];
extern s32 lbl_805D2748;
u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1);
void *create__15TBoss3VoloptP01FPv(void *arg0);
void fn_80044330(void* p);
void* fn_8004438C(void* p);
int TBoss3VoloptP01__sub_800443BC(void*);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__15TBoss3VoloptP01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x418);
    if (o != NULL) {
        o = TBoss3VoloptP01__sub_800442A0((u8 *)(o), (M2C_UNK)(tl_04), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TBoss3VoloptP01[];

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss3VoloptP01;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TObjEnemyCustom__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 *)&__vt__15TBoss3VoloptP01).value;
    TObjPlayer__sub_8004433C((s32)((s32) (arg0 + 0x3BC)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2748;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TBoss3VoloptP01__sub_80044038((void *) (arg0));
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x34))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__17TObjVoloptShutterFv(temp_r3, 0));
    }
    M2C_FIELD(arg0, u8 **, 0x3B8) = var_r0;
    return arg0;
}

void fn_80044330(void* p) { *(s32*)((char*)p + 0x0) = 0; }
int TObjPlayer__sub_8004433C(s32 _w0) { return 0; }
void* fn_8004438C(void* p) { TBoss3VoloptP01__sub_800443BC(p); return p; }

}
