#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80101DBC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
void *TBoss8Dragon__sub_8007A544(f32 *, M2C_UNK, f32);
extern const f32 lbl_805DAA94;
extern const f32 lbl_805DAA98;
void TItem__sub_80101DBC(void *arg0);
}

extern "C" {

void TItem__sub_80101DBC(void *arg0) {
    Stack_80101DBC stack;
    void *temp_r3;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x38);
    stack.spC = lbl_805DAA94 + M2C_FIELD(arg0, f32 *, 0x3C);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_r3 = TBoss8Dragon__sub_8007A544(&stack.sp8, 0x41, lbl_805DAA94);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DAA98 + M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4));
    }
}

}
