#include "types.h"
#include "pso/enemy/TObjEneBm3Fly.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_800B3EB8 { char pad[0x18]; };
struct VObj_800B3EB8 : VBase_800B3EB8 {
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void m85(s16, int);
    virtual void m86();
};

extern "C" {
extern const f32 lbl_805D9D6C;
void TObjEneBm3FlyNest__sub_800B47C4(void);
}

extern "C" {

struct Base_800B1A90_800B1978 { char pad[0x18]; };

struct VObj_800B1A90_800B1978 : Base_800B1A90_800B1978 {
    virtual void v0();
virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();
virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();
virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();
virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();
virtual void v41();virtual void v42();virtual void v43();virtual void v44();virtual void v45();virtual void v46();virtual void v47();virtual void v48();virtual void v49();virtual void v50();
virtual void v51();virtual void v52();virtual void v53();virtual void v54();virtual void v55();virtual void v56();virtual void v57();virtual void v58();virtual void v59();virtual void v60();
virtual void v61();virtual void v62();virtual void v63();virtual void v64();virtual void v65();virtual void v66();virtual void v67();virtual void v68();virtual void v69();virtual void v70();
virtual void v71();virtual void v72();virtual void v73();virtual void v74();virtual void v75();virtual void v76();virtual void v77();virtual void v78();virtual void v79();virtual void v80();
virtual void v81();virtual void v82();virtual void v83();virtual void v84();virtual void v85();virtual void v86();virtual void v87();virtual void v88();virtual void v89();virtual void v90();
virtual void v91();virtual void v92();virtual void v93();virtual void v94();virtual void v95();virtual void v96();virtual void v97();virtual void v98();virtual void v99();
    virtual u32 v102();
};

struct Base_800B2214_800B1978 { char pad[0xC]; };

struct VObj_800B2214_800B1978 : Base_800B2214_800B1978 {
    virtual void m2(int);
};

struct VBase_18_6eb1ad
{
  char pad[0x18];
};

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual M2C_UNK m103();
};

struct Stack_800B22C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_800B22C8_lbl_8043B0FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800B22C8_lbl_80491B4C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly {
    M2C_UNK value;
    u8 remaining[0x1A8];
};

struct VBase_18_800B23A0 { char pad[0x18]; };

struct VObj_18_800B23A0 : VBase_18_800B23A0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_800B23A0 { s32 x, y, z; };

struct Ent_800B23A0 { s32 a; u32 count; };

struct Pair_800B23A0 { s32 k; Ent_800B23A0 *e; };

typedef struct VBase_18_6eb1ad VBase_18_6eb1ad;

typedef struct VObj_18_6eb1ad VObj_18_6eb1ad;

typedef char RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly_size[sizeof(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly) == 0x1AC ? 1 : -1];

