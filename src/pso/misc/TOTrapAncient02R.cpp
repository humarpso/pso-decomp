#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOTrapAncient02R__vt86(void);

void TOTrapAncient02R__vt86(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80141CF0
#include "types.h"

extern "C" {

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
int __dl__FPv();
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjMapWarp__sub_80141CB8(void);
void TOTrapAncient02R__sub_80141CF0(void);
void TObjRoomId__sub_80141CF4(void);

void TOTrapAncient02R__sub_80141CF0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017A1B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOTrapAncient02R__vt84(void *arg0);
void TOTrapAncient02R__sub_80141CF0(void *, void *, void *);
void TOTrapAncient02R__sub_80154D78(void *);
s32 fn_800FD8B4(void *);

extern M2C_UNK lbl_8050BEE0[];
extern M2C_UNK lbl_804A7468[];

void TOTrapAncient02R__vt84(void *arg0) {
    s32 x;
    x = fn_800FD8B4(arg0);
    if (x == 1) {
        TOTrapAncient02R__sub_80141CF0((void *)((char *)arg0 + 80), lbl_8050BEE0, lbl_804A7468);
        TOTrapAncient02R__sub_80154D78(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017A210
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_trap_count__16TOTrapAncient02RFPv(void *arg0);

extern M2C_UNK lbl_80442F30;
extern s32 lbl_805D5550;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA7C;

void calc_trap_count__16TOTrapAncient02RFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (M2C_FIELD(arg0, f32 *, 0x70) + ((lbl_805DBA7C * (f32) lbl_805D5550) + lbl_805DBA78));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        return;
    }
    if ((s32) lbl_805D5550 == 3) {
        if (temp_r4 > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x360) = 0x1D;
        }
    } else if (temp_r4 > 0xE) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0xE;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017AA8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TOTrapAncient02RFPv(void *arg0);
void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1);
void *TOTrapAncient02R__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__15TOTrapAncient02Fv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TOTrapAncient02RFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x36C);
    if (o != NULL) {
        o = TOTrapAncient02R__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOTrapAncient02R[];

void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOTrapAncient02R;
        __dt__15TOTrapAncient02Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017B84C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8017B84C { char pad[0x18]; };
struct VObj_8017B84C : Base_8017B84C {
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
};

extern "C" {

void TOTrapAncient02R__vt78(void *arg0);

void TOTrapAncient02R__vt78(void *arg0) {
    struct VObj_8017B84C *o = (struct VObj_8017B84C *)arg0;
    o->m77();
}

}
#endif
#endif
