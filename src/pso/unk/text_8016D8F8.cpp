#include "types.h"

#include <stddef.h>
struct Stack_8016D8F8 {
    s32 sp8;
    u8 pad_C[0x4];
    s32 sp10;
};

extern "C" {
s32 copy_xyz__10TObjPlayerFPv(void *, void *);
s32 approach_angle_limited(int, int, int);
extern const f32 lbl_805DB7A0;
extern const f32 lbl_805DB7A4;
void fn_8016D8F8(u8 *arg0);
}

extern "C" {

void fn_8016D8F8(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8016D8F8, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8016D8F8, sp10) == 0x8) ? 1 : -1];
    Stack_8016D8F8 stack;
    copy_xyz__10TObjPlayerFPv((void *) (&stack.sp8), (void *) (arg0 + 0x5C));
    *(s32 *)((s8 *)arg0 + 0x5C) = (s32) (lbl_805DB7A0 * (*(f32 *)((s8 *)arg0 + 0x40) - *(f32 *)((s8 *)arg0 + 0x4C)));
    *(s32 *)((s8 *)arg0 + 0x64) = (s32) (lbl_805DB7A4 * (*(f32 *)((s8 *)arg0 + 0x38) - *(f32 *)((s8 *)arg0 + 0x44)));
    *(s32 *)((s8 *)arg0 + 0x5C) = approach_angle_limited((int) (stack.sp8), (int) (*(s32 *)((s8 *)arg0 + 0x5C)), (int) (0x40));
    *(s32 *)((s8 *)arg0 + 0x64) = approach_angle_limited((int) (stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x64)), (int) (0x40));
}

}
