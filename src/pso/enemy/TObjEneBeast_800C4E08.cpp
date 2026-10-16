#include "types.h"
#include "pso/enemy/TObjEneRe2Flower_EffCurse3.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjEneRe2Flower_Bomb.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TNowLoading.h"

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
int unlink_enemy_group_relations__13TUnk_80493450Fv(void*);
int send_entity_set_flags__9TObjEnemyFv(void*);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
s32 set_indexed_flags(void *, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
extern s32 lbl_80493450[];
void *TObjPlayer__sub_800C68FC(void *arg0, s16 arg1);
int initialize__9TObjEnemyFPv(void);
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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
s32 subtract_vector(void *, void *);
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
s32 test_elt_flag__13TUnk_80493450Fll(void *, int, int);
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
s32 update_angle__10TObjPlayerFlPv(void *, void *, void *);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 obj_testFlags30(void *, int);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 apply_actor_gravity(void *, int, f32);
s32 update_angle__10TObjPlayerFlPv(void *, void *, void *);
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

void __dl__7TObjectFPv(void *);
int queue_destruction__7TObjectFv(void*);

void TObjPlayer__sub_800C4E08(u8 *arg0) {
    if (obj_testFlags30((void *)(arg0), (int)(0x100000)) != 0) {
        *(f32 *)((s8 *)arg0 + 0x394) = (f32) *(f32 *)((s8 *)arg0 + 0x39C);
        *(f32 *)((s8 *)arg0 + 0xC8) = (f32) *(f32 *)((s8 *)arg0 + 0x3A4);
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x394) = (f32) *(f32 *)((s8 *)arg0 + 0x398);
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) *(f32 *)((s8 *)arg0 + 0x3A0);
}

s32 update_target_near_flag(void *arg0) {
    f32 temp_f31;
    u8 *temp_r0;
    u8 *temp_r31;
    temp_r0 = *(u8 **)((s8 *)arg0 + 0x2A8);
    if (temp_r0 == NULL) {
        obj_clearFlags30(arg0, 0x100000);
        return;
    }
    if ((obj_getField1c(temp_r0) < 0x1000U) && (((VObj_18 *)(arg0))->m17(0x1E) != 0)) {
        temp_r31 = *(u8 **)((s8 *)arg0 + 0x2A8);
        temp_f31 = horizontal_distance_squared((void *) (temp_r31 + 0x38), (void *) ((u8 *)arg0 + 0x38));
        switch (*(s32 *)((s8 *)temp_r31 + 0x890) & 0xE0) {
        case 0x20:
            if (obj_testFlags30(arg0, 0x100000) != 0) {
                if (lbl_805DA028 < temp_f31) {
                    obj_clearFlags30(arg0, 0x100000);
                }
            } else if (temp_f31 < lbl_805DA02C) {
                obj_setFlags30(arg0, 0x100000);
            }
            break;
        default:
            if (obj_testFlags30(arg0, 0x100000) != 0) {
                if (lbl_805DA030 < temp_f31) {
                    obj_clearFlags30(arg0, 0x100000);
                }
            } else if (temp_f31 < lbl_805DA028) {
                obj_setFlags30(arg0, 0x100000);
            }
            break;
        }
    } else {
        obj_setFlags30(arg0, 0x100000);
    }
}

