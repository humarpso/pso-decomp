#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80222814(void *);

s32 fn_8022356C(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r3 != NULL) {
        return fn_80222814(temp_r3);
    }
    return 1;
}

}
