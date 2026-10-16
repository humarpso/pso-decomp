#include "types.h"
#include "pso/enemy/TObjEneRe2Flower_EffCurse3.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/player/TObjEneRe2Flower_Bomb.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/TObject.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"
extern "C" { __declspec(section ".sdata2") extern const f32 lbl_805DA000[1] = { 30.0f }; }

struct VBase_18_90ef41 { char pad[0x18]; };

struct VObj_18_90ef41 : VBase_18_90ef41 {
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
    virtual s32 m90();
    virtual void m91();
    virtual s32 m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual s32 m96();
};

struct CBase_800c63cc { char pad[0x18]; };

struct CV_800c63cc : CBase_800c63cc {
    virtual void pad00(); virtual void pad01(); virtual void pad02(); virtual void pad03(); virtual void pad04(); virtual void pad05(); virtual void pad06(); virtual void pad07(); virtual void pad08(); virtual void pad09(); virtual void pad10(); virtual void pad11(); virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15(); virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19(); virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23(); virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27(); virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31(); virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35(); virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39(); virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43(); virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47(); virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51(); virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55(); virtual void pad56(); virtual void pad57(); virtual void pad58(); virtual void pad59(); virtual void pad60(); virtual void pad61(); virtual void pad62(); virtual void pad63(); virtual void pad64(); virtual void pad65(); virtual void pad66(); virtual void pad67(); virtual void pad68(); virtual void pad69(); virtual void pad70(); virtual void pad71(); virtual void pad72(); virtual void pad73(); virtual void pad74(); virtual void pad75(); virtual void pad76(); virtual void pad77(); virtual void pad78(); virtual void pad79(); virtual void pad80(); virtual void pad81(); virtual void pad82(); virtual void pad83(); virtual void pad84(); virtual void pad85(); virtual void pad86(); virtual void pad87(); virtual void pad88(); virtual void pad89(); virtual void pad90(); virtual void pad91(); virtual void pad92(); virtual void pad93(); virtual void pad94(); virtual void pad95(); virtual void pad96(); virtual void pad97(); virtual void pad98(); virtual void pad99();
    virtual void vf100();
};

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual s32 m82();
    virtual s32 m83();
    virtual s32 m84();
    virtual s32 m85();
    virtual s32 m86();
    virtual s32 m87();
    virtual s32 m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual s32 m99();
};

typedef struct Vec_800C4A5C {
    f32 x, y, z;
} Vec_800C4A5C;

typedef struct Coll_800C4A5C {
    u8 pad0[0xC];
    f32 radius;
} Coll_800C4A5C;

typedef struct Obj_800C4A5C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vptr;
    u8 pad1C[0x38 - 0x1C];
    Vec_800C4A5C pos;
    u8 pad44[0xA4 - 0x44];
    Coll_800C4A5C *coll;
    u8 padA8[0xB0 - 0xA8];
    u16 ownerId;
    u8 padB2[0xB4 - 0xB2];
    Vec_800C4A5C start;
    Vec_800C4A5C velA;
    Vec_800C4A5C velB;
    Vec_800C4A5C accel;
    f32 fE4;
    s32 fE8;
    s32 angle;
    f32 fF0;
    s32 fF4;
    s32 fF8;
    s32 fFC;
    s32 f100;
} Obj_800C4A5C;

typedef struct Vec_800C4B78 {
    f32 x, y, z;
} Vec_800C4B78;

typedef struct Ent_800C4B78 {
    u8 pad0[0x38];
    Vec_800C4B78 pos;
} Ent_800C4B78;

typedef struct Obj_800C4B78 {
    u8 pad0[0x1C];
    s32 timer;
    Ent_800C4B78 *target;
    s32 effect;
} Obj_800C4B78;

typedef struct Obj_800C55E0 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Obj_800C55E0;

struct VBase_18_d4e8d1 { char pad[0x18]; };

struct VObj_18_d4e8d1 : VBase_18_d4e8d1 {
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
    virtual f64 m93();
};

struct Vec_800C5900 { f32 x, y, z; };

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
    virtual s32 m17(s32);
};

struct VBase_800C53DC { char pad[0x18]; };

struct Tgt_800C53DC : VBase_800C53DC {
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
    virtual void m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual void m23(void *, f32);
};

