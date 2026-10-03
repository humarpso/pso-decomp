#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct V_8005DC0C { f32 x, y, z; };

struct Obj_8005DC0C {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    V_8005DC0C pts[8];
    u8 pad420[0x4E4 - 0x420];
    s32 f4e4;
};

struct Obj_8005DC0C;

struct VBase_14 { char pad[0x14]; };

struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    u32 f18;
};

struct Boss_8005DD68 { u8 pad[0x580]; VObj_14 fades[4]; };

struct RecoveredGlobal_8005E17C_lbl_8043797C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_8005E17C_lbl_804FF5C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8005E1E8 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_8005E058 { f32 x, y, z; };

struct Obj_8005E058 { u8 pad0[0x3C0]; Vec_8005E058 src[10]; u8 pad438[0xB0]; Vec_8005E058 dst[10]; };

struct Obj_8005E0C0 { u8 pad[0x34]; s32 f34; u8 pad38[0x24]; s32 f5c; s32 f60; s32 f64; u8 pad68[0x90]; s32 ff8; u8 pad_fc[0x3C0 - 0xFC]; u8 f3c0[0x100]; s32 f4c0; };

typedef char RecoveredGlobal_8005E17C_lbl_8043797C_size[sizeof(RecoveredGlobal_8005E17C_lbl_8043797C) == 0x40 ? 1 : -1];

typedef char RecoveredGlobal_8005E17C_lbl_804FF5C0_size[sizeof(RecoveredGlobal_8005E17C_lbl_804FF5C0) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8005E1E8_lbl_804FF5CC_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5CC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8005E1E8_lbl_804FF5D8_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5D8) == 0x10 ? 1 : -1];

struct Obj_8005E4D4 { u8 pad[0x734]; void *parts[16]; };

struct Obj_8005E52C { u8 pad[0x734]; void *parts[16]; };

struct Vec_8005E39C { f32 x, y, z; };

struct IVec_8005E39C { s32 x, y, z; };

struct Res_8005E39C { u8 pad[0x18]; s32 f18; s32 f1C; s32 f20; };

struct Obj_8005E39C {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x444 - 0x64];
    Vec_8005E39C pos;
    u8 pad450[0x5F0 - 0x450];
    Res_8005E39C *res;
    u8 pad5F4[0x724 - 0x5F4];
    void *eff[3];
};

struct E_8005E9D8 { s32 a; s32 b; };

struct O_8005E9D8 { u8 pad[8]; E_8005E9D8 e[1]; };

struct O_8005F740 { u8 pad[0x4a8]; u8 buf[0x14]; u8 *cur; u32 flags; };

struct P_8005F740 { u8 pad[0x30]; };

struct Obj_8005F968 { u8 pad[0x60]; s32 f60; u8 pad64[0x480 - 0x64]; s32 f480; };

struct O_8005FCE4 { u8 pad[0x4c0]; u32 flags; };

struct Vec_8005FBC4 { f32 x, y, z; };

struct Shot_8005FBC4 { f32 v[3]; };

struct Obj_8005FBC4 {
    u8 pad0[0x38];
    Vec_8005FBC4 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x474 - 0x64];
    Vec_8005FBC4 vel;
    s32 f480;
    u8 pad484[0x4c0 - 0x484];
    s32 flags;
    u8 pad4c4[0x4e4 - 0x4c4];
    s32 f4e4;
};

struct VBase_80062550 { char pad[0x18]; };

struct VObj_80062550 : VBase_80062550 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Vec_80062550 { f32 x, y, z; };

struct Tgt_80062550 {
    u8 pad0[4];
    s32 f4;
    s32 f8;
    f32 fc;
    f32 f10;
};

struct Obj_80062550 {
    u8 pad0[0x38];
    Vec_80062550 pos;
    u8 pad44[0xb8 - 0x44];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4bc - 0x494];
    Tgt_80062550 *f4bc;
};

struct VBase_80060F4C { char pad[0x18]; };

struct VObj_80060F4C : VBase_80060F4C {
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

struct Obj_80060F4C {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fb8;
    u8 padba[0x4C0 - 0xBA];
    u32 flags;
};

struct Base_80065370_80062BA0 { char pad[0x18]; };

struct VObj_80065370_80062BA0 : Base_80065370_80062BA0 {
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
    virtual void vcall(s16 a, int b);
};

struct M2CCopy_10 { u8 bytes[0x10]; };

struct Stack_80063F34 {
    M2C_UNK sp8;
    f32 spC;
};

struct Stack_800646F0 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_800646F0_lbl_80437944 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800646F0_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8006435C {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_8006435C_lbl_80437D2C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8006435C_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064CFC_lbl_80487848 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80064CFC_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_80064694_lbl_80437CF0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064114_lbl_80437D68 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064114_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_80064AB0 { u8 pad[0x1c]; u16 id; u8 pad2[0x38c - 0x1e]; u16 kind; u8 pad3[6]; f32 x; u8 pad4[4]; f32 z; };

struct P_80064AB0 { u16 a; u16 id; u32 kind; f32 x; f32 z; };

struct VBase_8006369C { u8 pad[0x18]; };

struct Obj_8006369C : VBase_8006369C {
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
    u8 pad1C[0xB8 - 0x1C];
    s16 f_B8;
};

struct Vec_80064968 { f32 x, y, z; };

struct Atk_80064968 {
    u8 pad0[8];
    s32 f8;
};

struct Obj_80064968 {
    u8 pad0[0x3c0];
    Vec_80064968 parts[16];
    u8 pad480[0x578 - 0x480];
    s32 f578;
    u8 pad57c[0x5f0 - 0x57c];
    Atk_80064968 *f5f0;
};

struct VBase_80065658 { char pad[0x18]; };

struct VObj_80065658 : VBase_80065658 {
    virtual ~VObj_80065658();
};

struct Obj_80065658 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x4c4 - 0x1c];
    u8 f4c4[0x578 - 0x4c4];
    u32 f578;
    VObj_80065658 *f57c;
    u8 f580[0x734 - 0x580];
    void *objs[16];
};

struct VBase_80063570 { char pad[0x18]; };

struct VObj_80063570 : VBase_80063570 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Obj_80063570 {
    u8 pad0[0xb8];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4c0 - 0x494];
    s32 flags;
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

struct VBase_80062E94 { char pad[0x18]; };

struct VObj_80062E94 : VBase_80062E94 {
virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
};

struct Vec_80062E94 { f32 x, y, z; };

struct VBase_80063320 { char pad[0x18]; };

struct VObj_80063320 : VBase_80063320 {
virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
};

struct Base_80098E4C_80098DB0 { char pad[0x18]; };

struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
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
    virtual void m95();
    virtual void m96();
    virtual int m97();
};

