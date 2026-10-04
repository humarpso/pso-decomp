#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800CCC4C { char pad[0x18]; };
struct VObj_CE_800CCC4C : Base_VT_800CCC4C {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    PADV
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
};

struct VBase_18_9e83f9
{
  char pad[0x18];
};

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual M2C_UNK m86();
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

struct VBase_18_7b3d65
{
  char pad[0x18];
};

struct VObj_18_7b3d65 : VBase_18_7b3d65 {
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
    virtual M2C_UNK m86();
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

struct VBase_18_599a64
{
  char pad[0x18];
};

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

struct Sub_800CCB24 { u8 pad[0x18]; s32 f18; };

struct Obj_800CCB24 { u8 pad[0x2b0]; Sub_800CCB24 *f2b0; };

struct Dmg_800D086C { s32 kind; f32 amount; };

struct B_800D086C { u8 pad[0x18]; };

struct V_800D086C : B_800D086C {
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
    virtual void m21(u8 *r, Dmg_800D086C d, s32 a, s32 b, s32 c);
};

struct Obj_800D086C : V_800D086C { u8 pad2[0x474 - 0x1c]; u16 f474; };

struct Dmg_800D08E4 { s32 kind; f32 amount; };

struct B_800D08E4 { u8 pad[0x18]; };

struct V_800D08E4 : B_800D08E4 {
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
    virtual void m21(u8 *r, Dmg_800D08E4 d, s32 a, s32 b, s32 c);
};

struct Obj_800D08E4 : V_800D08E4 { u8 pad2[0x474 - 0x1c]; u16 f474; };

struct Base_800CCB74 {
    char pad[0x18];
};

struct Ene_800CCB74 : Base_800CCB74 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86();
    virtual void m87();
    u8 pad1C[0x60 - 0x1C];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    struct Col_800CCB74 *col;
    u8 padA8[0x464 - 0xA8];
    s32 f464;
};

struct Col_800CCB74 {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    u32 flags;
};

typedef struct Vec_800CCC6C {
    f32 x, y, z;
} Vec_800CCC6C;

typedef struct Hit_800CCC6C {
    u32 flags;
    u8 *obj;
} Hit_800CCC6C;

typedef struct Ene_800CCC6C {
    u8 pad0[0x38];
    Vec_800CCC6C pos;
    u8 pad44[0x120 - 0x44];
    u8 f120[0x464 - 0x120];
    s32 f464;
} Ene_800CCC6C;

struct Base_800D02F8 {
    char pad[0x18];
};

struct Ene_800D02F8 : Base_800D02F8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void m86();
    virtual void v87(); virtual void v88(); virtual void v89(); virtual void v90();
    virtual void v91(); virtual void v92();
    virtual void m93();
    virtual void v94(); virtual void v95(); virtual void v96(); virtual void v97();
    virtual void v98(); virtual void v99();
    virtual void m100();
};

struct SubBase_800D02F8 {
    char pad[0x14];
};

struct Sub_800D02F8 : SubBase_800D02F8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4();
    virtual s32 m5();
};

typedef struct Gibon_800D02F8 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0x3D8 - 0xBA];
    Sub_800D02F8 sub;
    u8 pad3F0[0x478 - 0x3F0];
    s32 f478;
    u8 pad47C[0x4AC - 0x47C];
    u32 f4AC;
    u8 pad4B0[0x540 - 0x4B0];
    f32 home[3];
} Gibon_800D02F8;

struct Node_800CFE34 { void *obj; Node_800CFE34 *next; };

struct List_800CFE34 { Node_800CFE34 *head; u8 pad[8]; };

struct VBase_18_4225ac { char pad[0x18]; };

struct VObj_18_4225ac : VBase_18_4225ac {
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
};

struct Vec_800CE370 { f32 x, y, z; };

struct FadeBase_800CD204 { char pad[0x14]; };

struct Fade_800CD204 : FadeBase_800CD204 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    char pad2[4];
};

struct ObjBase_800CD204 { char pad[0x18]; };

struct Obj_800CD204 : ObjBase_800CD204 {
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
    char pad1[0x3D8 - 0x1C];
    Fade_800CD204 sub;
    Fade_800CD204 fades[4];
};

struct Ang_800CD204 { s32 x, y, z; };

struct Vec_800CCC6C;
struct Hit_800CCC6C;
struct VBase_800CE694 { char pad[0x18]; };

struct VObj_800CE694 : VBase_800CE694 {
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
    virtual void m94();
};

struct Vec_800CE694 { f32 x, y, z; };

struct Vec_800CE978 { f32 x, y, z; };

typedef s32 M2C_UNK;
struct Vec_800CE060 { f32 x, y, z; };

struct Node_800CE060 { void *obj; Node_800CE060 *next; };

struct VBase_800CE060 { char pad[0x18]; };

struct VObj_800CE060 : VBase_800CE060 {
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
    virtual void m92(); virtual void m93(); virtual void m94();
};

struct Vec_800CF4BC { f32 x, y, z; };

struct VBase_800CF4BC { char pad[0x18]; };

struct VObj_800CF4BC : VBase_800CF4BC {
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
    virtual void m92(); virtual void m93(); virtual void m94();
};

struct Ene_800CCB74;
struct VBase_800CDB98 { u8 pad[0x18]; };

struct Pl_800CDB98 : VBase_800CDB98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual s32 m18(void *, f32); virtual void m19();
    virtual void m20(void *, f32); virtual void m21(); virtual void m22(); virtual void m23(void *, f32);
};

struct VObj_800CDB98 : VBase_800CDB98 {
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
    virtual void m92(); virtual void m93(); virtual void m94();
};

struct Inner_800CDB98 { u8 pad[0x18]; u32 flags; };

struct Info_800CDB98 { u8 pad[0xA4]; Inner_800CDB98 *inner; };

struct Obj_800CDB98 : VObj_800CDB98 {
    u8 pad1C[0x38 - 0x1C];
    Vec_800CCC6C pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
    u8 pad64[0xB8 - 0x64];
    s16 fb8;
    u8 padBA[0xC0 - 0xBA];
    f32 fc0;
    u8 padC4[0x120 - 0xC4];
    u8 f120[0x2FC - 0x120];
    Vec_800CCC6C f2fc;
    u8 pad308[0x3A0 - 0x308];
    f32 f3a0;
    f32 f3a4;
    f32 f3a8;
    f32 f3ac;
    u8 pad3B0[0x494 - 0x3B0];
    f32 f494;
    f32 f498;
    u8 pad49C[0x4A8 - 0x49C];
    f32 f4a8;
    u32 f4ac;
    u8 pad4B0[0x50C - 0x4B0];
    Info_800CDB98 *f50c;
    u8 pad510[0x518 - 0x510];
    s32 f518;
    u8 pad51C[0x528 - 0x51C];
    s32 f528;
    s32 f52c;
};

struct VBase_18_444bc5 { char pad[0x18]; };

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
};

struct Vec_800CD5F4 { f32 x, y, z; };

