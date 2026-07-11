#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_8029F5B0(M2C_UNK a0, M2C_UNK a1, M2C_UNK a2, M2C_UNK a3) {
    GXSetTexCoordGen2(a0, a1, a2, a3, 0, 0x7D);
}

    extern int TScene__data_805D5FE0;
void fn_8029F5D8(void) { TScene__data_805D5FE0 = 0; }

}
