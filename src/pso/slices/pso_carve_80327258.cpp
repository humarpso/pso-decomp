#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801004DC(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_80327258(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        fn_801004DC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x2C), s32 *, 0x30), 0x10, 0, 0);
    }
}

}
