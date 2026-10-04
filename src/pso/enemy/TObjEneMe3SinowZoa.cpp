#ifndef PSO_CLASS_PACKAGE

#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define V8(n) virtual void v##n();
#define V64(n) V8(n##0) V8(n##1) V8(n##2) V8(n##3) V8(n##4) V8(n##5) V8(n##6) V8(n##7)

extern "C" {

struct VBase_14_948132 { char pad[0x14]; };

struct VObj_14_948132 : VBase_14_948132 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_599a64 { char pad[0x18]; };

struct VObj_18_599a64 : VBase_18_599a64 {
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
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Stack_80319B8C {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_18_fd404c { char pad[0x18]; };

struct VObj_18_fd404c : VBase_18_fd404c {
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
    virtual void m85();
    virtual void m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_80319E74 { f32 x, y; };

struct VBase_18_64d9d3 { char pad[0x18]; };

struct VObj_18_64d9d3 : VBase_18_64d9d3 {
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
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual M2C_UNK m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

typedef struct Vec_80317F90 { f32 x; f32 y; f32 z; } Vec_80317F90;

struct VBase_18_e66632 { char pad[0x18]; };

struct VObj_18_e66632 : VBase_18_e66632 {
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
    virtual void m85();
    virtual void m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual s32 m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual M2C_UNK m109();
};

struct Base18F { char pad[0x18]; };

struct VObj18F : Base18F {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

struct RecoveredGlobal_8031A3D8_lbl_80542FDC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct B_8031A178 { u8 pad[0x18]; };

struct V_8031A178 : B_8031A178 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void f33();
    virtual void f34();
    virtual void f35();
    virtual void f36();
    virtual void f37();
    virtual void f38();
    virtual void f39();
    virtual void f40();
    virtual void f41();
    virtual void f42();
    virtual void f43();
    virtual void f44();
    virtual void f45();
    virtual void f46();
    virtual void f47();
    virtual void f48();
    virtual void f49();
    virtual void f50();
    virtual void f51();
    virtual void f52();
    virtual void f53();
    virtual void f54();
    virtual void f55();
    virtual void f56();
    virtual void f57();
    virtual void f58();
    virtual void f59();
    virtual void f60();
    virtual void f61();
    virtual void f62();
    virtual void f63();
    virtual void f64();
    virtual void f65();
    virtual void f66();
    virtual void f67();
    virtual void f68();
    virtual void f69();
    virtual void f70();
    virtual void f71();
    virtual void f72();
    virtual void f73();
    virtual void f74();
    virtual void f75();
    virtual void f76();
    virtual void f77();
    virtual void f78();
    virtual void f79();
    virtual void f80();
    virtual void f81();
    virtual void f82();
    virtual void f83();
    virtual void f84();
    virtual void f85();
    virtual void f86();
    virtual void f87();
    virtual void f88();
    virtual void f89();
    virtual void f90();
    virtual void f91();
    virtual void f92();
    virtual void f93();
    virtual void f94();
    virtual void f95();
    virtual void f96();
    virtual void f97();
    virtual void f98();
    virtual void f99();
    virtual void f100();
    virtual void f101();
    virtual void f102();
    virtual void f103();
    virtual void f104();
    virtual void f105();
    virtual void f106();
    virtual void f107();
    virtual void f108();
    virtual void f109();
    virtual void f110();
    virtual void f111(s32);
};

struct Param_8031A2A0 { u8 pad[0x18]; s32 level; };

typedef char RecoveredGlobal_8031A3D8_lbl_80542FDC_size[sizeof(RecoveredGlobal_8031A3D8_lbl_80542FDC) == 0x14 ? 1 : -1];

struct T_8031A494 { u8 pad[0x354]; f32 f354; };

struct Base_8031A4E8 { char pad[0x18]; };

struct VObj_8031A4E8 : Base_8031A4E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86();
};

struct Base_8031A538 { char pad[0x18]; };

struct VObj_8031A538 : Base_8031A538 {
    V64(a) V64(b)
    V8(c0) V8(c1) V8(c2) V8(c3) V8(c4) V8(c5) V8(c6) V8(c7)
    V8(d0) V8(d1) V8(d2) V8(d3) V8(d4) V8(d5) V8(d6) V8(d7)
    V8(e0) V8(e1) V8(e2) V8(e3) V8(e4) V8(e5) V8(e6) V8(e7)
    V8(f0) V8(f1) V8(f2) V8(f3) V8(f4) V8(f5) V8(f6) V8(f7)
    V8(g0) V8(g1) V8(g2) V8(g3) V8(g4) V8(g5) V8(g6) V8(g7)
    V8(h0) V8(h1) V8(h2) V8(h3) V8(h4) V8(h5) V8(h6) V8(h7)
    V8(i0) V8(i1) V8(i2) V8(i3) V8(i4) V8(i5) V8(i6) V8(i7)
    V8(j0) V8(j1) V8(j2) V8(j3) V8(j4) V8(j5) V8(j6) V8(j7)
    V8(k0) V8(k1) V8(k2) V8(k3) V8(k4) V8(k5) V8(k6) V8(k7)
    V8(l0) V8(l1) V8(l2) V8(l3) V8(l4) V8(l5) V8(l6)
    virtual void m95();
    virtual void m96();
    f32 f3c_get();
};

struct VObj8031A598_Base { char pad[0x14]; };

struct VObj8031A598 : VObj8031A598_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct VObj8031A5E0_Base { char pad[0x14]; };

struct VObj8031A5E0 : VObj8031A5E0_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct VBase_18_c44252 { char pad[0x18]; };

struct VObj_18_c44252 : VBase_18_c44252 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

struct Stack_800E7324 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800E7324_lbl_8043CF94 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_800E75AC { f32 x; f32 y; f32 z; };

struct Node_800E75AC { u8 pad[0x2c]; void *child; };

struct Obj_800E75AC { u8 pad[0x34]; Node_800E75AC *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800E750C { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800E750C { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800E750C *fA4; };

struct VBase_18_bd3b49 { char pad[0x18]; };

struct VObj_18_bd3b49 : VBase_18_bd3b49 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual f32 m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

typedef char RecoveredGlobal_800E7324_lbl_8043CF94_size[sizeof(RecoveredGlobal_800E7324_lbl_8043CF94) == 0xC ? 1 : -1];

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
    virtual M2C_UNK m86();
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

struct VBase_14_c143b1 { char pad[0x14]; };

struct VObj_14_c143b1 : VBase_14_c143b1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
};

struct VBase_14_2ab9de { char pad[0x14]; };

struct VObj_14_2ab9de : VBase_14_2ab9de {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};

typedef struct Tbl_8031AF88 { u8 pad[0xC]; s32 t[3][2]; } Tbl_8031AF88;

f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
u32 get_item_field_6__10TObjPlayerFPv(void *);
f32 get_random_float__8TObjFishFv(f32);
void queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
void fn_8002B630(void *, void *, s32);
void init_zako__15TObjBoss2TunnelFPvPv(void *, void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
void create_timed_particle_emitter(void *, int, int, int);
void spawn_particle_effect(void *, int);
s32 get_field_d8__10TObjPlayerFPv();
s32 fn_800B91F4(void *);
M2C_UNK enemy_turn_and_move_on_ground(void *, int, f32);
M2C_UNK update_angle__14TObjEneEpsilonFPvi(void *, int);
M2C_UNK enemy_init_validate_period(void *, int);
M2C_UNK enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
M2C_UNK enemy_init_acquire_period(void *, int);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
s32 clamp_frame_index__9TObjEneDDFi(int);
s32 check_v2_mode__9TObjEneDDFv(s32, s32);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
int TObjEneDD__vt93(void*);
int TObjEneDD__vt92(void*);
M2C_UNK check_state_flag_4__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BA438(void *, void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int, int);
void refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
void clear_attack_receipts(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
s32 TObjEneMe3SinowZoa__sub_800D72A4(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, f32);
void spawn_effect_f8__10TObjPlayerFii(void *, s32);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
f32 * TBoss3Volopt__sub_800F059C(void *);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
void advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
s32 set_indexed_flags(void *, int, int);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
void get_hand_joint_position__10TObjPlayerFPvi(void *, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *, s32);
void play_sound_effect(s32, void *, s32, s32);
void __dl__7TObjectFPv(void *);
void create__10TTecDebandFiii(void *, void *, int);
void create__9TTecJelinFiiii(void *, void *, void *, int);
void create__9TTecRestaFPvPvPv(void *, void *, int);
void create__9TTecSiftaFPvPvPv(void *, void *, int);
void create_instance__9TTecZaruaFiiii(void *, void *, void *, int);
M2C_UNK set_active__12TObjEneReconFv();
M2C_UNK TObjEneMe3SinowZoa__sub_80316840(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_80316C3C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803170F0(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80317254(void *, s32);
void TObjEneMe3SinowZoa__sub_80317B50(void *, s32);
void TObjEneMe3SinowZoa__sub_80317F90(u8 *arg0, s32 arg1);
M2C_UNK TObjEneMe3SinowZoa__sub_803181A8(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803182F8(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_8031845C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80318564(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_8031884C(void *, s32);
void TObjEneMe3SinowZoa__sub_80318C0C(void *, s32);
struct Ene_80318F7C;
void TObjEneMe3SinowZoa__sub_80318F7C(Ene_80318F7C *, s32);
void TObjEneMe3SinowZoa__sub_8031955C(u8 *arg0, s32 arg1);
M2C_UNK TObjEneMe3SinowZoa__sub_80319748(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803199E0(void *, s32);
void TObjEneMe3SinowZoa__sub_80319B8C(u8 *arg0, s32 arg1);
M2C_UNK TObjEneMe3SinowZoa__sub_80319C70(void *, s32);
void TObjEneMe3SinowZoa__sub_80319E74(u8 *arg0, s32 arg1);
void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1);
void TObjEneMe3SinowZoa__sub_8031A178(u8 *arg0, u32 arg1, s32 arg2);
void TObjEneMe3SinowZoa__sub_8031A2A0(u8 *arg0);
void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0);
u8 TObjEneMe3SinowZoa__sub_8031A454(u8 *arg0);
int select_and_apply_target__18TObjEneMe3SinowZoaFPv(void* p);
u8 TObjEneMe3SinowZoa__sub_8031A494(T_8031A494 *self);
s32 TObjEneMe3SinowZoa__sub_8031A4D0(u8 *arg0);
void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0);
void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031A590(void);
void TObjEneMe3SinowZoa__vt109(void);
s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0);
void TObjEneMe3SinowZoa__vt105(void);
u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031A69C(void);
void TObjEneMe3SinowZoa__sub_8031A6A0(u8 *arg0);
bool TObjEneMe3SinowZoa__sub_8031A820(u8 *arg0);
u8 TObjEneMe3SinowZoa__sub_8031A900(Obj_800E750C *arg0, s32 arg1, f32 farg0);
f32 TObjEneMe3SinowZoa__sub_8031A9A0(Obj_800E75AC *self);
void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0);
void activate_appear__18TObjEneMe3SinowZoaFPv(void* p);
void init_setup__18TObjEneMe3SinowZoaFPv(void* p);
void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031AB64(u8 *arg0);
void TObjEneMe3SinowZoa__sub_8031ABBC(void);
void TObjEneMe3SinowZoa__vt60(u8 *arg0);
void TObjEneMe3SinowZoa__vt61(void* p);
void TObjEneMe3SinowZoa__sub_8031AC70(void);
void TObjEneMe3SinowZoa__sub_8031AC74(u8 *arg0);
void TObjEneMe3SinowZoa__sub_8031ADE8(u8 *arg0);
void * __dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void bind_motion_context(s32, f32);
s32 compose_motion_node_matrix(void *);
s32 matrix_mult_vec(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();

extern f32 *TObjEneMe3SinowZoa__data_80542FD4[];
extern u8 *TObjEneMe3SinowZoa__data_805D6AD8;
extern s32 TObjEneMe3SinowZoa__data_805D6AE0;
extern const f32 TObjEneMe3SinowZoa__data_805DF2F0;
extern const f32 TObjEneMe3SinowZoa__data_805DF2F4;
extern const f32 TObjEneMe3SinowZoa__data_805DF2FC;
extern const f32 TObjEneMe3SinowZoa__data_805DF314;
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;
extern const f32 TObjEneMe3SinowZoa__data_805DF320;
extern const f32 TObjEneMe3SinowZoa__data_805DF324;
extern const f32 TObjEneMe3SinowZoa__data_805DF328;
extern const f32 TObjEneMe3SinowZoa__data_805DF32C;
extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];
extern u8 lbl_80475DF0[];
extern Tbl_8031AF88 lbl_80542FB0;
extern RecoveredGlobal_8031A3D8_lbl_80542FDC lbl_80542FDC;
extern u8 lbl_8058D490[];
extern s32 lbl_805D5550;
extern const f32 lbl_805DF2F8;
extern const f32 lbl_805DF300;
extern const f32 lbl_805DF304;
extern const f32 lbl_805DF330;
extern const f32 lbl_805DF350;
extern const f32 lbl_805DF358;
extern const f32 lbl_805DF360;
extern const f32 lbl_805DF374;
extern const f32 lbl_805DF378;
extern f32 lbl_805DF37C;
extern f32 lbl_805DF380;
extern const f32 lbl_805DF384;
extern const f32 lbl_805DF388;
extern const f32 lbl_805DF38C;

#pragma push
#pragma fp_contract on
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneMe3SinowZoaReal__vt105();
extern "C" void TObjEneMe3SinowZoaReal__vt109();
extern "C" void TObjEneMe3SinowZoaReal__vt60();
extern "C" void TObjEneMe3SinowZoaReal__vt61();
extern "C" void TObjEneMe3SinowZoa__sub_80316A74();
extern "C" void TObjEneMe3SinowZoa__sub_803173D0();
extern "C" void TObjEneMe3SinowZoa__sub_8031786C(u8 *);
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void TObjPlayer__sub_80015884();
extern "C" void TObjPlayer__sub_80016C54();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void TObjPlayer__sub_800F673C();
extern "C" void __dt__22TObjEneMe3SinowZoaRealFv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80475E2C[];
extern "C" u8 lbl_80475E3C[];
extern "C" u8 lbl_80475E54[];
extern "C" u8 lbl_80475E68[];
extern "C" u8 lbl_80475E84[];
extern "C" u8 lbl_80475E9C[];
extern "C" u8 lbl_80475EB4[];
extern "C" u8 lbl_80475EC8[];
extern "C" u8 lbl_80475EE0[];
extern "C" u8 lbl_80475EF4[];
extern "C" u8 lbl_80475F10[];
extern "C" u8 lbl_80475F24[];
extern "C" u8 lbl_80475F38[];
extern "C" u8 lbl_80475F54[];
extern "C" u8 lbl_80475F64[];
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_move__18TObjEneMe3SinowZoaFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_804E87F0[2];
extern void *lbl_804E87F8[16];
extern void *lbl_804E8838[2];
extern void *lbl_804E8840[16];
void *lbl_804E87A8[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804E87C4[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41400000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_804E87F0[2] = {
    (void *)&lbl_80475E2C, (void *)0x0,
};
void *lbl_804E87F8[16] = {
    (void *)&lbl_80475E3C, (void *)&lbl_80475E54, (void *)&lbl_80475E68, (void *)&lbl_80475E84,
    (void *)&lbl_80475E9C, (void *)&lbl_80475EB4, (void *)&lbl_80475EC8, (void *)&lbl_80475EE0,
    (void *)&lbl_80475EF4, (void *)&lbl_80475F10, (void *)&lbl_80475F24, (void *)0x0,
    (void *)&lbl_80475F38, (void *)&lbl_804E87F0, (void *)&lbl_804E87F8, (void *)0x1000b,
};
__declspec(section ".data") void *lbl_804E8838[2] = {
    (void *)&lbl_80475F54, (void *)0x0,
};
void *lbl_804E8840[16] = {
    (void *)&lbl_80475E3C, (void *)&lbl_80475E54, (void *)&lbl_80475E68, (void *)&lbl_80475E84,
    (void *)&lbl_80475E9C, (void *)&lbl_80475EB4, (void *)&lbl_80475EC8, (void *)&lbl_80475EE0,
    (void *)&lbl_80475EF4, (void *)&lbl_80475F10, (void *)&lbl_80475F24, (void *)0x0,
    (void *)&lbl_80475F64, (void *)&lbl_804E8838, (void *)&lbl_804E8840, (void *)0x1000b,
};
void *lbl_804E8880[52] = {
    (void *)0x10000, (void *)0x0, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x1, (void *)0x3f333333, (void *)0x80000000,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f8ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
};
void *__vt__22TObjEneMe3SinowZoaReal[116] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__22TObjEneMe3SinowZoaRealFv, (void *)&TObjEneMe3SinowZoa__sub_8031ADE8,
    (void *)&TObjEneMe3SinowZoa__sub_8031786C, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&TObjEneMe3SinowZoa__sub_80316A74,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneMe3SinowZoa__sub_8031AC70, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80016C54, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&TObjPlayer__sub_80015884, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneMe3SinowZoa__sub_8031ABBC, (void *)&TObjEneMe3SinowZoaReal__vt60, (void *)&TObjEneMe3SinowZoaReal__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&TObjPlayer__sub_800F673C, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneMe3SinowZoa__sub_8031A178,
    (void *)&update_shadow_height__18TObjEneMe3SinowZoaFPv, (void *)&update_collision__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&init_setup__18TObjEneMe3SinowZoaFPv,
    (void *)&activate_appear__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&select_and_apply_target__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneMe3SinowZoa__sub_8031A6A0, (void *)&is_target_in_range__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneMe3SinowZoaReal__vt105,
    (void *)&TObjEneMe3SinowZoa__sub_8031A69C, (void *)&try_run_effect_m6__18TObjEneMe3SinowZoaFPv, (void *)&try_run_effect_m7__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneMe3SinowZoaReal__vt109,
    (void *)&TObjEneMe3SinowZoa__sub_8031A590, (void *)&action__18TObjEneMe3SinowZoaFPvi, (void *)&update_move__18TObjEneMe3SinowZoaFPv, (void *)&TObjEneMe3SinowZoa__sub_803173D0,
};
#define lbl_804E87C4 ((u8 *)lbl_804E87C4)

struct VBase_14_aa9368 { char pad[0x14]; };
struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};
struct VBase_18_fc0b09 { char pad[0x18]; };
struct VObj_18_fc0b09 : VBase_18_fc0b09 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual M2C_UNK m106();
    virtual s32 m107();
    virtual s32 m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual M2C_UNK m113();
};

struct Zoa_8031786C {
    u8 pad0[0x3C0];
    s32 f3C0;
    u8 pad3C4[0x3CC - 0x3C4];
    s32 f3CC;
    s32 f3D0;
    u8 pad3D4[0x3F8 - 0x3D4];
    s32 f3F8;
    u8 pad3FC[0x414 - 0x3FC];
    VObj_14_aa9368 sub;
};

M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
extern u8 lbl_8050BEC0[];
extern s32 *lbl_80542FF0[];
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D6ADC;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805DF318;

#define v ((VObj_18_fc0b09 *)arg0)
void TObjEneMe3SinowZoa__sub_8031786C(u8 *arg0) {
    s32 mode;
    s32 draw;
    s32 i;
    Zoa_8031786C *o = (Zoa_8031786C *)arg0;

    if (check_demo_mode__10TObjPlayerFv() != 0) {
        v->m113();
        return;
    }
    TObjEneMe3SinowZoa__sub_8031A454(arg0);
    if (o->f3CC & 2) {
        mode = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        mode = v->m9(lbl_805D9E88, lbl_805D9E84, TObjEneMe3SinowZoa__data_805DF2F0);
    } else if (v->m8(lbl_805DF318, TObjEneMe3SinowZoa__data_805DF2F0) != 0) {
        mode = 1;
    } else {
        mode = 0;
    }
    if (mode != 0) {
        if (render_model_if_visible__18TObjEneMe3SinowZoaFPv(arg0) != 0) {
            return;
        }
        update_secondary_light__9TObjEneDDFPv(arg0);
        lbl_805D5660 = some_id_805c6f74;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
        if (!(o->f3D0 & 0x4000)) {
            v->m106();
            clear_global_flag_400__9TObjEneDDFv();
        }
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi(*(s32 *)(arg0 + 0x24));
        for (i = 0; i < 3; i++) {
            if (lbl_80542FF0[i] != NULL) {
                *lbl_80542FF0[i] = o->f3F8;
            }
        }
        draw = 1;
        if (v->m107() != 0) {
            if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                draw = 0;
            } else if (o->f3C0 != 0) {
                draw = 0;
            }
        } else if (TObjEneMe3SinowZoa__sub_800D72A4(&o->sub) != 0) {
            o->sub.m6();
            if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                draw = 0;
            }
        } else if (o->f3C0 != 0) {
            draw = 0;
        }
        if (draw != 0) {
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            translate_matrix(0, TObjEneMe3SinowZoa__data_805DF31C, *(f32 *)(arg0 + 0x3E4), TObjEneMe3SinowZoa__data_805DF31C);
            rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
            lbl_805D6ADC = 0;
            if (mode == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            pop_matrix();
        }
        if (v->m108() == 0 && TObjEneMe3SinowZoa__sub_800D72A4(&o->sub) != 0) {
            o->sub.m7();
        }
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv(arg0);
    }
    end_effect_render__13TParticleCtrlFv();
}

#undef v

struct VBase_14_c5778e { char pad[0x14]; };
struct VObj_14_c5778e : VBase_14_c5778e {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};
struct Vec_80317B50 { f32 x, y, z; };
u32 csnVectorUnder(void *, void *, int);
u32 csnVector(void *, void *, int);
s32 find_section_at_position__6TSceneFPv(void *);
s32 TObjEneMe3SinowZoa__sub_80316B20(void *, void *);
extern const f32 TObjEneMe3SinowZoa__data_805DF308;

#pragma push
#pragma fp_contract on
void TObjEneMe3SinowZoa__sub_80317B50(void *arg0_, s32 arg1) {
    Vec_80317B50 v;
    Vec_80317B50 pos;
    Vec_80317B50 tmp;
    s32 d[3];
    s32 i;
    u8 *arg0 = (u8 *)arg0_;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 0xC);
        ((VObj_18_fd404c *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3CC) &= 0xFFEFFFF9;
        M2C_FIELD(arg0, s32 *, 0x3CC) |= 1;
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x434) == 2) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x40000;
            set_indexed_flags(arg0, 0, 0x08000000);
            if (calc_boss4_scale__10TObjPlayerFi((s32)arg0) <= M2C_FIELD(arg0, f32 *, 0x3E8)) {
                if (((s32 (*)(u8 *))TObjEneMe3SinowZoa__sub_8031A454)(arg0) != 0) {
                    if (calc_boss4_scale__10TObjPlayerFi((s32)arg0) > TObjEneMe3SinowZoa__data_80542FD4[M2C_FIELD(arg0, s32 *, 0x3C8)][5]) {
                        transition_enemy_state(arg0, 0x10);
                    } else {
                        transition_enemy_state(arg0, 0xB);
                    }
                } else {
                    transition_enemy_state(arg0, 0x10);
                }
            } else {
                transition_enemy_state(arg0, 1);
            }
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x434)) {
        case 0:
            advance_animation_playback(arg0);
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x3CC) |= 4;
                play_sound_effect(0x4003AD2F, arg0 + 0x38, 0, 0);
                ((VObj_14_c5778e *)(arg0 + 0x414))->m1(0x1E);
                VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                v.y = M2C_FIELD(arg0, f32 *, 0x3E0) - TObjEneMe3SinowZoa__data_805DF320;
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
            }
            ((VObj_18_fd404c *)arg0)->m100();
            ((VObj_18_fd404c *)arg0)->m87();
            break;
        case 1:
            if (((VObj_14_c5778e *)(arg0 + 0x414))->m4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x3CC) |= 2;
                if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe3SinowZoa__data_805DF324) != 0) {
                    if (M2C_FIELD(arg0, u8 **, 0x390) == NULL) {
                        break;
                    }
                    d[0] = (s32)(TObjEneMe3SinowZoa__data_805DF328 * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) - 1;
                    d[1] = (s32)(TObjEneMe3SinowZoa__data_805DF32C * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) - 1;
                    if (d[1] <= d[0]) {
                        d[1]++;
                    }
                    d[2] = -(d[0] + d[1]);
                    for (i = 0; i < 3; i++) {
                        s32 ang;
                        VecCopy__FP3VecPC3Vec(&pos, M2C_FIELD(arg0, u8 **, 0x390) + 0x38);
                        ang = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), s32 *, 0x60) + ((d[i] + 1) << 14);
                        pos.x += TObjEneMe3SinowZoa__data_805DF320 * cos_table_lookup(ang);
                        pos.z -= TObjEneMe3SinowZoa__data_805DF320 * sin_table_lookup(ang);
                        pos.y += TObjEneMe3SinowZoa__data_805DF308;
                        VecCopy__FP3VecPC3Vec(&tmp, &pos);
                        tmp.x += pos.x - M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x38);
                        tmp.z += pos.z - M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x40);
                        if (TObjEneMe3SinowZoa__sub_80316B20(arg0, &tmp) == 0 &&
                            csnVector(M2C_FIELD(arg0, u8 **, 0x390) + 0x38, &tmp, 0x88E0) == 0 &&
                            csnVectorUnder(&pos, arg0 + 0x120, 0x15) != 0 &&
                            M2C_FIELD(arg0, s16 *, 0x28) == find_section_at_position__6TSceneFPv(&pos)) {
                            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &pos);
                            M2C_FIELD(arg0, s32 *, 0x60) = ang + 0xC000;
                            break;
                        }
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x434) = 2;
            }
            break;
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) &= ~4;
        break;
    }
}
#pragma pop