typedef char RecoveredGlobal_800B22C8_lbl_8043B0FC_size[sizeof(RecoveredGlobal_800B22C8_lbl_8043B0FC) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_800B22C8_lbl_80491B4C_size[sizeof(RecoveredGlobal_800B22C8_lbl_80491B4C) == 0x2C ? 1 : -1];

struct RecoveredGlobal_800B2948_lbl_8043B2A4 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_800B2948_lbl_80500B00 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct NestAttachmentPoint { f32 x,y,z; };

struct Obj_800B2A5C { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_800B2AF4 { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

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

struct VBase_18_113a45 { char pad[0x18]; };

struct VObj_18_113a45 : VBase_18_113a45 {
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
    virtual M2C_UNK m103();
};

struct Vec_800B264C { f32 x, y, z; };

struct Cam_800B264C { u8 b[0x1C]; };

struct Nest_800B264C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_800B264C f2FC;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    u8 pad328[0x3AC - 0x328];
    s32 f3AC;
    u8 pad3B0[0x3C8 - 0x3B0];
    Vec_800B264C f3C8;
    u8 pad3D4[0x3E0 - 0x3D4];
    u8 f3E0[0x440 - 0x3E0];
    Cam_800B264C cams[4];
    f32 f4B0;
};

struct VBase_18_9c7b63 { char pad[0x18]; };

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_800B2C24 { f32 x, y, z; };

struct Base_800B2BAC_800B2A14 { char pad[0x18]; };

struct VObj_800B2BAC_800B2A14 : Base_800B2BAC_800B2A14 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80();
    virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88();
    virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

typedef char RecoveredGlobal_800B2948_lbl_8043B2A4_size[sizeof(RecoveredGlobal_800B2948_lbl_8043B2A4) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_800B2948_lbl_80500B00_size[sizeof(RecoveredGlobal_800B2948_lbl_80500B00) == 0x40 ? 1 : -1];

struct Base_800b2e8c { char pad[0x18]; };

struct VObj_800b2e8c : Base_800b2e8c {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m0a(); virtual void m0b();
    virtual void m0c(); virtual void m0d(); virtual void m0e(); virtual void m0f();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13();
    virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m1a(); virtual void m1b();
    virtual void m1c(); virtual void m1d(); virtual void m1e(); virtual void m1f();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m2a(); virtual void m2b();
    virtual void m2c(); virtual void m2d(); virtual void m2e(); virtual void m2f();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33();
    virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37();
    virtual void m38(); virtual void m39(); virtual void m3a(); virtual void m3b();
    virtual void m3c(); virtual void m3d(); virtual void m3e(); virtual void m3f();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m4a(); virtual void m4b();
    virtual void m4c(); virtual void m4d(); virtual void m4e(); virtual void m4f();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57();
    virtual void m58(); virtual void m59(); virtual void m5a(); virtual void m5b();
    virtual void m5c(); virtual void m5d();
    virtual void m180();
    virtual void pad1(); virtual void pad2(); virtual void pad3(); virtual void pad4(); virtual void pad5();
    virtual void m198();
};

struct VBase18_800b2fd0 { char pad[0x18]; };

struct VObj18_800b2fd0 : VBase18_800b2fd0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

struct VBase18_800b30b0 { char pad[0x18]; };

struct VObj18_800b30b0 : VBase18_800b30b0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

struct Base_800B3354_800B30B0 { char pad[0x18]; };

struct VObj_800B3354_800B30B0 : Base_800B3354_800B30B0 {
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
    virtual void m92(); virtual void m93();
    virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98();
    virtual void m99();
    virtual void m100();
};

struct Base_800B3428_800B30B0 { char pad[0x18]; };

struct VObj_800B3428_800B30B0 : Base_800B3428_800B30B0 {
virtual void f151();
virtual void f152();
virtual void f153();
virtual void f154();
virtual void f155();
virtual void f156();
virtual void f157();
virtual void f158();
virtual void f159();
virtual void f160();
virtual void f161();
virtual void f162();
virtual void f163();
virtual void f164();
virtual void f165();
virtual void f166();
virtual void f167();
virtual void f168();
virtual void f169();
virtual void f170();
virtual void f171();
virtual void f172();
virtual void f173();
virtual void f174();
virtual void f175();
virtual void f176();
virtual void f177();
virtual void f178();
virtual void f179();
virtual void f180();
virtual void f181();
virtual void f182();
virtual void f183();
virtual void f184();
virtual void f185();
virtual void f186();
virtual void f187();
virtual void f188();
virtual void f189();
virtual void f190();
virtual void f191();
virtual void f192();
virtual void f193();
virtual void f194();
virtual void f195();
virtual void f196();
virtual void f197();
virtual void f198();
virtual void f199();
virtual void f200();
virtual void f201();
virtual void f202();
virtual void f203();
virtual void f204();
virtual void f205();
virtual void f206();
virtual void f207();
virtual void f208();
virtual void f209();
virtual void f210();
virtual void f211();
virtual void f212();
virtual void f213();
virtual void f214();
virtual void f215();
virtual void f216();
virtual void f217();
virtual void f218();
virtual void f219();
virtual void f220();
virtual void f221();
virtual void f222();
virtual void f223();
virtual void f224();
virtual void f225();
virtual void f226();
virtual void f227();
virtual void f228();
virtual void f229();
virtual void f230();
virtual void f231();
virtual void f232();
virtual void f233();
virtual void f234();
virtual void f235();
virtual void f236();
virtual void f237();
virtual void f238();
virtual void f239();
virtual void f240();
virtual void f241();
virtual void f242();
virtual void f243();
virtual void f244();
    virtual void m94();
virtual void f246();
virtual void f247();
virtual void f248();
virtual void f249();
virtual void f250();
    virtual void m100();
};

struct VBase_18_e9c804 { char pad[0x18]; };

struct VObj_18_e9c804 : VBase_18_e9c804 {
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
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
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
};

struct Stack_800B318C {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
};

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

struct VBase_18_800B36F8 { char pad[0x18]; };

struct VObj_18_800B36F8 : VBase_18_800B36F8 {
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
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Elem_800B36F8 { f32 x, y, z; };

struct Self_800B36F8 { u8 pad[0x3E0]; Elem_800B36F8 arr[6]; };

struct VObj_18_p5 : VBase_18 {
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
    virtual M2C_UNK m102();
};

struct Obj_800B3E40 { u8 pad[0x18]; void *vtbl; u8 pad2[0x440 - 0x1c]; u8 arr[4][0x1c]; };

typedef struct Vec_800B39CC {
    f32 x, y, z;
} Vec_800B39CC;

typedef struct Nest_800B39CC {
    u8 pad0[0x2C];
    s16 f2C;
    u8 pad2E[0x38 - 0x2E];
    Vec_800B39CC pos;
    u8 pad44[0x3B0 - 0x44];
    s32 count;
    s32 spawned;
    u16 ids[6];
    u16 nextId;
    u8 pad3C6[0x3D4 - 0x3C6];
    u8 f3D4[0xC];
} Nest_800B39CC;

struct Anim_800B41E8 { s32 motions, actions, initial_action, counts; };

struct Vec_800B41E8 { f32 x, y, z; };

struct Coll_800B41E8 { u8 pad[0xC]; f32 radius; };

struct Res_800B41E8 { u8 pad[0x42C]; u8 *bodies; s32 motions; };

struct Bodies_800B41E8 { u8 pad0[0xC]; s32 textures; u8 pad1[0x18 - 0x10]; s32 model; };

struct Vec_800B4688 { f32 x, y, z; };

struct Vec_800B4388 { f32 x, y, z; };

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void TLobby__sub_8001FE7C(void*, int);
s32 get_camera_mode__11TCameraCtrlFv();
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK rotate_xz_pair_by_angle(void *, void *, int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK spawn_particle_effect(void *, int);
u8 * create_particle_emitter(void *, s32);
s32 enable__13TParticleCtrlFPv(int);
s32 TBreakUpMdl__sub_8009705C(int, void *);
s32 handle_message__13TObjEneBm3FlyFPvi(void *, void *);
s32 state_death_fall__13TObjEneBm3FlyFPvi(void *, void *);
s32 action__13TObjEneBm3FlyFPvi(void *, void *);
s32 update_recoil_state__13TObjEneBm3FlyFv(void *, void *);
s32 TObjEneBm3Fly__sub_800B02C8(void *, void *);
s32 TObjEneBm3Fly__sub_800B044C(void *, void *);
s32 execute_action__13TObjEneBm3FlyFPvi(void *, void *);
s32 TObjEneBm3Fly__sub_800B0B20(void *, void *);
s32 TObjEneBm3Fly__sub_800B0F70(void *, void *);
s32 TObjEneBm3Fly__sub_800B1214(void *, void *);
u16 get_active_id__13TObjEneBm3FlyFPv(void *);
void clamp_flight_height__13TObjEneBm3FlyFPv(u8 *arg0);
void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0);
void circle_destination__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1);
void update_height_offset__13TObjEneBm3FlyFPv(void *arg0);
void update__13TObjEneBm3FlyFPv(void *arg0);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt60(void* p);
void TObjEneBm3Fly__vt61(u8 *arg0);
void TObjEneBm3Fly__vt26(void);
void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2);
void * __dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
M2C_UNK init_child_params__13TObjEneBm3FlyFv(void *);
u8 * TObjEneBm3Fly__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6);
void release_shared_data__13TObjEneBm3FlyFv(void);
void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void load_resources__13TObjEneBm3FlyFv(void);
void TObjPlayer__sub_800B23A0(u8 *arg0);
void render__17TObjEneBm3FlyNestFPv(u8 *arg0);
void handle_attachment_sample__17TObjEneBm3FlyNestFi(s32 arg0);
void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0);
int init__17TObjEneBm3FlyNestFPv(void* p);
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p);
void* TObjEneBm3FlyNest__sub_800B2A54(void* p);
void remove_child__17TObjEneBm3FlyNestFPvPv(Obj_800B2A5C *self, u8 *child);
s32 has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(Obj_800B2AF4 *self, u16 id);
void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_dying__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void update_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void TObjEneBm3FlyNest__sub_800B318C(u8 *arg0, s32 arg1);
void handle_event__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_wait__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_initial_emit__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void handle_appear__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void init_params__17TObjEneBm3FlyNestFPv(void *arg0);
void spawn_child__17TObjEneBm3FlyNestFPv(Nest_800B39CC *s);
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
void update_replenish__17TObjEneBm3FlyNestFPv(u8 *arg0);
void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p);
void copy_pos__17TObjEneBm3FlyNestFPv(void* p);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void update_state__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0);
void TObjEneBm3FlyNest__sub_800B3CBC(void);
void TObjEneBm3FlyNest__sub_800B3CC0(s32 arg0, u32 arg1, s32 arg2);
void run_task__17TObjEneBm3FlyNestFPv(u8 *arg0);
Obj_800B3E40 * TObjEneBm3FlyNest__sub_800B3E40(Obj_800B3E40 *self, s16 flag);
void * TObjEneBm3FlyNest__ct(void *, void *, void *);
int TObjEneBm3FlyNest__sub_800B4158(void);
void free_fly__17TObjEneBm3FlyNestFv(void);
void * create__17TObjEneBm3FlyNestFPv(void *arg0);
void load_resources__17TObjEneBm3FlyNestFv(void);
void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0);
void * TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1);
u8 * TObjEneBm3FlyNest__sub_800B4688(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d);
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);
s32 enemy_copy_target_destination();
void __dt__9TObjEneDDFv(void *, int);
u8 * init_object__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
s32 is_main_phase_15__9TObjEneDDFv();
void clear_global_flag_400__9TObjEneDDFv(void);
void update_player_state__9TObjEneDDFPv(void *, Vec_800B23A0 *, s32);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
s32 get_random_scaled__9TObjEneDDFv(void *);
f32 rand_range__9TObjEneDDFff(void *, f32, f32);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
u32 move_with_wall_slide_commit__9TObjEneDDFPvfff();
s32 was_hit_by_ranged__9TObjEneDDFPv();
M2C_UNK clear_attack_receipts();
M2C_UNK noop__12TBoss8DragonFv(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, M2C_UNK);
s32 set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 get_target_info__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BB878(s32, s32);
u32 load_enemy_bml_resource_named(void *, void *);
u32 load_enemy_bml_resource(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, s32);
void TObjEneDD__vt0(void *, int);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
void TObjPlayer__sub_800D7C58(void *);
void toggle_particle_effect__10TObjPlayerFv(void);
M2C_UNK set_field_e4__10TObjPlayerFii(void *, int, f32);
M2C_UNK spawn_dead_spot_scale15(void *, int);
int copy_target_state__14TObjEnePanarmsFPvPv(void*);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK advance_animation_playback(void *);
u8 * find_entity_by_id(u16);
void free_collision_body_parts(void *);
void end_effect_render__13TParticleCtrlFv(void);
M2C_UNK send_entity_set_flags__6TLobbyFPv();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_persistent_sound(s32, void *, s32, s32, s32);
s32 play_sound_effect(void *, void *, int, int);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
void __dt__7TObjectFv(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
void __destroy_arr(void *, void *, u32, u32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void debug_printf_at(s32, const char *, ...);
M2C_UNK vec3_add_to(void *, void *);
void rotate_matrix_y(s32, s32);
M2C_UNK subtract_vector(void *, void *);
void translate_matrix(s32, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void draw_chunk_object(s32);
void draw_model_motion(s32, Ent_800B23A0 *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);

void TLobby__sub_801A1FD8();
void TObjEneDD__vt100();
void TObjEneDD__vt77();
void TObjEneDD__vt81();
void TObjEneDD__vt82();
void TObjEneDD__vt83();
void TObjEneDD__vt84();
void TObjEneDD__vt86();
void TObjEneDD__vt87();
void TObjEneDD__vt88();
void TObjEneDD__vt89();
void TObjEneDD__vt90();
void TObjEneDD__vt91();
void TObjEneDD__vt92();
void TObjEneDD__vt93();
void TObjEneDD__vt94();
void TObjEneDD__vt95();
void TObjEneDD__vt96();
void TObjEneDD__vt97();
void TObjEneDD__vt98();
void TObjEneDD__vt99();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_800111D8();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void TObjPlayer__sub_80015884();
void TObjPlayer__sub_80016C54();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjPlayer__sub_800F65D0();
void TObjPlayer__sub_800F673C();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_set_data__9TObjEnemyFPvPv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void fn_800F5D80();
void get_actor_body_center();
void get_actor_level_index();
void get_enemy_name__14TObjEnePanarmsFPv();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_shadow__17TObjEneBm3FlyNestFv();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void select_melee_contact_body__10TObjPlayerFv();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();
extern char lbl_8043B120[];
extern char lbl_8043B130[];
extern char lbl_8043B140[];
extern char lbl_8043B158[];
extern char lbl_8043B170[];
extern char lbl_8043B184[];
extern char lbl_8043B19C[];
extern char lbl_8043B1B0[];
extern char lbl_8043B1C4[];
extern char lbl_8043B1DC[];
extern char lbl_8043B1F4[];
extern char lbl_8043B20C[];
extern char lbl_8043B220[];
extern char lbl_8043B238[];
extern char lbl_8043B24C[];
extern char lbl_8043B264[];
extern char lbl_8043B27C[];
extern char lbl_8043B290[];
struct Params_80491DA0 { f32 f00; u32 w[6]; };
struct Coll_80491DBC { u32 w0[3]; f32 radius; u32 w1[2]; u32 flags; u32 w2[4]; };
struct Res_80491E34 { void *bml; void *models; void *motions; u16 nmodels; u16 nmotions; };
struct Hit_80491E44 { u16 kind; u16 pad; u32 part; f32 scale; u32 zero; };
Params_80491DA0 lbl_80491DA0 = { 225.0f, { 0x0, 0x600, 0x0, 0x0, 0x0, 0x0 } };
Coll_80491DBC lbl_80491DBC = { { 0x0, 0x0, 0x0 }, 10.0f, { 0x0, 0x0 }, 0x8003, { 0x0, 0x0, 0x0, 0x0 } };
void *lbl_80491DE8[3] = { lbl_8043B120, lbl_8043B130, 0 };
void *lbl_80491DF4[16] = { lbl_8043B140, lbl_8043B158, lbl_8043B170, lbl_8043B184, lbl_8043B19C, lbl_8043B1B0, lbl_8043B1C4, lbl_8043B1DC, lbl_8043B1F4, lbl_8043B20C, lbl_8043B220, lbl_8043B238, lbl_8043B24C, lbl_8043B264, lbl_8043B27C, 0 };
Res_80491E34 lbl_80491E34 = { lbl_8043B290, lbl_80491DE8, lbl_80491DF4, 0x2, 0xf };
Hit_80491E44 lbl_80491E44[10] = { { 0x1, 0x0, 0xe, 0.30000001192092896f, 0x0 }, { 0x3, 0x0, 0x9, 0.699999988079071f, 0x0 }, { 0x3, 0x0, 0x2, 1.0f, 0x0 }, { 0x3, 0x0, 0x5, 0.5f, 0x0 }, { 0x1, 0x0, 0x8, 0.30000001192092896f, 0x0 }, { 0x3, 0x0, 0x7, 0.699999988079071f, 0x0 }, { 0x3, 0x0, 0x6, 1.0f, 0x0 }, { 0x3, 0x0, 0x4, 0.30000001192092896f, 0x0 }, { 0x1, 0x0, 0xd, 0.30000001192092896f, 0x0 }, { 0x3, 0x0, 0xb, 0.20000000298023224f, 0x0 } };
void *lbl_80491EE4[106] = {
    0, 0, (void *)TObjEneBm3FlyNest__sub_800B3E40, (void *)run_task__17TObjEneBm3FlyNestFPv,
    (void *)render__17TObjEneBm3FlyNestFPv, (void *)render_shadow__17TObjEneBm3FlyNestFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)reset_actor_action_state, (void *)get_actor_body_center, (void *)update_object_view_visibility, (void *)classify_actor_view_detail,
    (void *)get_enemy_name__14TObjEnePanarmsFPv, (void *)TObjPlayer__sub_80019568, (void *)add_actor_exp, (void *)TObjPlayer__sub_800111D8,
    (void *)get_actor_level_index, (void *)update_actor_ground_y, (void *)TObjPlayer__sub_80018E6C, (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv, (void *)calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)receive_physical_attack__10TObjPlayerFv, (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv, (void *)apply_knockback_from_attacker, (void *)try_start_action__10TObjPlayerFPvii, (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjEneBm3FlyNest__sub_800B3CBC, (void *)TObjPlayer__sub_8000FF3C, (void *)is_target_in_attack_range__10TObjPlayerFv, (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv, (void *)has_flag_0x800__10TObjPlayerFPv, (void *)test_flag_1000__10TObjPlayerFPv, (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv, (void *)update_action_timer__10TObjPlayerFPv, (void *)update_flag30_timer__10TObjPlayerFPv, (void *)update_movement_status__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80016C54, (void *)update_attack_stat_status, (void *)update_defense_stat_status, (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv, (void *)apply_paralysis__10TObjPlayerFv, (void *)TObjPlayer__sub_80015884, (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv, (void *)apply_shock_status__10TObjPlayerFv, (void *)clear_harmful_statuses__10TObjPlayerFv, (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv, (void *)cure_poison_ailment, (void *)cure_paralysis__10TObjPlayerFv, (void *)clear_all_status_effects,
    (void *)apply_action_hold_status, (void *)apply_anti_technique__10TObjPlayerFv, (void *)TObjPlayer__sub_80014898, (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890, (void *)TObjEneBm3FlyNest__sub_800B3BE8, (void *)update_state__17TObjEneBm3FlyNestFPv, (void *)update_state_action__17TObjEneBm3FlyNestFPv,
    (void *)reset_pose__10TObjPlayerFPv, (void *)TObjPlayer__sub_80014840, (void *)TObjPlayer__sub_80014838, (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii, (void *)apply_switch_attack__10TObjPlayerFi, (void *)enemy_spawn_jellen_effect, (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect, (void *)TObjPlayer__sub_80010A80, (void *)TObjPlayer__sub_800F65D0, (void *)fn_80010EC8,
    (void *)fn_80010EC4, (void *)fn_80010EC0, (void *)fn_80010EBC, (void *)TObjEneDD__vt77,
    (void *)TObjPlayer__sub_800F673C, (void *)apply_set_data__9TObjEnemyFPvPv, (void *)fn_800F5D80, (void *)TObjEneDD__vt81,
    (void *)TObjEneDD__vt82, (void *)TObjEneDD__vt83, (void *)TObjEneDD__vt84, (void *)TObjEneBm3FlyNest__sub_800B3CC0,
    (void *)init_nest_sub__17TObjEneBm3FlyNestFPv, (void *)TObjEneDD__vt86, (void *)TObjEneDD__vt87, (void *)TObjEneDD__vt88,
    (void *)TObjEneDD__vt89, (void *)TObjEneDD__vt90, (void *)TObjEneDD__vt91, (void *)TObjEneDD__vt92,
    (void *)TObjEneDD__vt93, (void *)TObjEneDD__vt94, (void *)TObjEneDD__vt95, (void *)TObjEneDD__vt96,
    (void *)TObjEneDD__vt97, (void *)TObjEneDD__vt98, (void *)TObjEneDD__vt99, (void *)TObjEneDD__vt100,
    (void *)init__17TObjEneBm3FlyNestFPv, (void *)TObjPlayer__sub_800B23A0,
};
extern s32 TObjEneBm3Fly__data_805D50E4;
extern void *TObjEneBm3Fly__data_805D50F4;
extern const f32 TObjEneBm3Fly__data_805D9C6C;
extern M2C_UNK __vt__13TObjEneBm3Fly[];
extern RecoveredGlobal_800B22C8_lbl_8043B0FC lbl_8043B0FC;
extern RecoveredGlobal_800B2948_lbl_8043B2A4 lbl_8043B2A4;
extern Anim_800B41E8 lbl_8043B2F4;
extern Vec_800B39CC lbl_8043B304[];
extern Vec_800B264C lbl_8043B310;
extern const Vec_800B23A0 lbl_8043B31C;
extern char lbl_8043B328[];
extern char lbl_8043B338[];
extern char lbl_8043B348[];
extern char lbl_8043B358[];
extern char lbl_8043B368[];
extern const f64 lbl_8043B398[];
extern RecoveredGlobal_800B22C8_lbl_80491B4C lbl_80491B4C;
extern M2C_UNK lbl_804920B4[];
typedef struct Ctl_800B47C4 {
    f32 *pv;
    s32 *pc;
    s32 d;
    s32 e;
    s32 f;
} Ctl_800B47C4;
f32 lbl_80500B00[3];
f32 lbl_80500B0C[6];
__declspec(section ".data") s32 lbl_80500B24[2];
Ctl_800B47C4 lbl_80500B2C;
#define lbl_80500B00 (*(RecoveredGlobal_800B2948_lbl_80500B00 *)lbl_80500B00)
extern s32 lbl_805D28B8;
extern s32 lbl_805D2A10;
extern s32 lbl_805D2A1C;
extern s32 lbl_805D50E0;
extern s32 lbl_805D50E8;
extern f32 *lbl_805D50EC;
extern u8 *lbl_805D50F0;
extern s32 lbl_805D50F8;
extern s32 lbl_805D50FC;
extern s32 lbl_805D5100;
extern s32 lbl_805D5104;
extern u32 lbl_805D5108;
extern s32 lbl_805D510C;
extern NestAttachmentPoint *lbl_805D5110;
extern s32 lbl_805D5114;
extern s32 lbl_805D5118;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern const f32 lbl_805D9CB4;
extern const f32 lbl_805D9CE8;
extern const f32 lbl_805D9CEC;
extern const f32 lbl_805D9CF0;
extern const f32 lbl_805D9D08;
extern const f32 lbl_805D9D0C;
extern const f32 lbl_805D9D10;
extern const f32 lbl_805D9D14;
extern const f32 lbl_805D9D18;
extern const f32 lbl_805D9D1C;
extern const f32 lbl_805D9D20;
extern const f32 lbl_805D9D24;
extern const f32 lbl_805D9D28;
extern const f32 lbl_805D9D2C;
extern const f32 lbl_805D9D30;
extern const f32 lbl_805D9D34;
extern const f32 lbl_805D9D38;
extern const f32 lbl_805D9D3C;
extern const f32 lbl_805D9D40;
extern const f32 lbl_805D9D44;
extern const f32 lbl_805D9D48;
extern const f32 lbl_805D9D4C;
extern const f32 lbl_805D9D50;
extern const f32 lbl_805D9D54;
extern const f32 lbl_805D9D58;
extern const f32 lbl_805D9D5C;
extern const f32 lbl_805D9D60;
extern const f32 lbl_805D9D64;
extern const f32 lbl_805D9D68;
extern const f32 lbl_805D9D6C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern s32 some_id_805c6f74;
extern void *tl_04;

void TObjPlayer__sub_800B23A0(u8 *arg0) {
    f32 var_f31;
    Ent_800B23A0 *var_r30;
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
        default:
        case 2:
            debug_printf_at(TObjEneDD__sub_800BB878(0, 0), lbl_8043B328);
            break;
        case 9:
            debug_printf_at(TObjEneDD__sub_800BB878(0, 0), lbl_8043B338);
            break;
        case 5:
            debug_printf_at(TObjEneDD__sub_800BB878(0, 0), lbl_8043B348);
            break;
        }
        debug_printf_at(TObjEneDD__sub_800BB878(0, 1), lbl_8043B358, M2C_FIELD(arg0, s32 *, 0x390));
        debug_printf_at(TObjEneDD__sub_800BB878(0, 2), lbl_8043B368, M2C_FIELD(arg0, s32 *, 0x394));
    }
    switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
    default:
    case 2:
        var_f31 = 0.0f;
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 4)].e;
        break;
    case 9:
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 0x74)].e;
        var_f31 = var_r30->count - 1;
        break;
    case 5:
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 0x34)].e;
        var_f31 = var_r30->count - 1;
        break;
    }
    if (((VObj_18_800B23A0 *)arg0)->m8(500.0f, 120.0f) != 0) {
        Vec_800B23A0 v = lbl_8043B31C;
        update_player_state__9TObjEneDDFPv(arg0, &v, 1);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        ((void (*)(void))push_matrix)();
        ((void (*)(void *))post_translate_matrix)(arg0 + 0x38);
        translate_matrix(0, 0.0f, -5.0f, 0.0f);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        set_global_flag__10TObjPlayerFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), var_r30, var_f31);
        clear_global_state__10TObjPlayerFv();
        end_effect_render__13TParticleCtrlFv();
        ((void (*)(void))pop_matrix)();
    }
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    translate_matrix(0, M2C_FIELD(arg0, f32 *, 0x35C), M2C_FIELD(arg0, f32 *, 0x360), M2C_FIELD(arg0, f32 *, 0x364));
    draw_chunk_object(lbl_805D28B8);
    ((void (*)(void))pop_matrix)();
}

__declspec(section ".rodata") extern const char lbl_8043B380[] = "bm_ene_bm3_fly_a.bml";
__declspec(section ".rodata") extern const f64 lbl_8043B398[1] = { 10430.38043493439 };

void render__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    Cam_800B264C *cm;
    s32 cam;
    s32 res;
    s32 draw;
    Nest_800B264C *self = (Nest_800B264C *)arg0;
    f32 t;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_113a45 *)(arg0))->m103();
        return;
    }
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    self->f3AC = 0;
    if (self->f326 != 9) {
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            res = ((VObj_18_113a45 *)(arg0))->m9(lbl_805D9D08 + lbl_805D9E88, lbl_805D9D0C + lbl_805D9E84, 120.0f);
        } else if (((VObj_18_113a45 *)(arg0))->m8(500.0f, 120.0f) != 0) {
            res = 1;
        } else {
            res = 0;
        }
        if (res != 0) {
            draw = 1;
            self->f3AC = 1;
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            cm = &self->cams[cam];
            update_obstruction_fade(cm);
            if (updateFromCamera__15RenderFadeStateFPCf(cm, &self->f2FC) != 0) {
                ((VObj_14_aa9368 *)(cm))->m6();
                if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                    draw = 0;
                }
            }
            if (self->f326 != 9) {
                Vec_800B264C v = lbl_8043B310;
                if (self->f326 == 0) {
                    t = lbl_805D9D10 / (self->f4B0 - lbl_805D9D14);
                    if (t < lbl_805D9D18 && t > 0.0f) {
                        v.x = v.z = lbl_805D9D1C * t;
                    }
                }
                ((M2C_UNK (*)(void *, void *, int))update_player_state__9TObjEneDDFPv)(arg0, &v, 1);
            }
            if (draw != 0) {
                update_secondary_light__9TObjEneDDFPv(arg0);
                ((M2C_UNK (*)(int))set_global_param__8TObjFishFi)(self->f24);
                push_matrix();
                lbl_805D510C = 0;
                lbl_805D5110 = (NestAttachmentPoint *)&self->f3C8;
                post_translate_matrix(self->f38);
                ((M2C_UNK (*)(int, f32, f32, f32))translate_matrix)(0, 0.0f, self->f4B0, 0.0f);
                if (self->f326 == 0) {
                    lbl_805D5118 = 0;
                    lbl_805D5114 = (s32)self->f3E0;
                    set_global_state__16TObjEneRe7BeruraFi((void *)handle_attachment_sample__17TObjEneBm3FlyNestFi);
                } else {
                    set_global_state__16TObjEneRe7BeruraFi((void *)capture_attachment__17TObjEneBm3FlyNestFv);
                }
                ((M2C_UNK (*)(int, int))rotate_matrix_y)(0, self->f60);
                ((M2C_UNK (*)(void))clear_global_flag_400__9TObjEneDDFv)();
                ((M2C_UNK (*)(void))toggle_particle_effect__10TObjPlayerFv)();
                if (res == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
                ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
                set_global_state__16TObjEneRe7BeruraFi(NULL);
                pop_matrix();
            }
            update_primary_light__9TObjEneDDFPv(arg0);
            if (updateFromCamera__15RenderFadeStateFPCf(cm, &self->f2FC) != 0) {
                ((VObj_14_aa9368 *)(cm))->m7();
            }
            some_id_805c6f74 = lbl_805D5660;
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
        }
    }
    VecCopy__FP3VecPC3Vec(&self->f2FC, &self->f3C8);
}

