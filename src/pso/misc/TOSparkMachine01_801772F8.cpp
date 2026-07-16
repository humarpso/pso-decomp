#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__16TOSparkMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOSparkMachine01__data_805D5AC0;

void destroy_static_instance__16TOSparkMachine01Fv(void) {
    if ((u32) TOSparkMachine01__data_805D5AC0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSparkMachine01__data_805D5AC0, 1);
        TOSparkMachine01__data_805D5AC0 = 0U;
    }
}

}
