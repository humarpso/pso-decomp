#include "types.h"
#include "pso/unk/text_8024AD30.h"

#include <stddef.h>
struct Stack_8024AD30 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AD30_lbl_804CEA28 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024AD30_lbl_804CEA28 window_ctrl_end_keyboard_hold_callback_entry;
typedef char RecoveredGlobal_8024AD30_lbl_804CEA28_size[sizeof(RecoveredGlobal_8024AD30_lbl_804CEA28) == 0xC ? 1 : -1];
void end_player_keyboard_hold(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AD30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AD30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AD30, sp10) == 0x8) ? 1 : -1];
    Stack_8024AD30 stack;
    stack.sp8 = *(s32 *)((s8 *)(&window_ctrl_end_keyboard_hold_callback_entry.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&window_ctrl_end_keyboard_hold_callback_entry.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&window_ctrl_end_keyboard_hold_callback_entry.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}

}