typedef char RecoveredGlobal_800646F0_lbl_80437944_size[sizeof(RecoveredGlobal_800646F0_lbl_80437944) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_800646F0_lbl_804FF5B4_size[sizeof(RecoveredGlobal_800646F0_lbl_804FF5B4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8006435C_lbl_80437D2C_size[sizeof(RecoveredGlobal_8006435C_lbl_80437D2C) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_8006435C_lbl_804FF5A0_size[sizeof(RecoveredGlobal_8006435C_lbl_804FF5A0) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064114_lbl_80437D68_size[sizeof(RecoveredGlobal_80064114_lbl_80437D68) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064114_lbl_804FF5B4_size[sizeof(RecoveredGlobal_80064114_lbl_804FF5B4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80064694_lbl_80437CF0_size[sizeof(RecoveredGlobal_80064694_lbl_80437CF0) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064CFC_lbl_80487848_size[sizeof(RecoveredGlobal_80064CFC_lbl_80487848) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_80064CFC_lbl_804FF5A0_size[sizeof(RecoveredGlobal_80064CFC_lbl_804FF5A0) == 0x14 ? 1 : -1];

struct Vec_8005D880 { f32 x, y, z; };

struct Obj_8005D880 {
    u8 pad0[0x38];
    Vec_8005D880 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

struct Vec_8005D9BC { f32 x, y, z; };

struct Ent_8005E868 { s32 a; s32 b; s32 f8[]; };

struct Ent2_8005E868 { s32 a; s32 b; s32 f8; };

struct Seg_80063CDC { f32 x, y, z, w; };

int VecCopy__FP3VecPC3Vec(void*, void*);
f32 calc_random_ratio__10TObjPlayerFv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK fn_8002B094(int);
s32 get_flag_bit6__12TBoss8DragonFPv();
s32 TBoss8Dragon__sub_8005D700();
s32 TBoss8Dragon__sub_8005D880(Obj_8005D880 *arg0, s32 arg1, s32 arg2, Vec_8005D880 *org, Vec_8005D880 *out);
void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0);
s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0);
void TBoss8Dragon__sub_8005DD68(u8 *arg0, s32 arg1);
void render_model__12TBoss8DragonFPv(u8 *arg0);
void update_unless_demo__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_8005E040(void *arg0);
void TBoss8Dragon__sub_8005E0C0(Obj_8005E0C0 *self);
void TBoss8Dragon__sub_8005E17C(void);
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0);
void free_parts__12TBoss8DragonFPv(void *arg0);
void update_particle_positions__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self);
void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self);
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self);
s32 TBoss8Dragon__sub_8005E868(s32 arg0, Ent_8005E868 *arg1, s32 arg2);
s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TBoss8Dragon__sub_8005E944(s32 arg0, s32 arg1, s32 arg2);
s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, s32);
f32 TBoss8Dragon__sub_8005EA5C(f32 farg0, f32 farg1);
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2);
void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2);
void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2);
void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2);
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2);
void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src);
void update_target_from_state__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005F578(u8 *arg0, s32 arg1);
void set_animation_by_state__12TBoss8DragonFPv(void *arg0);
void init_state_zero__12TBoss8DragonFPv(void *arg0);
M2C_UNK TBoss8Dragon__sub_8005F684(void *, void *);
void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F740(O_8005F740 *self);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F968(void *selfv, s32 arg1, s32 arg2);
void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0);
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0);
s32 TBoss8Dragon__sub_8005FAE0(u8 *arg0);
void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void advance_motion_timer__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
void TBoss8Dragon__sub_8005FBC4(Obj_8005FBC4 *arg0);
void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg);
void TBoss8Dragon__sub_80060F4C(Obj_80060F4C *arg0, s32 arg1);
void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1);
void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1);
void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80062E94(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80063320(u8 *arg0, u32 arg1);
void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1);
void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1);
void TBoss8Dragon__sub_80063714(void);
void spawn_switch_attack__12TBoss8DragonFPv(void *arg0);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_80063EF4(s32 arg0);
void TBoss8Dragon__sub_80063F34(u8 *arg0);
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1);
void TBoss8Dragon__sub_800641A8(u8 *arg0);
void TBoss8Dragon__sub_8006426C(void *);
void TBoss8Dragon__sub_8006435C(u8 *arg0);
void TBoss8Dragon__sub_80064694(s32 arg0);
void TBoss8Dragon__sub_800646F0(s32 arg0);
void run_default_state__12TBoss8DragonFPv(void* p);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_80064828(u8 *arg0);
void TBoss8Dragon__sub_800648C8(u8 *arg0);
int TBoss8Dragon__sub_80064968(void *arg0, int arg1);
void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1);
void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self);
void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1);
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1);
void handle_6xA0_gal_gryphon_boss_actions(void *arg0);
void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1);
void handle_6x9F_gal_gryphon_boss_actions(void *arg0);
M2C_UNK TBoss8Dragon__sub_80064C94(void *, void *);
void TBoss8Dragon__sub_80064CFC(s32 arg0);
void reset_radius__12TBoss8DragonFPv(void* a0);
void set_anim_speed__12TBoss8DragonFPv(void* a0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void set_phase__12TBoss8DragonFPv(void* p);
void set_attack_phase__12TBoss8DragonFPv(void* p);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_80064DB8(u8 *arg0);
void TBoss8Dragon__sub_80064E3C(u8 *arg0);
void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
void update_epsilon_position__12TBoss8DragonFv(void);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
void TBoss8Dragon__sub_80065360(void);
void TBoss8Dragon__sub_80065364(void);
void TBoss8Dragon__sub_80065368(void);
void TBoss8Dragon__sub_8006536C(void);
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj);
Obj_80065658 * TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag);
M2C_UNK init_color__12TBoss8DragonFPv(void *);
int TBoss8Dragon__sub_80065F4C(void*);
void TBoss8Dragon__sub_80065F80(void *);
void TBoss8Dragon__sub_8006602C(void *);
void bswap_boss_actions__12TBoss8DragonFi(void *);
void TBoss8Dragon__sub_800660A4(void *);
M2C_UNK attach_particle_model(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK __ct__17TBoss5GryphonDemoFv(void *, s32, void *, f32);
M2C_UNK fn_800666C4(s32);
M2C_UNK TBoss8Dragon__sub_80067074(void *, void *);
M2C_UNK TBoss8Dragon__sub_800670E0(int, void *);
M2C_UNK play_pillar_sound__13TObjBoss5CtrlFv();
void TCameraCtrl__sub_80069094(s32);
M2C_UNK TCameraCtrl__sub_8006A044(s32, f32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(s32);
u8 * csnVecterUnder(M2C_UNK *, M2C_UNK);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
int check_demo_mode__10TObjPlayerFv(void*);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
void * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void enable__13TParticleCtrlFPv(void *);
void TObjEneEpsilon__sub_800B9384(u8 *arg0, s32 arg1, f32 farg0);
s32 enemy_validate_retained_target(void *);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, M2C_UNK *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK enemy_set_target_id(void *, u16);
M2C_UNK update_velocity__9TObjEneDDFPv();
void __dt__9TObjEneDDFv(void *, int);
M2C_UNK get_target_state_a__9TObjEneDDFPv(void *);
M2C_UNK get_target_state_b__9TObjEneDDFPv(void *);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 reload_stats_keep_hp_tp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
M2C_UNK emit_effect_at_position__9TObjEneDDFPvPv(void *, void *);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
void setup_instance__9TObjEneDDFiiPvi(s32, s32, void *, s32);
u8 * try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
void calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
M2C_UNK transition_enemy_state(void *, s16);
void TBoss8Dragon__sub_800BC5A0(u32, int);
s32 isFading__15RenderFadeStateCFv(int);
M2C_UNK restore__15RenderFadeStateFv(void *);
M2C_UNK fadeOut__15RenderFadeStateFv(void *);
void TObjPlayer__sub_800D7C58(void);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
void * get_enemy_entity(int);
M2C_UNK TObjLight__sub_801337F8(void *);
s32 angle_diff_s16(s32, s32);
f32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void advance_animation_playback(void *);
u8 * find_entity_by_id();
void free_collision_body_parts(void *);
u32 get_player_by_client_id(M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1);
M2C_UNK play_persistent_sound(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(u32);
M2C_UNK render_nodes__7TObjectFv(s32, s32);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
M2C_UNK copy_position__12TBoss8DragonFii(u32, void *);
M2C_UNK TBoss5GryphonLightningEff__sub_80325064(void *);
void * __ct__25TBoss5GryphonLightningEffFv(void *, void *, void *, s32, f32, f32, f32);
M2C_UNK TBoss8Dragon__sub_80351CF0(void *, void *, void *, void *, s32, s32);
void __destroy_arr(void *, void *, int, int);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec3_dot(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
void subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_current_scene__6TSceneFi(int);
M2C_UNK set_chunk_material_override_pair(int, int);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
void set_global_state__16TObjEneRe7BeruraFi(void *);

extern M2C_UNK lbl_80437938[];
extern RecoveredGlobal_800646F0_lbl_80437944 lbl_80437944;
extern RecoveredGlobal_8005E17C_lbl_8043797C lbl_8043797C;
extern s32 lbl_80437CCC[];
extern M2CCopy_14 lbl_80437CDC;
extern RecoveredGlobal_80064694_lbl_80437CF0 lbl_80437CF0;
extern RecoveredGlobal_8006435C_lbl_80437D2C lbl_80437D2C;
extern M2C_UNK lbl_80437D54[];
extern RecoveredGlobal_80064114_lbl_80437D68 lbl_80437D68;
extern M2C_UNK lbl_80437DC4[];
extern M2C_UNK lbl_80437DD0[];
extern M2C_UNK lbl_80437DDC[];
extern f32 lbl_80437DF4[];
extern f32 lbl_80437E04[];
extern f32 lbl_80437E14[];
extern s32 lbl_80437E6C[];
extern s32 lbl_80437E94[];
extern const f64 lbl_80437EB0;
extern RecoveredGlobal_80064CFC_lbl_80487848 lbl_80487848;
extern u8 lbl_804882B0[];
extern M2C_UNK lbl_804882BC[];
extern u8 lbl_804882C8[];
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
extern RecoveredGlobal_8005E17C_lbl_804FF5C0 lbl_804FF5C0;
extern u8 lbl_804FF5CC[];
extern u8 lbl_804FF5D8[];
extern M2C_UNK lbl_805D4D98;
extern M2C_UNK lbl_805D4D9C;
extern u8 *lbl_805D4DA0;
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
extern s32 lbl_805D4DB8;
extern Obj_80065658 *lbl_805D4DBC;
extern f32 lbl_805D4DC0;
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5560;
extern s32 lbl_805D5660;
extern const f32 lbl_805D8D50;
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8D58;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D60;
extern const f32 lbl_805D8D64;
extern const f32 lbl_805D8D68;
extern const f32 lbl_805D8D6C;
extern const f32 lbl_805D8D70;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D78;
extern const f32 lbl_805D8D7C;
extern const f32 lbl_805D8D80;
extern const float lbl_805D8D84;
extern const f32 lbl_805D8D88;
extern const f32 lbl_805D8D8C;
extern const f32 lbl_805D8D98;
extern const f32 lbl_805D8D9C;
extern const f32 lbl_805D8DA0;
extern const f32 lbl_805D8DA4;
extern const f32 lbl_805D8DCC;
extern const f32 lbl_805D8DD0;
extern const f32 lbl_805D8DE4;
extern const float lbl_805D8DEC;
extern const f32 lbl_805D8DF4;
extern const f32 lbl_805D8DF8;
extern const f32 lbl_805D8E00;
extern const f32 lbl_805D8E04;
extern const f32 lbl_805D8E08;
extern const f32 lbl_805D8E0C;
extern const f32 lbl_805D8E10;
extern const f32 lbl_805D8E14;
extern const float lbl_805D8E20;
extern const f32 lbl_805D8E34;
extern const f32 lbl_805D8E5C;
extern const f32 lbl_805D8E60;
extern const f32 lbl_805D8E64;
extern const f32 lbl_805D8E68;
extern const f32 lbl_805D8E6C;
extern const f32 lbl_805D8E70;
extern const f32 lbl_805D8E74;
extern const f32 lbl_805D8E78;
extern const f32 lbl_805D8E7C;
extern const f32 lbl_805D8E8C;
extern const f32 lbl_805D8E90;
extern const f32 lbl_805D8E94;
extern const f32 lbl_805D8E98;
extern const f32 lbl_805D8EA4;
extern const f32 lbl_805D8EA8;
extern const f32 lbl_805D8EAC;
extern const f32 lbl_805D8EB0;
extern const f32 lbl_805D8EB4;
extern const f32 lbl_805D8EB8;
extern const f32 lbl_805D8EBC;
extern const f32 lbl_805D8EC0;
extern const float lbl_805D8EC4;
extern const f32 lbl_805D8EC8;
extern s32 some_id_805c6f74;
extern s32 tl_01;

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8005D880(Obj_8005D880 *arg0, s32 arg1, s32 arg2, Vec_8005D880 *org, Vec_8005D880 *out) {
    Obj_8005D880 *p;
    f32 dx;
    f32 dz;
    f32 px;
    f32 pz;
    s32 ang;

    p = ((Obj_8005D880 * (*)(s32))get_player_by_client_id)(arg2);
    if (p == 0) {
        return 0;
    }
    pz = p->pos.z;
    px = p->pos.x;
    dz = pz - arg0->pos.z;
    dx = px - arg0->pos.x;
    if (dx * dx + dz * dz < lbl_805D8D60) {
        return 0;
    }
    ang = angle_diff_s16((s32)(((const f64 *)&lbl_80437EB0)[0] * get_ad_end_text_start__10TObjPlayerFv(px - org->x, pz - org->z)), arg0->f60);
    if (arg1 != 0) {
        if ((f32)(s32)(u16)ang > lbl_805D8D64) {
            return 0;
        }
    } else {
        if ((f32)(s32)(u16)ang < lbl_805D8D68) {
            return 0;
        }
    }
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(out, &p->pos);
    return 1;
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005D9BC(u8 *arg0, s32 arg1, s32 arg2) {
    Vec_8005D9BC pos;
    Vec_8005D9BC mid;
    Vec_8005D9BC out;
    Vec_8005D9BC tmp;
    f32 r;
    s32 ang;
    u8 *p;

    r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x5F4);
    r = lbl_805D8D6C * r + lbl_805D8D6C;
    ang = (s32)(lbl_805D8D64 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x5F4) + (f32)M2C_FIELD(arg0, s32 *, 0x60));
    if (arg1 != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x6DC) == 0) return;
        copy_position__12TBoss8DragonFii(M2C_FIELD(arg0, u32 *, 0x6DC), &pos);
    } else {
        if (M2C_FIELD(arg0, u32 *, 0x6E0) == 0) return;
        copy_position__12TBoss8DragonFii(M2C_FIELD(arg0, u32 *, 0x6E0), &pos);
    }
    if (((s32 (*)(void *, s32, s32, void *, void *))TBoss8Dragon__sub_8005D880)(arg0, arg1, arg2, &pos, &out) == 0) {
        if (arg1 != 0) {
            ang = (s32)((f32)ang + lbl_805D8D68);
        }
        out.x = r * sin_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x38);
        out.y = M2C_FIELD(arg0, f32 *, 0x3C);
        out.z = r * cos_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x40);
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&tmp, &out);
        p = ((u8 * (*)(void *, s32))csnVecterUnder)(&tmp, 0x16EF);
        if (p == NULL || M2C_FIELD(M2C_FIELD(p, u8 **, 4), f32 *, 4) > lbl_805D8D70) {
            out.x = lbl_805D8D6C * sin_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x38);
            out.y = M2C_FIELD(arg0, f32 *, 0x3C);
            out.z = lbl_805D8D6C * cos_table_lookup(ang) + M2C_FIELD(arg0, f32 *, 0x40);
        }
    }
    mid.x = lbl_805D8D74 * (pos.x + out.x);
    mid.y = lbl_805D8D78 + pos.y;
    mid.z = lbl_805D8D74 * (pos.z + out.z);
    TBoss8Dragon__sub_80351CF0(arg0, &pos, &mid, &out, 0x14, 0x11);
}
extern int fold_flush_1;
#pragma pop

