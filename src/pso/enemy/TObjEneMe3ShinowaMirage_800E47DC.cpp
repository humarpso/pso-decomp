#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
struct Base_A_800E47DC { char pad[0x18]; };
struct V_A_800E47DC : Base_A_800E47DC {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m93();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m100();
};
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800E47DC { char pad[0x18]; };
struct VObj_DD_800E47DC : Base_VT_800E47DC {
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
    PADV4
    PADV4
    PADV
    virtual void m93();
    PADV4
    PADV
    PADV
    virtual void m100();
};
struct Base_800E7034_800E47DC { char pad[0x18]; };
struct VObj_800E7034_800E47DC : Base_800E7034_800E47DC {
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
struct Base_800E707C_800E47DC { char pad[0x18]; };
struct VObj_800E707C_800E47DC : Base_800E707C_800E47DC {
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
};

struct RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_800E4D7C_lbl_80500FF4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800F4758_lbl_8050110C {
    M2C_UNK value;
    u8 remaining[0x10];
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

struct Stack_800E6BB8 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_14_948132 { char pad[0x14]; };

struct VObj_14_948132 : VBase_14_948132 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_4a41ce
{
  char pad[0x18];
};

struct VObj_18_4a41ce : VBase_18_4a41ce {
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

struct VBase_14_763762
{
  char pad[0x14];
};

struct VObj_14_763762 : VBase_14_763762 {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_800E50D8_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0x30A];
  s32 field_3C4;
  u8 unknown_3C8[0x3C];
  s32 field_404;
};

struct Info_800E6F0C { u8 pad[0x18]; s32 frame; };

struct Obj_800E6F0C { u8 pad[0x38]; u8 pos[0x3c0 - 0x38]; s32 kind; };

typedef struct { f32 x, y, z; } Vec_800E4FE8;
struct VBase_18_fd6cbb { char pad[0x18]; };

struct VObj_18_fd6cbb : VBase_18_fd6cbb {
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
};

struct Base_800E6DD8 { u8 pad[0x18]; };

struct Obj_800E6DD8 : Base_800E6DD8 {
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
    virtual void p85();
    virtual void p86();
    virtual void p87();
    virtual void p88();
    virtual void p89();
    virtual void p90();
    virtual void p91();
    virtual void p92();
    virtual void p93();
    virtual void p94();
    virtual void p95();
    virtual void p96();
    virtual void p97();
    virtual void p98();
    virtual void p99();
    virtual void p100();
    virtual void p101();
    virtual void p102();
    virtual void p103();
    virtual void p104();
    virtual void p105();
    virtual void p106();
    virtual void p107();
    virtual void p108();
    virtual void p109();
    virtual void p110();
    virtual void v111(s32);
    virtual void v112(s32);
    virtual void v113(s32);
    virtual void v114(s32);
};

struct VBase_18_82072c { char pad[0x18]; };

struct VObj_18_82072c : VBase_18_82072c {
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
    virtual M2C_UNK m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual void m115();
    virtual M2C_UNK m116();
};

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

struct Vec_800E4DD0 { f32 x, y, z; };

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

extern "C" {
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0 TObjEneMe3ShinowaMirage__data_80500FC0;
extern RecoveredGlobal_800E4D7C_lbl_80500FF4 lbl_80500FF4;
extern s32 lbl_805D529C;
void TObjEneMe3ShinowaMirage__sub_800E4D7C(void);
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
extern RecoveredGlobal_800F4758_lbl_8050110C lbl_80500FEC;
extern u8 *TObjEneMe3ShinowaMirage__data_805D5298;
void TObjEneMe3ShinowaMirage__sub_800E6F64(u8 *arg0);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, f32);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5EC;
void TObjEneMe3ShinowaMirage__sub_800E6BB8(u8 *arg0, s32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E50D8(u8 *arg0, s32 arg1);
s32 clamp_frame_index__9TObjEneDDFi(s32);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
extern Info_800E6F0C *TObjEneMe3ShinowaMirage__data_80500FE4[];
void TObjEneMe3ShinowaMirage__sub_800E6F0C(Obj_800E6F0C *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(Vec_800E4FE8 *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BACA4(void *, f32, f32, f32);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *, s32);
extern const f32 lbl_805DA5F0;
void TObjEneMe3ShinowaMirage__sub_800E4FE8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E4FE8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E50D8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E530C(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E54E8(void *, s32);
void TObjEneMe3ShinowaReal__sub_800E5950(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E5CE4(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E5F64(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E66FC(void *, s32);
void TObjEneMe3ShinowaMirage__sub_800E6BB8(u8 *arg0, s32 arg1);
void TObjEneMe3ShinowaMirage__sub_800E6DD8(Obj_800E6DD8 *arg0, u32 arg1, s32 arg2);
s32 get_main_phase();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjEneMe3ShinowaMirage__sub_800E4D7C(void);
extern RecoveredGlobal_800E4D7C_lbl_80500FF4 lbl_80500FF4;
extern s32 *lbl_80501000[];
extern s32 lbl_805D529C;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 TObjEneMe3ShinowaReal__data_805DA5CC;
extern const f32 lbl_805DA5D8;
void TObjEneMe3ShinowaMirage__sub_800E4B40(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK init_zako__15TObjBoss2TunnelFPvPv(void *, void *, int);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(int, void *, int, void *, int);
M2C_UNK spawn_effect_f8__10TObjPlayerFii(void *, int);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern u8 lbl_8043CE00[];
extern s32 TObjEneMe3ShinowaMirage__data_805D52A0;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 lbl_805DA5E0;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5EC;
void TObjEneMe3ShinowaMirage__sub_800E4DD0(u8 *arg0, s32 arg1);
M2C_UNK TObjEneEpsilon__sub_800B9344(void *, int, f32);
M2C_UNK update_angle__14TObjEneEpsilonFPvi(void *, int);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(f32);
M2C_UNK advance_animation_playback(void *, s32);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern Info_800E6F0C *TObjEneMe3ShinowaMirage__data_80500FE4[];
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5F4;
extern const f32 lbl_805DA624;
void TObjEneMe3ShinowaMirage__sub_800E64F4(u8 *arg0, s32 arg1);
s32 TObjEneEpsilon__sub_800B95E0(void *, int);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0);
M2C_UNK advance_animation_playback(void *, s32);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5F4;
extern s32 lbl_805DA634;
void TObjEneMe3ShinowaMirage__sub_800E69F0(u8 *arg0, s32 arg1);
}

extern "C" {

struct VBase18b_800e70d4_800E47DC { char pad[0x18]; };
struct VObj18b_800e70d4_800E47DC : VBase18b_800e70d4_800E47DC {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4(void *, void *);
};

void TObjEneMe3ShinowaMirage__sub_800E4DC4(void);
void TObjEneMe3ShinowaMirage__sub_800E4DC8(void);
void TObjEneMe3ShinowaMirage__sub_800E4DCC(void);
void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1);
void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0);
int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p);
void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
int fn_800E762C(void*);
int get_target_info__9TObjEneDDFPv(void*);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);

void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { fn_800E762C(p); TObjEneMe3ShinowaMirage__sub_800E6F64((u8 *)(p)); } }

typedef char RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0_size[sizeof(RecoveredGlobal_800E4D7C_TObjEneMe3ShinowaMirage__data_80500FC0) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_800E4D7C_lbl_80500FF4_size[sizeof(RecoveredGlobal_800E4D7C_lbl_80500FF4) == 0xC ? 1 : -1];

struct RecoveredGlobal_800E4D7C_lbl_80500FF4;
void TObjEneMe3ShinowaMirage__sub_800E4B40(u8 *arg0) {
    s32 var_r31;
    s32 var_r30;
    s32 i;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_82072c *)(arg0))->m116();
        return;
    }
    TObjEneMe3ShinowaMirage__sub_800E6FE0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 2) {
        var_r31 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r31 = ((VObj_18_82072c *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, TObjEneMe3ShinowaReal__data_805DA5CC);
    } else if (((VObj_18_82072c *)(arg0))->m8(lbl_805DA5D8, TObjEneMe3ShinowaReal__data_805DA5CC) != 0) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        ((VObj_18_82072c *)(arg0))->m106();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        update_secondary_light__9TObjEneDDFPv((void *) (arg0));
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        for (i = 0; i < 3; i++) {
            if (lbl_80501000[i] != NULL) {
                *lbl_80501000[i] = M2C_FIELD(arg0, s32 *, 0x3D0);
            }
        }
        var_r30 = 1;
        if ((((VObj_18_82072c *)(arg0))->m107() != 0) && (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0)) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3ShinowaMirage__data_805DA5B8), (f32) (M2C_FIELD(arg0, f32 *, 0x3CC)), (f32) (TObjEneMe3ShinowaMirage__data_805DA5B8));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            lbl_805D529C = 0;
            set_global_state__16TObjEneRe7BeruraFi((void *) (TObjEneMe3ShinowaMirage__sub_800E4D7C));
            if (var_r31 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            pop_matrix();
        }
        ((VObj_18_82072c *)(arg0))->m108();
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv((void *) (arg0));
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x2FC), (void *) (&lbl_80500FF4));
    } else if ((get_main_phase() == 0xF) || (is_split_screen() == 0)) {
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x2FC), (void *) ((u8 *)(arg0) + 0x38));
    }
    end_effect_render__13TParticleCtrlFv();
}

