#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_803E68D0 {
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
};

extern "C" {
s32 TWindowKeyBoardSoft__sub_803E6610(void *);
void TWindowKeyBoardSoft__sub_803E683C(void);
s32 TWindowKeyBoardSoft__sub_803E6610(void *);
void TWindowKeyBoardSoft__sub_803E68D0(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TWindowKeyBoardSoft__sub_803E683C(void) {
    s32 sp8;
    sp8 = 0x1C;
    TWindowKeyBoardSoft__sub_803E6610(&sp8);
}
void TWindowKeyBoardSoft__sub_803E68D0(s32 arg0, s32 arg1, s32 arg2) {
    typedef char sp14_offset[(offsetof(Stack_803E68D0, sp14) == 0x0) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_803E68D0, sp18) == 0x4) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_803E68D0, sp1C) == 0x8) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_803E68D0, sp20) == 0xC) ? 1 : -1];
    Stack_803E68D0 stack;
    stack.sp14 = 0x13;
    stack.sp18 = arg0;
    stack.sp1C = arg1;
    stack.sp20 = arg2;
    TWindowKeyBoardSoft__sub_803E6610((void *) (&stack.sp14));
}

}
