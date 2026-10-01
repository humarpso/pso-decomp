#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80301690_80300CE4 { char pad[0x18]; };
struct VObj_80301690_80300CE4 : Base_80301690_80300CE4 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)V(94)V(95)V(96)V(97)V(98)V(99)
    virtual void m100();
#undef V
};

struct Base_A_802cf040_802CECE0 { char pad[0x18]; };

struct V_A_802cf040_802CECE0 : Base_A_802cf040_802CECE0 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

#include <stddef.h>
struct Stack_80300FC0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80300FC0_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80300FC0_lbl_8058D490_size[sizeof(RecoveredGlobal_80300FC0_lbl_8058D490) == 0x30 ? 1 : -1];

struct Stack_80301264 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80301264_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };

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
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99();
};

struct RecoveredFields_8030247C_arg0
{
  u8 unknown_0[0x2B4];
  f32 field_2B4;
  u8 unknown_2B8[0x6E];
  s16 field_326;
  u8 unknown_328[0xBC];
  s32 field_3E4;
};

struct E_80302D80 { s32 a; s32 b; s32 c; s32 d; };

struct G_80302D80 { u8 pad[0x42c]; E_80302D80 *e; };

struct O_80302D80 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct B14_80302004 { char pad[0x14]; };

struct V14_80302004 : B14_80302004 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5();
};

struct Ene_80302004 {
    u8 pad0[0x38];
    u8 sub38[0x2ee];
    s16 s326;
    s16 s328;
    u8 pad1[0x390 - 0x32a];
    s32 f390;
    u8 pad2[0x3a8 - 0x394];
    V14_80302004 obj;
};

struct Ene_80302A34 { u8 pad0[0x18]; void *vt; u8 pad1[0x3a8 - 0x1c]; u8 sub[0x1c]; void *obj[2]; };

typedef s32 M2C_UNK;
struct VBase_14_800A7BEC { char pad[0x14]; };

struct VObj_14_800A7BEC : VBase_14_800A7BEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800A7BEC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

typedef struct Vec_800A7A14 {
    f32 x, y, z;
} Vec_800A7A14;

struct VBase_800A7A14 { char pad[0x18]; };

struct VObj_800A7A14 : VBase_800A7A14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800A7A14 *, Vec_800A7A14 *);
};

typedef struct Obj_800A7A14 {
    u8 pad0[0x38];
    Vec_800A7A14 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3C4 - 0xC4];
    VObj_800A7A14 *effs[2];
} Obj_800A7A14;

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };

struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