void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x4C4, temp_r4);
    some_id_805c6f74 = lbl_805D5660;
}

s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0) {
    V_8005DC0C cam;
    V_8005DC0C dir;
    f32 len;
    u8 *pl;
    s32 i;
    if (lbl_805D4DF0 == 0) {
        return 0;
    }
    if (arg0->f326 == 4) {
        return 0;
    }
    if (get_flag_bit6__12TBoss8DragonFPv() != 0) {
        return 0;
    }
    if (arg0->f4e4 != 0) {
        return 0;
    }
    TCameraCtrl__sub_80069094(-1);
    pl = find_entity_by_id();
    if (pl == 0) {
        return 0;
    }
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&cam, lbl_805D4DF0 + 0x178);
    cam.y = lbl_805D8D5C;
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&dir, pl + 0x38);
    subtract_vector(&dir, &cam);
    dir.y = lbl_805D8D5C;
    len = clamp_velocity__15TObjBoss2TunnelFPv(&dir);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(lbl_804FF5CC, &cam);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(lbl_804FF5D8, &dir);
    lbl_805D4DC0 = len;
    for (i = 0; i < 4; i++) {
        if (((s32 (*)(void *, void *, f32))TBoss8Dragon__sub_8005E1E8)(arg0, &arg0->pts[lbl_80437E94[i]], lbl_805D8D80) != 0) {
            return 1;
        }
    }
    return 0;
}

