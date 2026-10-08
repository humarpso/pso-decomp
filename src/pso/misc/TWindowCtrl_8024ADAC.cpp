#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *TWindowCtrl__data_805D63F8;

void set_flag_bit2__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 4);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_bit2__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFFB);
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8024ADAC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024ADAC_lbl_804CEA1C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024ADF0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024ADF0_lbl_804CEA10 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024ADAC_lbl_804CEA1C lbl_804CEA1C;
void TWindowCtrl__sub_8024ADAC(s32 arg0);
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024ADF0_lbl_804CEA10 lbl_804CEA10;
void TWindowCtrl__sub_8024ADF0(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8024ADAC_lbl_804CEA1C_size[sizeof(RecoveredGlobal_8024ADAC_lbl_804CEA1C) == 0xC ? 1 : -1];
void TWindowCtrl__sub_8024ADAC(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024ADAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024ADAC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024ADAC, sp10) == 0x8) ? 1 : -1];
    Stack_8024ADAC stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA1C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA1C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA1C.value, s32 *, 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}
typedef char RecoveredGlobal_8024ADF0_lbl_804CEA10_size[sizeof(RecoveredGlobal_8024ADF0_lbl_804CEA10) == 0xC ? 1 : -1];
void TWindowCtrl__sub_8024ADF0(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024ADF0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024ADF0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024ADF0, sp10) == 0x8) ? 1 : -1];
    Stack_8024ADF0 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA10.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA10.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA10.value, s32 *, 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}

}
