#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800E2FD8(s32);
M2C_UNK fn_800E3074(s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
extern M2C_UNK lbl_80477DEC[];

void fn_8033C7C8(void *arg0) {
    fn_803D9B2C();
    fn_803E4BC4();
    TOHangerMachine01__sub_803D9C00(lbl_80477DEC);
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0x20));
    fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x34));
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0x2C));
    fn_800E3074(M2C_FIELD(arg0, s32 *, 0x60));
    fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    fn_800E2FD8(M2C_FIELD(arg0, s32 *, 0x60));
    fn_803E4BD0();
    fn_803D9B78();
}

}
