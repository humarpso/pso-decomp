#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8029A97C {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK TChCrEffWall__sub_802910C8(M2C_UNK, f32 *, f32);
extern const f32 lbl_805DDC70;
extern const f32 lbl_805DDC74;
extern const f32 lbl_805DDC78;
void fn_8029A97C(void);
}

extern "C" {

void fn_8029A97C(void) {
    Stack_8029A97C stack;
    stack.sp8 = lbl_805DDC70;
    stack.spC = lbl_805DDC74;
    TChCrEffWall__sub_802910C8(0x36, &stack.sp8, lbl_805DDC78);
}

}
