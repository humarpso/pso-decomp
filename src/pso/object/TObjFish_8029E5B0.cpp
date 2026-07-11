#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resource__8TObjFishFv(void);
void fn_8001FE7C(void*, int);

extern u32 TObjFish__data_805D65E8;

void free_resource__8TObjFishFv(void) {
    if ((u32) TObjFish__data_805D65E8 != 0U) {
        fn_8001FE7C((void*)TObjFish__data_805D65E8, 1);
        TObjFish__data_805D65E8 = 0U;
    }
}

}