void TObjEneMe3SinowZoa__sub_80317F90(u8 *arg0, s32 arg1) {
    Vec_80317F90 v;
    Vec_80317F90 p;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    switch (arg1) {
    case 3:
    case 5:
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        ((VObj_18_64d9d3 *)(arg0))->m92();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFF8);
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x434)) {
        case 0:
            advance_animation_playback(arg0);
            if (objInBand__FP7GameObjf(arg0, lbl_805DF330) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DF300) != 0) {
                play_sound_effect(0x4003A82A, arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
                M2C_FIELD(arg0, s32 *, 0x438) = 0;
                v.x = TObjEneMe3SinowZoa__data_805DF31C;
                v.y = TObjEneMe3SinowZoa__data_805DF314;
                v.z = TObjEneMe3SinowZoa__data_805DF320;
                init_zako__15TObjBoss2TunnelFPvPv(&v, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                spawn_effect_f8__10TObjPlayerFii(&v, 0x14);
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x438) += 1;
            if (M2C_FIELD(arg0, s32 *, 0x438) >= 0x14) {
                M2C_FIELD(arg0, s32 *, 0x434) = 2;
                M2C_FIELD(arg0, s32 *, 0x3CC) |= 2;
                create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe3SinowZoa__data_805D6AE0, lbl_80475DF0, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                VecCopy__FP3VecPC3Vec(&p, arg0 + 0x38);
                p.x += TObjEneMe3SinowZoa__data_805DF320 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                p.z += TObjEneMe3SinowZoa__data_805DF320 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                trigger_dell_biter_events__10TObjPlayerFPv(&p);
                play_sound_effect(0x4003AD2E, arg0 + 0x38, 0, 0);
            }
            ((VObj_18_64d9d3 *)(arg0))->m100();
            break;
        case 2:
            queue_destruction__7TObjectFv(arg0);
            break;
        }
        break;
    }
}
extern int fold_flush_0;
#pragma pop