extern "C" {
void enemy_copy_target_destination(void *);
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_flag__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK advance_animation_playback(void *);
u8 *find_entity_by_id(u16);
void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805DA1A8;
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 TObjEneBm5GibonU__data_805DA170;
extern const f32 TObjEneBm5GibonU__data_805DA174;
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA178;
void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 lbl_805DA17C;
void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0);
s32 enemy_validate_retained_target(void *);
void enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA184;
void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
u8 *TObjEneBm5GibonU__sub_800D1D78(u32);
void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
s32 transform_relative_position__9TObjEneDDFPvPv(void *, int);
s32 is_active__16TObjEneBm5GibonUFPv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f64 TObjEneBm5GibonU__data_8043C0F8;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA170;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 lbl_805DA238;
extern const f32 lbl_805DA23C;
s32 TObjEneBm5GibonU__sub_800D0968(u8 *arg0);
void queue_destruction__7TObjectFv(void *self);
void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg);
extern s32 lbl_805D5550;
s32 TObjEneBm5GibonU__sub_800CCB24(Obj_800CCB24 *self);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5GibonU__data_805DA16C;
void TObjEneBm5GibonU__sub_800D086C(Obj_800D086C *self);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5GibonU__data_805DA16C;
void TObjEneBm5GibonU__sub_800D08E4(Obj_800D08E4 *self);
s32 fn_8002B630(Col_800CCB74 *, void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
extern u8 lbl_80493CBC[];
extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA160;
u8 TObjEneBm5GibonU__sub_800CCB74(Ene_800CCB74 *arg0, s32 arg1, f32 scale);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 attach_particle_model(void *, s32, s32, s32, s32, f32);
Hit_800CCC6C *csnVectorUnder(Vec_800CCC6C *, void *, s32);
s32 set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
s32 TParticleCtrl__sub_80086884(int);
s32 get_instance__13TParticleCtrlFv();
void *spawn_particle_effect(void *, s32);
s32 fn_800D88E4(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA164;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA16C;
int TObjEneBm5GibonU__sub_800CCC6C(Ene_800CCC6C *arg0, void *arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void TBoss3Volopt__sub_800D8E80(void *);
M2C_UNK advance_animation_playback(void *);
void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1);
void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1);
void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFE30(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFA48(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CF7CC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CEEE8(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CEBD8(u8 *arg0, s32 arg1);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg);
void TObjEneBm5GibonU__sub_800D0738(u8 *arg0, u32 arg1, s32 arg2);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 enemy_validate_retained_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_flag__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
void *update_photon_mylla__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D1D70();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern List_800CFE34 TObjEneBm5GibonU__data_80500EC4;
extern const f32 TObjEneBm5GibonU__data_805DA184;
void TObjEneBm5GibonU__sub_800CFE34(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D0AE8(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 lbl_805DA1B4;
extern const f32 TObjEneBm5GibonU__data_805DA1BC;
void TObjEneBm5GibonU__sub_800CE370(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneBm5GibonU__data_805DA160;
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 TObjEneBm5GibonU__data_805DA1B8;
extern const f32 lbl_805DA1DC;
extern const f32 lbl_805DA230;
extern const f32 lbl_805DA234;
void TObjEneBm5GibonU__sub_800D0420(u8 *arg0, s32 arg1);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK draw_blob_shadow(M2C_UNK);
M2C_UNK direction_to_rotation_xz(void *, s32 *, s32 *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);
void advance_anim_frame__16TObjEneBm5GibonUFv(void);
extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA16C;
extern const f32 lbl_805DA180;
extern const f32 TObjEneBm5GibonU__data_805DA184;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 TObjEneBm5GibonU__data_805DA18C;
extern const f32 TObjEneBm5GibonU__data_805DA194;
extern const f32 lbl_805DA198;
extern const f32 lbl_805DA19C;
void TObjEneBm5GibonU__sub_800CD204(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
Hit_800CCC6C *csnVectorUnder(Vec_800CCC6C *, void *, s32);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0);
s32 is_active__16TObjEneBm5GibonUFPv(void *);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 lbl_805DA1A0;
extern const f32 lbl_805DA1C0;
void TObjEneBm5GibonU__sub_800CE694(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_scaled_value__15TObjBoss2TunnelFif(s32, f32);
s32 is_vec_xz_cross_negative(void *, void *);
s32 enemy_has_live_target(void *);
void enemy_turn_and_move_on_ground(void *, s32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0);
void approach_target__16TObjEneBm5GibonUFPvf(void *, f32);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 lbl_805DA1C4;
extern const f32 TObjEneBm5GibonU__data_805DA1C8;
extern const f32 lbl_805DA1CC;
extern const f32 TObjEneBm5GibonU__data_805DA1D0;
void TObjEneBm5GibonU__sub_800CE978(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK rotate_xz_pair_by_angle(f32 *, f32 *, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK move_clamped_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);
f32 TObjEneBm5GibonU__sub_800D0A94(void *, void *, f32);
M2C_UNK TObjEneBm5GibonU__sub_800D0AE8(void *, void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
void *update_photon_mylla__16TObjEneBm5GibonUFPv(void *);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(void *, s32);
M2C_UNK spawn_dead_spot_type2__10TObjPlayerFii(void *, s32);
M2C_UNK spawn_dead_spot_scale15(void *, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK vec3_add_to(void *, void *);
extern Node_800CE060 *TObjEneBm5GibonU__data_80500EB0[];
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 TObjEneBm5GibonU__data_805DA184;
extern const f32 TObjEneBm5GibonU__data_805DA18C;
extern const f32 TObjEneBm5GibonU__data_805DA190;
extern const f32 TObjEneBm5GibonU__data_805DA1B0;
extern const f32 lbl_805DA1B4;
extern const f32 TObjEneBm5GibonU__data_805DA1B8;
void TObjEneBm5GibonU__sub_800CE060(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
void enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
int TObjEneBm5GibonU__sub_800CCC6C(Ene_800CCC6C *arg0, void *arg1);
void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0);
M2C_UNK calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(void *, s32, Vec_800CF4BC *, s32 *);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA178;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 TObjEneBm5GibonU__data_805DA1BC;
extern const f32 TObjEneBm5GibonU__data_805DA1C8;
extern const f32 lbl_805DA1F8;
extern const f32 lbl_805DA1FC;
extern const f32 lbl_805DA200;
extern const f32 lbl_805DA204;
void TObjEneBm5GibonU__sub_800CF4BC(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f32 cos_table_lookup(int);
f32 sin_table_lookup(int);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
Hit_800CCC6C *csnVectorUnder(Vec_800CCC6C *, void *, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK move_with_wall_slide_on_ground__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
s32 approach_angle_limited(s32, s32, s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 objInBand__FP7GameObjf(void *, f32);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 enemy_probe_wall_ahead(void *, f32, f32, f32);
u8 TObjEneBm5GibonU__sub_800CCB74(Ene_800CCB74 *arg0, s32 arg1, f32 scale);
void approach_target__16TObjEneBm5GibonUFPvf(void *, f32);
void enemy_copy_target_destination(void *);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
void init_all_slots__10TObjPlayerFv(void);
void check_object_collisions__10TObjPlayerFPv(void *);
Pl_800CDB98 *get_battle_param__10TObjPlayerFi(s32);
s32 obj_is_hit_receivable(void *);
extern const f64 TObjEneBm5GibonU__data_8043C0F8;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA160;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 lbl_805DA19C;
extern const f32 lbl_805DA1A4;
extern const f32 lbl_805DA1A8;
extern const f32 lbl_805DA1AC;
extern const f32 TObjEneBm5GibonU__data_805DA1B0;
void TObjEneBm5GibonU__sub_800CDB98(Obj_800CDB98 *arg0, s32 arg1);
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, s32, f32);
s32 select_enemy_destination(void *, Vec_800CD5F4, s32);
void copy_position_if_valid__10TObjPlayerFii(void *, Vec_800CD5F4);
s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
s32 enemy_turn_toward_dest(void *, s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_field_0c__10TObjPlayerFPv(s32);
f32 get_pos_x__10TObjPlayerFPv(s32);
s32 obj_getField1c(int);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
f32 newton_sqrtf(f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void fn_80044330(void *);
void spawn_directional_particle(void *, void *, s32);
void *spawn_particle_effect(void *, s32);
void enemy_copy_target_destination(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 TObjEneBm5GibonU__sub_800CCB24(Obj_800CCB24 *self);
void update_prev_position__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(u32);
void create_ex__8TTecFoieFPvPvPvPv(void *, void *, void *, s32);
void create__8TTecFoieFPvPvPvPv(void *, void *, s32, s32);
void create_ex__11TTecGiBartaFPvPvPvPv(void *, void *, s32, s32);
void create__11TTecGiZondeFPvPvPvPv(void *, void *, void *, s32);
void create__9TTecMegidFiiii(void *, void *, void *, s32);
void create_ex__9TTecMegidFiiii(void *, void *, s32, s32);
void TTecZonde__sub_8023DA10(void *, s32, void *, void *, s32, s32, f32, f32);
M2C_UNK vec3_add_to(void *, void *);
void rotate_vector_by_matrix(s32, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
void pop_matrices(s32);
M2C_UNK pop_matrix();
extern const f64 TObjEneBm5GibonU__data_8043C0F8;
extern u8 lbl_8058D490[];
extern s32 lbl_805D5550;
extern s32 tl_07;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA164;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 lbl_805DA17C;
extern const f32 lbl_805DA1A0;
void TObjEneBm5GibonU__sub_800CD5F4(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void advance_anim_frame__16TObjEneBm5GibonUFv(void);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

s32 TObjEneBm5GibonU__sub_800CCB24(Obj_800CCB24 *self) {
    Sub_800CCB24 *p = self->f2b0;
    s32 v = 0;
    if (p != 0) {
        v = p->f18;
        if (v < 0) {
            v = 0;
        } else if (lbl_805D5550 == 3) {
            if (v > 0x1d) {
                v = 0x1d;
            }
        } else if (v > 0xe) {
            v = 0xe;
        }
    }
    return v;
}

u8 TObjEneBm5GibonU__sub_800CCB74(Ene_800CCB74 *arg0, s32 arg1, f32 scale) {
    Col_800CCB74 *col;
    u8 hit;
    s32 saved60;
    u32 savedFlags;
    f32 r;
    r = scale * TObjEneBm5GibonU__data_805DA158;
    col = arg0->col;
    saved60 = arg0->f60;
    savedFlags = col->flags;
    col->f0 = TObjEneBm5GibonU__data_805DA15C;
    col->f8 = r;
    col->fC = r;
    col->f10 = TObjEneBm5GibonU__data_805DA160;
    col->f14 = 1;
    col->flags = 0x9D01;
    arg0->f60 = arg1;
    arg0->m87();
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    hit = (col->flags & 0x380000) != 0;
    if (arg0->f464 == 1) {
        fn_8002B630(col, lbl_80493CBC + 0x2C);
    } else {
        fn_8002B630(col, lbl_80493CBC);
    }
    col->flags = savedFlags;
    arg0->f60 = saved60;
    return hit;
}

int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1) { return TObjEneBm5GibonU__sub_800CCC6C((Ene_800CCC6C *)((void *)(p)), (void *)((void *)(_w1))); }

int TObjEneBm5GibonU__sub_800CCC6C(Ene_800CCC6C *arg0, void *arg1) {
    Vec_800CCC6C v;
    Hit_800CCC6C *hit;
    void *p;
    VecCopy__FP3VecPC3Vec(&v, arg1);
    v.y += TObjEneBm5GibonU__data_805DA164;
    hit = csnVectorUnder(&v, arg0->f120, 5);
    if (hit != NULL && (hit->flags & 4)) {
        p = spawn_particle_effect(hit->obj + 0x38, 0x49);
        if (p != NULL) {
            attach_particle_model(p, TParticleCtrl__sub_80086884(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneBm5GibonU__data_805DA168);
            if (arg0->f464 == 1) {
                set_position_xy__10TObjPlayerFPvff(p, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA168);
            }
        }
        p = spawn_particle_effect(hit->obj + 0x38, 0xA4);
        if (p != NULL && arg0->f464 == 1) {
            set_position_xy__10TObjPlayerFPvff(p, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA168);
        }
        return fn_800D88E4(&arg0->pos);
    }
    return ((s32)play_sound_effect((void *)((void *)((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x3BC21)))), (void *)(&arg0->pos), (M2C_UNK)(0), (M2C_UNK)(0)));
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA170) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        TObjEneBm5GibonU__sub_800CCC6C((Ene_800CCC6C *)((void *)((void *) (arg0))), (void *)((void *)((void *) (arg0 + 0x38))));
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA17C) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void TObjEneBm5GibonU__sub_800CD204(u8 *arg0) {
    Ang_800CD204 rot;
    s32 cam;
    s32 vis;
    s32 fade;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((Obj_800CD204 *)arg0)->m104();
        return;
    }
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x4AC) & 2) && M2C_FIELD(arg0, s16 *, 0x326) != 0x12) {
        fade = 0;
        if (M2C_FIELD(arg0, s32 *, 0x464) != 0) {
            update_obstruction_fade(&((Obj_800CD204 *)arg0)->fades[cam]);
            fade = updateFromCamera__15RenderFadeStateFPCf(&((Obj_800CD204 *)arg0)->fades[cam], arg0 + 0x2FC);
        }
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            vis = ((Obj_800CD204 *)arg0)->m9(lbl_805D9E88, lbl_805D9E84, TObjEneBm5GibonU__data_805DA184);
        } else if (((Obj_800CD204 *)arg0)->m8(lbl_805DA180, TObjEneBm5GibonU__data_805DA184) != 0) {
            vis = 1;
        } else {
            vis = 0;
        }
        if (vis != 0) {
            if (M2C_FIELD(arg0, s16 *, 0x326) != 0x11) {
                direction_to_rotation_xz(arg0 + 0x248, &rot.x, &rot.z);
                push_matrix();
                post_translate_matrix(arg0 + 0x38);
                translate_matrix(0, TObjEneBm5GibonU__data_805DA15C, TObjEneBm5GibonU__data_805DA194, TObjEneBm5GibonU__data_805DA15C);
                rotate_matrix_z(0, rot.z);
                rotate_matrix_x(0, rot.x);
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                translate_matrix(0, TObjEneBm5GibonU__data_805DA15C, TObjEneBm5GibonU__data_805DA15C, lbl_805DA198);
                scale_matrix(0, TObjEneBm5GibonU__data_805DA188, TObjEneBm5GibonU__data_805DA168, lbl_805DA19C);
                rotate_matrix_x(0, -0x4000);
                draw_blob_shadow(0);
                pop_matrix();
            }
            update_secondary_light__9TObjEneDDFPv(arg0);
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            push_matrix();
            if (M2C_FIELD(arg0, s16 *, 0x326) == 1 || M2C_FIELD(arg0, s16 *, 0x326) == 2) {
                ((Obj_800CD204 *)arg0)->sub.m6();
            } else if (fade != 0) {
                ((Obj_800CD204 *)arg0)->fades[cam].m6();
            }
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            translate_matrix(0, TObjEneBm5GibonU__data_805DA15C, TObjEneBm5GibonU__data_805DA15C, TObjEneBm5GibonU__data_805DA18C);
            if (M2C_FIELD(arg0, s32 *, 0x464) == 1) {
                scale_matrix(0, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA16C);
            } else {
                scale_matrix(0, TObjEneBm5GibonU__data_805DA188, TObjEneBm5GibonU__data_805DA188, TObjEneBm5GibonU__data_805DA188);
            }
            TObjEneBm5GibonU__data_805D51D4 = 0;
            TObjEneBm5GibonU__data_805D51D8 = -(M2C_FIELD(arg0, s32 *, 0x478) / 2);
            set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)advance_anim_frame__16TObjEneBm5GibonUFv);
            clear_global_flag_400__9TObjEneDDFv();
            toggle_particle_effect__10TObjPlayerFv();
            if (fade != 0) {
                if (toggle_flag_9__10TObjPlayerFPv(arg0) == 0) {
                    if (vis == 1) {
                        draw__16TObjEneRe7BeruraFPv(arg0);
                    } else {
                        render_world_model__10TObjPlayerFPv(arg0);
                    }
                }
            } else if (vis == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
            set_global_state__16TObjEneRe7BeruraFi(NULL);
            if (M2C_FIELD(arg0, s16 *, 0x326) == 1 || M2C_FIELD(arg0, s16 *, 0x326) == 2) {
                ((Obj_800CD204 *)arg0)->sub.m7();
            } else if (fade != 0) {
                ((Obj_800CD204 *)arg0)->fades[cam].m7();
            }
            pop_matrix();
            update_primary_light__9TObjEneDDFPv(arg0);
        }
        end_effect_render__13TParticleCtrlFv();
    }
}

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        rotate_matrix_y(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        return;
    }
}

struct Obj_800CCB24;
#define F(t, o) M2C_FIELD(arg0, t *, o)
#define VO ((VObj_18_444bc5 *)(arg0))
#define V(o) (*(Vec_800CD5F4 *)(arg0 + (o)))
#define CB24(a) TObjEneBm5GibonU__sub_800CCB24((Obj_800CCB24 *)(a))
void TObjEneBm5GibonU__sub_800CD5F4(u8 *arg0, s32 arg1) {
    Vec_800CD5F4 v;
    Vec_800CD5F4 p;
    s32 ang[3];
    s32 r;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 14);
        VO->m94();
        F(s32, 0x4AC) &= ~2;
        enemy_copy_target_destination(arg0);
        F(s32, 0x518) = 0;
        break;
    case 3:
        if (F(s32, 0x518) == 2) {
            transition_enemy_state(arg0, 8);
        }
        break;
    case 0:
        update_prev_position__10TObjPlayerFPv(arg0);
        if (F(s32, 0x518) != 1) {
            if (F(u32, 0x390) == 0) {
                transition_enemy_state(arg0, 8);
            } else {
                if (select_enemy_destination(arg0, V(0x394), 1) != 0) {
                    copy_position_if_valid__10TObjPlayerFii(arg0, V(0x2FC));
                    r = enemy_turn_toward_dest(arg0, *(s32 *)(F(u8 *, 0x350) + 8));
                    enemy_set_heading_velocity(arg0, F(s32, 0x60), *(f32 *)(F(u8 *, 0x350) + 4));
                    move_with_wall_slide(arg0);
                } else {
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x394);
                    subtract_vector(&v, arg0 + 0x2FC);
                    r = update_angle__10TObjPlayerFPviPv(arg0, *(s32 *)(F(u8 *, 0x350) + 8), &v);
                }
                if (r < 0x100) {
                    F(s32, 0x518) = 1;
                    F(s16, 0xB8) = 13;
                } else {
                    F(s16, 0xB8) = 1;
                }
            }
        } else {
            advance_animation_playback(arg0);
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                F(s32, 0x518) = 2;
            }
            if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA164) != 0) {
                p.x = TObjEneBm5GibonU__data_805DA15C;
                p.y = TObjEneBm5GibonU__data_805DA164;
                p.z = lbl_805DA17C;
                push_matrix_from(lbl_8058D490);
                rotate_matrix_y(0, F(s32, 0x60));
                rotate_vector_by_matrix(0, &p, &p);
                pop_matrices(1);
                vec3_add_to(&p, arg0 + 0x2FC);
                if (F(u32, 0x390) != 0) {
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x394);
                    subtract_vector(&v, arg0 + 0x2FC);
                    r = update_angle__10TObjPlayerFPviPv(arg0, *(s32 *)(F(u8 *, 0x350) + 8), &v);
                } else {
                    r = get_field_0c__10TObjPlayerFPv(F(s32, 0x318));
                }
                if (lbl_805D5550 == 3) {
                    switch (F(s32, 0x468)) {
                    case 1:
                        if (r < get_field_0c__10TObjPlayerFPv(F(s32, 0x318)) / 2 && F(u32, 0x390) != 0) {
                            create__9TTecMegidFiiii(arg0, &p, arg0 + 0x394, CB24(arg0));
                        } else {
                            create_ex__9TTecMegidFiiii(arg0, &p, F(s32, 0x60), CB24(arg0));
                        }
                        play_sound_effect((void *)0x4002A60B, &p, 0, 0);
                        break;
                    default:
                        if (r < get_field_0c__10TObjPlayerFPv(F(s32, 0x318)) / 2 && F(u32, 0x390) != 0) {
                            fn_80044330(arg0 + 0x4B0);
                            F(s32, 0x4B0) = 1;
                            F(s16, 0x4B4) = obj_getField1c(F(u32, 0x390));
                            F(s16, 0x4B6) = 0;
                            create__11TTecGiZondeFPvPvPvPv(arg0, &p, arg0 + 0x4B0, CB24(arg0));
                        } else {
                            void *e;
                            spawn_particle_effect(&p, 0xB9);
                            spawn_particle_effect(&p, 0xBA);
                            v.x = TObjEneBm5GibonU__data_805DA15C;
                            v.y = TObjEneBm5GibonU__data_805DA15C;
                            v.z = TObjEneBm5GibonU__data_805DA168;
                            push_matrix_from(lbl_8058D490);
                            rotate_matrix_y(0, F(s32, 0x60));
                            rotate_vector_by_matrix(0, &v, &v);
                            pop_matrix();
                            e = __nw__7TObjectFUl(0x260);
                            if (e != 0) {
                                TTecZonde__sub_8023DA10(e, tl_07, &p, &v, 0x14000000, 20, get_pos_x__10TObjPlayerFPv(F(s32, 0x318)), lbl_805DA1A0);
                            }
                        }
                        play_sound_effect((void *)0x4002A408, &p, 0, 0);
                        break;
                    }
                } else {
                    switch (F(s32, 0x468)) {
                    case 1:
                        create_ex__11TTecGiBartaFPvPvPvPv(arg0, &p, F(s32, 0x60), CB24(arg0));
                        break;
                    default:
                        if (r < get_field_0c__10TObjPlayerFPv(F(s32, 0x318)) / 2 && F(u32, 0x390) != 0) {
                            create_ex__8TTecFoieFPvPvPvPv(arg0, &p, F(u8 *, 0x390) + 0x2FC, CB24(arg0));
                        } else {
                            create__8TTecFoieFPvPvPvPv(arg0, &p, F(s32, 0x60), CB24(arg0));
                        }
                        break;
                    }
                    v.x = TObjEneBm5GibonU__data_805DA15C;
                    v.y = TObjEneBm5GibonU__data_805DA15C;
                    v.z = TObjEneBm5GibonU__data_805DA15C;
                    push_matrix_from(lbl_8058D490);
                    rotate_matrix_y(0, F(s32, 0x60));
                    rotate_vector_by_matrix(0, &v, &v);
                    pop_matrices(1);
                    if (F(s32, 0x468) != 1) {
                        ang[0] = (s32)(TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv(v.z, newton_sqrtf(v.x * v.x + v.y * v.y)));
                        ang[1] = 0;
                        ang[2] = -(s32)(TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.y));
                        spawn_directional_particle(&p, ang, 0xCC);
                    }
                }
            }
        }
        break;
    case 5:
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
}

void TObjEneBm5GibonU__sub_800CDB98(Obj_800CDB98 *arg0, s32 arg1) {
    s32 offs[3];
    switch (arg1) {
    case 4:
        arg0->fb8 = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 0xE);
        arg0->m94();
        arg0->f4ac &= ~2;
        arg0->f518 = 0;
        arg0->f52c = 0;
        offs[0] = (s32)(lbl_805DA19C * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) - 1;
        offs[1] = (s32)(TObjEneBm5GibonU__data_805DA188 * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) - 1;
        if (offs[1] <= offs[0]) {
            offs[1]++;
        }
        arg0->f3a0 = TObjEneBm5GibonU__data_805DA15C;
        arg0->f3a4 = TObjEneBm5GibonU__data_805DA15C;
        arg0->f3a8 = TObjEneBm5GibonU__data_805DA15C;
        offs[2] = -(offs[0] + offs[1]);
        arg0->f3ac = TObjEneBm5GibonU__data_805DA15C;
        if (update_target__16TObjEneBm5GibonUFPv(arg0) != 0) {
            s32 d;
            s32 ang;
            s32 i;
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFPv(arg0);
            arg0->f528 = (s32)(TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv(arg0->f3a0, arg0->f3a8));
            for (i = 0; i < 3; i++) {
                d = offs[i] * 0x1FFF;
                ang = arg0->f528 + 0x10000 + d - 0x8000;
                if (((s32 (*)(void *, s32, f32))TObjEneBm5GibonU__sub_800CCB74)(arg0, ang, lbl_805DA1A4) == 0) {
                    f32 dx = TObjEneBm5GibonU__data_805DA188 * (lbl_805DA1A8 * sin_table_lookup(ang));
                    f32 dz = TObjEneBm5GibonU__data_805DA188 * (lbl_805DA1A8 * cos_table_lookup(ang));
                    if (enemy_probe_wall_ahead(arg0, dx, dz, TObjEneBm5GibonU__data_805DA168) == 0) {
                        Vec_800CCC6C v;
                        VecCopy__FP3VecPC3Vec(&v, &arg0->f2fc);
                        v.x += dx;
                        v.z += dz;
                        if (csnVectorUnder(&v, arg0->f120, 0x15) != 0) {
                            arg0->f3a0 = sin_table_lookup(ang);
                            arg0->f3a4 = TObjEneBm5GibonU__data_805DA15C;
                            arg0->f3a8 = cos_table_lookup(ang);
                            arg0->f3ac = lbl_805DA1A8;
                            arg0->f528 += d / 2;
                            break;
                        }
                    }
                }
            }
        }
        arg0->f498 = arg0->f494 = arg0->f3ac / lbl_805DA1AC;
        arg0->f518 = 0;
        arg0->m89();
        break;
    case 3:
        if (arg0->f518 == 1) {
            if (calc_boss4_scale__10TObjPlayerFi((s32)arg0) < arg0->f4a8) {
                transition_enemy_state(arg0, 0x14);
            } else {
                transition_enemy_state(arg0, 8);
            }
        }
        break;
    case 0:
        switch (arg0->f518) {
        case 0:
            advance_animation_playback(arg0);
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                arg0->f518 = 1;
            }
            TObjEneBm5GibonU__sub_800CCD8C((u8 *)arg0);
            if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA160) != 0) {
                play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3B22A), &arg0->pos, 0, 0);
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805DA1AC) != 0) {
                arg0->m90();
                init_all_slots__10TObjPlayerFv();
                check_object_collisions__10TObjPlayerFPv(arg0);
                if (arg0->f50c->inner->flags & 0x80000) {
                    s32 i;
                    for (i = 0; i < 16; i++) {
                        Pl_800CDB98 *p = get_battle_param__10TObjPlayerFi(i);
                        if (p == 0) {
                            break;
                        }
                        if (obj_is_hit_receivable(p) != 0 && p->m18(arg0, TObjEneBm5GibonU__data_805DA168) != 0) {
                            p->m23(arg0, TObjEneBm5GibonU__data_805DA168);
                            p->m20(arg0, TObjEneBm5GibonU__data_805DA168);
                        }
                    }
                }
            }
            approach_target__16TObjEneBm5GibonUFPvf(arg0, TObjEneBm5GibonU__data_805DA1B0);
            arg0->rotY = approach_angle_limited(arg0->rotY, arg0->f528, 0x1000);
            arg0->rotY = (s16)arg0->rotY;
            TObjEneBm5GibonU__sub_800D0FDC(arg0, arg0->rotY);
            if (arg0->fc0 <= lbl_805DA1AC) {
                move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, arg0->f3a0, arg0->f3a8, arg0->f498);
            }
            break;
        }
        arg0->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    case 5:
        play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
        arg0->m90();
        break;
    }
}