int TUnk_80493450::beast_retire_corpse() { return queue_destruction__7TObjectFv((void*)(this)); }
void TUnk_80493450::beast_update_dead() {
    u8 *arg0 = (u8 *)this;
    advance_animation_playback();
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA034)) != 0) {
        ((VObj_18_90ef41 *)(arg0))->m96();
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA038)) != 0) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
        ((VObj_18_90ef41 *)(arg0))->m92();
    }
    if (this->m_c0 < (lbl_805DA03C * (lbl_805DA040 * this->m_c8))) {
        move_with_wall_slide((void *) (arg0));
        *(f32 *)((s8 *)arg0 + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x308) * lbl_805DA03C);
        this->m_310 = (f32) (this->m_310 * lbl_805DA03C);
    } else if (obj_testFlags30((void *) (arg0), (int) (0x800000)) == 0) {
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA034));
    }
    *(f32 *)((s8 *)arg0 + 0x380) = (f32) (*(f32 *)((s8 *)arg0 + 0x380) - this->m_384);
    if (*(f32 *)((s8 *)arg0 + 0x380) <= *(f32 *)((s8 *)arg0 + 0x388)) {
        ((VObj_18_90ef41 *)(arg0))->m90();
    }
}
void TObjPlayer::enter_state_8() { if (*(short *)&this->m_326 != 8) { *(short *)&this->m_326 = 8; *(short *)&this->unk_B8 = 8; unlink_enemy_group_relations__13TUnk_80493450Fv(this); clear_player_status_flag((s32)((void*)0), (u32)((void*)1)); refresh_lobby_state(); send_entity_set_flags__9TObjEnemyFv(this); } }
void TUnk_80493450::beast_update_hurt() {
    u8 *arg0 = (u8 *)this;
    Obj_800C5164 *o = (Obj_800C5164 *)arg0;
    Vec_800C5164 v;

    advance_animation_playback();
    VecCopy__FP3VecPC3Vec(&v, &o->f2FC);
    lbl_8050BEE0.x = lbl_8050BEE0.y = lbl_805DA034;
    lbl_8050BEE0.z = get_collision_body_radius(o, 0);
    ((void (*)(void *, void *))push_matrix_from)(identity_matrix, &lbl_8050BEE0);
    rotate_matrix_y(0, -o->f60);
    rotate_vector_by_matrix(0, &lbl_8050BEE0, &lbl_8050BEE0);
    pop_matrix();
    vec3_add_to(&v, &lbl_8050BEE0);
    v.x += o->f308;
    v.z += o->f310;
    if (check_path_obstructed(o, &v) == 0) {
        move_with_wall_slide(o);
        o->f308 *= lbl_805DA03C;
        o->f310 *= lbl_805DA03C;
    } else {
        o->f308 = o->f310 = lbl_805DA034;
    }
    ((TObjPlayer *)o)->update_collisions();
    if (objInBand__FP7GameObjf(o, lbl_805DA034) != 0) {
        ((VObj_18_965ca6 *)(arg0))->m95();
    }
    if (o->fB4 != 8) {
        obj_clearFlags30(o, 0x600);
        ((TObjPlayer *)o)->clear_player_status_flag((s32)((void *)0), (u32)((void *)0x04000000));
        if (o->f334 == 0) {
            if ((f32)o->f32C < (f32)o->f2B8 * o->f354) {
                obj_clearFlags30(o, 0x1000);
                o->f374 = (s16)(lbl_805DA044 * (lbl_805DA048 + o->f354));
            }
        }
        o->f33E = o->f32C;
    }
    minimap_render_dot(&o->f38, -0x5DB4, 1, 0);
}
void TObjPlayer::enter_state7() {
    if ((s16) this->m_326 != 7) {
        this->m_326 = 7;
        *(s16 *)&this->unk_B8 = 6;
    }
    obj_clearFlags30(this, 0x240000);
}
void TUnk_80493450::vfunc_89() {  }
void TUnk_80493450::vfunc_61() { obj_clearFlags30(this, 256); }

