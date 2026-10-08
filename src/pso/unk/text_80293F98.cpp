#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80293F98 {
    M2C_UNK * sp8;
    s32 * spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
};

struct RecoveredGlobal_80293F98_lbl_804DB900 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 draw_strip_swap_color__15TWindowCtrlMainFPviif(void *, int, int, f32);
s32 __cvt_fp2unsigned(f32);
extern RecoveredGlobal_80293F98_lbl_804DB900 lbl_804DB900;
extern const f32 lbl_805DD9E0;
extern const f32 lbl_805DD9E4;
void TChCrEffFade__sub_80293F98(f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80293F98_lbl_804DB900_size[sizeof(RecoveredGlobal_80293F98_lbl_804DB900) == 0x20 ? 1 : -1];
void TChCrEffFade__sub_80293F98(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80293F98, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80293F98, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80293F98, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80293F98, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80293F98, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80293F98, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80293F98, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80293F98, sp24) == 0x1C) ? 1 : -1];
    Stack_80293F98 stack;
    s32 temp_r9;
    temp_r9 = __cvt_fp2unsigned((f32) (lbl_805DD9E0 * farg0)) << 0x18;
    stack.sp24 = temp_r9;
    stack.sp20 = temp_r9;
    stack.sp1C = temp_r9;
    stack.sp18 = temp_r9;
    stack.spC = (s32 *)(&stack.sp18);
    stack.sp10 = 0;
    stack.sp14 = 4;
    stack.sp8 = (M2C_UNK *)(&lbl_804DB900.value);
    draw_strip_swap_color__15TWindowCtrlMainFPviif((void *) (&stack.sp8), (int) (4), (int) (6), (f32) (lbl_805DD9E4));
}

}
