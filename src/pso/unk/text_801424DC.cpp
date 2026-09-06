#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_801424DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
void TPlyPhotonChair__sub_801426C0(s32, s32);
void set_global_pair__10TObjPlayerFii(s32, s32);
M2C_UNK TObjPlayer__sub_803DED84(void *);
void fn_801424DC(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
}

extern "C" {

void fn_801424DC(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_801424DC stack;
    stack.sp8 = farg0;
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp14 = farg3;
    TPlyPhotonChair__sub_801426C0(arg0, 0x810);
    set_global_pair__10TObjPlayerFii(-1, 0x800);
    TObjPlayer__sub_803DED84((void *) (&stack.sp8));
}

}