void beast_update_attack(Self_800C53DC *arg0) {
    Tgt_800C53DC *p;
    if (arg0->f338 < 0x1000) {
        p = get_player_by_client_id(arg0->f338);
        if (p != NULL && ((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
            arg0->target = p;
        } else {
            arg0->target = NULL;
        }
    } else if (arg0->f338 < 0x4000) {
        arg0->target = get_enemy_entity(arg0->f338);
    } else {
        arg0->target = NULL;
    }
    ((s32 (*)(void *))advance_animation_playback)(arg0);
    switch (arg0->f328) {
    case 0:
        arg0->f328 = 1;
    case 1:
        if (objInBand__FP7GameObjf(arg0, lbl_805DA04C) != 0) {
            if (arg0->target != NULL && arg0->target->m18(arg0, lbl_805DA048) != 0) {
                arg0->target->m20(arg0, lbl_805DA048);
                arg0->target->m23(arg0, lbl_805DA050);
            }
            arg0->m94();
        }
        arg0->m91();
        if (arg0->fB4 != 4) {
            arg0->f328 = 2;
            arg0->fB8 = 0;
            arg0->f33C = 0xF;
        }
        break;
    case 2:
        arg0->f33C--;
        if (arg0->f33C < 0) {
            obj_clearFlags30(arg0, 0x200000);
            arg0->f33C = 0;
            arg0->m98();
        }
        break;
    }
    apply_actor_gravity(arg0, 0, lbl_805DA034);
    enemy_turn_toward_dest(arg0, arg0->f350[2]);
    ((TObjPlayer *)arg0)->update_collisions();
    minimap_render_dot(arg0->pos, -0x5DB4, 1, 0);
}

void TUnk_80493450::vfunc_60() {
    Obj_800C55E0 *o = (Obj_800C55E0 *)this;
    switch (o->state) {
    case 0:
        break;
    case 1:
        o->f328 = 0;
        if (o->f34C == NULL) {
            o->state = 3;
            o->fB8 = 7;
        } else {
            o->state = 2;
            o->fB8 = 10;
        }
        obj_clearFlags30(o, 0x04040000);
        ((TObjPlayer *)o)->clear_player_status_flag((s32)((void *)0), (u32)((void *)0x0A000000));
        break;
    case 2:
        break;
    default:
        o->state = 5;
        o->f328 = 1;
        if (lbl_805DA03C < calc_boss4_scale__10TObjPlayerFi(o)) {
            o->fB8 = 3;
        } else {
            o->fB8 = 4;
        }
        obj_setFlags30(o, 0x200000);
        obj_clearFlags30(o, 0x04040000);
        ((TObjPlayer *)o)->clear_player_status_flag((s32)((void *)0), (u32)((void *)0x0A000000));
        break;
    }
}

s32 TUnk_80493450::update_movement_status() {
    u8 *arg0 = (u8 *)this;
  if (update_movement_status__10TObjPlayerFv((void *) arg0) != 0)
  {
    if ((*((s16 *) (((s8 *) arg0) + 0x326))) != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 0;
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x04040000));
      ((TObjPlayer *)arg0)->clear_player_status_flag((s32)((void*)((int) 0)), (u32)((void*)((int) 0x0A000000)));
    }
    return 1;
  }
  return 0;
}

s32 TUnk_80493450::update_action_hold_status() {
    u8 *arg0 = (u8 *)this;
  if (update_action_hold_status__10TObjPlayerFv((void *) arg0) != 0)
  {
    if ((*((s16 *) (((s8 *) arg0) + 0x326))) != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 0;
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x04040000));
      ((TObjPlayer *)arg0)->clear_player_status_flag((s32)((void*)((int) 0)), (u32)((void*)((int) 0x0A000000)));
    }
    return 1;
  }
  return 0;
}
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())

void TUnk_80493450::beast_update_group_chase() {
    Self_800C57F0 *arg0 = (Self_800C57F0 *)this;
    f32 d;
    f32 r;
    advance_animation_playback();
    switch (arg0->f328) {
    case 0:
        arg0->f328 = 1;
        arg0->m97();
        break;
    }
    Tgt_800C57F0 *t = arg0->target;
    if (t != NULL) {
        Vec_800C57F0 v = t->pos;
        d = enemy_backstep_from_point(arg0, &v, arg0->f398);
        update_angle__10TObjPlayerFlPv(arg0, arg0->f350->p8, arg0->f308);
        r = arg0->f398 + arg0->a4->rC;
        if (d < r * r) {
            arg0->f326 = 3;
            arg0->f328 = 0;
            obj_clearFlags30(arg0, 0x1000);
            arg0->f374 = 0;
        }
    }
    ((TObjPlayer *)arg0)->update_collisions();
    minimap_render_dot((u8 *)arg0 + 0x38, -0x5DB4, 1, 0);
}

void TUnk_80493450::beast_update_approach() {
    u8 *arg0 = (u8 *)this;
    Vec_800C5900 sp14;
    f32 r;
    switch (this->phase) {
    case 0:
        apply_actor_gravity(arg0, 0, lbl_805DA034);
        ((void (*)(void *))advance_animation_playback)(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA034) != 0) {
            ((VObj_18_d4e8d1 *)(arg0))->m93();
        }
        if (this->m_b4 != 0x20U) {
            this->phase = 1;
            this->m_b8 = 2;
        }
        break;
    default:
        if (*(u32 *)&this->target != 0U) {
            if (test_elt_flag__13TUnk_80493450Fll(arg0, 0, 0x300000) != 0) {
                if ((f32) (this->m_38c)++ < lbl_805DA054) {
                    VecCopy__FP3VecPC3Vec(&sp14, arg0 + 0x50);
                } else {
                    VecCopy__FP3VecPC3Vec(&sp14, (void *) (*(u32 *)&this->target + 0x2FC));
                }
            } else {
                this->m_38c = 0U;
                VecCopy__FP3VecPC3Vec(&sp14, (void *) (*(u32 *)&this->target + 0x2FC));
            }
            update_target_near_flag((void *)(arg0));
            TObjPlayer__sub_800C4E08(arg0);
            ((void (*)(void *))advance_animation_playback)(arg0);
            {
                Vec_800C5900 sp8 = sp14;
                enemy_move_toward(arg0, *(s32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 8), &sp8, 0, *(f32 *)&this->unk_394);
            }
            if (this->targetId == 0xFFFF) {
                if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < (r = *(f32 *)&this->unk_394 + *(f32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0xC)) * r ||
                    lbl_805DA044 < (f32) (*(s32 *)&this->m_2ac)++) {
                    *(u32 *)&this->target = 0U;
                    *(s32 *)&this->m_2ac = 0;
                }
            }
        }
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x200000);
}

