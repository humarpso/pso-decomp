#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss8DemoRoom__sub_8036B698(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjBoss8DemoRoom__data_805D7010;

void TObjBoss8DemoRoom__sub_8036B698(void) {
    if ((u32) TObjBoss8DemoRoom__data_805D7010 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8DemoRoom__data_805D7010, 1);
        TObjBoss8DemoRoom__data_805D7010 = 0U;
    }
}

}
