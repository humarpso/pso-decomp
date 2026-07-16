#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__13TObjEneMorfosFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneMorfosArm__sub_8033542C();

extern u32 TObjEneMorfos__data_805D6D14;

void unload_static_data__13TObjEneMorfosFv(void) {
    TObjEneMorfosArm__sub_8033542C();
    if ((u32) TObjEneMorfos__data_805D6D14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMorfos__data_805D6D14, 1);
        TObjEneMorfos__data_805D6D14 = 0U;
    }
}

}