struct VBase_14_6ea8ee { char pad[0x14]; };
struct VObj_14_6ea8ee : VBase_14_6ea8ee {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
    virtual s32 m4();
};
struct VBase_18_4f5f2e { char pad[0x18]; };
struct VObj_18_4f5f2e : VBase_18_4f5f2e {
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
    virtual void m85();
    virtual void m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
    virtual void m104();
    virtual M2C_UNK m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual M2C_UNK m110();
};

f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK TObjEneDD__sub_800BAD1C(void *, f32 *, f32, f32, f32);
s32 TObjEneMe3SinowZoa__sub_800D7310(void *, f32);
void set_field_10__18TObjEneMe3SinowZoaFPvf(void *, f32);
s32 approach_angle_limited(int, int, int);
extern const f64 TObjEneMe3SinowZoa__data_804760A0;
extern const f32 TObjEneMe3SinowZoa__data_805DF308;
extern const f32 TObjEneMe3SinowZoa__data_805DF30C;
extern const f32 TObjEneMe3SinowZoa__data_805DF310;

#pragma push
#pragma opt_common_subs off
void TObjEneMe3SinowZoa__sub_80318C0C(void *arg0_, s32 arg1) {
    u8 *arg0 = (u8 *)arg0_;
    s32 var_r4;
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 0xC);
        ((VObj_18_4f5f2e *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFF8);
        M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x10000;
        M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x40000;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
        if (M2C_FIELD(arg0, s32 *, 0x3C0) != 0) {
            set_field_10__18TObjEneMe3SinowZoaFPvf(arg0 + 0x414, TObjEneMe3SinowZoa__data_805DF30C);
            ((VObj_14_6ea8ee *)(arg0 + 0x414))->m3();
            M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x100000;
            M2C_FIELD(arg0, s32 *, 0x434) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x434) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x438) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x434) == 4) {
            M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x80000;
            ((VObj_18_4f5f2e *)(arg0))->m105();
        }
        return;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x434)) {
        case 0:
            if (TObjEneMe3SinowZoa__sub_800D7310(arg0 + 0x414, TObjEneMe3SinowZoa__data_805DF310) != 0) {
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
            }
        case 1:
            advance_animation_playback(arg0);
            ((VObj_18_4f5f2e *)(arg0))->m103();
            if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEneMe3SinowZoa__data_805DF320) {
                if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
                    enemy_copy_target_destination(arg0);
                    update_velocity__9TObjEneDDFPv(arg0);
                    var_r4 = (s32) (TObjEneMe3SinowZoa__data_804760A0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
                } else {
                    var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
                }
                M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), var_r4, 0x300);
                M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
                M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            }
            ((VObj_18_4f5f2e *)(arg0))->m110();
            TObjEneMe3SinowZoa__sub_80316840(arg0);
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
            if (temp_f1 >= TObjEneMe3SinowZoa__data_805DF31C && temp_f1 <= TObjEneMe3SinowZoa__data_805DF308) {
                f32 *rec = TObjEneMe3SinowZoa__data_80542FD4[M2C_FIELD(arg0, s32 *, 0x3C8)];
                TObjEneDD__sub_800BAD1C(arg0, rec, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), rec[2]);
            } else {
                ((VObj_18_4f5f2e *)(arg0))->m100();
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x434) = 2;
            }
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x438) += 1;
            if (M2C_FIELD(arg0, s32 *, 0x438) >= ((s32 *)TObjEneMe3SinowZoa__data_80542FD4[M2C_FIELD(arg0, s32 *, 0x3C8)])[8]) {
                if (M2C_FIELD(arg0, s32 *, 0x3CC) & 0x100000) {
                    M2C_FIELD(arg0, s32 *, 0x434) = 3;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x434) = 4;
                }
            }
            ((VObj_18_4f5f2e *)(arg0))->m100();
            break;
        case 3:
            if (((VObj_14_6ea8ee *)(arg0 + 0x414))->m4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x434) = 4;
                M2C_FIELD(arg0, s32 *, 0x3CC) |= 0x40000;
                set_indexed_flags(arg0, 0, 0x08000000);
            }
            break;
        }
        ((VObj_18_4f5f2e *)(arg0))->m87();
        break;
    case 5:
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on