void TUnk_80493450::update_turn_toward_target() {
    Player_800C5B10 *arg0 = (Player_800C5B10 *)this;
    s32 ang;
    advance_animation_playback();
    switch (arg0->field_328) {
    case 0:
        if (objInBand__FP7GameObjf(arg0, lbl_805DA034) != 0) {
            arg0->m93();
        }
        if (arg0->field_B4 != 0x20) {
            arg0->field_328 = 1;
            arg0->field_B8 = 2;
        }
        break;
    case 1:
        if (arg0->target != NULL && arg0->m17(0x1E) != 0) {
            Vec_800C5B10 d;
            VecCopy__FP3VecPC3Vec(&d, &arg0->target->pos2);
            subtract_vector(&d, &arg0->pos2);
            ang = update_angle__10TObjPlayerFlPv(arg0, arg0->field_350->field_8, &d);
            if (d.x * d.x + d.z * d.z < lbl_805DA030 || arg0->field_34C == 0) {
                arg0->field_326 = 3;
                arg0->field_328 = 1;
                arg0->field_B8 = 2;
            } else if (ang <= ((TObjPlayer *)(arg0->field_318))->get_field_0c()) {
                arg0->field_328 = 2;
                arg0->field_B8 = 0;
            }
        }
        break;
    case 2:
        if (arg0->target != NULL && arg0->m17(0x1E) != 0) {
            Vec_800C5B10 d;
            VecCopy__FP3VecPC3Vec(&d, &arg0->target->pos2);
            subtract_vector(&d, &arg0->pos2);
            ang = angle_difference_abs(arg0->field_60, (s32)(lbl_8043BC88 * atan2_float(d.x, d.z)));
            if (d.x * d.x + d.z * d.z < lbl_805DA030 || arg0->field_34C == 0) {
                arg0->field_326 = 3;
                arg0->field_328 = 1;
                arg0->field_B8 = 2;
            } else if (((TObjPlayer *)(arg0->field_318))->get_field_0c() < ang) {
                arg0->field_328 = 1;
                arg0->field_B8 = 2;
            }
        }
        break;
    }
    apply_actor_gravity(arg0, 0, lbl_805DA034);
    ((TObjPlayer *)arg0)->update_collisions();
    minimap_render_dot(&arg0->pos, -0x5DB4, 1, 0);
}

void TUnk_80493450::vfunc_59() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    if (obj_testFlags30(arg0, 0x1000) != 0) {
        this->mode = 4;
    }
    temp_r0 = this->mode;
    switch (temp_r0) {
    case 1:
        this->phase = 0;
        if ((u32) *(u32 *)&this->children == 0U) {
            this->mode = 3;
            this->m_b8 = 7;
        } else {
            this->mode = 2;
            this->m_b8 = 0xA;
        }
        obj_clearFlags30(arg0, 0x04040000);
        ((TObjPlayer *)arg0)->clear_player_status_flag((s32)((void*)(0)), (u32)((void*)(0x0A000000U)));
        break;
    case 2:
    case 3:
        break;
    case 4:
        this->m_b8 = 5;
        break;
    default:
        this->mode = 3;
        this->phase = 1;
        this->m_b8 = 2;
        obj_clearFlags30(arg0, 0x04040000);
        ((TObjPlayer *)arg0)->clear_player_status_flag((s32)((void*)(0)), (u32)((void*)(0x0A000000U)));
        break;
    }
}

