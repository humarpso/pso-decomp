#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct G_80040AE4 { u8 pad[0x18]; s32 arr[1]; };

struct E_80040AF8 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct G_80040AF8 { u8 pad[0x42c]; E_80040AF8 *entries; };

struct O_80040AF8 { u8 pad[0x24]; s32 f24; u8 pad2[0x34 - 0x28]; s32 f34; };

struct VBase_80040A7C { u8 pad[0x18]; };

struct VObj_80040A7C : VBase_80040A7C {
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
    virtual void m79(void *);
};

extern "C" {
extern G_80040AE4 *lbl_805D4C5C;
s32 TObjPlayer__sub_80040AE4(s32 i);
extern G_80040AF8 *lbl_805D4C60;
void TObjPlayer__sub_80040AF8(O_80040AF8 *self, s32 i);
M2C_UNK TBoss3VoloptCore__ct(void *, M2C_UNK *);
M2C_UNK TObjEnemyCustom__ct();
extern M2C_UNK lbl_80483A10[];
void *TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3);
void *TBoss3VoloptCore__sub_800407E0(void *arg0);
int TObjPlayer__sub_80040ADC(void);
void *destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1);
M2C_UNK TBoss3VoloptCore__ct(void *, M2C_UNK *);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK TObjEnemyCustom__ct();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TObjEnemyCustomFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_8003CFEC(M2C_UNK);

extern void *tl_04;

void *TBoss3VoloptCore__sub_800407E0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3D4);
    if (o != NULL) {
        o = TBoss3VoloptCore__sub_80040A7C((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_80483A10[];

void *destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
        free_collision_body_parts(arg0);
        fn_8003CFEC(0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80483A10[];

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3) {
    TObjEnemyCustom__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TBoss3VoloptCore__ct(arg0, lbl_80483A10);
    return arg0;
}

void *TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg2) {
    ((M2C_UNK (*)(void *, void *))TObjEnemyCustom__ct)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
    ((VObj_80040A7C *)arg0)->m79(arg2);
    ((M2C_UNK (*)(void *))TBoss3VoloptCore__ct)(arg0);
    return arg0;
}

int TObjPlayer__sub_80040ADC(void) { return 0; }
s32 TObjPlayer__sub_80040AE4(s32 i) {
    return lbl_805D4C5C->arr[i];
}
void TObjPlayer__sub_80040AF8(O_80040AF8 *self, s32 i) {
    self->f34 = lbl_805D4C60->entries[i].f8;
    self->f24 = lbl_805D4C60->entries[i].fc;
}

}
