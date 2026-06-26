#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F0810();
M2C_UNK fn_800F083C();
M2C_UNK fn_800F0840();
M2C_UNK fn_800F0878();
s32 fn_800F08AC(s32, s32);
M2C_UNK fn_80143098(void *);

void fn_800F08CC(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    fn_800F0878();
    fn_800F083C();
    M2C_FIELD(arg0, s32 *, 0x34) = fn_800F08AC(temp_r31, arg1);
    fn_80143098(arg0);
    fn_800F0810();
    fn_800F0840();
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
}

}
