#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__12TOSignCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOSignCave01__data_805D5AA8;

void unload_static_data__12TOSignCave01Fv(void) {
    if ((u32) TOSignCave01__data_805D5AA8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave01__data_805D5AA8, 1);
        TOSignCave01__data_805D5AA8 = 0U;
    }
}

}