void TBoss8Dragon__sub_8005DD68(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    clear_global_flag_400__9TObjEneDDFv();
    lbl_805D5660 = some_id_805c6f74;
    set_current_scene__6TSceneFi((int) (0));
    if (TBoss8Dragon__sub_8005DC0C((Obj_8005DC0C *) (arg0)) != 0) {
        fadeOut__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    } else {
        restore__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    }
    temp_r31 = (u8 *)&((Boss_8005DD68 *)arg0)->fades[arg1];
    if (isFading__15RenderFadeStateCFv((int) (temp_r31)) != 0) {
        ((VObj_14 *)(temp_r31))->m6();
    }
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    TObjLight__sub_801337F8((void *) (lbl_805D5560));
    pop_matrix();
    set_chunk_material_override_pair((int) (0xFF00), (int) (0));
    set_current_scene__6TSceneFi((int) (0xBF));
    some_id_805c6f74 = lbl_805D5660;
}

void render_model__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r4 = (unsigned char *) (M2C_FIELD(lbl_805D4DA0, void **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
    ((M2C_UNK (*)(void *, int))draw__16TObjEneRe7BeruraFPv)((void *) (arg0), (int) (temp_r4));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
    pop_matrix();
}

void update_unless_demo__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { ((int (*)(void*))render_model__12TBoss8DragonFPv)(p); } }

void TBoss8Dragon__sub_8005E040(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (*(f32 *)&lbl_805D8D84);
    }
}

void TBoss8Dragon__sub_8005E058(Obj_8005E058 *self) {
    s32 i;
    Vec_8005E058 *d = self->dst;
    for (i = 0; i < 10; i++) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(d, &self->src[lbl_80437E6C[i]]);
        d++;
    }
}

void TBoss8Dragon__sub_8005E0C0(Obj_8005E0C0 *self) {
    lbl_805D4DAC = 0;
    lbl_805D4DB0 = 0;
    lbl_805D4DB4 = (s32)self->f3c0;
    lbl_805D4DB8 = self->f4c0;
    set_global_state__16TObjEneRe7BeruraFi((void *)TBoss8Dragon__sub_8005E17C);
    ((void (*)(void))push_matrix)();
    set_global_flag__10TObjPlayerFv();
    ((void (*)(void *))post_translate_matrix)((u8 *)self + 0x38);
    ((void (*)(int, int))rotate_matrix_y)(0, self->f60);
    ((void (*)(int, int))rotate_matrix_x)(0, self->f5c);
    ((void (*)(int, int))rotate_matrix_z)(0, self->f64);
    ((void (*)(int, f32, f32, f32))scale_matrix)(0, lbl_805D8D58, lbl_805D8D58, lbl_805D8D58);
    ((void (*)(void *))get_speed_or_default__10TObjPlayerFPv)(self);
    render_model_tree__12TBoss8DragonFPvPv((void *)self->f34, (void *)self->ff8);
    clear_global_state__10TObjPlayerFv();
    ((void (*)(void))pop_matrix)();
    set_global_state__16TObjEneRe7BeruraFi(0);
}

void TBoss8Dragon__sub_8005E17C(void) {
    s32 temp_r4;
    if ((s32) lbl_805D4DAC == (s32) M2C_FIELD(&lbl_8043797C.value, M2C_UNK *, (lbl_805D4DB0 * 4))) {
        temp_r4 = lbl_805D4DB4;
        lbl_805D4DB4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FF5C0.value, temp_r4);
        lbl_805D4DB0 += 1;
    }
    lbl_805D4DAC += 1;
}

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8005E1E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8005E1E8, spC) == 0x4) ? 1 : -1];
    Stack_8005E1E8 stack;
    f32 temp_f1;
    f32 temp_f31;
    ((M2C_UNK (*)(void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8));
    stack.spC = lbl_805D8D5C;
    ((M2C_UNK (*)(void *, void *))subtract_vector)((void *) (&stack.sp8), (void *) (&(*(RecoveredGlobal_8005E1E8_lbl_804FF5CC *)&lbl_804FF5CC).value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < (*(const f32 *)&lbl_805D4DC0)) {
        temp_f31 = temp_f1 * (lbl_805D8D88 / newton_sqrtf((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (vec3_dot((void *) (&stack.sp8), (void *) (&(*(RecoveredGlobal_8005E1E8_lbl_804FF5D8 *)&lbl_804FF5D8).value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
extern int fold_flush_2;
#pragma pop

void free_parts__12TBoss8DragonFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x72C) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x72C));
        M2C_FIELD(arg0, u32 *, 0x72C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x728) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x728));
        M2C_FIELD(arg0, u32 *, 0x728) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x724) != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x724));
        M2C_FIELD(arg0, u32 *, 0x724) = 0U;
    }
}

void update_particle_positions__12TBoss8DragonFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x724) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x724), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x724));
    }
    if (M2C_FIELD(arg0, void **, 0x728) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x728), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x728));
    }
    if (M2C_FIELD(arg0, void **, 0x72C) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x72C), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x72C));
    }
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self) {
    Vec_8005E39C pos;
    IVec_8005E39C rot;
    pos.x = lbl_805D8D8C * sin_table_lookup(self->ang) + self->pos.x;
    pos.y = self->pos.y;
    pos.z = lbl_805D8D8C * cos_table_lookup(self->ang) + self->pos.z;
    rot.x = 0;
    rot.y = self->ang;
    rot.x = 0x4000;
    if (self->eff[0] == NULL) {
        self->eff[0] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f18, 0x2040);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[0], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    }
    if (self->eff[1] == NULL) {
        self->eff[1] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f1C, 0x40);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[1], &pos);
    }
    if (self->eff[2] == NULL) {
        self->eff[2] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f20, 0x40);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[2], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    }
}
extern int fold_flush_3;
#pragma pop

void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self) {
    s32 i;
    for (i = 15; i >= 0; i--) {
        if (self->parts[i] != 0) {
            queue_destruction__7TObjectFv(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}

void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (self->parts[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->parts[i], lbl_804882B0);
            enable__13TParticleCtrlFPv(self->parts[i]);
        }
    }
}

s32 TBoss8Dragon__sub_8005E868(s32 arg0, Ent_8005E868 *arg1, s32 arg2) {
    s32 v;

    v = arg1[arg2].f8[0];
    if (v > 0) {
        return 1;
    }
    if (v < 0) {
        return -1;
    }
    if ((lbl_805D8D98 * (f32) rand()) >= lbl_805D8D74) {
        return 1;
    }
    return -1;
}

s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    temp_r31 = TBoss8Dragon__sub_8005E9E8(arg0, arg1, arg3);
    return temp_r31 * ((s32 (*)(s32, s32, s32))TBoss8Dragon__sub_8005E868)(arg0, arg1, arg2);
}

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8005E944(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (((f32) arg2 * (lbl_805D8D98 * (f32) rand())) + (f32) arg1);
}
extern int fold_flush_4;
#pragma pop

s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i) {
    return o->e[i].a;
}