extern "C" {
s32 TObjEneDolmOlm__sub_80300CF0(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern s32 TObjEneDolmOlm__data_805D6A1C;
extern const f32 lbl_805DE6F4;
void TObjEneDolmOlm__sub_803020C4(void);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300EB0(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300EF4(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300F38(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneDolmOlm__sub_80300F7C(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80300FC0_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 lbl_805DEF58;
extern const f32 TObjEneDolmOlm__data_805DEF5C;
void TObjEneDolmOlm__sub_80300FC0(u8 *arg0);
s32 TObjPlayer__sub_80018428(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TCameraCtrl__sub_803D9858(int);
extern RecoveredGlobal_80300FC0_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneDolmOlm__data_805DEF54;
extern const f32 TObjEneDolmOlm__data_805DEF68;
void TObjEneDolmOlm__sub_80301264(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
void init_body_sub__14TObjEneDolmOlmFPv(void *arg0);
void advance_position__14TObjEneDolmOlmFPv(u8 *arg0);
M2C_UNK TObjEneDolmOlm__sub_8030177C(void *);
M2C_UNK TObjEneDolmOlm__sub_80301C3C(void *);
M2C_UNK set_active__12TObjEneReconFv();
extern const f32 TObjEneDolmOlm__data_805DEF50;
void TObjEneDolmOlm__sub_8030247C(u8 *arg0);
extern u32 TObjEneDolmOlm__data_805D6A10;
void TObjEneDolmOlm__sub_80302D80(O_80302D80 *self, s32 i);
void TBoss1Dragon__sub_80143504(void);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void TBoss3Volopt__sub_800D8E80(void *);
void TObjEneDolmOlm__sub_80302004(Ene_80302004 *self);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
extern u8 lbl_804E6928[];
Ene_80302A34 *TObjEneDolmOlm__sub_80302A34(Ene_80302A34 *self, s16 flag);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;
extern const f32 lbl_805DEF60;
void TObjEneDolmOlm__sub_8030105C(Obj_800A7A14 *o);
}

extern "C" {

void * TObjEneDolmOlm__create(void *arg0);
void TObjEneDolmOlm__sub_80300CFC(void);
void TObjEneDolmOlm__sub_803012F8(void* p);
void advance_position__14TObjEneDolmOlmFPv(u8 *arg0);
void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0);
void free_shared_resources__14TObjEneDolmOlmFv(void);
void init_body_sub__14TObjEneDolmOlmFPv(void *arg0);
s32 render_model_if_visible__14TObjEneDolmOlmFPv(u8 *arg0);
void reset_count__14TObjEneDolmOlmFv(void);
void update_state__14TObjEneDolmOlmFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TObjControl__ct(void *, void *);
void *TObjEneDolmOlm__ct(void *, void *, void *);
M2C_UNK TObjEneDolmOlm__sub_80300D00(void *, void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void free__11TOBoss4RockFUi(void*);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK restore_render_scissor(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

    extern int lbl_805D69E8;
void reset_count__14TObjEneDolmOlmFv(void) { lbl_805D69E8 = 0; }

s32 TObjEneDolmOlm__sub_80300CF0(void) {
    return 0x7FFFFFFF;
}

void TObjEneDolmOlm__sub_80300CFC(void) {  }

void init_body_sub__14TObjEneDolmOlmFPv(void *arg0) {
    TObjEneDolmOlm__sub_80300D00(arg0, (s8 *)arg0 + 0x38);
}

void TObjEneDolmOlm__sub_80300EB0(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A801))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300EF4(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A802))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300F38(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003B203))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300F7C(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD00))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneDolmOlm__sub_80300FC0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80300FC0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80300FC0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80300FC0, sp10) == 0x8) ? 1 : -1];
    Stack_80300FC0 stack;
    stack.sp8 = TObjEneDolmOlm__data_805DEF54;
    stack.spC = lbl_805DEF58;
    stack.sp10 = TObjEneDolmOlm__data_805DEF5C * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9B78();
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjEneDolmOlm__sub_8030105C(Obj_800A7A14 *o) {
    Vec_800A7A14 b;
    Vec_800A7A14 a;
    u32 e;
    s32 idx;
    VObj_800A7A14 *eff;
    if (!(o->fC0 < lbl_805DEF60)) {
        return;
    }
    switch (o->fB8) {
    case 3:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&TObjEneDolmOlm__data_805D6A14), o->fC0);
        idx = 0;
        break;
    case 4:
        e = lookup_entry_by_value__10TObjPlayerFPvf((void *)(*(s32 *)&TObjEneDolmOlm__data_805D6A18), o->fC0);
        idx = 1;
        break;
    default:
        e = 0;
        break;
    }
    if (e == 0) {
        return;
    }
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    TOHangerMachine01__sub_803D9C00(&o->pos);
    TObjPlayer__sub_803D9214(0, o->f60);
    TObjPlayer__sub_803D8960(0, e, &a, 2);
    TObjPlayer__sub_803D9B78();
    eff = o->effs[idx];
    if (eff != NULL) {
        eff->m4(&a, &b);
    }
}

#pragma push
#pragma fp_contract on
void TObjEneDolmOlm__sub_80301264(u8 *arg0, s32 arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80301264, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80301264, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80301264, sp10) == 0x8) ? 1 : -1];
    Stack_80301264 stack;
    stack.spC = TObjEneDolmOlm__data_805DEF54;
    stack.sp8 = TObjEneDolmOlm__data_805DEF54;
    stack.sp10 = (TObjEneDolmOlm__data_805DEF68 * farg0) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
    TObjPlayer__sub_803D97F0((void *) (&(*(RecoveredGlobal_80301264_lbl_8058D490 *)&lbl_8058D490).value));
    TObjPlayer__sub_803D9214((int)((int) (0)), (int)((void *) (arg1)));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TCameraCtrl__sub_803D9858((int) (1));
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
    TObjPlayer__sub_80018428((void *) (arg0), (void *) (&stack.sp8));
}
#pragma pop

void TObjEneDolmOlm__sub_803012F8(void* p) { *(s16*)((char*)p + 0xb8) = 1; }

extern const f32 TObjEneDolmOlm__data_805DEF6C;

void advance_position__14TObjEneDolmOlmFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneDolmOlm__data_805DEF6C);
}

void update_state__14TObjEneDolmOlmFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        }
        break;
    case 10:
        break;
    case 0:
        switch ((s16) M2C_FIELD(arg0, s16 *, 0x328)) {
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
            }
            break;
        }
        break;
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        ((VObj_80301690_80300CE4 *) arg0)->m100();
        obj_setFlags30(arg0, 0x04040000);
        set_indexed_flags(arg0, 0, 0x0A000000);
        break;
    }
}

