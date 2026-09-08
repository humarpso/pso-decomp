#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_df5984 { char pad[0x18]; };

struct VObj_18_df5984 : VBase_18_df5984 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
};

struct Stack_8023A434 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 queue_destruction__7TObjectFv(void *);
u8 *TObjButterflyLobby__sub_8007A5D8(f32 *, f32 *, s32);
void fn_8023A434(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_8023A434(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8023A434, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8023A434, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8023A434, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8023A434, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8023A434, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8023A434, sp1C) == 0x14) ? 1 : -1];
    Stack_8023A434 stack;
    u8 *temp_r3;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x78);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x7C);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x80);
    stack.sp14 = M2C_FIELD(arg0, f32 *, 0x20);
    stack.sp18 = M2C_FIELD(arg0, f32 *, 0x24);
    stack.sp1C = M2C_FIELD(arg0, f32 *, 0x28);
    temp_r3 = (u8 *)(TObjButterflyLobby__sub_8007A5D8(&stack.sp8, &stack.sp14, 0x100));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
        ((VObj_18_df5984 *)(arg0))->m4();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

}