#pragma push
#pragma fp_contract on
f32 TBoss8Dragon__sub_8005EA5C(f32 farg0, f32 farg1) {
    return (farg1 * (lbl_805D8D98 * (f32) rand())) + farg0;
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma scheduling off
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2) {
  u8 *temp_r4;
  temp_r4 = (u8 *)arg1 + (arg2 * 8);
  return ((f32 (*)(int, f32, f32))TBoss8Dragon__sub_8005EA5C)((int)arg0, (f32) (*((f32 *) (((s8 *) temp_r4) + 0x28))), (f32) (*((f32 *) (((s8 *) temp_r4) + 0x2C))));
}
extern int fold_flush_6;
#pragma pop

void TBoss8Dragon__sub_8005EB00(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) (lbl_805D8D9C * (lbl_805D8D98 * (f32) rand()));
}

void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2) {
    f32 temp_f1;
    temp_f1 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_f1 * temp_f1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 4) = ((s32 (*)(void *, void *, int, int))calc_product__12TBoss8DragonFiiii)((void *) (arg0), (void *) (arg2), (int) (0), (int) (1));
}

void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3;
    temp_r3 = ((s32 (*)(void *, void *, int))TBoss8Dragon__sub_8005E9E8)((void *) (arg0), (void *) (arg2), (int) (0));
    switch (temp_r3) {
    case 0:
        temp_r31 = (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x40))));
        temp_f31 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f31 * ((f32 (*)(int))sin_table_lookup)((int) (temp_r31)));
        M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * ((f32 (*)(int))cos_table_lookup)((int) (temp_r31)));
        break;
    case 1:
        M2C_FIELD(arg1, f32 *, 4) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 2);
        break;
    }
    M2C_FIELD(arg1, f32 *, 0xC) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 0x10) = ((s32 (*)(void *, void *, int))TBoss8Dragon__sub_8005E9E8)((void *) (arg0), (void *) (arg2), (int) (1));
}

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = TBoss8Dragon__sub_8005E9E8(arg0, arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = ((f32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005EAD0)(arg0, arg2, 0);
    M2C_FIELD(arg1, f32 *, 0x10) = ((f32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005EAD0)(arg0, arg2, 1);
    M2C_FIELD(arg1, s32 *, 8) = ((s32 (*)(s32, s32, M2C_UNK))TBoss8Dragon__sub_8005E868)(arg0, arg2, 0);
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = calc_product__12TBoss8DragonFiiii(arg0, arg2, 0, 1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *) (arg0), (void *) (arg2), (int) (0));
}
extern int fold_flush_7;
#pragma pop

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src) {
    M2C_FIELD(dst, s16 *, 0) = (s16) M2C_FIELD(src, s32 *, 0);
    M2C_FIELD(dst, s16 *, 2) = ((s16 (*)(void *, s16, s16))TBoss8Dragon__sub_8005E944)(arg0, M2C_FIELD(src, s16 *, 4), M2C_FIELD(src, s16 *, 6));
}

void update_target_from_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x40);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x60);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x5C);
        return;
    }
}

void TBoss8Dragon__sub_8005F578(u8 *arg0, s32 arg1) {
    struct { u8 pad[0x30]; } sp8;
    s32 temp_r5;
    init_color__12TBoss8DragonFPv((void *) (&sp8));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x778);
    M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(temp_r5, M2C_UNK *, (arg1 * 4));
    ((M2C_UNK (*)(void *, void *, int))trigger_effect__12TBoss8DragonFPvi)((void *) (arg0), (void *) (&sp8), (int) (temp_r5));
    TBoss8Dragon__sub_8005F684((void *) (arg0), (void *) (&sp8));
    ((M2C_UNK (*)(void *, void *))copy_spawn_params__12TBoss8DragonFPvPv)((void *) (arg0), (void *) (&sp8));
}

void set_animation_by_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss8Dragon__sub_8005F578)(arg0, 0x19);
        return;
    case 1:
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss8Dragon__sub_8005F578)(arg0, 0x1A);
        return;
    case 3:
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss8Dragon__sub_8005F578)(arg0, 0x1B);
        return;
    case 2:
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss8Dragon__sub_8005F578)(arg0, 0x1C);
        return;
    }
}

void init_state_zero__12TBoss8DragonFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss8Dragon__sub_8005F578)(arg0, 0);
}

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    fn_800666C4(arg1 + 0x14);
}

void TBoss8Dragon__sub_8005F740(O_8005F740 *self) {
    P_8005F740 p;
    if ((self->flags & 2) && self->cur >= self->buf) {
        ((void (*)(void *))init_color__12TBoss8DragonFPv)(&p);
        ((void (*)(void *, void *))trigger_effect__12TBoss8DragonFPvi)(self, &p);
        ((void (*)(void *, void *))TBoss8Dragon__sub_8005F684)(self, &p);
        self->flags &= ~2;
        copy_spawn_params__12TBoss8DragonFPvPv(self, &p);
    }
}

void update_periodic_effect__12TBoss8DragonFPv(void *arg0) {
    ((M2C_UNK (*)(void))update_epsilon_position__12TBoss8DragonFv)();
    if (!(M2C_FIELD(arg0, s32 *, 0x490) & 0x1F)) {
        if (enemy_validate_retained_target(arg0) != 0) {
            enemy_copy_target_destination(arg0);
        } else {
            copy_position__14TObjEneEpsilonFPv(arg0, lbl_80437938);
        }
        ((M2C_UNK (*)(void *))TBoss8Dragon__sub_80064AB0)(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) + 1);
}

void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) (M2C_FIELD(arg0, f32 *, 0x474) * farg0);
    M2C_FIELD(arg0, f32 *, 0x478) = (f32) (M2C_FIELD(arg0, f32 *, 0x478) * farg1);
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) (M2C_FIELD(arg0, f32 *, 0x47C) * farg0);
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x480) * farg2);
}

void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(-M2C_FIELD(arg0, f32 *, 0x38), -M2C_FIELD(arg0, f32 *, 0x40))));
}

void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))));
}

void TBoss8Dragon__sub_8005F968(void *selfv, s32 arg1, s32 arg2) {
    s32 t;
    s32 v;

    t = angle_diff_s16(((Obj_8005F968 *)selfv)->f60, arg2);
    t = angle_diff_s16((s32)((f32)t * lbl_805D8DA0), ((Obj_8005F968 *)selfv)->f480);
    v = (t < -arg1) ? -arg1 : ((t < arg1) ? t : arg1);
    ((Obj_8005F968 *)selfv)->f480 = ((Obj_8005F968 *)selfv)->f480 - v;
}

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    update_velocity__9TObjEneDDFPv();
    ((M2C_UNK (*)(void *, s32, f32))TBoss8Dragon__sub_8005FA78)(arg0, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), farg0);
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) ((farg0 * sin_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x474));
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) ((farg0 * cos_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x47C));
}
extern int fold_flush_8;
#pragma pop

s32 TBoss8Dragon__sub_8005FAE0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC8) <= lbl_805D8D5C;
}

void advance_motion_entry__12TBoss8DragonFPv(void *arg0) {
    s16 *ptr;
    ptr = (s16 *) (M2C_FIELD(arg0, s32 *, 0x4BC) + 0x14);
    M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) ptr;
    ptr = (s16 *) M2C_FIELD(arg0, s32 *, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != *ptr) {
        transition_enemy_state(arg0, *ptr);
    }
}

void advance_motion_timer__12TBoss8DragonFPv(void *arg0) {
    int temp_r4;
    void *temp_r5;
    void *temp_r4b;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x4BC);
        temp_r4 = (s16) M2C_FIELD(temp_r5, s16 *, 2);
        if (temp_r4 > 0) {
            M2C_FIELD(temp_r5, s16 *, 2) = (s16) (temp_r4 - 1);
            temp_r4b = M2C_FIELD(arg0, void **, 0x4BC);
            if (M2C_FIELD(temp_r4b, s16 *, 2) == 0) {
                advance_motion_entry__12TBoss8DragonFPv((void *)(arg0));
            }
        }
    }
}

void TBoss8Dragon__sub_8005FB90(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
}