void handle_attachment_sample__17TObjEneBm3FlyNestFi(s32 arg0) {
    s32 temp_r4;
    if ((s32) lbl_805D510C == (s32) M2C_FIELD(&lbl_8043B2A4.value, M2C_UNK *, (lbl_805D5118 * 4))) {
        temp_r4 = lbl_805D5114;
        lbl_805D5118 += 1;
        lbl_805D5114 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80500B00.value, temp_r4);
    }
    capture_attachment__17TObjEneBm3FlyNestFv((void *)((void *) (arg0)));
}

void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0) {
    switch (lbl_805D510C) {
    case 36: case 45:
        get_camera_ctrl__9TObjEneDDFPv((s32)(&lbl_80500B00), (s32)(lbl_805D5110++));
        break;
    }
    ++lbl_805D510C;
}

int init__17TObjEneBm3FlyNestFPv(void* p) { return ((int (*)(void*))init_params__17TObjEneBm3FlyNestFPv)(p); }

int copy_target_state__17TObjEneBm3FlyNestFPv(void* p) { return copy_target_state__14TObjEnePanarmsFPvPv(p); }

void* TObjEneBm3FlyNest__sub_800B2A54(void* p) { return (char*)p + 0x3d4; }

void remove_child__17TObjEneBm3FlyNestFPvPv(Obj_800B2A5C *self, u8 *child) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(self->ids[i]) == child) {
            self->count--;
            self->ids[i] = self->ids[self->count];
            self->ids[self->count] = 0xFFFF;
            return;
        }
    }
}