struct Self_800C53DC : VBase_800C53DC {
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
    virtual void m97();
    virtual void m98();
    u8 pad1C[0x38 - 0x1C];
    u8 pos[0xB4 - 0x38];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    Tgt_800C53DC *target;
    u8 pad2AC[0x328 - 0x2AC];
    s16 f328;
    u8 pad32A[0x338 - 0x32A];
    u16 f338;
    u8 pad33A[0x33C - 0x33A];
    s16 f33C;
    u8 pad33E[0x350 - 0x33E];
    s32 *f350;
};

struct Vec_800C57F0 { s32 x, y, z; };

struct VBase_800C57F0 { char pad[0x18]; };

struct VObj_800C57F0 : VBase_800C57F0 {
#define V(n) virtual void m##n();
#define V10(n) V(n##0) V(n##1) V(n##2) V(n##3) V(n##4) V(n##5) V(n##6) V(n##7) V(n##8) V(n##9)
    V10() V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
    V(90) V(91) V(92) V(93) V(94) V(95) V(96)
    virtual void m97();
#undef V
#undef V10
};

struct Sub350_800C57F0 { char pad[8]; void *p8; };

struct SubA4_800C57F0 { char pad[0xC]; f32 rC; };

struct Tgt_800C57F0 { char pad[0x2FC]; Vec_800C57F0 pos; };

struct Self_800C57F0 : VObj_800C57F0 {
    char pad1c[0xA4 - 0x1C];
    SubA4_800C57F0 *a4;
    char pada8[0x2A8 - 0xA8];
    Tgt_800C57F0 *target;
    char pad2ac[0x308 - 0x2AC];
    u8 f308[0x326 - 0x308];
    s16 f326;
    s16 f328;
    char pad32a[0x350 - 0x32A];
    Sub350_800C57F0 *f350;
    char pad354[0x374 - 0x354];
    s16 f374;
    char pad376[0x398 - 0x376];
    f32 f398;
};

