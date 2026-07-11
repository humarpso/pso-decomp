#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801DA65C(u32);
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void fn_8034C23C(u32 arg0) {
    if ((u32) lbl_805D6E9C == 0U) {
        lbl_805D6E9C = arg0;
        lbl_805D6E98 &= 0xFFFFFFFD;
        if ((u32) TLobby__data_805D5580 != 0U) {
            fn_801DA65C(TLobby__data_805D5580);
        }
    }
}

}