s32 has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(Obj_800B2AF4 *self, u16 id) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < self->count; i++) {
        u8 *p = find_entity_by_id(self->ids[i]);
        if (p != 0 && id == get_active_id__13TObjEneBm3FlyFPv(p)) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv()) {
        return n < 4;
    }
    return n < 2;
}

void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_800B2BAC_800B2A14 *) arg0)->m93();
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3B0) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(arg0);
        }
    case 5:
    case 0:
        return;
    }
}

#pragma push
#pragma fp_contract on
void state_dying__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    Vec_800B2C24 v;
    Vec_800B2C24 p;
    f32 r;
    s32 a;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((VObj_18_9c7b63 *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x4B0) = 0.0f;
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x4C8) = 4;
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, f32 *, 0x4D8) = 0.0f;
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x4D8) >= lbl_805D9D20) {
            ((M2C_UNK (*)(void *, int))transition_enemy_state)(arg0, 9);
        }
        break;
    case 5:
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x4D0)) {
        case 0:
            ((M2C_UNK (*)(void))advance_animation_playback)();
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                v.x = lbl_805D9D24;
                v.y = 0.0f;
                v.z = lbl_805D9D28;
                rotate_xz_pair_by_angle(&v, &v.z, M2C_FIELD(arg0, s32 *, 0x60));
                vec3_add_to(&v, arg0 + 0x38);
                spawn_dead_spot_scale15(&v, 0x32);
                set_field_e4__10TObjPlayerFii(&v, 0x46, lbl_805D9D10);
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9D08) {
                M2C_FIELD(arg0, s32 *, 0x4C8) += 1;
                if (M2C_FIELD(arg0, s32 *, 0x4C8) >= 4) {
                    r = rand_range__9TObjEneDDFff(arg0, lbl_805D9D1C, lbl_805D9D10);
                    a = get_random_scaled__9TObjEneDDFv(arg0);
                    VecCopy__FP3VecPC3Vec(&p, arg0 + 0x2FC);
                    p.x = r * sin_table_lookup(a) + p.x;
                    p.y += lbl_805D9D1C;
                    p.z = r * cos_table_lookup(a) + p.z;
                    spawn_particle_effect(&p, 0xF1);
                    M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
                }
                M2C_FIELD(arg0, s32 *, 0x4CC) += 1;
                if (M2C_FIELD(arg0, s32 *, 0x4CC) >= 0x14) {
                    ((M2C_UNK (*)(int, void *, int, int))play_sound_effect)(((int (*)(void *, s32))copy_target_state__14TObjEnePanarmsFPvPv)(arg0, 0x4003AD2B), arg0 + 0x38, 0, 0);
                    M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
                }
            }
            ((VObj_18_9c7b63 *)(arg0))->m100();
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x4D8) += lbl_805D9D2C;
            M2C_FIELD(arg0, f32 *, 0x3C) -= lbl_805D9D2C;
            break;
        }
        break;
    }
}
extern int fold_flush_1;
#pragma pop