void TBoss8Dragon__sub_8005FBC4(Obj_8005FBC4 *arg0) {
    Shot_8005FBC4 shot;
    Vec_8005FBC4 v;
    f32 len;
    if (arg0->flags & 0x10) {
        arg0->pos.y += arg0->vel.y;
        arg0->f60 += arg0->f480;
        v.x = arg0->vel.x;
        v.y = lbl_805D8D5C;
        v.z = arg0->vel.z;
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        calc_shot_position__9TObjEneDDFPvPvfff(arg0, &shot, v.x, v.z, len);
        try_move_actor_xz_on_ground((u8 *)arg0, (u8 *)&shot);
    } else {
        arg0->pos.x += arg0->vel.x;
        arg0->pos.y += arg0->vel.y;
        arg0->pos.z += arg0->vel.z;
        arg0->f60 += arg0->f480;
    }
    if (!(arg0->flags & 0x20)) {
        scale_size__12TBoss8DragonFPvfff(arg0, lbl_80437DF4[arg0->f4e4], lbl_80437E04[arg0->f4e4], lbl_80437E14[arg0->f4e4]);
    }
}

void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg) {
    switch (msg) {
    case 4:
        self->flags |= 0x80;
        queue_destruction__7TObjectFv(self);
        break;
    case 5:
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        return;
    }
}

