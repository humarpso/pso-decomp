#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__18TObjNpcFemaleChildFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcFemaleChild__data_805D5768;

void release_static_instance__18TObjNpcFemaleChildFv(void) {
    if ((u32) TObjNpcFemaleChild__data_805D5768 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleChild__data_805D5768, 1);
        TObjNpcFemaleChild__data_805D5768 = 0U;
    }
}

}