void TObjEneBm5GibonU__sub_800CE060(u8 *arg0, s32 arg1) {
    Vec_800CE060 sp14;
    Vec_800CE060 sp8;
    f32 k;
    Node_800CE060 *n;
    u8 *o;
    switch (arg1) {
    case 4:
        ((VObj_800CE060 *)arg0)->m94();
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A826), arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        M2C_FIELD(arg0, f32 *, 0x530) = TObjEneBm5GibonU__sub_800D0A94(arg0, M2C_FIELD(arg0, u8 **, 0xD8), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), f32 *, 0x78));
        M2C_FIELD(arg0, f32 *, 0x538) = TObjEneBm5GibonU__data_805DA15C;
        M2C_FIELD(arg0, f32 *, 0x37C) = TObjEneBm5GibonU__data_805DA15C;
        if (M2C_FIELD(arg0, s32 *, 0x464) != 0) {
            k = TObjEneBm5GibonU__data_805DA190;
            for (n = TObjEneBm5GibonU__data_80500EB0[0]; n != NULL; n = n->next) {
                o = (u8 *)update_photon_mylla__16TObjEneBm5GibonUFPv(n);
                if (o != NULL && M2C_FIELD(o, s32 *, 0x46C) == M2C_FIELD(arg0, s32 *, 0x46C)) {
                    ((void (*)(void *, s32, u16))TObjEneBm5GibonU__sub_800D095C)(o, (s32)(k * calc_boss4_scale__10TObjPlayerFi((s32)arg0)) + 0x14, M2C_FIELD(arg0, u16 *, 0x2D4));
                }
            }
        }
        set_active__9TObjEneDDFPv(arg0);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x518) == 2) {
            transition_enemy_state(arg0, 0x12);
        }
    case 1:
        return;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x518)) {
        case 0:
            advance_animation_playback(arg0);
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x518) = 1;
                sp14.x = TObjEneBm5GibonU__data_805DA15C;
                sp14.y = TObjEneBm5GibonU__data_805DA15C;
                sp14.z = TObjEneBm5GibonU__data_805DA18C;
                rotate_xz_pair_by_angle(&sp14.x, &sp14.z, M2C_FIELD(arg0, s32 *, 0x60));
                vec3_add_to(&sp14, arg0 + 0x38);
                if (M2C_FIELD(arg0, s32 *, 0x464) == 1) {
                    spawn_dead_spot_scale15(&sp14, 0x32);
                } else {
                    spawn_dead_spot_type2__10TObjPlayerFii(&sp14, 0x32);
                }
                spawn_effect_at_ground__10TObjPlayerFPvi(&sp14, 0x46);
            }
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x528), 0x300);
            M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
            if (M2C_FIELD(arg0, f32 *, 0x37C) < TObjEneBm5GibonU__data_805DA174) {
                M2C_FIELD(arg0, f32 *, 0x37C) += M2C_FIELD(arg0, f32 *, 0x530);
            }
            VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
            {
                f32 v = clamp_velocity__15TObjBoss2TunnelFPv(&sp8);
                move_clamped_on_ground__9TObjEneDDFPvfff(arg0, sp8.x, sp8.z, v);
            }
            if (objInBand__FP7GameObjf(arg0, lbl_805DA1B4) != 0) {
                TObjEneBm5GibonU__sub_800D0AE8(arg0, &sp8);
            }
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5GibonU__data_805DA1B8;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5GibonU__data_805DA1B8;
            TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
            ((VObj_800CE060 *)arg0)->m86();
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x3C) -= TObjEneBm5GibonU__data_805DA1B0;
            M2C_FIELD(arg0, f32 *, 0x538) += TObjEneBm5GibonU__data_805DA1B0;
            if (M2C_FIELD(arg0, f32 *, 0x538) > TObjEneBm5GibonU__data_805DA184) {
                M2C_FIELD(arg0, s32 *, 0x518) = 2;
            }
            break;
        }
        break;
    case 5:
        clear_field_388__9TObjEneDDFPv(arg0);
        return;
    }
}

