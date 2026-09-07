#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8024B054 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024B054_lbl_804CE9C8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 TWindowCtrl__sub_8024B098(void *, void *);
extern RecoveredGlobal_8024B054_lbl_804CE9C8 lbl_804CE9C8;
void TWindowCtrl__sub_8024B054(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8024B054_lbl_804CE9C8_size[sizeof(RecoveredGlobal_8024B054_lbl_804CE9C8) == 0xC ? 1 : -1];
void TWindowCtrl__sub_8024B054(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024B054, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024B054, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024B054, sp10) == 0x8) ? 1 : -1];
    Stack_8024B054 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CE9C8.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CE9C8.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CE9C8.value, s32 *, 8);
    TWindowCtrl__sub_8024B098((void *) (arg0), (void *) (&stack.sp8));
}

}
