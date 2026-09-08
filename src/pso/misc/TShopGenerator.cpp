#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021E068_8021E010 { char pad[0x18]; };
struct VObj_8021E068_8021E010 : Base_8021E068_8021E010 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

struct RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

#include <stddef.h>
struct Stack_8021DC30 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

struct RecoveredGlobal_8021DC30_lbl_8044C140 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021DC30_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s32 TShopGenerator__sub_80222DAC(s32);
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__data_80513ED0;
u8 TShopGenerator__sub_8021E110(s32 arg0);
f32 fn_801315A0(void *, void *);
f32 TObjPlayer__sub_803D89C0(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 TObjPlayer__sub_803D9214(int, int);
f32 TNpcPlayer__sub_803D97B4(void *);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_8021DC30_lbl_8044C140 lbl_8044C140;
extern RecoveredGlobal_8021DC30_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805DC6E8;
bool TShopGenerator__sub_8021DC30(u8 *arg0, u8 *arg1, f32 farg0);
}

extern "C" {

void *TShopGenerator__create(void *arg0);
void *TShopGenerator__ct(void *arg0, s32 arg1);
void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__14TShopGenerator[];

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8021DC30_lbl_8044C140_size[sizeof(RecoveredGlobal_8021DC30_lbl_8044C140) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8021DC30_lbl_8058D490_size[sizeof(RecoveredGlobal_8021DC30_lbl_8058D490) == 0x30 ? 1 : -1];
bool TShopGenerator__sub_8021DC30(u8 *arg0, u8 *arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8021DC30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8021DC30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8021DC30, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8021DC30, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8021DC30, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8021DC30, sp1C) == 0x14) ? 1 : -1];
    Stack_8021DC30 stack;
    if (fn_801315A0((void *) (arg1 + 0x38), (void *) (arg0 + 0x38)) > (farg0 * farg0)) {
        return 0;
    }
    stack.sp8 = M2C_FIELD(&lbl_8044C140.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044C140.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044C140.value, s32 *, 8);
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg1, s32 *, 0x60)));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9B78();
    stack.sp14 = M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg1, f32 *, 0x38);
    stack.sp18 = M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg1, f32 *, 0x3C);
    stack.sp1C = M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg1, f32 *, 0x40);
    TNpcPlayer__sub_803D97B4((void *) (&stack.sp14));
    return (TObjPlayer__sub_803D89C0((void *) (&stack.sp8), (void *) (&stack.sp14)) > lbl_805DC6E8) == 0;
}
#pragma pop

void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__14TShopGenerator[];
extern s32 lbl_805D36C0;
extern s32 tl_05;

void *TShopGenerator__ct(void *arg0, s32 arg1) {
    s32 temp_r0;

    TPhotonMagicSquare__sub_801A2640(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36C0;
    ((VObj_8021E068_8021E010 *)arg0)->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 < 0) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    if (temp_r0 > 6) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    return arg0;
}

typedef char RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0_size[sizeof(RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0) == 0x10 ? 1 : -1];
u8 TShopGenerator__sub_8021E110(s32 arg0) {
    return (u8) (M2C_FIELD(&TShopGenerator__data_80513ED0.value, M2C_UNK *, ((TShopGenerator__sub_80222DAC(arg0) * 4) & 0x3FFFC)) == 1);
}

void *TShopGenerator__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TShopGenerator__ct((void *)(o), (s32)(arg0));
    }
    return o;
}

}