void TObjEneBm5GibonU__sub_800CE370(u8 *arg0, s32 arg1) {
    Vec_800CE370 sp8;
    switch (arg1) {
    case 4:
        ((VObj_18_4225ac *)(arg0))->m94();
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        M2C_FIELD(arg0, s32 *, 0x528) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        if (M2C_FIELD(arg0, s16 *, 0x33E) - M2C_FIELD(arg0, s16 *, 0x32C) < 0x14) {
            play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A824), arg0 + 0x38, 0, 0);
        }
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            switch (M2C_FIELD(arg0, s32 *, 0x378)) {
            case 12:
                transition_enemy_state(arg0, 0xE);
                break;
            case 3:
                transition_enemy_state(arg0, 8);
                break;
            default:
                transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
                break;
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
        {
            f32 v = clamp_velocity__15TObjBoss2TunnelFPv(&sp8);
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, sp8.x, sp8.z, v);
        }
        if (M2C_FIELD(arg0, s32 *, 0x518) == 0) {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5GibonU__data_805DA158;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5GibonU__data_805DA158;
        } else {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5GibonU__data_805DA1BC;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5GibonU__data_805DA1BC;
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x528), 0x300);
            M2C_FIELD(arg0, s32 *, 0x60) = (s16) M2C_FIELD(arg0, s32 *, 0x60);
            if (objInBand__FP7GameObjf(arg0, lbl_805DA1B4) != 0) {
                TObjEneBm5GibonU__sub_800D0AE8(arg0, &sp8);
            }
        }
        ((VObj_18_4225ac *)(arg0))->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE_800CCC4C *)arg0)->m95();
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 8);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            TObjEneBm5GibonU__sub_800D08E4((Obj_800D08E4 *)(arg0));
        } else if (temp_r0 == 0x28) {
            TObjEneBm5GibonU__sub_800D086C((Obj_800D086C *)(arg0));
        }
        ((VObj_CE_800CCC4C *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBm5GibonU__sub_800CE694(u8 *arg0, s32 arg1) {
    Vec_800CE694 v;
    f32 dx;
    f32 dz;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0xE);
        ((VObj_800CE694 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        M2C_FIELD(arg0, s32 *, 0x528) = 0;
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x518) == 2) {
            if (M2C_FIELD(arg0, u32 *, 0x390) != 0U) {
                transition_enemy_state(arg0, 0xB);
            } else {
                transition_enemy_state(arg0, 8);
            }
        }
        break;
    case 5:
        break;
    case 0:
        ((M2C_UNK (*)(void *, s32))advance_animation_playback)(arg0, arg1);
        switch (M2C_FIELD(arg0, s32 *, 0x518)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x528) = ((M2C_FIELD(arg0, s32 *, 0x51C) >> 1) << 0xC) + 0x1800;
            if (M2C_FIELD(arg0, s32 *, 0x51C) & 1) {
                M2C_FIELD(arg0, s32 *, 0x528) = -M2C_FIELD(arg0, s32 *, 0x528);
            }
            if (is_active__16TObjEneBm5GibonUFPv(arg0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x528) = -M2C_FIELD(arg0, s32 *, 0x528);
            }
            M2C_FIELD(arg0, s32 *, 0x528) += M2C_FIELD(arg0, s32 *, 0x60);
            M2C_FIELD(arg0, s32 *, 0x51C)++;
            if (M2C_FIELD(arg0, s32 *, 0x51C) > 8) {
                M2C_FIELD(arg0, s32 *, 0x518) = 2;
            }
            dx = lbl_805DA1C0 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x528));
            dz = lbl_805DA1C0 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x528));
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x50C), f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0x38) + dx;
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x50C), f32 *, 0x3C) = M2C_FIELD(arg0, f32 *, 0x3C);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x50C), f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0x40) + dz;
            update_collisions__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x50C));
            if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x50C), u8 **, 0xA4), s32 *, 0x18) & 0x380000)) {
                dx *= TObjEneBm5GibonU__data_805DA188;
                dz *= TObjEneBm5GibonU__data_805DA188;
                if (enemy_probe_wall_ahead(arg0, dx, dz, TObjEneBm5GibonU__data_805DA168) == 0U) {
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x2FC);
                    v.x += dx;
                    v.z += dz;
                    if (csnVectorUnder((Vec_800CCC6C *)&v, arg0 + 0x120, 0x15) != NULL) {
                        M2C_FIELD(arg0, s32 *, 0x518) = 1;
                        M2C_FIELD(arg0, s16 *, 0xB8) = 0x10;
                        M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x528));
                        M2C_FIELD(arg0, f32 *, 0x3A4) = TObjEneBm5GibonU__data_805DA15C;
                        M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x528));
                    }
                }
            }
            break;
        case 1:
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFPv)(arg0) != 0) {
                update_target__16TObjEneBm5GibonUFPv(arg0);
                M2C_FIELD(arg0, s32 *, 0x518) = 2;
            }
            TObjEneBm5GibonU__sub_800CCDE4(arg0);
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805DA1A0);
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x528), 0xF00);
            TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x528));
            ((VObj_800CE694 *)arg0)->m87();
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800CE978(u8 *arg0, s32 arg1) {
    Vec_800CE978 dir;
    Vec_800CE978 diff;
    Vec_800CE978 *home = (Vec_800CE978 *)(arg0 + 0x54C);
    f32 range = M2C_FIELD(arg0, f32 *, 0x530);
    u8 *tgt;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x494) = lbl_805DA1C4;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        VecCopy__FP3VecPC3Vec(home, arg0 + 0x38);
        calc_scaled_value__15TObjBoss2TunnelFif(0x200, lbl_805DA1C4);
        M2C_FIELD(arg0, s32 *, 0x52C) = M2C_FIELD(arg0, s32 *, 0x60);
        if (enemy_has_live_target(arg0) != 0) {
            dir.x = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            dir.z = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            tgt = M2C_FIELD(arg0, u8 **, 0x390);
            diff.x = M2C_FIELD(tgt, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x38);
            diff.z = M2C_FIELD(tgt, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40);
            if (is_vec_xz_cross_negative(&dir, &diff) != 0) {
                M2C_FIELD(arg0, s32 *, 0x528) = 0x5000;
            } else {
                M2C_FIELD(arg0, s32 *, 0x528) = -0x5000;
            }
        } else if (calc_boss4_scale__10TObjPlayerFi((s32)arg0) < TObjEneBm5GibonU__data_805DA158) {
            M2C_FIELD(arg0, s32 *, 0x528) = 0x5000;
        } else {
            M2C_FIELD(arg0, s32 *, 0x528) = -0x5000;
        }
        M2C_FIELD(arg0, s32 *, 0x528) += M2C_FIELD(arg0, s32 *, 0x52C);
        return;
    case 3:
        if (M2C_FIELD(arg0, u8 **, 0x390) == NULL || M2C_FIELD(arg0, s32 *, 0x518) > 0x96) {
            transition_enemy_state(arg0, 8);
            return;
        }
        if (M2C_FIELD(arg0, f32 *, 0x3AC) < range) {
            transition_enemy_state(arg0, 0xB);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x518)++;
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFPv(arg0) != 0) {
            TObjEneBm5GibonU__sub_800CCE28(arg0);
            M2C_FIELD(arg0, s32 *, 0x528) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x528), M2C_FIELD(arg0, s32 *, 0x52C), 0x100);
            M2C_FIELD(arg0, f32 *, 0x394) = TObjEneBm5GibonU__data_805DA1C8 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x528)) + home->x;
            M2C_FIELD(arg0, f32 *, 0x39C) = TObjEneBm5GibonU__data_805DA1C8 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x528)) + home->z;
            update_velocity__9TObjEneDDFPv(arg0);
            approach_target__16TObjEneBm5GibonUFPvf(arg0, lbl_805DA1CC);
            M2C_FIELD(arg0, f32 *, 0xC8) = TObjEneBm5GibonU__data_805DA1D0 * M2C_FIELD(arg0, f32 *, 0x498);
            enemy_turn_and_move_on_ground(arg0, 0x500, M2C_FIELD(arg0, f32 *, 0x498));
            TObjEneBm5GibonU__sub_800D0F44(arg0);
            ((VObj_18_4225ac *)(arg0))->m87();
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        }
        break;
    }
}
#pragma pop

