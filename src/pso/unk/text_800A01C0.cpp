#include "types.h"

struct Stack_800A01C0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
void init_xyz_limits__10TObjPlayerFv(void);
s32 draw_line_list(void *, int, int);
void fn_800A01C0(s32 arg0);
}

extern "C" {

void fn_800A01C0(s32 arg0) {
    Stack_800A01C0 stack;
    stack.sp8 = arg0 + 0x1C;
    stack.spC = arg0 + 0x34;
    stack.sp10 = 0;
    stack.sp14 = 2;
    init_xyz_limits__10TObjPlayerFv();
    draw_line_list((void *) (&stack.sp8), (int) (1), (int) (5));
}

}