void TBoss8Dragon__sub_80060F4C(Obj_80060F4C *arg0, s32 arg1) {
    f32 speed;
    f32 scale;
    f32 depth;
    f32 v;
    s32 ang;
    switch (arg1) {
    case 4:
        arg0->fb8 = 0xB;
        ((VObj_80060F4C *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv(arg0);
        reset_angle__12TBoss8DragonFPv(arg0);
        arg0->flags |= 0x30;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        ((void (*)(void *))TBoss8Dragon__sub_80064DB8)(arg0);
        ((void (*)(void *))update_velocity__9TObjEneDDFPv)(arg0);
        TBoss8Dragon__sub_8006426C(arg0);
        ((void (*)(void *))TBoss8Dragon__sub_80064828)(arg0);
        v = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (v < lbl_805D8E10 || v >= lbl_805D8DE4) {
            depth = lbl_805D8E04;
            ang = 0;
            speed = lbl_805D8D5C;
            scale = lbl_805D8DA4;
        } else {
            depth = lbl_805D8E04;
            ang = 0xD0;
            speed = lbl_805D8D88;
            scale = lbl_805D8E08;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8D74) != 0) {
            ang += 0x500;
            speed += lbl_805D8E14;
        }
        scale_size__12TBoss8DragonFPvfff(arg0, scale, depth, depth);
        TBoss8Dragon__sub_8005FA78(arg0, arg0->f60, speed);
        update_heading__12TBoss8DragonFPvi(arg0, ang);
        return;
    case 5:
        arg0->flags &= ~0x30;
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1) {
    s32 ofs;
    s32 ang;
    s32 a;
    Tgt_80062550 *t;
    switch (arg1) {
    case 4:
        arg0->fb8 = 4;
        ((VObj_80062550 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv(arg0);
        reset_float_3c__12TBoss8DragonFPv(arg0);
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
        TBoss8Dragon__sub_80063EF4((s32)arg0);
        ofs = 0x4000;
        if (arg0->pos.x * arg0->pos.x + arg0->pos.z * arg0->pos.z > arg0->f4bc->f10 * arg0->f4bc->f10) {
            ofs = 0x5000;
        }
        a = (s32)(((const f64 *)&lbl_80437EB0)[0] * get_ad_end_text_start__10TObjPlayerFv(arg0->pos.x, arg0->pos.z));
        t = arg0->f4bc;
        ang = a - ofs;
        if (t->f8 > 0) {
            ang = a + ofs;
        }
        TBoss8Dragon__sub_8005FA78(arg0, ang, t->fc);
        update_heading__12TBoss8DragonFPvi(arg0, arg0->f4bc->f4);
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) > 0x96) {
            ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 0xB);
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((get_player_by_client_id(0) != 0U) || (get_player_by_client_id(1) != 0U) || (get_player_by_client_id(2) != 0U) || (get_player_by_client_id(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x6DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6DC) + 1);
        }
        break;
    }
}

void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1) {
    s32 *p = (s32 *)(arg0 + 0x6E8);
    u8 sp8[0xC];
    void *obj;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((M2C_UNK (*)(void))set_flag_4e4__12TBoss8DragonFPv)();
        ((M2C_UNK (*)(void *))reset_float_3c__12TBoss8DragonFPv)((void *) (arg0));
        ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        switch (TBoss8Dragon__sub_8005D700()) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x4C0) |= 0x80;
        M2C_FIELD(arg0, s32 *, 0x6E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        *p = 1;
        obj = __nw__7TObjectFUl(0x28);
        if (obj != NULL) {
            __ct__17TBoss5GryphonDemoFv(obj, tl_01, p, lbl_805D8D88);
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x19;
        init_all_slots__11TWindowCtrlFv();
        get_target_state_b__9TObjEneDDFPv((void *) (arg0));
        return;
    case 2:
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) == 1) {
            ((M2C_UNK (*)(void *))init_state_zero__12TBoss8DragonFPv)((void *) (arg0));
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
                init_all_slots2__11TWindowCtrlFv();
                M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            }
            switch (M2C_FIELD(arg0, s32 *, 0x6E4)) {
            case 0:
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E60)) != 0) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) (lbl_80437DDC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x1C), (int) (0x3C));
                } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xC0), (int) (0xF));
                } else if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E68)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E6C)) != 0)) {
                    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    ((M2C_UNK (*)(void *, void *, int))spawn_particle_effect_with_flags)((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 0)), (int) (0x40));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E70)) != 0) {
                    play_sound_effect((int) (0x40032A00), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xA0), (int) (0x3C));
                }
                if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8D6C)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E74)) != 0)) {
                    play_sound_effect((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    play_sound_effect((int) (0x40032D0D), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E78)) != 0) {
                    play_sound_effect((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x80), (int) (7));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E7C)) != 0) {
                    play_pillar_sound__13TObjBoss5CtrlFv();
                }
                break;
            }
            break;
        case 1:
            ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
            copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
            ((M2C_UNK (*)(void *))advance_animation_playback)((void *) (arg0));
            return;
        }
        break;
    case 5:
        ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
        copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
        M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
        *p = 0;
        M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) & 0xFFFFFF7F);
        init_all_slots2__11TWindowCtrlFv();
        get_target_state_a__9TObjEneDDFPv((void *) (arg0));
        break;
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80062E94(u8 *arg0, u32 arg1) {
    Vec_80062E94 at;
    f32 d;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        ((VObj_80062E94 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
        reset_float_3c__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) |= 4;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            ((void (*)(f32, void *, s32))TBoss8Dragon__sub_8005FA78)(lbl_805D8E04, arg0, M2C_FIELD(arg0, s32 *, 0x60));
            if (objInBand__FP7GameObjf(arg0, lbl_805D8D88) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
            }
            break;
        case 1:
            d = get_speed_or_default__10TObjPlayerFPv(arg0) - lbl_805D8D88;
            M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC) + lbl_805D8E8C * -(d * d) / lbl_805D8E90;
            TBoss8Dragon__sub_8005FA78(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8E04);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8E94) != 0) {
                clear_timer__12TBoss8DragonFPv((void*)(arg0));
                reset_angle__12TBoss8DragonFPv((void*)(arg0));
                play_se__12TBoss8DragonFii((s32)(arg0), (s32)(0x40032D0D));
                at.x = M2C_FIELD(arg0, f32 *, 0x38);
                at.y = lbl_805D8D5C;
                at.z = M2C_FIELD(arg0, f32 *, 0x40);
                spawn_particle_effect_with_flags((void *)(&at), (M2C_UNK)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (M2C_UNK)(0x40));
                set_shake_preset__11TCameraCtrlFi(1);
                TBoss8Dragon__sub_800646F0((s32)(arg0));
                M2C_FIELD(arg0, s32 *, 0x6DC) = 2;
            }
            break;
        case 2:
            if (((s32 (*)(void *))TBoss8Dragon__sub_8005FAE0)(arg0) != 0) {
                ((M2C_UNK (*)(void *))advance_motion_entry__12TBoss8DragonFPv)(arg0);
            }
            break;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8E98) != 0) {
            TBoss8Dragon__sub_80063F34(arg0);
        }
        break;
    case 5:
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) &= ~4;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
void TBoss8Dragon__sub_80063320(u8 *arg0, u32 arg1) {
    f32 d;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((VObj_80063320 *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6E0)) {
        case 0:
            if (objInBand__FP7GameObjf(arg0, lbl_805D8DF4) != 0) {
                ((void (*)(f32, void *, s32))TBoss8Dragon__sub_8005FA78)(lbl_805D8DF8, arg0, M2C_FIELD(arg0, s32 *, 0x60));
                M2C_FIELD(arg0, u32 *, 0x4C0) |= 4;
                run_default_state__12TBoss8DragonFPv((void*)(arg0));
                set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
                TCameraCtrl__sub_8006A044(0x14, lbl_805D8EA4);
                play_se__12TBoss8DragonFii((s32)(arg0), (s32)(0x40033409));
                M2C_FIELD(arg0, s32 *, 0x6E0) = 1;
            }
            break;
        case 1:
            d = get_speed_or_default__10TObjPlayerFPv(arg0) - lbl_805D8DF4;
            d = lbl_805D8DD0 * (d * d);
            M2C_FIELD(arg0, f32 *, 0x3C) = d * lbl_805D8E34 + (*(const f32 *)&lbl_805D8D84);
            TBoss8Dragon__sub_8005FA78(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8D88);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8EA8) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6E0) = 2;
            }
            break;
        case 2:
            d = lbl_805D8EAC - get_speed_or_default__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC) + (*(const f32 *)&lbl_805D8D84) * -(d * d) / lbl_805D8E14;
            TBoss8Dragon__sub_8005FA78(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D8D88);
            if (objInBand__FP7GameObjf(arg0, lbl_805D8EAC) != 0) {
                M2C_FIELD(arg0, f32 *, 0x3C) = (*(const f32 *)&lbl_805D8DEC);
                M2C_FIELD(arg0, s32 *, 0x6E0) = 3;
            }
            break;
        case 3:
            ((void (*)(f32, void *, s32))TBoss8Dragon__sub_8005FA78)(lbl_805D8D88, arg0, M2C_FIELD(arg0, s32 *, 0x60));
            if (((s32 (*)(void *))TBoss8Dragon__sub_8005FAE0)(arg0) != 0) {
                ((M2C_UNK (*)(void *))advance_motion_entry__12TBoss8DragonFPv)(arg0);
            }
            break;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0 || objInBand__FP7GameObjf(arg0, lbl_805D8EB0) != 0) {
            TBoss8Dragon__sub_80063F34(arg0);
        }
        break;
    case 5:
        set_flag_4e4__12TBoss8DragonFPv((void*)(arg0));
        reset_float_3c__12TBoss8DragonFPv((void*)(arg0));
        M2C_FIELD(arg0, u32 *, 0x4C0) &= ~4;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_10;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1) {
    f32 spd;
    switch (arg1) {
    case 4:
        arg0->fb8 = 1;
        ((VObj_80063570 *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        arg0->flags |= 0x10;
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        advance_animation_playback(arg0);
        TBoss8Dragon__sub_80064E3C((u8 *)arg0);
        ((M2C_UNK (*)(void *))update_velocity__9TObjEneDDFPv)(arg0);
        TBoss8Dragon__sub_800648C8((u8 *)arg0);
        spd = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (spd < lbl_805D8DCC) {
            TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
        } else if (!(spd < lbl_805D8E10)) {
            if (spd < lbl_805D8E5C) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            } else if (!(spd < lbl_805D8DF4)) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            }
        }
        break;
    case 5:
        arg0->flags &= ~0x10;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_11;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1) {
    switch (arg1) {
    case 4:
        self->f_B8 = 0;
        self->m94();
        clear_timer__12TBoss8DragonFPv((void*)(self));
        reset_angle__12TBoss8DragonFPv((void*)(self));
        return;
    case 0:
        advance_animation_playback(self);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}
extern int fold_flush_12;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063714(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_switch_attack__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}
extern int fold_flush_13;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}
extern int fold_flush_14;
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_80063CDC(u8 *arg0) {
    Seg_80063CDC segs[3];
    s32 a;
    s32 b;
    void *o;

    a = (s32)(lbl_805D8D7C * (lbl_805D8D98 * (f32)rand()));
    b = (s32)(lbl_805D8D7C * (lbl_805D8D98 * (f32)rand()));
    segs[0].x = lbl_805D8EB8 * sin_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[0].y = lbl_805D8D5C;
    segs[0].z = lbl_805D8EB8 * cos_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[0].w = lbl_805D8D5C;
    segs[2].x = lbl_805D8EB8 * sin_table_lookup(b) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[2].y = lbl_805D8D5C;
    segs[2].z = lbl_805D8EB8 * cos_table_lookup(b) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[2].w = lbl_805D8D5C;
    a = (s32)(lbl_805D8D74 * (f32)(a + b));
    if (lbl_805D8D98 * (f32)rand() > lbl_805D8D74) {
        a += 0x8000;
    }
    segs[1].x = lbl_805D8EB8 * sin_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x38);
    segs[1].y = lbl_805D8E10;
    segs[1].z = lbl_805D8EB8 * cos_table_lookup(a) + M2C_FIELD(arg0, f32 *, 0x40);
    segs[1].w = lbl_805D8D5C;
    o = __nw__7TObjectFUl(0x264);
    if (o != NULL) {
        o = __ct__25TBoss5GryphonLightningEffFv(o, arg0, segs, 3, lbl_805D8D5C, lbl_805D8D88, lbl_805D8D54);
    }
    TBoss5GryphonLightningEff__sub_80325064(o);
}
extern int fold_flush_15;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063EF4(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (lbl_805D8EBC)) != 0) {
        TBoss8Dragon__sub_80063F34((u8 *)((void *) (arg0)));
    }
}
extern int fold_flush_16;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80063F34(u8 *arg0) {
    Stack_80063F34 stack;
    f32 temp_f1;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void*)((void *) (&stack.sp8)), (void*)((void *) (arg0 + 0x38)));
    temp_r3 = csnVecterUnder(&stack.sp8, 0x16EF);
    if (temp_r3 != NULL) {
        temp_f1 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        if (!(temp_f1 > lbl_805D8D70)) {
            stack.spC = temp_f1;
            spawn_particle_effect_with_flags((void *)((void *) (&stack.sp8)), (M2C_UNK)((void *) (*M2C_FIELD(arg0, s32 **, 0x5F0))), (M2C_UNK)((int) (0x40)));
            play_se__12TBoss8DragonFii((s32)((void *) (arg0)), (s32)((int) (0x40032D01)));
        }
    }
}
extern int fold_flush_17;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1) {
    struct CopyStack_80064114 { u8 bytes[0x14]; };
    CopyStack_80064114 copy_storage_80064114;
    u8 *temp_r4;
    temp_r4 = (u8 *)&lbl_80437D68.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064114.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    (*(f32 *)(copy_storage_80064114.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_80064114_lbl_804FF5B4 *)&lbl_804FF5B4).value, u8 **, 8), f32 *, 4);
    TBoss8Dragon__sub_80067074((void *)(arg1), (void *)((s32) (copy_storage_80064114.bytes)));
    setup_instance__9TObjEneDDFiiPvi(arg0, arg1, (copy_storage_80064114.bytes), 0);
}
extern int fold_flush_18;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800641A8(u8 *arg0) {
    struct CopyStack_800641A8 { u8 bytes[0x14]; };
    CopyStack_800641A8 copy_storage_800641A8;
    u8 *temp_r4;
    u8 *pos;
    temp_r4 = (u8 *)lbl_80437D54 - 4;
    *(M2CCopy_14 *)(copy_storage_800641A8.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    pos = arg0 + 0x468;
    if (!(M2C_FIELD(arg0, f32 *, 0x46C) > lbl_805D8E00)) {
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 4)), (int) (0));
        emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (pos), (void *) ((copy_storage_800641A8.bytes)), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
    }
}
extern int fold_flush_19;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_8006435C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8006435C, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006435C, sp10) == 0x8) ? 1 : -1];
    Stack_8006435C stack;
    u8 *temp_r31;
    u8 *temp_r31_2;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437D2C.value));
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0xC)), (int) (0));
    temp_r31 = (u8 *)(arg0 + 0x444);
    stack.sp10 = lbl_805D8EAC;
    TBoss8Dragon__sub_800670E0((int) (temp_r31), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    temp_r31_2 = (u8 *)(arg0 + 0x3C0);
    stack.sp10 = lbl_805D8DD0;
    TBoss8Dragon__sub_800670E0((int) (temp_r31_2), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31_2), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
}
extern int fold_flush_20;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064694(s32 arg0) {
    struct CopyStack_80064694 { u8 bytes[0x14]; };
    CopyStack_80064694 copy_storage_80064694;
    u8 *temp_r5;
    temp_r5 = (u8 *)&lbl_80437CF0.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064694.bytes) = *(const M2CCopy_14 *)((s32) temp_r5 + 4);
    TBoss8Dragon__sub_800670E0((int)((void *) (arg0 + 0x3C0)), (void *)((void *) ((copy_storage_80064694.bytes))));
}
extern int fold_flush_21;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800646F0(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800646F0, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800646F0, sp10) == 0x8) ? 1 : -1];
    Stack_800646F0 stack;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437944.value));
    stack.sp10 = M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8), f32 *, 0x10);
    TBoss8Dragon__sub_80064C94((void *) (arg0), (void *) (M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8)));
    TBoss8Dragon__sub_80067074((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    emit_effect_at_position__9TObjEneDDFPvPv((void *) (arg0), (void *) (&stack.sp8));
    TBoss8Dragon__sub_80064CFC((s32)((void *) (arg0)));
}
extern int fold_flush_22;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void run_default_state__12TBoss8DragonFPv(void* p) { query_default__12TBoss8DragonFPv((void*)((void*)(p))); attack_default__12TBoss8DragonFPv((void*)((void*)(p))); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int update_state_3__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(3)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int set_state_2__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(2)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int attack_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int query_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(0)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064828(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}
extern int fold_flush_23;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_800648C8(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}
extern int fold_flush_24;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TBoss8Dragon__sub_80064968(void *arg0, int arg1) {
    M2CCopy_14 prm;
    Vec_80064968 *p;
    prm = lbl_80437CDC;
    fn_8002B094(((Obj_80064968 *)arg0)->f578);
    p = &((Obj_80064968 *)arg0)->parts[lbl_80437CCC[arg1]];
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    TBoss8Dragon__sub_80067074(p, &prm);
    emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)p, &prm, ((Obj_80064968 *)arg0)->f578);
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    spawn_particle_effect_with_flags(p, ((Obj_80064968 *)arg0)->f5f0->f8, 0x40);
    spawn_attack_effect__12TBoss8DragonFPv(p);
}
extern int fold_flush_25;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((void*)((char*)a1 + 0x4), (void*)((char*)p + 0x38)); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); TBoss8Dragon__sub_80065F4C(a1); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self) {
    P_80064AB0 p;
    TBoss8Dragon__sub_800660A4(&p);
    p.id = self->id;
    p.kind = self->kind;
    p.x = self->x;
    p.z = self->z;
    TBoss8Dragon__sub_8006602C(&p);
}
extern int fold_flush_26;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1) {
    s16 temp_r4;
    VecCopy__FP3VecPC3Vec((void*)((void *) (arg0 + 0x484)), (void*)((void *) (arg1 + 4)));
    ((f32 (*)(void *, void *))subtract_vector)((void *) (arg0 + 0x484), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    TBoss8Dragon__sub_80064B90((u8 *)((void *) (arg0 + 0x494)), (u8 *)((void *) (arg1 + 0x14)));
    M2C_FIELD(arg0, s16 **, 0x4BC) = (s16 *) (arg0 + 0x494);
    temp_r4 = *M2C_FIELD(arg0, s16 **, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != temp_r4) {
        ((s32 (*)(void *, int))transition_enemy_state)((void *) (arg0), (int) (temp_r4));
    }
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 2);
}
extern int fold_flush_27;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    *(M2CCopy_10 *)((s32) arg0 + 4) = *(const M2CCopy_10 *)((s32) arg1 + 4);
}
extern int fold_flush_28;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6xA0_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    TBoss8Dragon__sub_80065F80(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss8Dragon__sub_80064B08((u8 *)(x), (u8 *)(arg0));
    }
}
extern int fold_flush_29;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1) {
    enemy_set_target_id(arg0, (u16) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}
extern int fold_flush_30;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x9F_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    bswap_boss_actions__12TBoss8DragonFi(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_target_from_action__12TBoss8DragonFPvPv((void *)(x), (void *)(arg0));
    }
}
extern int fold_flush_31;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064CFC(s32 arg0) {
    reload_stats_keep_hp_tp__9TObjEneDDFPv((void *) (arg0), (int) (M2C_FIELD(&lbl_805D4D98, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x48) * 4))), (int) (M2C_FIELD(&(*(RecoveredGlobal_80064CFC_lbl_804FF5A0 *)&lbl_804FF5A0).value, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x54) * 4))), (int) (M2C_FIELD(&lbl_805D4D9C, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x60) * 4))));
}
extern int fold_flush_32;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_radius__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_anim_speed__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_float_3c__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_angle__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_attack_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_flag_4e4__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064DB8(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}
extern int fold_flush_33;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80064E3C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}
extern int fold_flush_34;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    play_persistent_sound(arg1, arg0, arg0 + 0x560, 0, 0);
}
extern int fold_flush_35;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    ((M2C_UNK (*)(s32, s32, M2C_UNK, M2C_UNK))play_sound_effect)(arg1, arg0 + 0x560, 0, 0);
}
extern int fold_flush_36;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_epsilon_position__12TBoss8DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D8EC8);
}
extern int fold_flush_37;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void shift_position_history__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x2FC), (void*)(arg0 + 0x3C0));
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x74), (void*)(arg0 + 0x2FC));
}
extern int fold_flush_38;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065360(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065364(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_80065368(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss8Dragon__sub_8006536C(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj) {
    if (!(M2C_FIELD(obj, s32 *, 0x4C0) & 0xC) && (M2C_FIELD(obj, s16 *, 0x32C) <= 0)) {
        ((M2C_UNK (*)(void))set_animation_by_state__12TBoss8DragonFPv)();
    } else {
        obj->vcall(M2C_FIELD(obj, s16 *, 0x326), 9);
    }
}
extern int fold_flush_39;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
Obj_80065658 *TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_804882C8;
        for (i = 15; i >= 0; i--) {
            if (o->objs[i] != 0) {
                queue_destruction__7TObjectFv(o->objs[i]);
                o->objs[i] = 0;
            }
        }
        if (o->f57c != 0) {
            delete o->f57c;
            o->f57c = 0;
        }
        if (o->f578 != 0) {
            TBoss8Dragon__sub_800BC5A0(o->f578, 1);
            o->f578 = 0;
        }
        free_collision_body_parts(o);
        if (lbl_805D4DBC == o) {
            lbl_805D4DBC = 0;
        }
        __destroy_arr(o->f580, (void *)TObjPlayer__sub_800D7C58, 0x1c, 4);
        __dt__7TObjectFv(o->f4c4, -1);
        __dt__9TObjEneDDFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}
extern int fold_flush_40;
#pragma pop

}
