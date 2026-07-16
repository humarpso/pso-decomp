#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_data__19TObjNpcGovernorBaseFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcGovernorBase__data_805D57A0;

void free_shared_data__19TObjNpcGovernorBaseFv(void) {
    if ((u32) TObjNpcGovernorBase__data_805D57A0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcGovernorBase__data_805D57A0, 1);
        TObjNpcGovernorBase__data_805D57A0 = 0U;
    }
}

}
