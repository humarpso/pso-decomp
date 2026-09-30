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

struct Ene_803154A8;
typedef void (Ene_803154A8::*Fn_803154A8)(void);
struct Ent_803154A8 { Fn_803154A8 f; u8 rest[12]; };
struct Ene_803154A8 {
    u8 pad[0x374];
    s32 idx;
};

struct RecoveredGlobal_80315A40___vt__15TObjEneDelDepth {
    M2C_UNK value;
    u8 remaining[0x14C];
};

extern "C" {
s32 add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 initialize__9TObjEnemyFPv(void *);
s32 TObjPlayer__sub_80156844(void *, void *, int);
void TObjEneDelDepth__sub_803154A8(Ene_803154A8 *o, s32 i);
extern Ent_803154A8 lbl_804E836C[];
s32 TObjEneDelDepth__sub_803158B0(void *);
extern M2C_UNK __vt__15TObjEneDelDepth[];
extern s32 lbl_805D4118;
u8 *TObjEneDelDepth__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 TObjEneDelDepth__data_805DF258;
extern const f32 lbl_805DF2DC;
void TObjEneDelDepth__sub_80315888(u8 *arg0);
}

extern "C" {

void TObjEneDelDepth__sub_80315518(void);
void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1);
void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK conditional_delete__15TObjEneDelDepthFis(s32, M2C_UNK);

extern M2C_UNK lbl_80475DD8;

void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

void TObjEneDelDepth__sub_803154A8(Ene_803154A8 *o, s32 i) {
    Fn_803154A8 fn;
    o->idx = i;
    fn = lbl_804E836C[o->idx].f;
    if (fn) {
    }
    (o->*fn)();
}

void TObjEneDelDepth__sub_80315518(void) {  }

extern M2C_UNK __vt__15TObjEneDelDepth[];

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneDelDepth;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        conditional_delete__15TObjEneDelDepthFis(M2C_FIELD(arg0, s32 *, 0x37C), 1);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80315A40___vt__15TObjEneDelDepth_size[sizeof(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth) == 0x150 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void TObjEneDelDepth__sub_80315888(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (lbl_805DF2DC + M2C_FIELD(arg0, f32 *, 0x354));
    if (M2C_FIELD(arg0, f32 *, 0x390) < TObjEneDelDepth__data_805DF258) {
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneDelDepth__data_805DF258;
    }
}
#pragma pop

u8 *TObjEneDelDepth__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth *)&__vt__15TObjEneDelDepth).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4118;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (8));
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TObjEneDelDepth__sub_80315888((u8 *)((void *) (arg0)));
    TObjEneDelDepth__sub_803158B0((void *) (arg0));
    TObjPlayer__sub_80156844((void *) (arg0), (void *) (arg0 + 0x38), (int) (0));
    TObjEneDelDepth__sub_803154A8((Ene_803154A8 *) (arg0), 0);
    return arg0;
}

}