void TObjEneMe3ShinowaMirage__sub_800E4D7C(void) {
    if ((s32) lbl_805D529C == 1) {
        get_camera_ctrl__9TObjEneDDFPv((s32) &TObjEneMe3ShinowaMirage__data_80500FC0.value, (s32) &lbl_80500FF4.value);
    }
    lbl_805D529C += 1;
}

void TObjEneMe3ShinowaMirage__sub_800E4DC4(void) {  }
void TObjEneMe3ShinowaMirage__sub_800E4DC8(void) {  }
void TObjEneMe3ShinowaMirage__sub_800E4DCC(void) {  }

extern const f32 TObjEneMe3ShinowaMirage__data_805DA5F4;

typedef struct RecoveredFields_800E50D8_arg0 RecoveredFields_800E50D8_arg0;
typedef struct VBase_14_763762 VBase_14_763762;
typedef struct VBase_18_4a41ce VBase_18_4a41ce;
typedef struct VObj_14_763762 VObj_14_763762;
typedef struct VObj_18_4a41ce VObj_18_4a41ce;
#define PSO_VCALL_VObj_18_4a41ce_m93(_self) (((VObj_18_4a41ce *)(_self))->m93())
#define PSO_VCALL_VObj_14_763762_m2(_self) (((VObj_14_763762 *)(_self))->m2())
#define PSO_VCALL_VObj_14_763762_m4(_self) (((VObj_14_763762 *)(_self))->m4())
#define PSO_VCALL_VObj_18_4a41ce_m100(_self) (((VObj_18_4a41ce *)(_self))->m100())

