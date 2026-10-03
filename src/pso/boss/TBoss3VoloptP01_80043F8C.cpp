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

struct RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct RecoveredGlobal_80044174_lbl_804FEE68 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_800443BC { u16 a; u16 b; f32 c; };

extern "C" {
u8 * __ct__17TObjVoloptShutterFv(void *, s32);
u8 * TObjEnemyCustom__ct(void *);
M2C_UNK TBoss3VoloptP01__sub_80044038(void *);
void *__nw__7TObjectFUl(int);
extern M2C_UNK __vt__15TBoss3VoloptP01[];
extern s32 lbl_805D2748;
u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK TBoss3VoloptP01__sub_80044038(void *);
u8 * __ct__17TObjVoloptShutterFv(void *, s32);
u8 * TObjEnemyCustom__ct(void *);
void *__nw__7TObjectFUl(int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern M2C_UNK __vt__15TBoss3VoloptP01[];
extern RecoveredGlobal_80044174_lbl_804FEE68 lbl_804FEE68;
extern s32 lbl_805D2748;
extern const f32 lbl_805D8764;
extern const f32 lbl_805D8794;
extern const f32 lbl_805D8798;
u8 *TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4);
extern const f32 lbl_805D8764;
void TBoss3VoloptP01__sub_800443BC(O_800443BC *self);
void *__construct_array(void *, void *, void *, u32, u32);
void fn_80044330(void* p);
void* fn_8004438C(void* p);
int TObjPlayer__sub_8004433C(s32 _w0);
}

extern "C" {

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1);
void *create__15TBoss3VoloptP01FPv(void *arg0);
void fn_80044330(void* p);
void* fn_8004438C(void* p);
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

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_80044174___vt__15TBoss3VoloptP01_size[sizeof(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01) == 0x14C ? 1 : -1];
typedef char RecoveredGlobal_80044174_lbl_804FEE68_size[sizeof(RecoveredGlobal_80044174_lbl_804FEE68) == 0xC ? 1 : -1];
u8 *TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4) {
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r0;
    TObjEnemyCustom__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 *)&__vt__15TBoss3VoloptP01).value;
    TObjPlayer__sub_8004433C((s32)((s32)((void *) (arg0 + 0x3BC))));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2748;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TBoss3VoloptP01__sub_80044038((void *) (arg0));
    temp_r29 = (s32) (lbl_805D8794 * (f32) (arg2 * 0x3C));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805D8798 * cos_table_lookup((int) (temp_r29))) + M2C_FIELD(&lbl_804FEE68.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805D8798 * sin_table_lookup((int) (temp_r29))) + M2C_FIELD(&lbl_804FEE68.value, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8764;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (-0x4000 - temp_r29);
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x34)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)__ct__17TObjVoloptShutterFv((void *)((int) (temp_r3)), (s32)((void *) (arg2))));
    }
    M2C_FIELD(arg0, s32 *, 0x3B8) = var_r0;
    return arg0;
}
#pragma pop

u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TObjEnemyCustom__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 *)&__vt__15TBoss3VoloptP01).value;
    TObjPlayer__sub_8004433C((s32)((s32)((s32) (arg0 + 0x3BC))));
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

int TObjPlayer__sub_8004433C(s32 _w0) {
    __construct_array((void *)(_w0 + 4), (void *)fn_8004438C, 0, 8, 11);
    fn_80044330((void *)_w0);
    return _w0;
}

void* fn_8004438C(void* p) { TBoss3VoloptP01__sub_800443BC((O_800443BC *)(p)); return p; }
void TBoss3VoloptP01__sub_800443BC(O_800443BC *self) {
    self->a = 0xFFFF;
    self->b = 0;
    self->c = lbl_805D8764;
}

}
