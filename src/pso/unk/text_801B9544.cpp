#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_801B9544 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 TCameraCtrl__sub_80069258();
s32 get_item_ptr__10TObjPlayerFPvi(void *, void *);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D9324(int, void *);
M2C_UNK TCameraCtrl__sub_803D976C(int, int);
M2C_UNK TObjPlayer__sub_803D97F0(int);
M2C_UNK pop_matrix();
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__vt63(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjPlayer__vt63(s32 arg0, s32 arg1, s32 arg2) {
    Stack_801B9544 stack;
    stack.sp10 = TObjPlayer__data_805DC278;
    stack.spC = TObjPlayer__data_805DC278;
    stack.sp8 = TObjPlayer__data_805DC278;
    TObjPlayer__sub_803D97F0((int) (0));
    TObjPlayer__sub_803D9324((int) (0), (void *) (get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (void *) (arg1))));
    TCameraCtrl__sub_803D976C((int) (0), (int) (TCameraCtrl__sub_80069258()));
    TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (arg2));
    pop_matrix();
}

}