struct Vec_80318F7C { f32 x, y, z; };

struct SubBase_80318F7C { char pad[0x14]; };
struct Sub_80318F7C : SubBase_80318F7C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct TgtBase_80318F7C { char pad[0x18]; };
struct Tgt_80318F7C : TgtBase_80318F7C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual void m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct ObjBase_80318F7C { char pad[0x18]; };
struct Obj_80318F7C : ObjBase_80318F7C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual u32 m100();
};

struct Ene_80318F7C : Obj_80318F7C {
    u8 pad1c[0x28 - 0x1C];
    s16 f28;
    u8 pad2a[0x38 - 0x2A];
    Vec_80318F7C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB0 - 0x64];
    s32 fB0;
    u8 padb4[0xB8 - 0xB4];
    s16 fB8;
    u8 padba[0xC0 - 0xBA];
    f32 fC0;
    u8 padc4[0xC8 - 0xC4];
    f32 fC8;
    u8 padcc[0x390 - 0xCC];
    Tgt_80318F7C *f390;
    u8 pad394[0x3A0 - 0x394];
    f32 f3A0;
    u8 pad3a4[0x3A8 - 0x3A4];
    f32 f3A8;
    f32 f3AC;
    u8 pad3b0[0x3C0 - 0x3B0];
    s32 f3C0;
    u8 pad3c4[0x3CC - 0x3C4];
    s32 f3CC;
    u8 pad3d0[0x3E0 - 0x3D0];
    f32 f3E0;
    f32 f3E4;
    u8 pad3e8[0x414 - 0x3E8];
    Sub_80318F7C sub;
    u8 pad42c[0x434 - 0x42C];
    s32 f434;
    u8 pad438[0x440 - 0x438];
    f32 f440;
    f32 f444;
};

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 csnVecterUnder(void *, int);
s32 fn_800B91F4(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
void set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK transition_enemy_state(void *, int);
s32 TObjEneMe3SinowZoa__sub_800D7310(void *, f32);
void set_field_10__18TObjEneMe3SinowZoaFPvf(void *, f32);
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
s32 set_indexed_flags(void *, int, int);
s32 find_section_at_position__6TSceneFPv(void *);
void play_sound_effect(s32, void *, s32, s32);
void check_and_notify__18TObjEneMe3SinowZoaFPv(void *);
extern const f64 TObjEneMe3SinowZoa__data_804760A0;
extern const f32 TObjEneMe3SinowZoa__data_805DF2F0;
extern const f32 TObjEneMe3SinowZoa__data_805DF2F4;
extern const f32 lbl_805DF2F8;
extern const f32 TObjEneMe3SinowZoa__data_805DF30C;
extern const f32 TObjEneMe3SinowZoa__data_805DF310;
extern const f32 TObjEneMe3SinowZoa__data_805DF314;
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;
extern const f32 TObjEneMe3SinowZoa__data_805DF320;
extern const f32 TObjEneMe3SinowZoa__data_805DF328;
extern const f32 lbl_805DF348;
extern const f32 lbl_805DF34C;
extern const f32 lbl_805DF350;
extern const f32 lbl_805DF354;

void TObjEneMe3SinowZoa__sub_80318F7C(Ene_80318F7C *self, s32 arg1) {
    switch (arg1) {
    case 4:
        self->fB8 = 6;
        set_field_378__9TObjEneDDFPvi(self, 6);
        self->m94();
        self->f3CC &= 0xFFEFFFF8;
        self->f3CC |= 0x10000;
        self->f434 = 0;
        self->f440 = TObjEneMe3SinowZoa__data_805DF31C;
        set_active__9TObjEneDDFPv(self);
        break;
    case 3:
        if (self->f434 == 7 || get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0) {
            if (self->m100() == 0) {
                transition_enemy_state(self, 10);
            } else {
                transition_enemy_state(self, 6);
            }
        }
        break;
    case 0:
        switch ((u32)self->f434) {
        case 0:
            advance_animation_playback(self);
            if (self->fB0 & 8) {
                self->f434 = 1;
            }
            self->m100();
            self->m87();
            break;
        case 1: {
            s32 target;
            advance_animation_playback(self);
            if (update_death_check__14TObjEneEpsilonFPv(self) != 0) {
                enemy_copy_target_destination(self);
                update_velocity__9TObjEneDDFPv(self);
                target = (s32)(TObjEneMe3SinowZoa__data_804760A0 * get_ad_end_text_start__10TObjPlayerFv(self->f3A0, self->f3A8));
            } else {
                target = self->f60;
            }
            self->f60 = approach_angle_limited(self->f60, target, 0x1000);
            if (objInBand__FP7GameObjf(self, TObjEneMe3SinowZoa__data_805DF314) != 0) {
                self->f434 = 2;
            }
            self->m100();
            self->m87();
            break;
        }
        case 2:
            advance_animation_playback(self);
            if (update_death_check__14TObjEneEpsilonFPv(self) != 0) {
                enemy_copy_target_destination(self);
                update_velocity__9TObjEneDDFPv(self);
            }
            if (self->fC0 + self->fC8 >= lbl_805DF348) {
                if (((s32 (*)(void *, s32, f32))TObjEneMe3SinowZoa__sub_8031A900)(self, self->f60, self->f3AC - TObjEneMe3SinowZoa__data_805DF320) != 0) {
                    self->f434 = 7;
                } else {
                    Vec_80318F7C v;
                    f32 d = self->f3AC - TObjEneMe3SinowZoa__data_805DF320;
                    VecCopy__FP3VecPC3Vec(&v, &self->pos);
                    v.x = self->f3A0 * d + v.x;
                    v.y = v.y + TObjEneMe3SinowZoa__data_805DF320;
                    v.z = self->f3A8 * d + v.z;
                    if (csnVecterUnder(&v, 0x15) != 0) {
                        if (self->f28 == find_section_at_position__6TSceneFPv(&v)) {
                            if (self->f3C0 != 0) {
                                set_field_10__18TObjEneMe3SinowZoaFPvf(&self->sub, TObjEneMe3SinowZoa__data_805DF30C);
                                self->sub.m3();
                                self->f3CC |= 0x100000;
                                self->f3CC |= 0x40000;
                                clear_player_status_flag__10TObjPlayerFPviUi(self, 0, 0x08000000);
                                self->f434 = 3;
                            } else {
                                self->f434 = 4;
                            }
                            self->f444 = (self->f3AC - TObjEneMe3SinowZoa__data_805DF320) / lbl_805DF34C;
                            self->m89();
                            play_sound_effect(0x4003A82C, &self->pos, 0, 0);
                        } else {
                            self->f434 = 7;
                        }
                    } else {
                        self->f434 = 7;
                    }
                }
            }
            self->m100();
            self->m87();
            break;
        case 3:
            if (TObjEneMe3SinowZoa__sub_800D7310(&self->sub, TObjEneMe3SinowZoa__data_805DF310) != 0) {
                self->f434 = 4;
            }
        case 4:
            advance_animation_playback(self);
            if (self->fC0 + self->fC8 >= lbl_805DF2F8) {
                if (self->f3CC & 0x100000) {
                    self->f434 = 5;
                } else {
                    self->f434 = 6;
                }
                self->m90();
                play_sound_effect(0x4003A82A, &self->pos, 0, 0);
                check_and_notify__18TObjEneMe3SinowZoaFPv(self);
            }
            move_with_wall_slide_commit__9TObjEneDDFPvfff(self, self->f3A0, self->f3A8, self->f444);
            break;
        case 5:
            if (self->fC0 > TObjEneMe3SinowZoa__data_805DF2F0 && self->sub.m4() != 0) {
                self->f3CC &= ~0x100000;
                self->f434 = 6;
                self->f3CC |= 0x40000;
                set_indexed_flags(self, 0, 0x08000000);
            }
        case 6:
            advance_animation_playback(self);
            if (objInBand__FP7GameObjf(self, lbl_805DF350) != 0 && fn_800B91F4(self) != 0) {
                if (self->f390->m18(self, TObjEneMe3SinowZoa__data_805DF2F4) != 0) {
                    self->f390->m20(self, TObjEneMe3SinowZoa__data_805DF2F4);
                    self->f390->m23(self, TObjEneMe3SinowZoa__data_805DF328);
                }
            }
            self->f444 *= lbl_805DF354;
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(self, self->f3A0, self->f3A8, self->f444);
            self->m87();
            break;
        }
        break;
    case 5:
        self->f3E0 = self->pos.y;
        self->f3E4 = TObjEneMe3SinowZoa__data_805DF31C;
        self->m90();
        clear_field_388__9TObjEneDDFPv(self);
        break;
    }
}

}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneMe3SinowZoa__sub_8031955C(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_e66632 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFF8);
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DF358;
        M2C_FIELD(arg0, f32 *, 0x440) = (f32) *TObjEneMe3SinowZoa__data_80542FD4[M2C_FIELD(arg0, s32 *, 0x3C8)];
        M2C_FIELD(arg0, f32 *, 0x444) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
        return;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            ((VObj_18_e66632 *)(arg0))->m109();
            transition_enemy_state((void *) (arg0), (int) (0xD));
            return;
        }
        if (((s32 (*)(f32))TObjEneMe3SinowZoa__sub_8031A820)((f32) (M2C_FIELD(arg0, f32 *, 0x444))) != 0) {
            transition_enemy_state((void *) (arg0), (int) (8));
            return;
        }
        if (((VObj_18_e66632 *)(arg0))->m104() != 0) {
            transition_enemy_state((void *) (arg0), (int) (7));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        if (update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneMe3SinowZoa__data_805DF324)) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            TObjEneMe3SinowZoa__sub_80316840((void *) (arg0));
            temp_f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup((s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
            M2C_FIELD(arg0, f32 *, 0x444) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup((s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))))) + temp_f31);
            if (M2C_FIELD(arg0, f32 *, 0x444) < cos_table_lookup((s32)((int) (0x1000)))) {
                update_angle__14TObjEneEpsilonFPvi((void *) (arg0), (int) (0x500));
                ((VObj_18_e66632 *)(arg0))->m100();
            } else {
                enemy_turn_and_move_on_ground((void *) (arg0), (int) (0x500), (f32) (M2C_FIELD(arg0, f32 *, 0x440)));
            }
            ((VObj_18_e66632 *)(arg0))->m87();
        }
        break;
    }
}
extern int fold_flush_1;
#pragma pop