void TUnk_80493450::beast_idle_update() {
    u8 *arg0 = (u8 *)this;
    f32 r;
    f32 dist;
    f32 range;
    s32 diff;
    s32 angle;
    s32 angle2;
    u8 *other;

    update_target_near_flag(arg0);
    TObjPlayer__sub_800C4E08(arg0);
    ((void (*)(void *))advance_animation_playback)(arg0);
    if (this->phase != 1) {
        this->phase = 1;
        ((TUnk_80493450 *)arg0)->link_into_group_chain();
        *(s32 *)&this->m_378 = ((TObjPlayer *)arg0)->is_action_available();
    }
    *(s32 *)&this->m_37c = ((TUnk_80493450 *)arg0)->countChildren();
    other = *(u8 * *)&this->next;
    if (other != NULL) {
        diff = *(s32 *)((s8 *)other + 0x37C) - *(s32 *)&this->m_37c;
        if (diff > 1) {
            link_chain_nodes__10TObjPlayerFPvPvPv(arg0, other, arg0);
            *(s32 *)&this->m_37c = *(s32 *)&this->m_37c + 1;
            *(s32 *)((s8 *)other + 0x37C) = *(s32 *)((s8 *)other + 0x37C) - 1;
        } else if (diff < -1) {
            link_chain_nodes__10TObjPlayerFPvPvPv(arg0, arg0, other);
            *(s32 *)&this->m_37c = *(s32 *)&this->m_37c - 1;
            *(s32 *)((s8 *)other + 0x37C) = *(s32 *)((s8 *)other + 0x37C) + 1;
        }
    }
    dist = horizontal_distance_squared(arg0 + 0x38, arg0 + 0x50);
    range = *(f32 *)((s8 *)arg0 + 0x358) + (*(f32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 4) + *(f32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0xC));
    if (range * range < dist) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x2FC);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(&lbl_8050BEE0, arg0 + 0x50);
        subtract_vector(&lbl_8050BEE0, arg0 + 0x38);
        angle = lbl_8043BC88 * atan2_float(lbl_8050BEE0.x, lbl_8050BEE0.z);
        lbl_8050BF00.x = lbl_8050BF00.y = lbl_805DA034;
        lbl_8050BF00.z = *(f32 *)&this->unk_394;
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, angle);
        rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
        pop_matrices(1);
        vec3_add_to(&lbl_8050BF00, arg0 + 0x38);
        if (project_actor_to_ground(arg0, &lbl_8050BF00, 0) == 1) {
            this->m_b8 = 2;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_8050BF00);
            this->rotation_y = approach_angle_limited(this->rotation_y, angle, *(s32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 8));
            goto end;
        }
        r = fabs_float(lbl_8050BEE0.z);
        if (fabs_float(lbl_8050BEE0.x) < r) {
            angle = lbl_8043BC88 * atan2_float(lbl_8050BEE0.x, lbl_805DA034);
        } else {
            angle = lbl_8043BC88 * atan2_float(lbl_805DA034, lbl_8050BEE0.z);
        }
        lbl_8050BF00.x = lbl_8050BF00.y = lbl_805DA034;
        lbl_8050BF00.z = *(f32 *)&this->unk_394;
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, angle);
        rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
        pop_matrices(1);
        vec3_add_to(&lbl_8050BF00, arg0 + 0x38);
        if (project_actor_to_ground(arg0, &lbl_8050BF00, 0) == 1) {
            this->m_b8 = 2;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_8050BF00);
            this->rotation_y = approach_angle_limited(this->rotation_y, angle, *(s32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 8));
            goto end;
        }
        r = fabs_float(lbl_8050BEE0.z);
        if (fabs_float(lbl_8050BEE0.x) < r) {
            angle2 = lbl_8043BC88 * atan2_float(lbl_805DA034, lbl_8050BEE0.z);
        } else {
            angle2 = lbl_8043BC88 * atan2_float(lbl_8050BEE0.x, lbl_805DA034);
        }
        lbl_8050BF00.x = lbl_8050BF00.y = lbl_805DA034;
        lbl_8050BF00.z = *(f32 *)&this->unk_394;
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, angle2);
        rotate_vector_by_matrix(0, &lbl_8050BF00, &lbl_8050BF00);
        pop_matrices(1);
        vec3_add_to(&lbl_8050BF00, arg0 + 0x38);
        if (project_actor_to_ground(arg0, &lbl_8050BF00, 0) == 1) {
            this->m_b8 = 2;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_8050BF00);
            this->rotation_y = approach_angle_limited(this->rotation_y, angle2, *(s32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 8));
        } else {
            this->m_b8 = 2;
        }
    } else if (*(s32 *)&this->m_37c == 0 && lbl_805DA034 < *(f32 *)((s8 *)arg0 + 0x358)) {
        this->m_b8 = 2;
        ((s32 (*)(void *, f32, int, f32, f32))enemy_wander_home)(arg0, *(f32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 4), *(s32 *)((s8 *)(*(u8 * *)&this->movementParameters) + 8), *(f32 *)((s8 *)arg0 + 0x358), *(f32 *)((s8 *)arg0 + 0x358));
    } else {
        ((VObj_18_f9c8ca *)arg0)->m100();
    }
