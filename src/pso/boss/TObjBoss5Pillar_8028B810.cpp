#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8028B810 {
    u8 * sp8;
    u8 * spC;
    s32 sp10;
    u8 * sp14;
    u8 * sp18;
    u8 * sp1C;
    u8 * sp20;
    u8 * sp24;
};

extern "C" {
u8 * create_ch_cr_load_req(void *, void *);
M2C_UNK TNpcPlayer__sub_8007206C(void *, void *);
M2C_UNK TCharaMaking__bind_appearance_texture_lists(void *, void *, void *, void *);
u8 *TNpcPlayer__sub_8028B810(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

int is_unloaded__12TChCrLoadAfsFPv(void* p);

u8 *TNpcPlayer__sub_8028B810(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    typedef char sp8_offset[(offsetof(Stack_8028B810, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8028B810, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8028B810, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8028B810, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8028B810, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8028B810, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_8028B810, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_8028B810, sp24) == 0x1C) ? 1 : -1];
    Stack_8028B810 stack;
    TNpcPlayer__sub_8007206C((void *) (arg0 + 4), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x4A8) = 0xFF;
    TCharaMaking__bind_appearance_texture_lists((void *) (arg0 + 0x54), (void *) (arg0 + 0x1C0), (void *) (arg0 + 0x32C), (void *) (arg0 + 4));
    stack.sp8 = (u8 *)(arg0 + 4);
    stack.spC = (u8 *)(arg0 + 0x4A8);
    stack.sp10 = arg3;
    stack.sp14 = (u8 *)(arg0 + 0x4A4);
    stack.sp18 = (u8 *)(arg0 + 0x498);
    stack.sp1C = (u8 *)(arg0 + 0x490);
    stack.sp20 = (u8 *)(arg0 + 0x324);
    stack.sp24 = (u8 *)(arg0 + 0x1B8);
    M2C_FIELD(arg0, u8 **, 0) = create_ch_cr_load_req(arg1, &stack.sp8);
    return arg0;
}

}