void TObjEneMe3SinowZoa__sub_80319B8C(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80319B8C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80319B8C, spC) == 0x4) ? 1 : -1];
    Stack_80319B8C stack;
    f32 temp_f1;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((VObj_18_599a64 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 7);
        TObjEneMe3SinowZoa__sub_800D758C((void *) ((u8 *)(arg0) + 0x414));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) ((u8 *)(arg0) + 0x38));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E0);
        stack.spC = temp_f1 - TObjEneMe3SinowZoa__data_805DF314;
        TBoss3Volopt__sub_800D8D88((void *) (&stack.sp8), (f32) (temp_f1));
        break;
    case 3:
        if (((VObj_14_948132 *)((u8 *)(arg0) + (1044)))->m5() != 0) {
            transition_enemy_state((void *) (arg0), (int) (4));
            break;
        }
    case 0:
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
        break;
    }
}

void TObjEneMe3SinowZoa__sub_80319E74(u8 *arg0, s32 arg1) {
    Vec_80319E74 v;
    f32 t;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((VObj_18_fd404c *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3CC) &= 0xFFEFFFFD;
        M2C_FIELD(arg0, s32 *, 0x3CC) |= 5;
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x414);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
        t = M2C_FIELD(arg0, f32 *, 0x3E0);
        v.y = t - TObjEneMe3SinowZoa__data_805DF320;
        if (M2C_FIELD(arg0, s32 *, 0x3C0) == 0) {
            TBoss3Volopt__sub_800D8D88(&v, t);
        } else {
            create_timed_particle_emitter(arg0 + 0x38, 0x79, 0, 0xF);
        }
        break;
    case 3:
        if (((VObj_14_948132 *) (arg0 + 0x414))->m5() != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x3C0) == 1) {
                transition_enemy_state(arg0, 2);
            } else {
                transition_enemy_state(arg0, 0xD);
            }
        }
        break;
    case 0:
        if (*TBoss3Volopt__sub_800F059C(arg0 + 0x414) >= lbl_805DF374) {
            advance_animation_playback(arg0);
        }
        ((VObj_18_fd404c *) arg0)->m100();
        ((VObj_18_fd404c *) arg0)->m87();
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) &= ~4;
        break;
    }
}

