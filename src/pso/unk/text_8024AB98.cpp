#include "types.h"
#include "pso/unk/text_8024AB98.h"

#include <stddef.h>
struct Stack_8024AB98 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AB98_lbl_804CEA70 {
    s32 value;
    u8 remaining[0x8];
};

struct Stack_8024ABDC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024ABDC_lbl_804CEA64 {
    s32 value;
    u8 remaining[0x8];
};

struct Stack_8024AC20 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AC20_lbl_804CEA58 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024AB98_lbl_804CEA70 TWindowSubComCard__window_ctrl_callback_pmf;
extern RecoveredGlobal_8024ABDC_lbl_804CEA64 lbl_804CEA64;
extern RecoveredGlobal_8024AC20_lbl_804CEA58 lbl_804CEA58;
typedef char RecoveredGlobal_8024AB98_lbl_804CEA70_size[sizeof(RecoveredGlobal_8024AB98_lbl_804CEA70) == 0xC ? 1 : -1];
void TWindowSubComCard__sub_8024AB98(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AB98, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AB98, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AB98, sp10) == 0x8) ? 1 : -1];
    Stack_8024AB98 stack;
    stack.sp8 = *(s32 *)((s8 *)(&TWindowSubComCard__window_ctrl_callback_pmf.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&TWindowSubComCard__window_ctrl_callback_pmf.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&TWindowSubComCard__window_ctrl_callback_pmf.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *)arg0, (void *) (&stack.sp8));
}
typedef char RecoveredGlobal_8024ABDC_lbl_804CEA64_size[sizeof(RecoveredGlobal_8024ABDC_lbl_804CEA64) == 0xC ? 1 : -1];
void TObjPlayer__sub_8024ABDC(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024ABDC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024ABDC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024ABDC, sp10) == 0x8) ? 1 : -1];
    Stack_8024ABDC stack;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_804CEA64.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_804CEA64.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_804CEA64.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *)arg0, (void *) (&stack.sp8));
}
typedef char RecoveredGlobal_8024AC20_lbl_804CEA58_size[sizeof(RecoveredGlobal_8024AC20_lbl_804CEA58) == 0xC ? 1 : -1];
void TLobby__sub_8024AC20(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AC20, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AC20, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AC20, sp10) == 0x8) ? 1 : -1];
    Stack_8024AC20 stack;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_804CEA58.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_804CEA58.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_804CEA58.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *)arg0, (void *) (&stack.sp8));
}

}
