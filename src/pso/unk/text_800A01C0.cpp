#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_800A01C0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
void init_xyz_limits__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_801E341C(void *, int, int);
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
    TObjPlayer__sub_801E341C((void *) (&stack.sp8), (int) (1), (int) (5));
}

}