void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            ((M2C_UNK (*)(void *, M2C_UNK))set_field_378__9TObjEneDDFPvi)(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 | 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFEFFFFA);
        if (check_v2_mode__9TObjEneDDFv(temp_r3, temp_r4) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFEFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) > 5) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 1);
            } else {
                ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x434) = (s32) (M2C_FIELD(arg0, s32 *, 0x434) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj18F *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

void TObjEneMe3SinowZoa__sub_8031A178(u8 *arg0, u32 arg1, s32 arg2) {
    V_8031A178 *v = (V_8031A178 *) arg0;
    switch (arg1) {
    case 0:
        v->f111(arg2);
        return;
    case 1:
        ((M2C_UNK (*)(void *, s32))TObjEneMe3SinowZoa__sub_80319E74)(arg0, arg2);
        return;
    case 3:
        ((M2C_UNK (*)(void *, s32))TObjEneMe3SinowZoa__sub_80319B8C)(arg0, arg2);
        return;
    case 2:
        TObjEneMe3SinowZoa__sub_80319C70(arg0, arg2);
        return;
    case 4:
        TObjEneMe3SinowZoa__sub_803199E0(arg0, arg2);
        return;
    case 5:
        TObjEneMe3SinowZoa__sub_80319748(arg0, arg2);
        return;
    case 6:
        ((M2C_UNK (*)(void *, s32))TObjEneMe3SinowZoa__sub_8031955C)(arg0, arg2);
        return;
    case 7:
        TObjEneMe3SinowZoa__sub_80318F7C((Ene_80318F7C *)arg0, arg2);
        return;
    case 8:
        TObjEneMe3SinowZoa__sub_80318C0C(arg0, arg2);
        return;
    case 9:
        TObjEneMe3SinowZoa__sub_8031884C(arg0, arg2);
        return;
    case 13:
        TObjEneMe3SinowZoa__sub_8031845C(arg0, arg2);
        return;
    case 10:
        TObjEneMe3SinowZoa__sub_803182F8(arg0, arg2);
        return;
    case 11:
        TObjEneMe3SinowZoa__sub_80318564(arg0, arg2);
        return;
    case 14:
        TObjEneMe3SinowZoa__sub_803181A8(arg0, arg2);
        return;
    case 15:
        ((M2C_UNK (*)(void *, s32))TObjEneMe3SinowZoa__sub_80317F90)(arg0, arg2);
        return;
    case 12:
        TObjEneMe3SinowZoa__sub_80317B50(arg0, arg2);
        return;
    case 16:
        TObjEneMe3SinowZoa__sub_80316C3C(arg0, arg2);
        return;
    case 17:
        TObjEneMe3SinowZoa__sub_80317254(arg0, arg2);
        return;
    case 18:
        TObjEneMe3SinowZoa__sub_803170F0(arg0, arg2);
    default:
        return;
    }
}

void TObjEneMe3SinowZoa__sub_8031A2A0(u8 *arg0) {
    s32 lv;
    lv = clamp_frame_index__9TObjEneDDFi(((Param_8031A2A0 * *)TObjEneMe3SinowZoa__data_80542FD4)[M2C_FIELD(arg0, s32 *, 0x3C8)]->level);
    if (((s32 (*)(void *))TObjEneMe3SinowZoa__sub_8031A454)(arg0) != 0) {
        if (lbl_805D5550 == 3) {
            create__9TTecSiftaFPvPvPv(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(((Param_8031A2A0 * *)TObjEneMe3SinowZoa__data_80542FD4)[M2C_FIELD(arg0, s32 *, 0x3C8)]->level));
            create__10TTecDebandFiii(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(((Param_8031A2A0 * *)TObjEneMe3SinowZoa__data_80542FD4)[M2C_FIELD(arg0, s32 *, 0x3C8)]->level));
        } else {
            create_instance__9TTecZaruaFiiii(arg0, arg0 + 0x38, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(((Param_8031A2A0 * *)TObjEneMe3SinowZoa__data_80542FD4)[M2C_FIELD(arg0, s32 *, 0x3C8)]->level));
            create__9TTecJelinFiiii(arg0, arg0 + 0x38, arg0 + 0x38, clamp_frame_index__9TObjEneDDFi(((Param_8031A2A0 * *)TObjEneMe3SinowZoa__data_80542FD4)[M2C_FIELD(arg0, s32 *, 0x3C8)]->level));
        }
    } else {
        create__9TTecRestaFPvPvPv(arg0, arg0 + 0x38, lv);
    }
}

void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0) {
    if (((s32 (*)(void *))TObjEneMe3SinowZoa__sub_8031A454)((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_80542FDC.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x46));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3SinowZoa__data_805D6AD8, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x45));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

u8 TObjEneMe3SinowZoa__sub_8031A454(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x400) >= 1);
}

int select_and_apply_target__18TObjEneMe3SinowZoaFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

u8 TObjEneMe3SinowZoa__sub_8031A494(T_8031A494 *self) {
    s32 r = 0;
    if (self->f354 < (*(f32 *)&TObjEneMe3SinowZoa__data_805DF2F4) ||
        (self->f354 >= (*(f32 *)&TObjEneMe3SinowZoa__data_805DF32C) && self->f354 < (*(f32 *)&TObjEneMe3SinowZoa__data_805DF328))) r = 1;
    return r;
}

s32 TObjEneMe3SinowZoa__sub_8031A4D0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3SinowZoa__data_805DF32C;
}

void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0) {
    struct VObj_8031A4E8 *o = (struct VObj_8031A4E8 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0) {
    VObj_8031A538 *o = (VObj_8031A538 *)arg0;
    f32 thr = lbl_805DF378;
    if ((M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C)) > thr) {
        o->m95();
        return;
    }
    o->m96();
}

void TObjEneMe3SinowZoa__sub_8031A590(void) {  }

void TObjEneMe3SinowZoa__vt109(void) {  }

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A598*)temp_r3)->m7();
        return 1;
    }
    return 0;
}

s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A5E0*)temp_r3)->m6();
        return 1;
    }
    return 0;
}

void TObjEneMe3SinowZoa__vt105(void) {  }

