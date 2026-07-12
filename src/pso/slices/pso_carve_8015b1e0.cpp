#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_800F957C(void*);
extern u32 lbl_805D58D4;

void fn_8015B1E0(void) {
    if ((u32) lbl_805D58D4 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D58D4);
        lbl_805D58D4 = 0U;
    }
}

}
