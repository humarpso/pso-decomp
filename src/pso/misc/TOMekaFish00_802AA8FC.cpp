#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__12TOMekaFish00Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOMekaFish00__data_805D66D8;

void release_static_instance__12TOMekaFish00Fv(void) {
    if ((u32) TOMekaFish00__data_805D66D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish00__data_805D66D8, 1);
        TOMekaFish00__data_805D66D8 = 0U;
    }
}

}
