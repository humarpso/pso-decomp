#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
extern M2C_UNK lbl_80477F2C[];

void fn_8033D324(void *arg0) {
    fn_803D9B2C();
    fn_803E4BC4();
    TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0xD8));
    fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, f32 *, 0xE0));
    fn_803E4BD0();
    fn_803D9B78();
}

}