struct Ene_800CCC6C;
void TObjEneBm5GibonU__sub_800CF4BC(u8 *arg0, s32 arg1) {
    s32 *rot = (s32 *)(arg0 + 0x528);
    Vec_800CF4BC *vel = (Vec_800CF4BC *)(arg0 + 0x540);
    Vec_800CF4BC *dir = (Vec_800CF4BC *)(arg0 + 0x54C);
    f32 t;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        set_field_378__9TObjEneDDFPvi(arg0, 0xA);
        ((VObj_800CF4BC *)arg0)->m94();
        M2C_FIELD(arg0, f32 *, 0x494) = TObjEneBm5GibonU__data_805DA188;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(arg0, 0x1C71, dir, rot);
        VecCopy__FP3VecPC3Vec(vel, dir);
        M2C_FIELD(arg0, s32 *, 0x52C) = *rot;
        return;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x390) == 0) {
            transition_enemy_state(arg0, 8);
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x518) == 1) {
            transition_enemy_state(arg0, 0x14);
            return;
        }
        if (objInBand__FP7GameObjf(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DA1F8) != 0 &&
            M2C_FIELD(arg0, f32 *, 0x3AC) < TObjEneBm5GibonU__data_805DA1C8) {
            transition_enemy_state(arg0, 0xB);
        }
    case 5:
    case 1:
        return;
    case 0:
        advance_animation_playback(arg0);
        if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0) {
            return;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805DA1FC) != 0) {
            TObjEneBm5GibonU__sub_800CCC6C((Ene_800CCC6C *)arg0, arg0 + 0x38);
        }
        TObjEneBm5GibonU__sub_800CCDE4(arg0);
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFPv(arg0);
            if (M2C_FIELD(arg0, s32 *, 0x51C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x51C) = 1;
                calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(arg0, -0x1C71, dir, rot);
            } else {
                M2C_FIELD(arg0, s32 *, 0x51C) = 0;
                calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(arg0, 0x1C71, dir, rot);
            }
        }
        if (objInBand__FP7GameObjf(arg0, M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DA1F8) != 0) {
            VecCopy__FP3VecPC3Vec(vel, dir);
            M2C_FIELD(arg0, s32 *, 0x52C) = *rot;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x52C), 0x800);
        M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA200) != 0) {
            M2C_FIELD(arg0, f32 *, 0x498) = lbl_805DA204;
        }
        t = M2C_FIELD(arg0, f32 *, 0xC0);
        if (t >= TObjEneBm5GibonU__data_805DA178 && t <= lbl_805DA200) {
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, vel->x, vel->z, TObjEneBm5GibonU__data_805DA168);
        } else {
            M2C_FIELD(arg0, f32 *, 0x498) *= TObjEneBm5GibonU__data_805DA1BC;
            move_with_wall_slide_on_ground__9TObjEneDDFPvfff(arg0, vel->x, vel->z, M2C_FIELD(arg0, f32 *, 0x498));
        }
        M2C_FIELD(arg0, f32 *, 0x49C) += M2C_FIELD(arg0, f32 *, 0x498);
        if (M2C_FIELD(arg0, f32 *, 0x49C) >= 50.0f) {
            M2C_FIELD(arg0, f32 *, 0x49C) -= 50.0f;
            if (calc_boss4_scale__10TObjPlayerFi((s32)arg0) < M2C_FIELD(arg0, f32 *, 0x4A4)) {
                M2C_FIELD(arg0, s32 *, 0x518) = 1;
            }
        }
        TObjEneBm5GibonU__sub_800D0F44(arg0);
        ((VObj_800CF4BC *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFE30(u8 * _w0, s32 _w1) {  }

typedef struct VBase_18_9e83f9 VBase_18_9e83f9;
typedef struct VObj_18_9e83f9 VObj_18_9e83f9;
#define PSO_VCALL_VObj_18_9e83f9_m94(_self) (((VObj_18_9e83f9 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9e83f9_m100(_self) (((VObj_18_9e83f9 *)(_self))->m100())
#define PSO_VCALL_VObj_18_9e83f9_m86(_self) (((VObj_18_9e83f9 *)(_self))->m86())

typedef struct VBase_18_7b3d65 VBase_18_7b3d65;
typedef struct VObj_18_7b3d65 VObj_18_7b3d65;
#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())

#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())

void TObjEneBm5GibonU__sub_800CFE34(u8 *arg0, s32 arg1) {
    Node_800CFE34 *n;
    void *o;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xE;
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        ((VObj_18_7b3d65 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 8);
        }
        break;
    case 5:
        break;
    case 0:
        ((void (*)(void *, s32))advance_animation_playback)(arg0, M2C_FIELD(arg0, s32 *, 0x518)++);
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA184) != 0) {
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A523), arg0 + 0x38, 0, 0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x518) == 0x3C) {
            for (n = TObjEneBm5GibonU__data_80500EC4.head; n != NULL; n = n->next) {
                o = update_photon_mylla__16TObjEneBm5GibonUFPv(n);
                if (M2C_FIELD(arg0, s32 *, 0x46C) == TObjEneBm5GibonU__sub_800D1D70()) {
                    set_flag__16TObjEneBm5GibonUFPv(o);
                }
            }
        }
        if (enemy_validate_retained_target(arg0) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xE) {
                TObjEneBm5GibonU__sub_800D0F44(arg0);
            } else {
                M2C_FIELD(arg0, s32 *, 0x478) = 0;
            }
        } else {
            play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
        }
        ((VObj_18_7b3d65 *)(arg0))->m100();
        ((VObj_18_7b3d65 *)(arg0))->m86();
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 5;
      set_field_378__9TObjEneDDFPvi((void *)((void *) arg0), (M2C_UNK)((int) 8));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x518)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x518)))) > 0x3C)
    {
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 8));
    }
    case 5:
      return;
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x518))) + 1);
      advance_animation_playback((void *) arg0);
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneBm5GibonU__data_805DA184) != 0)
    {
      play_sound_effect((void *)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3A523)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
    }
      if (enemy_validate_retained_target((void *) arg0) != 0)
    {
      enemy_copy_target_destination((void *) arg0);
      update_velocity__9TObjEneDDFPv((void *) arg0);
      TObjEneBm5GibonU__sub_800D0F44((void *) arg0);
    }
    else
    {
      play_sound_variant__16TObjEneBm5GibonUFPv((void *) arg0);
    }
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) - -0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(5));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
      return;
      return;
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x518)))) <= 0)
    {
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
    }
    case 5:
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x518))) - 1);
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      advance_animation_playback((void *) arg0);
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
      PSO_VCALL_VObj_18_9e83f9_m94(arg0);
      enemy_clear_target(arg0);
      *((s32 *) (((s8 *) arg0) + 0x478)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      return;
    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 1)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(5));
      return;
    }
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x390)))) != 0U)
    {
      enemy_copy_target_destination(arg0);
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
      temp_r3 = (u8 *) find_entity_by_id(*((u16 *) (((s8 *) arg0) + 0x474)));
      if (temp_r3 != 0)
      {
        set_flag__16TObjEneBm5GibonUFPv(temp_r3);
      }
    }
      return;
    case 0:
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      advance_animation_playback(arg0);
      PSO_VCALL_VObj_18_9e83f9_m100(arg0);
      PSO_VCALL_VObj_18_9e83f9_m86(arg0);
      return;
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      break;
  }
}

