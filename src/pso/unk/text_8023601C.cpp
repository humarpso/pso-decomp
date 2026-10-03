#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8023601C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 TCameraCtrl__sub_803D8D00(void *, f32);
M2C_UNK normalize_vector(void *);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DC88C;
void offset_point_toward_camera(u8 *arg0, u8 *arg1, f32 farg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void offset_point_toward_camera(u8 *arg0, u8 *arg1, f32 farg0) {
    Stack_8023601C stack;
    f32 temp_f1;
    if ((void *) lbl_805D4DF0 != NULL) {
        stack.sp8 = M2C_FIELD(lbl_805D4DF0, f32 *, 0x178) - M2C_FIELD(arg0, f32 *, 0);
        stack.spC = M2C_FIELD(lbl_805D4DF0, f32 *, 0x17C) - M2C_FIELD(arg0, f32 *, 4);
        temp_f1 = M2C_FIELD(lbl_805D4DF0, f32 *, 0x180);
        stack.sp10 = temp_f1 - M2C_FIELD(arg0, f32 *, 8);
        if (lbl_805DC88C != TCameraCtrl__sub_803D8D00((void *) (&stack.sp8), (f32) (temp_f1))) {
            normalize_vector((void *) (&stack.sp8));
        }
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((stack.sp8 * farg0) + M2C_FIELD(arg0, f32 *, 0));
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((stack.spC * farg0) + M2C_FIELD(arg0, f32 *, 4));
        M2C_FIELD(arg1, f32 *, 8) = (f32) ((stack.sp10 * farg0) + M2C_FIELD(arg0, f32 *, 8));
    }
}
#pragma pop

}
