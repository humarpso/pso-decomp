#include "types.h"

#include <stddef.h>
struct Stack_8024ACEC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024ACEC_lbl_804CEA34 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024ACEC_lbl_804CEA34 player_keyboard_hold_cb;
void begin_player_keyboard_hold(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8024ACEC_lbl_804CEA34_size[sizeof(RecoveredGlobal_8024ACEC_lbl_804CEA34) == 0xC ? 1 : -1];
void begin_player_keyboard_hold(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024ACEC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024ACEC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024ACEC, sp10) == 0x8) ? 1 : -1];
    Stack_8024ACEC stack;
    stack.sp8 = *(s32 *)((s8 *)(&player_keyboard_hold_cb.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&player_keyboard_hold_cb.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&player_keyboard_hold_cb.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}

}
