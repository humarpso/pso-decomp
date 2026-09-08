#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AB018 {
    M2C_UNK sp8;
    f32 spC;
    u8 pad_10[0x4];
    M2C_UNK sp14;
    f32 sp18;
    u8 pad_1C[0x4];
    M2C_UNK sp20;
    f32 sp24;
    u8 trailing_storage[0x4];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 TBoss1Dragon__sub_80143504(void *);
s32 TPhotonMylla__sub_80154CB4(int);
s32 TCameraCtrl__sub_801A7310(void *, int);
s32 TObjPlayer__sub_801A7680(void *);
s32 TObjPlayer__sub_801A7748(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 update_all_slots__10TObjPlayerFPv(void *);
s32 TPhotonMagicSquare__sub_801AD218(int, void *, int, void *, int);
s32 TOTrapAncient01__sub_80226578(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC15C;
extern const f32 lbl_805DC160;
extern const f32 lbl_805DC164;
extern const f32 lbl_805DC168;
extern const f32 lbl_805DC16C;
extern const f32 lbl_805DC170;
extern const f32 lbl_805DC174;
extern const f32 lbl_805DC178;
extern const f32 lbl_805DC17C;
extern const f32 lbl_805DC180;
void fn_801AB018(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_801AB018(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AB018, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AB018, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801AB018, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801AB018, sp18) == 0x10) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801AB018, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_801AB018, sp24) == 0x1C) ? 1 : -1];
    Stack_801AB018 stack;
    f32 temp_f1;
    s32 temp_r3;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u32 temp_r3_2;
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A4) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
        temp_r3 = TPhotonMylla__sub_80154CB4((int) ((s32) M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp20), (void *) (temp_r3 + 0x38));
            stack.sp24 += lbl_805DC15C;
        }
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__sub_801AD218((int) (temp_r3_2), (void *) (arg0), (int) (0), (void *) (&stack.sp20), (int) (0x78));
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0x64) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (0));
    }
    M2C_FIELD(arg0, s16 *, 0x194) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC160 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        update_all_slots__10TObjPlayerFPv((void *) (arg0));
    }
    if (lbl_805DC164 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        temp_r3_3 = TPhotonMylla__sub_80154CB4((int) ((s32) M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3_3 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (temp_r3_3 + 0x38));
        }
        stack.sp18 += lbl_805DC168;
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp14), (int) (0x151));
        stack.sp18 += lbl_805DC16C;
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp14), (int) (0x15F));
    }
    temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1A4);
    if ((lbl_805DC170 == (f32) temp_r3_4) || (lbl_805DC174 == (f32) temp_r3_4)) {
        temp_r3_5 = TPhotonMylla__sub_80154CB4((int) ((s32) M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3_5 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3_5 + 0x38));
            stack.spC += lbl_805DC168;
        }
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp8), (int) (0x151));
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A4) > lbl_805DC178) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x184);
        if (temp_f1 > lbl_805DC17C) {
            M2C_FIELD(arg0, f32 *, 0x184) = (f32) (temp_f1 - lbl_805DC180);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) != 0) {
        TOTrapAncient01__sub_80226578((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}
#pragma pop

}
