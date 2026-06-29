#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001E5D0();
M2C_UNK fn_801DB4E4(s32);
extern s32 lbl_805D5580;

void TLobby__sub_80134E08(void) {
    fn_8001E5D0();
    fn_801DB4E4(lbl_805D5580);
}

}
