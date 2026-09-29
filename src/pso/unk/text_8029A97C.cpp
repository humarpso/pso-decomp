#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8029A97C {
    f32 sp8;
    f32 spC;
};

struct A_8029A9B8 { u8 pad[0x20]; f32 f20; };

extern "C" {
M2C_UNK TChCrEffWall__sub_802910C8(M2C_UNK, f32 *, f32);
extern const f32 lbl_805DDC70;
extern const f32 lbl_805DDC74;
extern const f32 lbl_805DDC78;
void fn_8029A97C(void);
void fn_802910A4(int, void *, void *, f32, f32, f32);
M2C_UNK TChCrEffWall__sub_802910C8(M2C_UNK, f32 *, f32);
extern const f32 lbl_805DDC7C;
extern const f32 lbl_805DDC80;
extern const f32 lbl_805DDC84;
extern const f32 lbl_805DDC88;
extern const f32 lbl_805DDC8C;
void fn_8029A9B8(A_8029A9B8 *arg0);
}

extern "C" {

void fn_8029A97C(void) {
    Stack_8029A97C stack;
    stack.sp8 = lbl_805DDC70;
    stack.spC = lbl_805DDC74;
    TChCrEffWall__sub_802910C8(0x36, &stack.sp8, lbl_805DDC78);
}
void fn_8029A9B8(A_8029A9B8 *arg0) {
    f32 sp10[2];
    f32 sp8[2];
    f32 a;
    f32 b;
    sp10[1] = lbl_805DDC7C;
    sp10[0] = lbl_805DDC80;
    a = arg0->f20;
    b = a * lbl_805DDC84;
    sp8[1] = lbl_805DDC88;
    sp8[0] = b;
    fn_802910A4(0x34, sp10, sp8, lbl_805DDC8C, b, a);
    sp10[0] = arg0->f20;
    TChCrEffWall__sub_802910C8((M2C_UNK)(0x35), (f32 *)(sp10), lbl_805DDC8C);
}

}
