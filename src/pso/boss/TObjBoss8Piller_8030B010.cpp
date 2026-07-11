#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss8Piller__sub_8030B010(void);
void fn_8001FE7C(void*, int);

extern u32 TObjBoss8Piller__data_805D6A78;

void TObjBoss8Piller__sub_8030B010(void) {
    if ((u32) TObjBoss8Piller__data_805D6A78 != 0U) {
        fn_8001FE7C((void*)TObjBoss8Piller__data_805D6A78, 1);
        TObjBoss8Piller__data_805D6A78 = 0U;
    }
}

}