#pragma push
#pragma fp_contract on
void TObjEneMe3ShinowaMirage__sub_800E4DD0(u8 *arg0, s32 arg1) {
    Vec_800E4DD0 sp14;
    Vec_800E4DD0 sp8;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        ((VObj_18_64d9d3 *)(arg0))->m92();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        break;
    case 3:
    case 5:
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x404)) {
        case 0:
            ((void (*)())advance_animation_playback)();
            if ((objInBand__FP7GameObjf((void *) (arg0), lbl_805DA5E0) != 0) || (objInBand__FP7GameObjf((void *) (arg0), TObjEneMe3ShinowaMirage__data_805DA5E4) != 0)) {
                TBoss3Volopt__sub_8022675C((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD12), arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
                sp14.x = TObjEneMe3ShinowaMirage__data_805DA5B8;
                sp14.y = TObjEneMe3ShinowaMirage__data_805DA5E8;
                sp14.z = TObjEneMe3ShinowaMirage__data_805DA5EC;
                init_zako__15TObjBoss2TunnelFPvPv(&sp14, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                spawn_effect_f8__10TObjPlayerFii(&sp14, 0x14);
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x408)++;
            if (M2C_FIELD(arg0, s32 *, 0x408) >= 0x14) {
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
                M2C_FIELD(arg0, s32 *, 0x3C4) |= 2;
                create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe3ShinowaMirage__data_805D52A0, lbl_8043CE00, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x60));
                VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38);
                sp8.x += TObjEneMe3ShinowaMirage__data_805DA5EC * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
                sp8.z += TObjEneMe3ShinowaMirage__data_805DA5EC * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
                trigger_dell_biter_events__10TObjPlayerFPv(&sp8);
                TBoss3Volopt__sub_8022675C((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD16), arg0 + 0x38, 0, 0);
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
#pragma pop

void TObjEneMe3ShinowaMirage__sub_800E4FE8(u8 *arg0, s32 arg1) {
    Vec_800E4FE8 v;
    f32 c;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        advance_animation_playback(arg0, arg1);
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
        }
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        c = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        TObjEneDD__sub_800BACA4(arg0, v.x, v.z, c);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805DA5F0;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805DA5F0;
        ((VObj_18_fd6cbb *) arg0)->m87();
        break;
    case 5:
        TBoss8Dragon__sub_800BB780(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E50D8(u8 *arg0, s32 arg1) {
  s32 temp_r0;
  s32 temp_r3;
  switch (arg1)
  {
    return;
    case 4:
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_B8 = 7;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(4));
      PSO_VCALL_VObj_18_4a41ce_m93(arg0);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 & 0xFFFFFFFC);
      temp_r3 = ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4;
      if (temp_r3 & 0x80000)
    {
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_3C4 = (s32) (temp_r3 & 0xFFF7FFFF);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 2;
      return;
    }
      PSO_VCALL_VObj_14_763762_m2(((u8 *) arg0) + 1000);
      ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 1;
      return;
    case 3:
      if (((s32) ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404) == 2)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(0));
    }
    case 5:
      return;
    case 0:
      advance_animation_playback((void *)(arg0), (s32)(arg1));
      temp_r0 = ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404;
      switch (temp_r0)
    {
      case 0:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0)
      {
        ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 1;
      }
        break;
      case 1:
        if (PSO_VCALL_VObj_14_763762_m4(((u8 *) arg0) + 1000) != 0)
      {
        ((RecoveredFields_800E50D8_arg0 *) arg0)->field_404 = 2;
      }
        break;
    }
      PSO_VCALL_VObj_18_4a41ce_m100(arg0);
      break;
  }
}