void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800b2e8c*)arg0)->m180();
        noop__12TBoss8DragonFv(arg0);
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        ((M2C_UNK (*)(void *, void *, M2C_UNK, M2C_UNK))play_sound_effect)((void *)(s32)((M2C_UNK (*)(void *, M2C_UNK))copy_target_state__14TObjEnePanarmsFPvPv)(arg0, 0x4003A829), arg0 + 0x38, 0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 6;
            M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) 0.0f;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) -5.0f;
        return;
    case 3:
        if (((s32 (*)(void))get_flag_b4__21TObjEneMe3ShinowaRealFPv)() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
                transition_enemy_state(arg0, 5);
                return;
            }
            if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) {
                transition_enemy_state(arg0, 4);
                return;
            }
            transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            return;
        }
        break;
    case 0:
        ((M2C_UNK (*)(void))advance_animation_playback)();
        ((VObj_800b2e8c*)arg0)->m198();
        return;
    case 5:
        clear_attack_receipts();
        break;
    }
}

void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        ((VObj18_800b2fd0 *) arg0)->vf180();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) 0.0f;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 5:
    case 1:
        break;
    case 0:
        if (((s32 (*)(f32))objInBand__FP7GameObjf)(lbl_805D9D30) != 0) {
            ((M2C_UNK (*)(void *))spawn_child__17TObjEneBm3FlyNestFPv)(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        advance_animation_playback(arg0);
        ((VObj18_800b2fd0 *) arg0)->vf198();
        break;
    }
}

void update_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        ((VObj18_800b30b0 *) arg0)->vf180();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) 0.0f;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3A8) = 1;
            M2C_FIELD(arg0, s32 *, 0x4C0) = 2;
            M2C_FIELD(arg0, s32 *, 0x4C4) = 0x78;
        }
        break;
    case 5:
        break;
    case 3:
        if (((s32 (*)(void))TObjEneBm3FlyNest__sub_800B3AC8)() != 0) {
            transition_enemy_state(arg0, 6);
            return;
        }
        break;
    case 0:
        advance_animation_playback((void *)(arg0));
        ((M2C_UNK (*)(void *))update_replenish__17TObjEneBm3FlyNestFPv)(arg0);
        ((VObj18_800b30b0 *) arg0)->vf198();
        break;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TObjEneBm3FlyNest__sub_800B318C(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800B318C, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B318C, sp10) == 0x8) ? 1 : -1];
    Stack_800B318C stack;
    s32 temp_r31;
    switch (arg1) {
    case 4:
        ((VObj_18_e9c804 *)(arg0))->m89();
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((VObj_18_e9c804 *)(arg0))->m94();
        set_field_378__9TObjEneDDFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (5)));
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) -5.0f;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (5)));
            break;
        }
        break;
    case 0:
        ((s32)advance_animation_playback((void *)((void *) (arg0))));
        if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9D10)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9D34)) != 0)) {
            play_sound_effect((void *) (((s32 (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)((void *) (arg0), (int) (0x4003B72A))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9D38)) != 0) {
            spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
        } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9D3C)) != 0) {
            temp_r31 = M2C_FIELD(arg0, s32 *, 0x60) - 0x4000;
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
            stack.sp8 += lbl_805D9D40 * sin_table_lookup((int) (temp_r31));
            stack.sp10 += lbl_805D9D40 * cos_table_lookup((int) (temp_r31));
            spawn_particle_effect((void *) (&stack.sp8), (int) (0xF0));
        }
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B0) + lbl_805D9D2C);
        if (M2C_FIELD(arg0, f32 *, 0x4B0) > 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) 0.0f;
        }
        ((VObj_18_e9c804 *)(arg0))->m100();
        break;
    case 5:
        ((VObj_18_e9c804 *)(arg0))->m90();
        break;
    }
}
extern int fold_flush_2;
#pragma pop

