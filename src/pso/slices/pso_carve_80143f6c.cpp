#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMovie__sub_80143F6C(void *arg0) {
    void **temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void ***, 4);
    temp_r4 = *temp_r3;
    M2C_FIELD(temp_r4, M2C_UNK (**)(void **, void *), 0x14)(temp_r3, temp_r4);
    M2C_FIELD(arg0, void ***, 4) = NULL;
}

}
