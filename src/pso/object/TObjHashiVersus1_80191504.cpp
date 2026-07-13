#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjHashiVersus1__sub_80191504(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjHashiVersus1__data_805D5C14;

void TObjHashiVersus1__sub_80191504(void) {
    if ((u32) TObjHashiVersus1__data_805D5C14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashiVersus1__data_805D5C14, 1);
        TObjHashiVersus1__data_805D5C14 = 0U;
    }
}

}
