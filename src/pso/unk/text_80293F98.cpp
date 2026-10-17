#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"

#include <stddef.h>
#include "pso/TChCrEffFade.h"
struct Stack_80293F98 {
    s32 * sp8;
    s32 * spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
};

struct RecoveredGlobal_80293F98_lbl_804DB900 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
s32 __cvt_fp2unsigned(f32);
extern RecoveredGlobal_80293F98_lbl_804DB900 lbl_804DB900;
extern const f32 lbl_805DD9E0;
extern const f32 lbl_805DD9E4;
typedef char RecoveredGlobal_80293F98_lbl_804DB900_size[sizeof(RecoveredGlobal_80293F98_lbl_804DB900) == 0x20 ? 1 : -1];
void TChCrEffFade::draw_fade_strip(f32 farg0) {
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
    stack.spC = &stack.sp18;
    stack.sp10 = 0;
    stack.sp14 = 4;
    stack.sp8 = &lbl_804DB900.value;
    ((TWindowCtrlMain *)(&stack.sp8))->draw_strip_swap_color(4, 6, lbl_805DD9E4);
}

}