typedef struct VBase_18_599a64 VBase_18_599a64;
typedef struct VObj_18_599a64 VObj_18_599a64;
#define PSO_VCALL_VObj_18_599a64_m93(_self) (((VObj_18_599a64 *)(_self))->m93())

void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1) {
    f32 *home = g->home;
    switch (arg1) {
    case 4:
        g->fB8 = 0;
        set_field_378__9TObjEneDDFPvi((void *)(g), (M2C_UNK)(8));
        ((Ene_800D02F8 *)g)->m93();
        g->f4AC &= ~3;
        enemy_clear_target(g);
        g->f478 = 0;
        VecCopy__FP3VecPC3Vec(home, g->pos);
        TObjEneMe3SinowZoa__sub_800D758C(&g->sub);
        TBoss3Volopt__sub_800D8E80(g->pos);
        break;
    case 3:
        if (g->sub.m5() != 0) {
            if (update_target__16TObjEneBm5GibonUFPv(g) != 0) {
                transition_enemy_state((void *)(g), (M2C_UNK)(8));
            } else {
                transition_enemy_state((void *)(g), (M2C_UNK)(3));
            }
        }
        break;
    case 5:
        break;
    case 0:
        ((s32)advance_animation_playback(g));
        ((Ene_800D02F8 *)g)->m100();
        ((Ene_800D02F8 *)g)->m86();
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800D0420(u8 *arg0, s32 arg1) {
    u8 *home = arg0 + 0x540;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xF;
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        ((VObj_18_7b3d65 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) & 0xFFFFFFFC);
        enemy_clear_target((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x478) = 0;
        VecCopy__FP3VecPC3Vec(home, (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, f32 *, 0x38) -= lbl_805DA230 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, f32 *, 0x40) -= lbl_805DA230 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, f32 *, 0x530) = lbl_805DA234;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if (update_target__16TObjEneBm5GibonUFPv((void *) (arg0)) != 0) {
                transition_enemy_state(arg0, 8);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
            TObjEneBm5GibonU__sub_800CCD8C(arg0);
            if (objInBand__FP7GameObjf((void *) (arg0), TObjEneBm5GibonU__data_805DA160) != 0) {
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A828), arg0 + 0x38, 0, 0);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DA1DC) != 0) {
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A529), arg0 + 0x38, 0, 0);
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) > TObjEneBm5GibonU__data_805DA174) {
                M2C_FIELD(arg0, f32 *, 0x530) *= TObjEneBm5GibonU__data_805DA1B8;
            }
            M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x530) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x530) * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
        }
        ((VObj_18_7b3d65 *)(arg0))->m100();
        ((VObj_18_7b3d65 *)(arg0))->m86();
        break;
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1) {
  int new_var;
  switch (arg1)
  {
    case 4:
      *((s32 *) (((s8 *) arg0) + 0x51C)) = 0;
      set_field_378__9TObjEneDDFPvi((void *)((void *) arg0), (M2C_UNK)((int) 0));
      PSO_VCALL_VObj_18_599a64_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) | 2);
      return;
    case 3:
      u32 temp_r3;
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x51C)))) > 0)
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x470)))) < 1)
      {
        transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 1));
        return;
      }
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 2));
    }
    case 5:
      return;
      return;
    case 0:
      new_var = 0x51C;
      temp_r3 = ((u32)TObjEneBm5GibonU__sub_800D17E8((s32)((int) (*((s32 *) (((s8 *) arg0) + 0x46C))))));
      if (temp_r3)
    {
      *((s16 *) (((s8 *) arg0) + 0x474)) = obj_getField1c((int) temp_r3);
    }
      if ((((s32) (*((s32 *) (((s8 *) arg0) + 0x464)))) != 0) || (temp_r3 == 0U))
    {
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x488), (void *) (arg0 + 0x47C));
    }
    else
    {
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x488), (void *) TObjEneBm5GibonU__sub_800D1D78(temp_r3));
    }
      *((s32 *) (((s8 *) arg0) + new_var)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x51C))) + 1);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D0738(u8 *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneBm5GibonU__sub_800D062C(arg0, arg2);
        break;
    case 1:
        TObjEneBm5GibonU__sub_800D0420((u8 *)(arg0), (s32)(arg2));
        break;
    case 2:
        TObjEneBm5GibonU__sub_800D02F8((Gibon_800D02F8 *)(arg0), (s32)(arg2));
        break;
    case 3:
        TObjEneBm5GibonU__sub_800D01DC(arg0, arg2);
        break;
    case 4:
        TObjEneBm5GibonU__sub_800CFE30((u8 *)(arg0), (s32)(arg2));
        break;
    case 5:
        TObjEneBm5GibonU__sub_800D00F0(arg0, arg2);
        break;
    case 6:
        TObjEneBm5GibonU__sub_800CFFBC(arg0, arg2);
        break;
    case 7:
        TObjEneBm5GibonU__sub_800CFE34((u8 *)(arg0), (s32)(arg2));
        break;
    case 8:
        TObjEneBm5GibonU__sub_800CFA48(arg0, arg2);
        break;
    case 9:
        TObjEneBm5GibonU__sub_800CF7CC(arg0, arg2);
        break;
    case 10:
        TObjEneBm5GibonU__sub_800CF4BC((u8 *)(arg0), (s32)(arg2));
        break;
    case 11:
        TObjEneBm5GibonU__sub_800CEEE8(arg0, arg2);
        break;
    case 12:
        TObjEneBm5GibonU__sub_800CEBD8(arg0, arg2);
        break;
    case 13:
        TObjEneBm5GibonU__sub_800CE978((u8 *)(arg0), (s32)(arg2));
        break;
    case 14:
        TObjEneBm5GibonU__sub_800CE694((u8 *)(arg0), (s32)(arg2));
        break;
    case 15:
        action__16TObjEneBm5GibonUFPvi(arg0, arg2);
        break;
    case 16:
        TObjEneBm5GibonU__sub_800CE370((u8 *)(arg0), (s32)(arg2));
        break;
    case 17:
        TObjEneBm5GibonU__sub_800CE060((u8 *)(arg0), (s32)(arg2));
        break;
    case 18:
        TObjEneBm5GibonU__sub_800CD5B8(arg0, arg2);
        break;
    case 19:
        TObjEneBm5GibonU__sub_800CDB98((Obj_800CDB98 *)(arg0), (s32)(arg2));
        break;
    case 20:
        TObjEneBm5GibonU__sub_800CD5F4((u8 *)(arg0), (s32)(arg2));
        break;
    }
}