void handle_event__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_800B3354_800B30B0 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) -5.0f;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback((void *)(arg0));
        if (objInBand__FP7GameObjf(arg0, lbl_805D9D30) != 0) {
            ((M2C_UNK (*)(void *))spawn_child__17TObjEneBm3FlyNestFPv)(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        ((VObj_800B3354_800B30B0 *)arg0)->m100();
        break;
    }
}

void state_wait__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((struct VObj_800B3428_800B30B0 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) -5.0f;
        M2C_FIELD(arg0, s32 *, 0x4C0) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C4) = 0x96;
        return;
    case 3:
        if (((s32 (*)(void))TObjEneBm3FlyNest__sub_800B3AC8)() != 0) {
            transition_enemy_state(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback((void *)(arg0));
        ((M2C_UNK (*)(void *))update_replenish__17TObjEneBm3FlyNestFPv)(arg0);
        ((struct VObj_800B3428_800B30B0 *)arg0)->m100();
        break;
    }
}

void state_initial_emit__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_18 *)(arg0))->m93();
        set_field_378__9TObjEneDDFPvi((void *) (arg0), 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = -5.0f;
        M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        break;
    case 3:
        advance_animation_playback((void *) (arg0));
        if (M2C_FIELD(arg0, s32 *, 0x4D0) == 3) {
            switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
            case 2:
                transition_enemy_state((void *) (arg0), M2C_FIELD(arg0, s32 *, 0x38C));
                break;
            case 5:
                transition_enemy_state((void *) (arg0), M2C_FIELD(arg0, s32 *, 0x38C));
                break;
            case 9:
                M2C_FIELD(arg0, s16 *, 0xB8) = 7;
                advance_animation_playback((void *) (arg0));
                M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805D9D14;
                advance_animation_playback((void *) (arg0));
                M2C_FIELD(arg0, f32 *, 0xC0) = M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805D9D18;
                M2C_FIELD(arg0, s32 *, 0x30) |= 0x800;
                M2C_FIELD(arg0, s32 *, 0x3A8) = 1;
                transition_enemy_state((void *) (arg0), M2C_FIELD(arg0, s32 *, 0x38C));
                break;
            }
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x4C8) += 1;
        switch (M2C_FIELD(arg0, s32 *, 0x4D0)) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x4C8) > 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            }
            break;
        case 1:
            if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9D30) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        case 2:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
            if ((M2C_FIELD(arg0, s32 *, 0x4C8) % 10) == 0) {
                if (M2C_FIELD(arg0, s32 *, 0x4CC) < M2C_FIELD(arg0, s32 *, 0x390)) {
                    ((M2C_UNK (*)(void *))spawn_child__17TObjEneBm3FlyNestFPv)((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x4CC) += 1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x4D0) = 3;
                }
            }
            break;
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void handle_appear__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    s32 *cnt = (s32 *)(arg0 + 0x4CC);
    s32 i;
    void *o;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        ((VObj_18_800B36F8 *)(arg0))->m93();
        set_field_378__9TObjEneDDFPvi((void *) (arg0), 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = lbl_805D9D44;
        M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D4) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x4D0) == 2 && get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            transition_enemy_state((void *) (arg0), 1);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x4D0)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x4C8) += 1;
            if (M2C_FIELD(arg0, s32 *, 0x4C8) == 1) {
                *cnt = 0;
                for (i = 0; i < 6; i++) {
                    o = __nw__7TObjectFUl(0x68);
                    if (o != 0) {
                        ((M2C_UNK (*)(void *, void *, void *, void *, void *, void *, s32))TObjEneBm3FlyNest__sub_800B4688)(o, arg0, &((Self_800B36F8 *)arg0)->arr[i], arg0 + 0x3D4, arg0 + 0x38, cnt, i + 1);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x4B0) = M2C_FIELD(arg0, f32 *, 0x4B0) - ((lbl_805D9D4C * (lbl_805D9D18 + sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x4D4)))) + lbl_805D9D48);
            M2C_FIELD(arg0, s32 *, 0x4D4) += 0x700;
            if (M2C_FIELD(arg0, f32 *, 0x4B0) < lbl_805D9D50 && M2C_FIELD(arg0, s16 *, 0xB8) != 9) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 9;
            }
            if (M2C_FIELD(arg0, f32 *, 0x4B0) < -5.0f) {
                M2C_FIELD(arg0, f32 *, 0x4B0) = -5.0f;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
                spawn_particle_effect(arg0 + 0x38, 0xF0);
                play_sound_effect((void *) ((s32 (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)(arg0, 0x4003B72A), arg0 + 0x38, 0, 0);
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4C8) += 1;
            if (M2C_FIELD(arg0, s32 *, 0x4C8) > 3) {
                M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
                *cnt += 1;
                if (*cnt >= 6) {
                    M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
                }
            }
            break;
        }
        ((VObj_18_800B36F8 *)(arg0))->m100();
        break;
    case 5:
        *cnt = 6;
        break;
    }
}
extern int fold_flush_3;
#pragma pop

void init_params__17TObjEneBm3FlyNestFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x390) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x390) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) M2C_FIELD(arg0, f32 *, 0x35C);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
        return;
    }
    if (temp_r0_2 > 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0x1E;
    }
}

void spawn_child__17TObjEneBm3FlyNestFPv(Nest_800B39CC *s) {
    Vec_800B39CC velocity = lbl_8043B304[0];
    Vec_800B39CC position;
    s32 n;
    if (s->count <= 6) {
        n = (s->f2C + 1) + s->spawned;
        ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((void*)(&position), (void*)(((Vec_800B39CC * (*)(void *))TObjEneBm3FlyNest__sub_800B2A54)(s)));
        if (((u32 (*)(void *, u16, s32, void *, void *))create__13TObjEneBm3FlyFPvPvPvPvPv)(s, s->nextId, n, &position, &velocity) != 0) {
            s->ids[s->count++] = s->nextId;
            s->nextId++;
            s->spawned++;
            spawn_particle_effect(s->f3D4, 0xC8);
            ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(((M2C_UNK (*)(void *, M2C_UNK))copy_target_state__14TObjEnePanarmsFPvPv)(s, 0x4003AB27), &s->pos, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x400);
        }
    }
}

s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B8) > 0;
}

void update_replenish__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B4);
    switch (temp_r0) {
    case 0:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3B0) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x390) / 2)) || ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x4B4) = 1;
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        }
        return;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C0) > 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4BC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) > (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
                M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
                var_r5 = M2C_FIELD(arg0, s32 *, 0x4C0);
                temp_r0_2 = 6 - M2C_FIELD(arg0, s32 *, 0x3B0);
                if (temp_r0_2 < var_r5) {
                    var_r5 = temp_r0_2;
                }
                temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x394) - M2C_FIELD(arg0, s32 *, 0x3B4);
                if (temp_r0_3 < var_r5) {
                    var_r5 = temp_r0_3;
                }
                M2C_FIELD(arg0, s32 *, 0x4B8) = var_r5;
                return;
            }
        }
        break;
    }
}

void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p) { TObjEneDD__sub_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }

void copy_pos__17TObjEneBm3FlyNestFPv(void* p) { ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((char*)p + 0x74, (char*)p + 0x2fc); }

void TObjEneBm3FlyNest__sub_800B3BE8(void) {  }

void update_state__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) && (check_v2_mode__9TObjEneDDFv() != 0)) {
        ((s32 (*)(void *))clear_attack_receipts)(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 == 4) {
        ((s32 (*)(void *))clear_attack_receipts)(arg0);
        return;
    }
    if (temp_r0 != 7) {
        transition_enemy_state(arg0, 7);
    }
}

void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8) && (temp_r0 != 4)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            transition_enemy_state(arg0, 4);
            return;
        }
        transition_enemy_state(arg0, 8);
    }
}

