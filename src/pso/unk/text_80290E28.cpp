#pragma opt_lifetimes off
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80290E28 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 draw_ui_sprite_scaled(f32, f32, void *, void *, void *);
s32 TCharaMaking__resolve_creation_sprite_table(void *, void *);
void fn_80290E28(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_80290E28(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_80290E28, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80290E28, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80290E28, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80290E28, sp14) == 0xC) ? 1 : -1];
    Stack_80290E28 stack;
    u8 *temp_r6;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&stack.sp10), (void *) (arg1));
    stack.sp8 = arg0;
    TCharaMaking__resolve_creation_sprite_table((void *) (&stack.spC), (void *) (&stack.sp8));
    temp_r6 = (u8 *)(stack.spC + (stack.sp8 * 0x14));
    stack.sp10 += (f32) M2C_FIELD(temp_r6, s16 *, 4);
    stack.sp14 += (f32) M2C_FIELD(temp_r6, s16 *, 6);
    draw_ui_sprite_scaled((f32) (farg0), (f32) (farg1), (void *) (arg0), (void *) (&stack.sp10), (void *) (arg2));
}
#pragma pop

}
