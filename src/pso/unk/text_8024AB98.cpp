#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8024AB98 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AB98_lbl_804CEA70 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024ABDC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024ABDC_lbl_804CEA64 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024AC20 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AC20_lbl_804CEA58 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024AB98_lbl_804CEA70 lbl_804CEA70;
void TWindowSubComCard__sub_8024AB98(s32 arg0);
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024ABDC_lbl_804CEA64 lbl_804CEA64;
void TObjPlayer__sub_8024ABDC(s32 arg0);
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024AC20_lbl_804CEA58 lbl_804CEA58;
void TLobby__sub_8024AC20(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8024AB98_lbl_804CEA70_size[sizeof(RecoveredGlobal_8024AB98_lbl_804CEA70) == 0xC ? 1 : -1];
void TWindowSubComCard__sub_8024AB98(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AB98, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AB98, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AB98, sp10) == 0x8) ? 1 : -1];
    Stack_8024AB98 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA70.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA70.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA70.value, s32 *, 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}
typedef char RecoveredGlobal_8024ABDC_lbl_804CEA64_size[sizeof(RecoveredGlobal_8024ABDC_lbl_804CEA64) == 0xC ? 1 : -1];
void TObjPlayer__sub_8024ABDC(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024ABDC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024ABDC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024ABDC, sp10) == 0x8) ? 1 : -1];
    Stack_8024ABDC stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA64.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA64.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA64.value, s32 *, 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}
typedef char RecoveredGlobal_8024AC20_lbl_804CEA58_size[sizeof(RecoveredGlobal_8024AC20_lbl_804CEA58) == 0xC ? 1 : -1];
void TLobby__sub_8024AC20(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AC20, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AC20, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AC20, sp10) == 0x8) ? 1 : -1];
    Stack_8024AC20 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA58.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA58.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA58.value, s32 *, 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}

}
