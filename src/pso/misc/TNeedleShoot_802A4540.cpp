#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802A45D4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_802A45D4_lbl_80466678 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_df5984 { char pad[0x18]; };

struct VObj_18_df5984 : VBase_18_df5984 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
};

struct Stack_802A4544 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, int, int, int, void *, f32);
extern RecoveredGlobal_802A45D4_lbl_80466678 lbl_80466678;
extern const f32 lbl_805DDF68;
void render__12TNeedleShootFv(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(f32 *, f32 *, s32);
void check_wall_hit__12TNeedleShootFPv(u8 *arg0);
}

extern "C" {

void TNeedleShoot__sub_802A4540(void);

void TNeedleShoot__sub_802A4540(void) {  }
typedef char RecoveredGlobal_802A45D4_lbl_80466678_size[sizeof(RecoveredGlobal_802A45D4_lbl_80466678) == 0x10 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void check_wall_hit__12TNeedleShootFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_802A4544, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A4544, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A4544, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A4544, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802A4544, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802A4544, sp1C) == 0x14) ? 1 : -1];
    Stack_802A4544 stack;
    u8 *temp_r3;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x28);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x2C);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x30);
    stack.sp14 = M2C_FIELD(arg0, f32 *, 0x6C);
    stack.sp18 = M2C_FIELD(arg0, f32 *, 0x70);
    stack.sp1C = M2C_FIELD(arg0, f32 *, 0x74);
    temp_r3 = (u8 *)(csnVector(&stack.sp8, &stack.sp14, 0x100));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x6C), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
        ((VObj_18_df5984 *)(arg0))->m4();
    }
}
#pragma pop

void render__12TNeedleShootFv(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802A45D4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A45D4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A45D4, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A45D4, sp14) == 0xC) ? 1 : -1];
    Stack_802A45D4 stack;
    stack.sp8 = M2C_FIELD(&lbl_80466678.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80466678.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80466678.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_80466678.value, s32 *, 0xC);
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x6C), (void *) (&stack.sp8), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 8)), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 4)), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 0)), (void *) (&lbl_80466678.value), (f32) (lbl_805DDF68));
}

}
