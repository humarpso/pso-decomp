#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8016D8F8 {
    s32 sp8;
    u8 pad_C[0x4];
    M2C_UNK sp10;
};

extern "C" {
s32 copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 TObjPlayer__sub_801423A4(int, int, int);
extern const f32 lbl_805DB7A0;
extern const f32 lbl_805DB7A4;
void fn_8016D8F8(u8 *arg0);
}

extern "C" {

void fn_8016D8F8(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8016D8F8, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8016D8F8, sp10) == 0x8) ? 1 : -1];
    Stack_8016D8F8 stack;
    copy_xyz__10TObjPlayerFPvPv((void *) (&stack.sp8), (void *) (arg0 + 0x5C));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (lbl_805DB7A0 * (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x4C)));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (lbl_805DB7A4 * (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x44)));
    M2C_FIELD(arg0, s32 *, 0x5C) = TObjPlayer__sub_801423A4((int) (stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x64) = TObjPlayer__sub_801423A4((int) (stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (0x40));
}

}
