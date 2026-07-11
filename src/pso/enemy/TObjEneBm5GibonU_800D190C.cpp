#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__16TObjEneBm5GibonUFv(void);
void fn_8001FE7C(void*, int);

extern u32 TObjEneBm5GibonU__data_805D51D0;

void release_static_resource__16TObjEneBm5GibonUFv(void) {
    if ((u32) TObjEneBm5GibonU__data_805D51D0 != 0U) {
        fn_8001FE7C((void*)TObjEneBm5GibonU__data_805D51D0, 1);
        TObjEneBm5GibonU__data_805D51D0 = 0U;
    }
}

}