void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < M2C_FIELD(arg0, f32 *, 0x3CC)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    }
}

extern M2C_UNK main_task[];

void TObjEneDolmOlm__sub_80302004(Ene_80302004 *self) {
    TBoss1Dragon__sub_80143504();
    switch (self->s328) {
    case 0:
    default:
        if (self->f390 != 0) {
            TObjEneMe3SinowZoa__sub_800D758C(&self->obj);
            TBoss3Volopt__sub_800D8E80(self->sub38);
            self->s328 = 1;
            return;
        }
        self->s328 = 2;
        return;
    case 1:
        if (self->obj.m5() == 1) {
            self->s328 = 2;
            self->f390 = 0;
        }
        break;
    case 2:
        self->s326 = 1;
        self->s328 = 0;
        break;
    }
}

void TObjEneDolmOlm__sub_803020C4(void) {
    switch (TObjEneDolmOlm__data_805D6A1C) {
    case 0x15:
    case 0x1d:
    case 0x49:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    TObjEneDolmOlm__data_805D6A1C += 1;
}

s32 render_model_if_visible__14TObjEneDolmOlmFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3D8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

extern void *tl_04;

typedef struct RecoveredFields_8030247C_arg0 RecoveredFields_8030247C_arg0;
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
void TObjEneDolmOlm__sub_8030247C(u8 *arg0) {
  s16 temp_r0;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = ((RecoveredFields_8030247C_arg0 *) arg0)->field_326;
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
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
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
      case 10:
        TObjEneDolmOlm__sub_80301C3C((void *) arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
      case 11:
        TObjEneDolmOlm__sub_8030177C((void *) arg0);
        init_body_sub__14TObjEneDolmOlmFPv((void *) arg0);
        break;
    }
  }
  advance_position__14TObjEneDolmOlmFPv((u8 *)((void *) arg0));
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  TObjPlayer__sub_801B4A18((void *) arg0, (int) (-1));
  if (((RecoveredFields_8030247C_arg0 *) arg0)->field_3E4 & 0x4000)
  {
    set_active__12TObjEneReconFv();
  }
  ((RecoveredFields_8030247C_arg0 *) arg0)->field_2B4 = (f32) (((RecoveredFields_8030247C_arg0 *) arg0)->field_2B4 + TObjEneDolmOlm__data_805DEF50);
}

void * TObjEneDolmOlm__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3E8);
    if (o2 != NULL) {
        o2 = TObjEneDolmOlm__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D6A00;
extern u32 lbl_805D6A04;
extern u32 lbl_805D6A08;
extern u32 TObjEneDolmOlm__data_805D6A0C;
extern u32 TObjEneDolmOlm__data_805D6A10;
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;

void free_shared_resources__14TObjEneDolmOlmFv(void) {
    if ((u32) lbl_805D6A00 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A00);
        lbl_805D6A00 = 0U;
    }
    if ((u32) lbl_805D6A04 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A04);
        lbl_805D6A04 = 0U;
    }
    if ((u32) lbl_805D6A08 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A08);
        lbl_805D6A08 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A0C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneDolmOlm__data_805D6A0C);
        TObjEneDolmOlm__data_805D6A0C = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A18 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A18, 1);
        TObjEneDolmOlm__data_805D6A18 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A14 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A14, 1);
        TObjEneDolmOlm__data_805D6A14 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A10 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDolmOlm__data_805D6A10, 1);
        TObjEneDolmOlm__data_805D6A10 = 0U;
    }
}

Ene_80302A34 *TObjEneDolmOlm__sub_80302A34(Ene_80302A34 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        self->vt = lbl_804E6928;
        for (i = 0; i < 2; i++) {
            if (self->obj[i] != NULL) {
                queue_destruction__7TObjectFv(self->obj[i]);
                self->obj[i] = 0;
            }
        }
        TObjPlayer__sub_800F6EB0(self);
        TObjEneGibbles__sub_80156720(self);
        __dt__18TObjEneMe3SinowZoaFPvs(self->sub, -1);
        TObjPlayer__sub_800C68FC(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void TObjEneDolmOlm__sub_80302D80(O_80302D80 *self, s32 i) {
    self->f34 = (*(G_80302D80 * *)&TObjEneDolmOlm__data_805D6A10)->e[i].c;
    self->f24 = (*(G_80302D80 * *)&TObjEneDolmOlm__data_805D6A10)->e[i].d;
}

}