void TObjEneBm3FlyNest__sub_800B3CBC(void) {  }

void TObjEneBm3FlyNest__sub_800B3CC0(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        ((s32 (*)(void *, void *))state_initial_emit__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 0:
        ((s32 (*)(void *, void *))handle_appear__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        ((s32 (*)(void *, void *))state_wait__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        ((s32 (*)(void *, void *))handle_event__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        ((s32 (*)(void *, void *))TObjEneBm3FlyNest__sub_800B318C)((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        ((s32 (*)(void *, void *))update_state__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        ((s32 (*)(void *, void *))state_spawn__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        ((s32 (*)(void *, void *))handle_motion_event__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        ((s32 (*)(void *, void *))state_dying__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        ((s32 (*)(void *, void *))handle_state__17TObjEneBm3FlyNestFPvi)((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

#pragma push
#pragma fp_contract on
void run_task__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_p5 *)(arg0))->m102();
        return;
    }
    if (((VObj_18_p5 *)(arg0))->m81() != 4) {
        ((VObj_18_p5 *)(arg0))->m83();
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 0) {
        transition_enemy_state((void *)((void *) (arg0)), (s32)((int) (1)));
    }
    ((VObj_18_p5 *)(arg0))->m86();
    copy_pos__17TObjEneBm3FlyNestFPv((void*)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18_p5 *)(arg0))->m98();
}
extern int fold_flush_4;
#pragma pop

Obj_800B3E40 *TObjEneBm3FlyNest__sub_800B3E40(Obj_800B3E40 *self, s16 flag) {
    if (self != 0) {
        self->vtbl = lbl_80491EE4;
        free_collision_body_parts(self);
        __destroy_arr(self->arr, (void *)TObjPlayer__sub_800D7C58, 0x1c, 4);
        TObjEneDD__vt0(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

extern s32 lbl_805D2A18;

struct Vec_800B3EB8 { f32 x, y, z; };
struct Sub_800B3EB8 { u8 pad[0x1c]; };

struct Nest_800B3EB8 {
    s32 id;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u16 f1C;
    u8 pad1E[0x24 - 0x1E];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_800B3EB8 pos;
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0x300 - 0xBA];
    f32 f300;
    u8 pad304[0x326 - 0x304];
    s16 f326;
    u8 pad328[0x350 - 0x328];
    void *f350;
    u8 pad354[0x37C - 0x354];
    f32 f37C;
    u8 pad380[0x394 - 0x380];
    s32 f394;
    s32 f398[4];
    s32 f3A8;
    s32 f3AC;
    s32 f3B0;
    s32 f3B4;
    u16 f3B8[6];
    u16 f3C4;
    u8 pad3C6[2];
    Vec_800B3EB8 f3C8[2];
    Vec_800B3EB8 f3E0[8];
    Sub_800B3EB8 f440[4];
    f32 f4B0;
    s32 f4B4[9];
    f32 f4D8;
};

void *TObjEneDD__ct(void *, void *, void *);
void __construct_array(void *, void *, void *, int, int);
void init_and_activate__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void init_position_vectors__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, int);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
void check_state_flag_1__9TObjEneDDFPv(void *);
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
void activate_and_dispatch__10TObjPlayerFPv(void *);

#define self ((Nest_800B3EB8 *)arg0)
#pragma push
#pragma opt_loop_invariants off
void *TObjEneBm3FlyNest__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;

    TObjEneDD__ct(self, arg1, arg2);
    self->vt = lbl_80491EE4;
    __construct_array(self->f440, init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 0x1C, 4);
    self->id = lbl_805D2A18;
    invoke_initialization_hook__9TObjEneDDFPv(self, arg2);
    init_position_vectors__9TObjEneDDFPv(self);
    self->f34 = *(s32 *)(*(u8 **)((int)lbl_805D5108 + 0x42C) + 0x18);
    self->f24 = *(s32 *)(*(u8 **)((int)lbl_805D5108 + 0x42C) + 0xC);
    init_model__9TObjEneDDFPv(self, &lbl_80491DBC, 1);
    self->f300 = lbl_805D9D20 + self->pos.y;
    ((VObj_800B3EB8 *)self)->m86();
    set_field_d8__10TObjPlayerFPvi(self, lbl_80491E44);
    set_field_dc__10TObjPlayerFPvi(self, *(s32 *)((int)lbl_805D5108 + 0x430));
    self->fB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->fB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->fB8);
    reset_hp__9TObjEneDDFPv(self, lbl_805D50F8, lbl_805D50FC, lbl_805D5100);
    check_state_flag_1__9TObjEneDDFPv(self);
    self->f350 = &lbl_80491DA0;
    initialize_enemy_state__9TObjEneDDFPv(self, 4);
    self->f37C = lbl_805D9D10;
    init_params__17TObjEneBm3FlyNestFPv(self);
    if (self->f394 > *(s16 *)((u8 *)arg2 + 2)) {
        self->f394 = *(s16 *)((u8 *)arg2 + 2);
    }
    for (i = 0; i < 4; i++) {
        self->f398[i] = 0;
    }
    self->f3A8 = 0;
    self->f3AC = 0;
    self->f3B0 = 0;
    self->f3B4 = 0;
    self->f3C4 = self->f1C + 1;
    for (i = 0; i < 6; i++) {
        self->f3B8[i] = 0xFFFF;
    }
    for (i = 0; i < 2; i++) {
        VecCopy__FP3VecPC3Vec(&self->f3C8[i], &self->pos);
    }
    self->f3C8[1].y += lbl_805D9D08;
    for (i = 0; i < 8; i++) {
        VecCopy__FP3VecPC3Vec(&self->f3E0[i], &self->pos);
    }
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&self->f440[i]);
    }
    self->f4B0 = 0.0f;
    self->f4B4[0] = 0;
    self->f4B4[1] = 0;
    self->f4B4[2] = 0;
    self->f4B4[3] = 0;
    self->f4B4[4] = 0;
    self->f4B4[5] = 0;
    self->f4B4[6] = 0;
    self->f4B4[7] = 0;
    self->f4B4[8] = 0;
    self->f4D8 = 0.0f;
    self->f326 = 0;
    ((VObj_800B3EB8 *)self)->m85(self->f326, 4);
    return self;
}
#pragma pop
#undef self

int TObjEneBm3FlyNest__sub_800B4158(void) {  return (*(int *)&lbl_805D5108); }

void free_fly__17TObjEneBm3FlyNestFv(void) {
    ((M2C_UNK (*)(void))release_shared_data__13TObjEneBm3FlyFv)();
    if ((u32) lbl_805D5108 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5108, 1);
        lbl_805D5108 = 0U;
    }
}

void *create__17TObjEneBm3FlyNestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4DC);
    if (o != NULL) {
        o = TObjEneBm3FlyNest__ct(o, tl_04, arg0);
    }
    return o;
}

void load_resources__17TObjEneBm3FlyNestFv(void) {
    Bodies_800B41E8 *bodies;
    (*(Vec_800B41E8 *)&lbl_80500B00).x = 0.0f;
    (*(Vec_800B41E8 *)&lbl_80500B00).y = 0.0f;
    (*(Vec_800B41E8 *)&lbl_80500B00).z = 0.0f;
    lbl_805D510C = 0;
    (*(s32 *)&lbl_805D5110) = 0;
    lbl_805D5114 = 0;
    lbl_805D5118 = 0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5108 = load_enemy_bml_resource_named(&lbl_80491E34, (void *)lbl_8043B380);
    } else {
        lbl_805D5108 = load_enemy_bml_resource(&lbl_80491E34);
    }
    lbl_805D50F8 = register_boss__6TLobbyFPv(1);
    lbl_805D50FC = dispatch_shared_handler_b__6TLobbyFPv(1);
    lbl_805D5100 = register_object__6TLobbyFPv(1);
    lbl_805D5104 = dispatch_shared_handler_a__6TLobbyFPv(1);
    ((s32 (*)(void))load_resources__13TObjEneBm3FlyFv)();
    TObjEneBm3FlyNest__sub_800B47C4();
    {
        Anim_800B41E8 anim = lbl_8043B2F4;
        anim.motions = ((Res_800B41E8 *)lbl_805D5108)->motions;
        bodies = (Bodies_800B41E8 *)((Res_800B41E8 *)lbl_805D5108)->bodies;
        spawn_npc_enemy__6TLobbyFsiiiff(8, bodies->model, bodies->textures, &anim, lbl_80491DBC.radius, 0.0f);
    }
}

void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    ((M2C_UNK (*)(s32, void *))set_global_param__8TObjFishFi)(M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5108), void **, 0x42C), s32 *, 0xC), (*(u8 * *)&lbl_805D5108));
    push_matrix();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        post_translate_matrix(M2C_FIELD(arg0, void **, 0x30));
    } else {
        post_translate_matrix(M2C_FIELD(arg0, void **, 0x34));
    }
    post_translate_matrix(arg0 + 0x1C);
    ((M2C_UNK (*)(M2C_UNK, s32))rotate_matrix_y)(0, M2C_FIELD(arg0, s32 *, 0x40));
    ((M2C_UNK (*)(void))set_global_flag__10TObjPlayerFv)();
    ((M2C_UNK (*)(s32, s32, f32))draw_model_motion)(M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5108), void **, 0x42C), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C));
    ((M2C_UNK (*)(void))clear_global_state__10TObjPlayerFv)();
    pop_matrix();
}

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void update_monest_carrier(u8 *self) {
    f32 lim;
    f32 v;
    f32 spd;

    lim = (f32) (M2C_FIELD(M2C_FIELD(self, u8 **, 0x48), u32 *, 4) - 1);
    M2C_FIELD(self, f32 *, 0x4C) += lbl_805D9D54;
    if (M2C_FIELD(self, f32 *, 0x4C) > lim) {
        M2C_FIELD(self, f32 *, 0x4C) -= lim;
    }
    switch (M2C_FIELD(self, s32 *, 0x2C)) {
    case 0:
        if (*M2C_FIELD(self, s32 **, 0x38) == M2C_FIELD(self, s32 *, 0x28)) {
            Vec_800B4388 tmp;
            M2C_FIELD(self, s32 *, 0x2C) = 1;
            VecCopy__FP3VecPC3Vec(&tmp, self + 0x1C);
            ((M2C_UNK (*)(void *, s32))vec3_add_to)(&tmp, M2C_FIELD(self, s32 *, 0x30));
            VecCopy__FP3VecPC3Vec(self + 0x50, &tmp);
            ((M2C_UNK (*)(void *, s32))subtract_vector)(self + 0x50, M2C_FIELD(self, s32 *, 0x34));
            M2C_FIELD(self, f32 *, 0x54) -= lbl_805D9D1C;
            VecCopy__FP3VecPC3Vec(self + 0x1C, self + 0x50);
            M2C_FIELD(self, f32 *, 0x5C) = clamp_velocity__15TObjBoss2TunnelFPv(self + 0x50);
            if (M2C_FIELD(self, f32 *, 0x5C) <= lbl_805D9D58) {
                ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(self);
                break;
            }
            M2C_FIELD(self, f32 *, 0x60) = lbl_805D9D5C / (M2C_FIELD(self, f32 *, 0x5C) * M2C_FIELD(self, f32 *, 0x5C));
            M2C_FIELD(self, f32 *, 0x64) = lbl_805D9D60;
        }
        play_persistent_sound(((s32 (*)(s32, s32))copy_target_state__17TObjEneBm3FlyNestFPv)(M2C_FIELD(self, s32 *, 0x10), 0x4003A828), self, M2C_FIELD(self, s32 *, 0x30), 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x400);
        break;
    case 1:
        M2C_FIELD(self, f32 *, 0x20) += lbl_805D9D18;
        if (M2C_FIELD(self, f32 *, 0x20) > 0.0f) {
            M2C_FIELD(self, s32 *, 0x2C) = 2;
            M2C_FIELD(self, f32 *, 0x54) = lbl_805D9D64 * M2C_FIELD(self, f32 *, 0x5C);
        }
        play_persistent_sound(((s32 (*)(s32, s32))copy_target_state__17TObjEneBm3FlyNestFPv)(M2C_FIELD(self, s32 *, 0x10), 0x4003A828), self, M2C_FIELD(self, s32 *, 0x30), 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x400);
        break;
    case 2:
        spd = M2C_FIELD(self, f32 *, 0x5C);
        v = M2C_FIELD(self, f32 *, 0x54);
        v = v - lbl_805D9D68 * spd;
        if (v < lbl_805D9D64 * -spd) {
            ((M2C_UNK (*)(s32, s32))spawn_particle_effect)(M2C_FIELD(self, s32 *, 0x34), 0xC8);
            ((M2C_UNK (*)(s32, s32, s32, s32))play_sound_effect)(((s32 (*)(s32, s32))copy_target_state__17TObjEneBm3FlyNestFPv)(M2C_FIELD(self, s32 *, 0x10), 0x4003AB27), M2C_FIELD(self, s32 *, 0x34), 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x400);
            ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(self);
            break;
        }
        M2C_FIELD(self, f32 *, 0x20) = M2C_FIELD(self, f32 *, 0x60) * (v * v) + M2C_FIELD(self, f32 *, 0x64);
        M2C_FIELD(self, f32 *, 0x54) = v;
        v = lbl_805D9D64 * M2C_FIELD(self, f32 *, 0x5C) + v;
        M2C_FIELD(self, f32 *, 0x1C) = M2C_FIELD(self, f32 *, 0x50) * v;
        M2C_FIELD(self, f32 *, 0x24) = M2C_FIELD(self, f32 *, 0x58) * v;
        play_persistent_sound(((s32 (*)(s32, s32))copy_target_state__17TObjEneBm3FlyNestFPv)(M2C_FIELD(self, s32 *, 0x10), 0x4003A828), self, M2C_FIELD(self, s32 *, 0x34), 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x400);
        break;
    }
}
extern int fold_flush_5;
#pragma pop

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804920B4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneBm3FlyNest__sub_800B4688(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d) {
    Vec_800B4688 v;
    __ct__7TObjectFP7TObject(self, parent);
    M2C_FIELD(self, M2C_UNK **, 0x18) = lbl_804920B4;
    M2C_FIELD(self, s32 *, 0) = lbl_805D2A1C;
    M2C_FIELD(self, s32 *, 0x30) = a;
    M2C_FIELD(self, s32 *, 0x34) = b;
    M2C_FIELD(self, s32 *, 0x38) = c;
    M2C_FIELD(self, s32 *, 0x28) = d;
    VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(self, void **, 0x30));
    subtract_vector(&v, M2C_FIELD(self, void **, 0x34));
    update_scale__15TObjBoss2TunnelFPv(&v);
    M2C_FIELD(self, s32 *, 0x40) = (s32) (lbl_8043B398[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
    M2C_FIELD(self, f32 *, 0x1C) = lbl_805D9D6C * v.x;
    M2C_FIELD(self, f32 *, 0x20) = lbl_805D9D6C;
    M2C_FIELD(self, f32 *, 0x24) = lbl_805D9D6C * v.z;
    M2C_FIELD(self, s32 *, 0x48) = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5108), u8 **, 0x430), s32 *, 0x54);
    M2C_FIELD(self, f32 *, 0x4C) = (f32) (M2C_FIELD(self, s32 *, 0x28) * 2);
    M2C_FIELD(self, f32 *, 0x3C) = lbl_805D9D18;
    M2C_FIELD(self, s32 *, 0x44) = 0;
    M2C_FIELD(self, f32 *, 0x50) = 0.0f;
    M2C_FIELD(self, f32 *, 0x54) = 0.0f;
    M2C_FIELD(self, f32 *, 0x58) = 0.0f;
    M2C_FIELD(self, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(self, f32 *, 0x64) = 0.0f;
    M2C_FIELD(self, f32 *, 0x60) = 0.0f;
    M2C_FIELD(self, s32 *, 0x2C) = 0;
    return self;
}
void TObjEneBm3FlyNest__sub_800B47C4(void) {
    f32 *v = lbl_80500B0C;
    v[3] = v[2] = v[1] = v[0] = 0.0f;
    v[5] = v[4] = lbl_805D9D6C;
    lbl_80500B24[0] = -1;
    lbl_80500B24[1] = -1;
    lbl_80500B2C.pv = lbl_80500B0C;
    lbl_80500B2C.pc = lbl_80500B24;
    lbl_80500B2C.d = 0;
    lbl_80500B2C.e = 2;
}

}