u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DF37C) && (temp_f1 < lbl_805DF380) && (((s32 (*)(void *, s32, f32))TObjEneMe3SinowZoa__sub_8031A900)(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - (*(f32 *)&TObjEneMe3SinowZoa__data_805DF320)) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3SinowZoa__sub_8031A69C(void) {  }

void TObjEneMe3SinowZoa__sub_8031A6A0(u8 *arg0) {
    f32 d;
    s32 near;
    VObj_18_bd3b49 *pl;
    near = objInBand__FP7GameObjf(arg0, lbl_805DF2F8);
    if (objInBand__FP7GameObjf(arg0, TObjEneMe3SinowZoa__data_805DF2F0) != 0 || near != 0) {
        if (fn_800B91F4(arg0) != 0) {
            if (M2C_FIELD(arg0, VObj_18_bd3b49 **, 0x390)->m18(arg0, TObjEneMe3SinowZoa__data_805DF2F4) != 0) {
                d = M2C_FIELD(arg0, VObj_18_bd3b49 **, 0x390)->m20(arg0, TObjEneMe3SinowZoa__data_805DF2F4);
                M2C_FIELD(arg0, VObj_18_bd3b49 **, 0x390)->m23(arg0, TObjEneMe3SinowZoa__data_805DF328);
                if (d > TObjEneMe3SinowZoa__data_805DF31C) {
                    if (((s32 (*)(void *))TObjEneMe3SinowZoa__sub_8031A454)(arg0) != 0) {
                        pl = M2C_FIELD(arg0, VObj_18_bd3b49 **, 0x390);
                        if (is_locally_controlled__10TObjPlayerFPv(pl) != 0 && get_item_field_6__10TObjPlayerFPv(pl) != 0) {
                            send_6x26_unequip_item__10TObjPlayerFPvPv(pl, get_field_d8__10TObjPlayerFPv());
                            get_hand_joint_position__10TObjPlayerFPvi(pl, arg0 + 0x408);
                            spawn_particle_effect(arg0 + 0x408, 0x1D0);
                        }
                    } else if (near != 0 && calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= lbl_805DF384) {
                        TObjEneDD__sub_800BA438(arg0, M2C_FIELD(arg0, void **, 0x390));
                    }
                }
            }
        }
        ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(0x4003AA2B, arg0 + 0x38, 0, 0);
    }
}

#pragma push
#pragma fp_contract on
bool TObjEneMe3SinowZoa__sub_8031A820(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3SinowZoa__data_805DF320) {
        if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3F4)) {
            transition_enemy_state((void *) (arg0), (int) (0xC));
            goto block_4;
        }
        return 0;
    }
block_4:
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DF350) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < cos_table_lookup(0x1E00)) == 0;
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma fp_contract on
u8 TObjEneMe3SinowZoa__sub_8031A900(Obj_800E750C *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DF304;
    Sub_800E750C *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3SinowZoa__data_805DF31C;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = TObjEneMe3SinowZoa__data_805DF2FC;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    ((void (*)(void *, s32, f32, f32))check_enemy_body_collisions)(arg0, arg1, TObjEneMe3SinowZoa__data_805DF31C, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, lbl_804E87C4, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma fp_contract on
f32 TObjEneMe3SinowZoa__sub_8031A9A0(Obj_800E75AC *self) {
    Vec_800E75AC v;
    Node_800E75AC *node;
    v.x = TObjEneMe3SinowZoa__data_805DF31C;
    v.y = TObjEneMe3SinowZoa__data_805DF31C;
    v.z = TObjEneMe3SinowZoa__data_805DF31C;
    push_matrix_from(lbl_8058D490);
    bind_motion_context(self->ff8, self->fc0);
    node = self->node;
    compose_motion_node_matrix(node);
    compose_motion_node_matrix(node->child);
    matrix_mult_vec(0, &v, &v);
    pop_matrix();
    return v.y;
}
extern int fold_flush_4;
#pragma pop

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0) {
    if (((s32 (*)(void))TObjEneMe3SinowZoa__sub_8031A4D0)() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = ((s32 (*)(void *))TObjEneMe3SinowZoa__sub_8031A494)(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (lbl_805DF388 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (lbl_805DF360 + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) (lbl_805DF38C + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (lbl_805DF304 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void activate_appear__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_setup__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void TObjEneMe3SinowZoa__sub_8031AB64(u8 *arg0) {
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (TObjEneMe3SinowZoa__data_805DF2FC + M2C_FIELD(arg0, f32 *, 0x3E4)));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x74, arg0 + 0x38);
}

void TObjEneMe3SinowZoa__sub_8031ABBC(void) {  }

void TObjEneMe3SinowZoa__vt60(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 1) {
        clear_attack_receipts(arg0);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 1) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3F0))) {
            ((int (*)(void*, void*))transition_enemy_state)((void*)(arg0), (void*)(0x12));
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xE) {
        ((int (*)(void*, void*))transition_enemy_state)((void*)(arg0), (void*)(0xE));
    }
}

void TObjEneMe3SinowZoa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { ((int (*)(void*, void*))transition_enemy_state)(p, (void*)15); } }

void TObjEneMe3SinowZoa__sub_8031AC70(void) {  }

void TObjEneMe3SinowZoa__sub_8031AC74(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x24) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) != 0) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC), (((temp_r3 & 0x100000) == 0) == 0)) || (temp_r3 & 4)) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 4);
            if (((VObj_14_c143b1 *)((u8 *)(arg0) + (1044)))->m5() != 0) {
                M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFFB);
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
                clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x08000000));
            }
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 0x11) {
            transition_enemy_state((void *) (arg0), (int) (0x12));
        }
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (!(temp_r3_2 & 0x100000) && !(temp_r3_2 & 4) && (TObjEneMe3SinowZoa__sub_800D72A4((void *) (arg0 + 0x414)) != 0)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) != 0) {
                if (((VObj_14_c143b1 *)((u8 *)(arg0) + (1044)))->m4() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
                    set_indexed_flags((void *) (arg0), (int) (0), (int) (0x08000000));
                }
            } else if (((VObj_14_c143b1 *)((u8 *)(arg0) + (1044)))->m5() != 0) {
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
                clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x08000000));
            }
        }
    }
}

void TObjEneMe3SinowZoa__sub_8031ADE8(u8 *arg0) {
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    }
    TObjEneMe3SinowZoa__sub_8031AC74((u8 *)((void *) (arg0)));
    ((M2C_UNK (*)(void *))TObjEneMe3SinowZoa__sub_8031AB64)((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
    if (temp_r3 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFFBFFFF);
    } else {
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) || (TObjEneMe3SinowZoa__sub_800D72A4((void *) (arg0 + 0x414)) != 0)) {
        ((VObj_18 *)(arg0))->m98();
    }
    if (M2C_FIELD(arg0, s32 *, 0x3D0) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
        if (M2C_FIELD(arg0, void **, 0x454) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x454)); M2C_FIELD(arg0, M2C_UNK *, 0x454) = 0; }
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x414, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_propagation off
void TObjEneMe3SinowZoa__sub_8031AF88(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u8 *temp_r6;
    Tbl_8031AF88 *tbl = &lbl_80542FB0;

    init_position_vectors__9TObjEneDDFPv(arg0);
    ((M2C_UNK (*)(void *))TObjEneMe3SinowZoa__sub_8031A3D8)((void *) (arg0));
    temp_r6 = (u8 *)(M2C_FIELD(TObjEneMe3SinowZoa__data_805D6AD8, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r6, s32 *, 8);
    init_model__9TObjEneDDFPv((void *) (arg0), ((void * *)lbl_804E87C4), (int) (1), (int) (temp_r6));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), lbl_804E8880);
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(TObjEneMe3SinowZoa__data_805D6AD8, s32 *, 0x430)));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8);
    {
        s32 *a = tbl->t[0];
        s32 *b = tbl->t[1];
        s32 *c = tbl->t[2];
        reset_hp__9TObjEneDDFPv((void *) (arg0), a[temp_r0], b[temp_r0], c[temp_r0]);
    }
    check_state_flag_4__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, void **, 0x350) = lbl_804E87A8;
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) TObjEneMe3SinowZoa__data_805DF314;
    enemy_init_acquire_period((void *) (arg0), (int) (0x1E));
    enemy_init_validate_period((void *) (arg0), (int) (0x1E));
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x3D4), (void *) ((u8 *)(arg0) + 0x38));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x3E0) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
    M2C_FIELD(arg0, s16 *, 0x404) = (s16) M2C_FIELD(arg0, s16 *, 0x2CC);
    ((VObj_14_2ab9de *)((u8 *)(arg0) + (1044)))->m3();
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, f32 *, 0x440) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, f32 *, 0x444) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, f32 *, 0x448) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, f32 *, 0x44C) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, f32 *, 0x450) = (f32) TObjEneMe3SinowZoa__data_805DF31C;
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s32 *, 0x458) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 1) {
        set_indexed_flags((void *) (arg0), (int) (0), (int) (0x08000000));
    } else {
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (0x08000000));
    }
}
extern int fold_flush_5;
#pragma pop

}
#else
#if PSO_CLASS_PACKAGE == 0x800D72E8
#include "types.h"

