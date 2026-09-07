#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802A45D4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_802A45D4_lbl_80466678 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, int, int, int, void *, f32);
extern RecoveredGlobal_802A45D4_lbl_80466678 lbl_80466678;
extern const f32 lbl_805DDF68;
void render__12TNeedleShootFv(s32 arg0);
}

extern "C" {

void TNeedleShoot__sub_802A4540(void);

void TNeedleShoot__sub_802A4540(void) {  }
typedef char RecoveredGlobal_802A45D4_lbl_80466678_size[sizeof(RecoveredGlobal_802A45D4_lbl_80466678) == 0x10 ? 1 : -1];
void render__12TNeedleShootFv(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802A45D4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A45D4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A45D4, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A45D4, sp14) == 0xC) ? 1 : -1];
    Stack_802A45D4 stack;
    stack.sp8 = M2C_FIELD(&lbl_80466678.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80466678.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80466678.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_80466678.value, s32 *, 0xC);
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x6C), (void *) (&stack.sp8), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 8)), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 4)), (int) (M2C_FIELD(&lbl_80466678.value, s32 *, 0)), (void *) (&lbl_80466678.value), (f32) (lbl_805DDF68));
}

}
