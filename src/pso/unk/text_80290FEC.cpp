#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80290FEC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
void fn_80290F10(s32, void *, void *, void *, f32);
extern const f32 lbl_805DD960;
void TChCrTagName__sub_80290FEC(s32 arg0, u8 *arg1, u8 *arg2, f32 farg0, f32 farg1, f32 farg2);
extern const f32 lbl_805DD960;
extern const f32 lbl_805DD964;
void TObjCMAssignMenu__sub_80291030(s32 arg0, u8* arg1, u8* arg2, f32 farg0, f32 farg1);
}

extern "C" {

void TChCrTagName__sub_80290FEC(s32 arg0, u8 *arg1, u8 *arg2, f32 farg0, f32 farg1, f32 farg2) {
    Stack_80290FEC stack;
    if (!(farg1 <= lbl_805DD960)) {
        stack.sp8 = farg1;
        stack.sp14 = farg2;
        stack.sp10 = farg2;
        stack.spC = farg2;
        fn_80290F10(arg0, arg1, arg2, &stack.sp8, farg0);
    }
}
void TObjCMAssignMenu__sub_80291030(s32 arg0, u8* arg1, u8* arg2, f32 farg0, f32 farg1) {
    if (!(farg1 <= lbl_805DD960)) {
        TChCrTagName__sub_80290FEC(arg0, arg1, arg2, farg0, farg1, lbl_805DD964);
    }
}

}
