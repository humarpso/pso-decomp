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
    virtual M2C_UNK m77();
};

struct Obj_80168010 : VObj_18 {
    u8 pad1C[0xA4 - 0x1C];
    u8 *fA4;
    u8 padA8[0xC0 - 0xA8];
    f32 fC0;
    f32 fC4;
    u8 padC8[0x326 - 0xC8];
    s16 state;
    u8 pad328[0x354 - 0x328];
    f32 f354;
};

extern "C" {
M2C_UNK advance_wrap_offset__25TOHangceilingCave01NormalFPv();
M2C_UNK reset_state(void *);
M2C_UNK fn_801682E4(void *, M2C_UNK, s32 *, f32);
M2C_UNK fn_80168488(void *);
extern const f32 lbl_805DB650;
extern const f32 lbl_805DB654;
extern s32 lbl_805DB658;
extern const f32 lbl_805DB65C;
extern const f32 lbl_805DB660;
extern const f32 lbl_805DB664;
void TOHangceilingCave01Normal__vt78(Obj_80168010 *arg0);
}

extern "C" {

void *TOHangceilingCave01Key__ct(void *arg0);
void TOHangceilingCave01Normal__vt77(void *arg0);
void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1);
void TOHangceilingCave01KeyQuick__sub_80168C6C(void *);
void *get_bml_motion(s32, s32);
void __dl__7TObjectFPv(void *);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);
M2C_UNK fn_801682E4(void *, M2C_UNK, s32 *, f32);
void init_geometry__19TOHangceilingCave01FPv(void *);

extern M2C_UNK __vt__22TOHangceilingCave01Key[];

void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__22TOHangceilingCave01Key[];
extern void *lbl_805D2FEC;

void *TOHangceilingCave01Key__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FEC;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    return arg0;
}

extern const f64 lbl_80441850[];
extern s32 lbl_805D59D0;
extern s32 *lbl_805D59D4;
extern s32 lbl_805D59E4;
extern const f32 lbl_805DB650;
extern const f32 lbl_805DB654;
extern s32 lbl_805DB658;
extern const f32 lbl_805DB65C;

void TOHangceilingCave01Normal__vt77(void *arg0) {
    void *temp_r6;
    union { f64 d; u32 i[2]; } cvt;

    s32 *p;
    M2C_FIELD(arg0, void **, 0xF8) = get_bml_motion(lbl_805D59D0, lbl_805D59E4);
    p = lbl_805D59D4;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *p;
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) (lbl_805DB65C * M2C_FIELD(arg0, f32 *, 0x350));
    fn_801682E4(arg0, 0, p, lbl_805DB65C);
    temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) | lbl_805DB658);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB650;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DB654;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4) - lbl_805DB654;
}
void TOHangceilingCave01Normal__vt78(Obj_80168010 *arg0) {
    switch (arg0->state) {
    case 0:
        if (lbl_805DB650 < arg0->f354) {
            arg0->f354 = arg0->f354 - lbl_805DB654;
            return;
        }
        ((M2C_UNK (*)(void *, int)) fn_801682E4)(arg0, 1);
        reset_state(arg0);
        return;
    case 1:
        advance_wrap_offset__25TOHangceilingCave01NormalFPv();
        fn_80168488(arg0);
        if (lbl_805DB65C == arg0->fC0) {
            M2C_FIELD(arg0->fA4, s32 *, 0x18) &= ~8;
            return;
        }
        if (lbl_805DB660 == arg0->fC0) {
            ((M2C_UNK (*)(void *, int)) fn_801682E4)(arg0, 2);
        }
        return;
    case 2:
        advance_wrap_offset__25TOHangceilingCave01NormalFPv();
        if (lbl_805DB664 == arg0->fC0) {
            M2C_FIELD(arg0->fA4, s32 *, 0x18) |= lbl_805DB658;
            return;
        }
        if (arg0->fC0 == arg0->fC4) {
            arg0->m77();
        }
        break;
    }
}

}