void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 0xB);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        ((V_A_800E47DC *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv(TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            transition_enemy_state(arg0, 4);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x404) >= 0x5A) {
            transition_enemy_state(arg0, 9);
        }
        return;
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r4 + 1);
        advance_animation_playback(arg0, temp_r4);
        ((V_A_800E47DC *) arg0)->m100();
        break;
    case 5:
        break;
    }
}

#pragma push
#pragma fp_contract on
struct Info_800E6F0C;
void TObjEneMe3ShinowaMirage__sub_800E64F4(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((VObj_18_e66632 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA624;
        if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x10) {
            M2C_FIELD(arg0, f32 *, 0x410) = (f32) M2C_FIELD(TObjEneMe3ShinowaMirage__data_80500FE4[M2C_FIELD(arg0, s32 *, 0x3C0)], f32 *, 4);
        } else {
            M2C_FIELD(arg0, f32 *, 0x410) = (f32) M2C_FIELD(TObjEneMe3ShinowaMirage__data_80500FE4[M2C_FIELD(arg0, s32 *, 0x3C0)], f32 *, 0);
        }
        M2C_FIELD(arg0, f32 *, 0x414) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        return;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            ((VObj_18_e66632 *)(arg0))->m109();
            transition_enemy_state(arg0, 0xB);
        } else if (check_in_range__23TObjEneMe3ShinowaMirageFPv((f32) (M2C_FIELD(arg0, f32 *, 0x414))) != 0) {
            transition_enemy_state(arg0, 6);
        } else if (((VObj_18_e66632 *)(arg0))->m104() != 0) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 5:
        break;
    case 0:
        ((void (*)())advance_animation_playback)();
        if (((s32 (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)(arg0, TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            temp_f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x414) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)))) + temp_f31);
            if (M2C_FIELD(arg0, f32 *, 0x414) < TBoss8Dragon__sub_803D64DC((int) (0x1000))) {
                update_angle__14TObjEneEpsilonFPvi((void *) (arg0), (int) (0x500));
                ((VObj_18_e66632 *)(arg0))->m100();
            } else {
                TObjEneEpsilon__sub_800B9344((void *) (arg0), (int) (0x500), (f32) (M2C_FIELD(arg0, f32 *, 0x410)));
            }
            ((VObj_18_e66632 *)(arg0))->m87();
        }
        break;
    }
}
#pragma pop

void TObjEneMe3ShinowaMirage__sub_800E69F0(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((VObj_18_fd404c *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 0x1E) {
            transition_enemy_state(arg0, 3);
        }
        return;
    case 0:
        ((void (*)())advance_animation_playback)();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x404);
        if (temp_r3 == 0) {
            if (((s32 (*)(void *, f32))update_linked_position__14TObjEneEpsilonFPv)(arg0, TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 1;
                if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
                    M2C_FIELD(arg0, s32 *, 0x3D0) = 0x1C00FFFF;
                }
                M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D0) & lbl_805DA634);
                M2C_FIELD(arg0, s32 *, 0x408) = 0;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r3 + 1);
            M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) + 0x10);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x408) > 0xFF) {
                M2C_FIELD(arg0, s32 *, 0x408) = 0xFF;
            }
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x408);
            M2C_FIELD(arg0, u32 *, 0x3D0) = (temp_r4 << 24) | (M2C_FIELD(arg0, u32 *, 0x3D0) & 0x00FFFFFF);
            if (TObjEneEpsilon__sub_800B95E0((void *) (arg0), (int) (temp_r4)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x404) = 0;
                if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
                    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
                }
            }
        }
        ((VObj_18_fd404c *)(arg0))->m100();
        update_by_distance__23TObjEneMe3ShinowaMirageFPv((void *) (arg0));
        ((VObj_18_fd404c *)(arg0))->m87();
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        return;
    case 5:
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0x1C00FFFF;
        }
        M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        break;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E6BB8(u8 *arg0, s32 arg1) {
    Stack_800E6BB8 stack;
    f32 temp_f1;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(0));
        ((VObj_18_599a64 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3E8));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C8);
        stack.spC = temp_f1 - TObjEneMe3ShinowaMirage__data_805DA5EC;
        TBoss3Volopt__sub_800D8D88((void *) (&stack.sp8), (f32) (temp_f1));
        return;
    case 3:
        if (((VObj_14_948132 *)((u8 *)(arg0) + (1000)))->m5() != 0) {
            transition_enemy_state((void *)((void *) (arg0)), (M2C_UNK)((int) (2)));
        }
    case 5:
    case 0:
        return;
    }
}

