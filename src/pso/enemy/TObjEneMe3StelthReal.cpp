#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_be4a70 { char pad[0x18]; };

struct VObj_18_be4a70 : VBase_18_be4a70 {
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
    virtual M2C_UNK m85(s16, M2C_UNK);
};

struct RecoveredGlobal_800F0DF0___vt__20TObjEneMe3StelthReal {
    M2C_UNK value;
    u8 remaining[0x1CC];
};

extern "C" {
M2C_UNK invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
M2C_UNK setup_move_bounds__16TObjEneMe3StelthFPv(void *);
M2C_UNK TObjEneMe3Stelth__sub_800F5124(void *);
M2C_UNK TObjEneMe3Stelth__ct();
extern M2C_UNK __vt__20TObjEneMe3StelthReal[];
extern s32 lbl_805D2AFC;
u8 *TObjEneMe3StelthReal__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

typedef struct EneStelth_800F0CE8 EneStelth_800F0CE8;

void TObjEneMe3StelthReal__vt105(void *arg0);
void TObjEneMe3StelthReal__vt109(void);
int TObjEneMe3StelthReal__vt60(void* p);
int TObjEneMe3StelthReal__vt61(void* p);
void *__dt__20TObjEneMe3StelthRealFv(void *arg0, s16 arg1);
void *create__20TObjEneMe3StelthRealFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
int TObjEneMe3Stelth__vt60(void*);
int TObjEneMe3Stelth__vt61(void*);
void __dl__7TObjectFPv(void *);
void __dt__16TObjEneMe3StelthFv(void *, int);
void *__nw__7TObjectFUl(int);
f32 calc_boss4_scale__10TObjPlayerFi();

void TObjEneMe3StelthReal__vt109(void) {  }

extern const f32 lbl_805DA81C;

void TObjEneMe3StelthReal__vt105(void *arg0) {
    EneStelth_800F0CE8 *self = (EneStelth_800F0CE8 *)arg0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = M2C_FIELD(arg0, s32 *, 0x3EC) + 1;
    if ((M2C_FIELD(arg0, s32 *, 0x3EC) >= 2) || (calc_boss4_scale__10TObjPlayerFi() < lbl_805DA81C)) {
        TObjEneDD__sub_800BBA18(self, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(self, 6);
}

int TObjEneMe3StelthReal__vt60(void* p) { return TObjEneMe3Stelth__vt60(p); }
int TObjEneMe3StelthReal__vt61(void* p) { return TObjEneMe3Stelth__vt61(p); }

extern M2C_UNK __vt__20TObjEneMe3StelthReal[];

void *__dt__20TObjEneMe3StelthRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneMe3StelthReal;
        __dt__16TObjEneMe3StelthFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_800F0DF0___vt__20TObjEneMe3StelthReal_size[sizeof(RecoveredGlobal_800F0DF0___vt__20TObjEneMe3StelthReal) == 0x1D0 ? 1 : -1];
u8 *TObjEneMe3StelthReal__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjEneMe3Stelth__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800F0DF0___vt__20TObjEneMe3StelthReal *)&__vt__20TObjEneMe3StelthReal).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2AFC;
    invoke_initialization_hook__9TObjEneDDFPv((void *) (arg0), (void *) (arg2));
    setup_move_bounds__16TObjEneMe3StelthFPv((void *) (arg0));
    TObjEneMe3Stelth__sub_800F5124((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_be4a70 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
    return arg0;
}

void *create__20TObjEneMe3StelthRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44C);
    if (o != NULL) {
        o = TObjEneMe3StelthReal__ct((u8 *)(o), (M2C_UNK)(tl_04), (s32)(arg0));
    }
    return o;
}

}
