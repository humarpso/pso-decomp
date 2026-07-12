#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_80267288(void *arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_8025817C(s32);
s32 TWindowSubStatusDisp__sub_80268488();
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void TWindowSubStatusDisp__sub_80267288(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (TWindowSubStatusDisp__sub_80268488() == 0) {
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
        }
        TWindowSubStatusDisp__sub_8025817C(temp_r31);
    }
}

}