struct VBase_18_965ca6 { char pad[0x18]; };
struct VObj_18_965ca6 : VBase_18_965ca6 {
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
    virtual s32 m95();
};
struct Vec_800C5164 { f32 x, y, z; };
struct VBase_18_f9c8ca { char pad[0x18]; };
struct VObj_18_f9c8ca : VBase_18_f9c8ca {
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
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct VBase_18_189925 { char pad[0x18]; };

struct VObj_18_189925 : VBase_18_189925 {
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
    virtual s32 m17(s32);
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
    virtual s32 m93();
};

struct Vec_800C5B10 { f32 x, y, z; };

struct Ctl_800C5B10 { u8 pad[0x8]; void *field_8; };

struct Player_800C5B10 : VObj_18_189925 {
    u8 pad1C[0x38 - 0x1C];
    Vec_800C5B10 pos;
    u8 pad44[0x60 - 0x44];
    s32 field_60;
    u8 pad64[0xB4 - 0x64];
    u32 field_B4;
    s16 field_B8;
    u8 padBA[0x2A8 - 0xBA];
    Player_800C5B10 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800C5B10 pos2;
    u8 pad308[0x318 - 0x308];
    s32 field_318;
    u8 pad31C[0x326 - 0x31C];
    s16 field_326;
    s16 field_328;
    u8 pad32A[0x34C - 0x32A];
    u32 field_34C;
    Ctl_800C5B10 *field_350;
};

extern "C" {
struct Obj_800C5164 {
    u8 pad0[0x38];
    u8 f38;
    u8 pad39[0x60 - 0x39];
    s32 f60;
    u8 pad64[0xB4 - 0x64];
    u32 fB4;
    u8 padB8[0x2B8 - 0xB8];
    s16 f2B8;
    u8 pad2BA[0x2FC - 0x2BA];
    Vec_800C5164 f2FC;
    f32 f308;
    f32 f30C;
    f32 f310;
    u8 pad314[0x32C - 0x314];
    s16 f32C;
    u8 pad32E[0x334 - 0x32E];
    s32 f334;
    u8 pad338[0x33E - 0x338];
    s16 f33E;
    u8 pad340[0x354 - 0x340];
    f32 f354;
    u8 pad358[0x374 - 0x358];
    s16 f374;
};
s32 check_path_obstructed(void *, void *);
f32 get_collision_body_radius(void *, s32);
s32 pop_matrix();
s32 enemy_wander_home(void *, int, f32, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 fabs_float(f32);
f64 atan2_float(f32, f32);
s32 link_chain_nodes__10TObjPlayerFPvPvPv(void *, void *, void *);
f32 horizontal_distance_squared(void *, void *);
s32 approach_angle_limited(int, int, int);
s32 project_actor_to_ground(void *, void *, int);
s32 minimap_render_dot(void *, int, int, int);
s32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 subtract_vector(void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern const f64 lbl_8043BC88;
extern Vec_800C5164 lbl_8050BEE0;
extern Vec_800C5164 lbl_8050BF00;
extern u8 identity_matrix[];

s32 apply_actor_gravity(void *, int, f32);
s32 move_with_wall_slide(void *);
s32 obj_testFlags30(void *, int);
s32 spawn_particle_effect(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA038;
extern const f32 lbl_805DA03C;
extern const f32 lbl_805DA040;
s32 obj_testFlags30(void *, int);
void TObjPlayer__sub_800C4E08(u8 *arg0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
s32 set_indexed_flags(void *, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
extern s32 lbl_80493450[];
void *TObjPlayer__sub_800C68FC(void *arg0, s16 arg1);
extern s32 lbl_80493450[];
extern const f32 lbl_805DA034;
    extern const float lbl_805DA058;
    extern const float lbl_805DA05C;
    extern const float lbl_805DA060;
    extern const float lbl_805DA064;
s32 update_movement_status__10TObjPlayerFv(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 submit_cursor_candidate(void *, int);
extern const f32 lbl_805DA048;
s32 obj_clearFlags30(void * a0, s32 a1);
s32 update_action_hold_status__10TObjPlayerFv(void *);
extern void *player_render_texture_buffer;
void TLobby__sub_803DA16C(void *);
void mem_free(void *);
void TObjPlayer__sub_800C4D44(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
u8 *construct_collision_body(u8 *arg0, s32 arg1, u32 arg2);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
Obj_800C4A5C *TObjPlayer__sub_800C4A5C(Obj_800C4A5C *o, void *owner, Vec_800C4A5C *start, s32 angle);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
s32 subtract_vector(void *, void *);
extern u8 *camera_ctrl_instance;
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
extern const f32 lbl_805DA03C;
s32 apply_actor_gravity(void *, int, f32);
s32 enemy_move_toward(void *, s32, void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_clearFlags30(void * a0, s32 a1);
void TObjPlayer__sub_800C4E08(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA044;
extern const f32 lbl_805DA054;
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DA028;
extern const f32 lbl_805DA02C;
extern const f32 lbl_805DA030;
s32 update_target_near_flag(void *arg0);
s32 apply_actor_gravity(void *, int, f32);
s32 enemy_turn_toward_dest(void *, s32);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 get_current_floor(void);
Tgt_800C53DC *get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
Tgt_800C53DC *get_player_by_client_id(u16);
s32 minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA048;
extern const f32 lbl_805DA04C;
extern const f32 lbl_805DA050;
void beast_update_attack(Self_800C53DC *arg0);
f32 enemy_backstep_from_point(void *, void *, f32);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 obj_testFlags30(void *, int);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 apply_actor_gravity(void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 subtract_vector(void *, void *);
extern const f64 lbl_8043BC88;
extern const f32 lbl_805DA030;
extern const f32 lbl_805DA034;
}

extern "C" {

void *destroy_and_free__21TObjEneRe2Flower_BombFs(void *arg0, s16 arg1);
void render__21TObjEneRe2Flower_BombFv(u8 *arg0);
s32 spawn_continuous_particle_effect_with_flags(s32, s32, s32);
s32 __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int queue_destruction__7TObjectFv(void*);

}

typedef struct Vec_800C4754 {
    f32 x, y, z;
} Vec_800C4754;

typedef struct Rot_800C4754 {
    s32 x, y, z;
} Rot_800C4754;

typedef struct Coll_800C4754 {
    u8 pad0[0x4];
    f32 height;
    u8 pad8[0x18 - 0x8];
    s32 flags;
} Coll_800C4754;

typedef struct Hit_800C4754 {
    u8 pad0[0x4];
    u8 *tri;
} Hit_800C4754;

struct VBase_800C4754 { char pad[0x18]; };
struct Obj_800C4754 : VBase_800C4754 {
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
    virtual s32 m14(void *, const void *);
    u8 pad1C[0x38 - 0x1C];
    Vec_800C4754 pos;
    u8 pad44[0xA4 - 0x44];
    Coll_800C4754 *coll;
    u8 padA8[0xB0 - 0xA8];
    u16 ownerId;
    u8 padB2[0xB4 - 0xB2];
    Vec_800C4754 start;
    Vec_800C4754 velA;
    Vec_800C4754 velB;
    Vec_800C4754 accel;
    f32 fE4;
    s32 fE8;
    s32 angle;
    f32 fF0;
    s32 fF4;
    s32 fF8;
    void *fFC;
    s32 f100;
};

extern "C" {

s32 VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void *);
Hit_800C4754 *csnVecterUnder(void *, int);
u32 csnVector(void *, void *, int);
void *spawn_particle_effect_with_rotation(void *, void *, int, int);
s32 enable__13TParticleCtrlFPv(void *);
s32 TObjEneDD__sub_800C2618(void *);
void *find_entity_by_id(int);
s32 vec3_add_to(void *, void *);

}
extern "C" {
void TLobby__sub_801A1FD8();
void vfunc_13__13TUnk_804AF8A0Fl();
void call_vt16_with_default__13TUnk_804928CCFv();
void vfunc_16__13TUnk_804928CCFPvPv();
void call_vt13_with_default__13TUnk_804928CCFv();
void vfunc_12__13TUnk_804B9870Fv();
void vfunc_9__13TUnk_804B9870Fv();
void apply_hit_if_active__13TUnk_804928CCFPvPf();
void apply_object_set_data();
void area_attack_apply_recoil__13TUnk_804928CCFPvf();
void area_attack_deliver_physical();
void area_attack_receive_direct();
void classify_actor_view_detail();
void vfunc_19__13TUnk_804928CCFPv();
void hit_area_targets__10TObjPlayerFPvPviUif();
void release_member_90__10TObjPlayerFv();
void render_shadows__7TObjectFv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void *destroy_and_free__21TObjEneRe2Flower_BombFs(void *arg0, s16 arg1);
void render__21TObjEneRe2Flower_BombFv(u8 *arg0);
void run_task__21TObjEneRe2Flower_BombFv(Obj_800C4754 *o);
extern const u32 lbl_8043BC10[5] = { 0xF, 0x40000000, 0x40000000, 0x0, 0x1 };
extern const char lbl_8043BC24[] = "TObjEneRe2Flower_Bomb";
s32 lbl_805D2A50 = (s32)lbl_8043BC24;
void *lbl_804933D8[24] = {
    (void *)0x0, (void *)0x0, (void *)&destroy_and_free__21TObjEneRe2Flower_BombFs, (void *)&run_task__21TObjEneRe2Flower_BombFv,
    (void *)&render__21TObjEneRe2Flower_BombFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&call_vt13_with_default__13TUnk_804928CCFv, (void *)&hit_area_targets__10TObjPlayerFPvPviUif,
    (void *)&vfunc_16__13TUnk_804928CCFPvPv, (void *)&call_vt16_with_default__13TUnk_804928CCFv, (void *)&area_attack_deliver_physical, (void *)&vfunc_19__13TUnk_804928CCFPv,
    (void *)&area_attack_apply_recoil__13TUnk_804928CCFPvf, (void *)&area_attack_receive_direct, (void *)&apply_hit_if_active__13TUnk_804928CCFPvPf, (void *)0x0,
};
}
#define lbl_8043BC10 ((const Vec_800C4A5C *)lbl_8043BC10)
#define lbl_804933D8 ((s32 *)lbl_804933D8)
extern "C" {

void TObjEneRe2Flower_Bomb::render() {
    u8 *arg0 = (u8 *)this;
    if ((s32) this->m_100 != 0) {
        ((TObjEneDD *)(arg0 + 0x38))->draw_oriented_shadow((s32)(arg0 + 0xD8), (s32)0, (u32)0);
    }
}
}
extern "C" {
void TObjEneRe2Flower_Bomb::run_task() {
    Obj_800C4754 *o = (Obj_800C4754 *)this;
    Vec_800C4754 tmp;
    Rot_800C4754 rot;
    Hit_800C4754 *hit;
    f32 d;

    switch (o->fF8) {
    case 0:
        o->fF4++;
        if ((f32)o->fF4 >= (1.5e+02f)) {
            queue_destruction__7TObjectFv(o);
            return;
        }
        if (o->fF4 >= 0x12) {
            o->fF0 -= (0.1f);
        }
        VecCopy__FP3VecPC3Vec(&tmp, &o->start);
        vec3_add_to(&tmp, &o->velB);
        tmp.y += o->fF0 - (3.0f);
        if (csnVector(&o->start, &tmp, 0x1EFF) != 0) {
            queue_destruction__7TObjectFv(o);
            return;
        }
        o->start.x += o->velA.x;
        o->start.y += o->fF0;
        o->start.z += o->velA.z;
        hit = csnVecterUnder(&o->start, 0x16EF);
        if (hit != NULL) {
            o->pos.y = *(f32 *)(hit->tri + 4);
            VecCopy__FP3VecPC3Vec(&o->accel, hit->tri + 0xC);
            o->f100 = 1;
        } else {
            o->f100 = 0;
        }
        o->pos.x = o->start.x;
        o->pos.z = o->start.z;
        d = o->start.y - o->pos.y;
        if (d > (2e+01f)) {
            o->coll->flags |= 4;
            o->coll->flags &= ~2;
        } else {
            o->coll->flags &= ~4;
            o->coll->flags |= 2;
        }
        o->coll->height = d;
        if (o->fF4 >= 0x14) {
            o->fE8 |= 2;
        }
        if (o->m14(&o->fE4, lbl_8043BC10) != 0) {
            TObjEneDD__sub_800C2618(find_entity_by_id(o->ownerId));
            queue_destruction__7TObjectFv(o);
            return;
        }
    case 1:
        break;
    }
    if (o->fFC == NULL) {
        rot.x = 0x8000;
        rot.y = o->angle;
        rot.z = 0;
        o->fFC = spawn_particle_effect_with_rotation(&o->start, &rot, 0xD0, 0x40);
        if (o->fFC != NULL) {
            enable__13TParticleCtrlFPv(o->fFC);
        }
    } else {
        ((TNowLoading *)((int)o->fFC))->copy_pos(&o->start);
    }
}

}
extern "C" {

void *TObjEneRe2Flower_Bomb::destroy_and_free(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804933D8;
        if (*(void **)((s8 *)this + 0xFC) != NULL) { queue_destruction__7TObjectFv((void*)(*(void **)((s8 *)this + 0xFC))); *(s32 *)((s8 *)this + 0xFC) = 0; }
        ((TUnk_804928CC *)this)->destroy_enemy_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

Obj_800C4A5C *TObjPlayer__sub_800C4A5C(Obj_800C4A5C *o, void *owner, Vec_800C4A5C *start, s32 angle) {
    f32 s;
    f32 c;
    construct_collision_body((u8 *)o, (s32)owner, (u32)owner);
    o->vptr = lbl_804933D8;
    o->f0 = lbl_805D2A50;
    o->coll->radius = lbl_8043BC10[0].z;
    o->angle = angle;
    o->ownerId = obj_getField1c(owner);
    VecCopy__FP3VecPC3Vec(&o->start, start);
    VecCopy__FP3VecPC3Vec(&o->pos, &o->start);
    o->accel.x = (0.0f);
    o->accel.y = (0.0f);
    o->accel.z = (0.0f);
    s = sin_table_lookup(o->angle);
    c = cos_table_lookup(o->angle);
    o->velA.x = (4.0f) * s;
    o->velA.y = (0.0f);
    o->velA.z = (4.0f) * c;
    o->velB.x = (7.0f) * s;
    o->velB.y = (0.0f);
    o->velB.z = (7.0f) * c;
    o->fE4 = (0.0f);
    o->fE8 = 1;
    o->fF0 = (0.0f);
    o->fF4 = 0;
    o->fF8 = 0;
    o->fFC = 0;
    o->f100 = 1;
    return o;
}

}
