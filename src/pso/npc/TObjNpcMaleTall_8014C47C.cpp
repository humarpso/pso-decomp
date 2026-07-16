#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__15TObjNpcMaleTallFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjNpcMaleTall__data_805D5808;

void destroy_instance__15TObjNpcMaleTallFv(void) {
    if ((u32) TObjNpcMaleTall__data_805D5808 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcMaleTall__data_805D5808, 1);
        TObjNpcMaleTall__data_805D5808 = 0U;
    }
}

}
