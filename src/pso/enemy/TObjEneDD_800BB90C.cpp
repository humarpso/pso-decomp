#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDD__vt77(void *arg0);
M2C_UNK fn_800F6960();
void TObjEneDD__sub_800BBA04(void* p, s32 v);

void TObjEneDD__vt77(void *arg0) {
    s16 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s16 *, 0x326);
    fn_800F6960();
    M2C_FIELD(arg0, s16 *, 0x326) = temp_r31;
}

}