void TObjEneBm5GibonU__sub_800D086C(Obj_800D086C *self) {
    u8 *r = find_entity_by_id(self->f474);
    if (r != 0) {
        Dmg_800D086C d;
        d.kind = 9;
        d.amount = TObjEneBm5GibonU__data_805DA16C;
        self->m21(r, d, 0, -1, -1);
    }
}

void TObjEneBm5GibonU__sub_800D08E4(Obj_800D08E4 *self) {
    u8 *r = find_entity_by_id(self->f474);
    if (r != 0) {
        Dmg_800D08E4 d;
        d.kind = 10;
        d.amount = TObjEneBm5GibonU__data_805DA16C;
        self->m21(r, d, 0, -1, -1);
    }
}

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s16 *, 0x514) = arg2;
}
#pragma push
#pragma fp_contract on
s32 TObjEneBm5GibonU__sub_800D0968(u8 *arg0) {
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f0;
    if (transform_relative_position__9TObjEneDDFPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x390))) != 0) {
        enemy_copy_target_destination((void *) (arg0));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        if (is_active__16TObjEneBm5GibonUFPv((void *) (arg0)) != 0) {
            var_f0 = TObjEneBm5GibonU__data_805DA170;
        } else {
            var_f0 = lbl_805DA238;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x3A8);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x3A0);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + ((TObjEneBm5GibonU__data_805DA188 * temp_f4) + (temp_f5 * var_f0)));
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) + ((TObjEneBm5GibonU__data_805DA188 * temp_f5) - (temp_f4 * var_f0)));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        return (s32) (TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
    }
    M2C_FIELD(arg0, f32 *, 0x3A0) = sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneBm5GibonU__data_805DA15C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x394), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((lbl_805DA23C * M2C_FIELD(arg0, f32 *, 0x3A0)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((lbl_805DA23C * M2C_FIELD(arg0, f32 *, 0x3A8)) + M2C_FIELD(arg0, f32 *, 0x39C));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA23C;
    return M2C_FIELD(arg0, s32 *, 0x60);
}
#pragma pop

}