end:
    if (obj_testFlags30(arg0, 0x800000) == 0) {
        apply_actor_gravity(arg0, 0, lbl_805DA034);
    }
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x04240000);
    ((TObjPlayer *)arg0)->clear_player_status_flag((s32)((void *)0), (u32)((void *)0x0A000000));
}

void TObjPlayer::tick_freeze_state() {
    s16 temp_r0;
    temp_r0 = this->m_326;
    switch (temp_r0) {
    case 1:
        if ((s32) *(s32 *)&this->unk_390 != 0) {
            this->m_326 = 0;
            this->m_328 = 0;
        }
        break;
    case 0:
        switch ((s16) this->m_328) {
        case 2:
            if ((s32) *(s32 *)&this->unk_390 != 0) {
                this->m_328 = 0;
            }
            break;
        }
        break;
    default:
        if ((s32) *(s32 *)&this->unk_390 != 0) {
            this->m_326 = 0;
        } else {
            this->m_326 = 1;
        }
        this->m_328 = 0;
        ((CV_800c63cc *)this)->vf100();
        obj_setFlags30(this, 0x04040000);
        set_indexed_flags(this, 0, 0x0A000000);
        break;
    }
}

typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
void TUnk_80493450::run_task() {
    u8 *arg0 = (u8 *)this;
  s16 temp_r0;
  if (TObjPlayer::check_demo_mode() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        PSO_VCALL_VObj_18_477421_m81(arg0);
        break;
      case 1:
        PSO_VCALL_VObj_18_477421_m82(arg0);
        break;
      case 2:
        PSO_VCALL_VObj_18_477421_m83(arg0);
        break;
      case 3:
        PSO_VCALL_VObj_18_477421_m84(arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        break;
      case 5:
        PSO_VCALL_VObj_18_477421_m86(arg0);
        break;
      case 6:
        PSO_VCALL_VObj_18_477421_m87(arg0);
        break;
      case 7:
        PSO_VCALL_VObj_18_477421_m88(arg0);
        break;
      case 8:
        PSO_VCALL_VObj_18_477421_m89(arg0);
        break;
      case 9:
        PSO_VCALL_VObj_18_477421_m90(arg0);
        break;
    }
  }
  ((TObjEnemy *)arg0)->update_prev_position();
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  submit_cursor_candidate((void *) arg0, (int) (-1));
  *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2B4))) + lbl_805DA048);
}

void *TObjPlayer__sub_800C68FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80493450;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void*TUnk_80493450::init_enemy_base() { initialize__9TObjEnemyFPv(); *(int*)((char*)this + 0x18) = (int)((unsigned char *)&lbl_80493450); *(short *)&(this->mode) = 0; *(short *)&(this->phase) = 0; *(short *)&this->m_374 = 0; *(short *)&this->m_376 = 0; *(int *)&this->m_378 = 0; *(int *)&this->m_37c = 0; *(float *)&this->unk_380 = (*(const float *)&lbl_805DA034); *(float *)&(*(void * *)&this->m_384) = lbl_805DA058; *(float*)((char*)this + 0x388) = lbl_805DA05C; (*(int *)&this->m_38c) = 0; *(int *)&this->m_390 = 0; this->m_398 = lbl_805DA060; *(float *)&(*(s16 *)((u8 *)this + 0x39C)) = lbl_805DA064; *(float *)&(*(s32 *)&this->unk_394) = lbl_805DA060; (this->m_3a0) = lbl_805DA060; *(float *)&this->unk_3A4 = lbl_805DA064; return this; }

}
