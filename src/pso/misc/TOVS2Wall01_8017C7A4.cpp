#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_model__11TOVS2Wall01Fv(void);
void fn_8001FE7C(void*, int);

extern u32 TOVS2Wall01__data_805D5AE8;

void release_model__11TOVS2Wall01Fv(void) {
    if ((u32) TOVS2Wall01__data_805D5AE8 != 0U) {
        fn_8001FE7C((void*)TOVS2Wall01__data_805D5AE8, 1);
        TOVS2Wall01__data_805D5AE8 = 0U;
    }
}

}