extern "C" {

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);
int set_chunk_blend(int);

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(8448); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7478
#include "types.h"

extern "C" {

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q);

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74A4
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74A4(void* a0);

    extern const float lbl_805DA348;
    extern const float lbl_805DA350;
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA348; *(float*)((char*)a0 + 0x0) = lbl_805DA350; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74C4
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74C4(void* a0);

    extern const float lbl_805DA348;
    extern const float lbl_805DA34C;
void TObjEneMe3SinowZoa__sub_800D74C4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA34C; *(float*)((char*)a0 + 0x0) = lbl_805DA348; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74E4
#include "types.h"

extern "C" {

void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v);

void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D74EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043C6F8;
extern const f32 lbl_805DA34C;

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805DA34C / (f32) arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D75F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_800D96D0(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_80494938[];

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_80494938;
        TObjPlayer__sub_800D96D0(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D764C
#include "types.h"

extern "C" {

void* init_common__18TObjEneMe3SinowZoaFPv(void* a0);
int TObjPlayer__sub_800D9718(void);

    extern unsigned char lbl_80494938[];
    extern const float lbl_805DA348;
void* init_common__18TObjEneMe3SinowZoaFPv(void* a0) { TObjPlayer__sub_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80494938; *(float*)((char*)a0 + 0x18) = lbl_805DA348; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803167FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0);
s32 TObjEneMe3SinowZoa__sub_80316690(void *, void *);
void spawn_particle_effect(void *, int);

struct VOff_803167FC_arg0 { char pad_0[0x38]; char f_38[1]; };

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0) {
    s32 x;
    struct VOff_803167FC_arg0 *self = (struct VOff_803167FC_arg0 *)arg0;
    x = TObjEneMe3SinowZoa__sub_80316690(arg0, self->f_38);
    if (x == 0) {
        spawn_particle_effect(self->f_38, 243);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80317788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK post_translate_matrix(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3D4)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3SinowZoa__data_805DF31C), (f32) (M2C_FIELD(arg0, f32 *, 0x3E4)), (f32) (TObjEneMe3SinowZoa__data_805DF31C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80317828
#include "types.h"

extern "C" {

void update_move__18TObjEneMe3SinowZoaFPv(void* p);
int TObjEneMe3SinowZoa__sub_8031A3D8(void*);
int get_target_info__9TObjEneDDFPv(void*);
int setup_move_bounds__18TObjEneMe3SinowZoaFPv(void*);

void update_move__18TObjEneMe3SinowZoaFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { setup_move_bounds__18TObjEneMe3SinowZoaFPv(p); TObjEneMe3SinowZoa__sub_8031A3D8(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80319FFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1);
s32 check_v2_mode__9TObjEneDDFv(s32, s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

}

struct Base18F { char pad[0x18]; };
struct VObj18F : Base18F {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

extern "C" {

void action__18TObjEneMe3SinowZoaFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            set_field_378__9TObjEneDDFPvi(arg0, 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            set_field_378__9TObjEneDDFPvi(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 | 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFEFFFFA);
        if (check_v2_mode__9TObjEneDDFv(temp_r3, temp_r4) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFEFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) > 5) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                transition_enemy_state(arg0, 1);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x434) = (s32) (M2C_FIELD(arg0, s32 *, 0x434) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj18F *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x8031A4E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031A4E8 { char pad[0x18]; };
struct VObj_8031A4E8 : Base_8031A4E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86();
};

extern "C" {

void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0);
void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

void update_collision__18TObjEneMe3SinowZoaFPv(void *arg0) {
    struct VObj_8031A4E8 *o = (struct VObj_8031A4E8 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

 extern const f32 lbl_805DF378; }

#define V8(n) virtual void v##n();
#define V64(n) V8(n##0) V8(n##1) V8(n##2) V8(n##3) V8(n##4) V8(n##5) V8(n##6) V8(n##7)

struct Base_8031A538 { char pad[0x18]; };
struct VObj_8031A538 : Base_8031A538 {
    V64(a) V64(b)
    V8(c0) V8(c1) V8(c2) V8(c3) V8(c4) V8(c5) V8(c6) V8(c7)
    V8(d0) V8(d1) V8(d2) V8(d3) V8(d4) V8(d5) V8(d6) V8(d7)
    V8(e0) V8(e1) V8(e2) V8(e3) V8(e4) V8(e5) V8(e6) V8(e7)
    V8(f0) V8(f1) V8(f2) V8(f3) V8(f4) V8(f5) V8(f6) V8(f7)
    V8(g0) V8(g1) V8(g2) V8(g3) V8(g4) V8(g5) V8(g6) V8(g7)
    V8(h0) V8(h1) V8(h2) V8(h3) V8(h4) V8(h5) V8(h6) V8(h7)
    V8(i0) V8(i1) V8(i2) V8(i3) V8(i4) V8(i5) V8(i6) V8(i7)
    V8(j0) V8(j1) V8(j2) V8(j3) V8(j4) V8(j5) V8(j6) V8(j7)
    V8(k0) V8(k1) V8(k2) V8(k3) V8(k4) V8(k5) V8(k6) V8(k7)
    V8(l0) V8(l1) V8(l2) V8(l3) V8(l4) V8(l5) V8(l6)
    virtual void m95();
    virtual void m96();
    f32 f3c_get();
};

extern "C" {

void update_distance_state__18TObjEneMe3SinowZoaFPv(void *arg0) {
    VObj_8031A538 *o = (VObj_8031A538 *)arg0;
    f32 thr = lbl_805DF378;
    if ((M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3C)) > thr) {
        o->m95();
        return;
    }
    o->m96();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A598
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0);

struct VObj8031A598_Base { char pad[0x14]; };
struct VObj8031A598 : VObj8031A598_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 try_run_effect_m7__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A598*)temp_r3)->m7();
        return 1;
    }
    return 0;
}

struct VObj8031A5E0_Base { char pad[0x14]; };
struct VObj8031A5E0 : VObj8031A5E0_Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 try_run_effect_m6__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    u8 *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        temp_r3 = arg0 + 0x414;
        ((VObj8031A5E0*)temp_r3)->m6();
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A628
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__vt105(void);

void TObjEneMe3SinowZoa__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031A62C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031A69C(void);
s32 TObjEneMe3SinowZoa__sub_8031A900(void *, s32, f32);

extern f32 TObjEneMe3SinowZoa__data_805DF320;
extern f32 lbl_805DF37C;
extern f32 lbl_805DF380;

u8 is_target_in_range__18TObjEneMe3SinowZoaFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DF37C) && (temp_f1 < lbl_805DF380) && (TObjEneMe3SinowZoa__sub_8031A900(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - TObjEneMe3SinowZoa__data_805DF320) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3SinowZoa__sub_8031A69C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AA20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0);
void activate_appear__18TObjEneMe3SinowZoaFPv(void* p);
void init_setup__18TObjEneMe3SinowZoaFPv(void* p);
void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0);
int TObjEneDD__vt92(void*);
int TObjEneDD__vt93(void*);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);
s32 TObjEneMe3SinowZoa__sub_8031A494(void *);
s32 TObjEneMe3SinowZoa__sub_8031A4D0();

extern const f32 lbl_805DF304;
extern const f32 lbl_805DF360;
extern const f32 lbl_805DF388;
extern const f32 lbl_805DF38C;

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0) {
    if (TObjEneMe3SinowZoa__sub_8031A4D0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = TObjEneMe3SinowZoa__sub_8031A494(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (lbl_805DF388 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (lbl_805DF360 + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) (lbl_805DF38C + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (lbl_805DF304 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void activate_appear__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_setup__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031ABBC
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3SinowZoa__vt61(void* p);
void TObjEneMe3SinowZoa__sub_8031ABBC(void);
void TObjEneMe3SinowZoa__sub_8031AC70(void);

void TObjEneMe3SinowZoa__sub_8031ABBC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AC40
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe3SinowZoa__vt61(void* p);
void TObjEneMe3SinowZoa__sub_8031ABBC(void);
void TObjEneMe3SinowZoa__sub_8031AC70(void);

void TObjEneMe3SinowZoa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { transition_enemy_state(p, (void*)15); } }
void TObjEneMe3SinowZoa__sub_8031AC70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031AEE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void free_collision_body_parts(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
        if (M2C_FIELD(arg0, void **, 0x454) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x454)); M2C_FIELD(arg0, M2C_UNK *, 0x454) = 0; }
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x414, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031B124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3SinowZoa__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];
extern void *lbl_805D4120;

void *TObjEneMe3SinowZoa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1044));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4120;
    return arg0;
}

}
#endif
#endif