void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        ((VObj_DD_800E47DC *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 2);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFCFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 5) {
            transition_enemy_state(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (M2C_FIELD(arg0, s32 *, 0x404) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj_DD_800E47DC *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

void TObjEneMe3ShinowaMirage__sub_800E6DD8(Obj_800E6DD8 *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        arg0->v111(arg2);
        return;
    case 1:
        TObjEneMe3ShinowaMirage__sub_800E6BB8((u8 *) arg0, arg2);
        return;
    case 2:
        TObjEneMe3ShinowaMirage__sub_800E69F0((u8 *)(arg0), (s32)(arg2));
        return;
    case 3:
        TObjEneMe3ShinowaMirage__sub_800E66FC(arg0, arg2);
        return;
    case 4:
        TObjEneMe3ShinowaMirage__sub_800E64F4((u8 *)(arg0), (s32)(arg2));
        return;
    case 5:
        TObjEneMe3ShinowaMirage__sub_800E5F64(arg0, arg2);
        return;
    case 6:
        TObjEneMe3ShinowaMirage__sub_800E5CE4(arg0, arg2);
        return;
    case 7:
        TObjEneMe3ShinowaReal__sub_800E5950(arg0, arg2);
        return;
    case 8:
        TObjEneMe3ShinowaMirage__sub_800E54E8(arg0, arg2);
        return;
    case 11:
        TObjEneMe3ShinowaMirage__sub_800E5220(arg0, arg2);
        return;
    case 9:
        TObjEneMe3ShinowaMirage__sub_800E50D8((u8 *) arg0, arg2);
        return;
    case 10:
        TObjEneMe3ShinowaMirage__sub_800E530C(arg0, arg2);
        return;
    case 12:
        TObjEneMe3ShinowaMirage__sub_800E4FE8((u8 *)(arg0), (s32)(arg2));
        return;
    case 13:
        TObjEneMe3ShinowaMirage__sub_800E4DD0((u8 *)(arg0), (s32)(arg2));
        return;
    case 14:
        arg0->v112(arg2);
        return;
    case 15:
        arg0->v113(arg2);
        return;
    case 16:
        arg0->v114(arg2);
    default:
        return;
    }
}

void TObjEneMe3ShinowaMirage__sub_800E6F0C(Obj_800E6F0C *self) {
    s32 f = clamp_frame_index__9TObjEneDDFi(TObjEneMe3ShinowaMirage__data_80500FE4[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3ShinowaMirage__sub_800E6F64(u8 *arg0) {
    if (TObjEneMe3ShinowaMirage__sub_800E6FE0((u8 *)((void *) (arg0))) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_80500FEC.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x1b));
        M2C_FIELD(arg0, s32 *, 0x3c0) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3ShinowaMirage__data_805D5298, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x1a));
    M2C_FIELD(arg0, s32 *, 0x3c0) = 0;
}

s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneMe3ShinowaMirage__data_805DA5DC;
}

int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3ShinowaMirage__data_805DA5DC;
}

void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    struct VObj_800E7034_800E47DC *o = (struct VObj_800E7034_800E47DC *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
}

extern const f32 lbl_805DA5F8;

void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    VObj_800E707C_800E47DC *o = (VObj_800E707C_800E47DC *)arg0;
    f32 lim = lbl_805DA5F8;
    if ((M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C)) > lim) {
        o->m95();
        return;
    }
    o->m96();
}

extern s32 TObjEneMe3ShinowaMirage__data_805D52A4;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A8;

void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0) {
    M2C_UNK sp8[8];
    u32 temp_r3;
    u32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4((int) (0));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A4), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E0));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_2)->m4(&sp8, &sp8[3]);
    }
    temp_r3_3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A8), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3_3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3_3), (void *) (&sp8), (int) (2));
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E4));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_4)->m4(&sp8, &sp8[3]);
    }
    pop_matrix();
}

}
