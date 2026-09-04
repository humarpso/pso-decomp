#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E6C2C(s8 arg0);

extern s8 *lbl_805D5ED4;

void TLobby__sub_801E6C2C(s8 arg0) {
    s8 *temp_r4;

    temp_r4 = lbl_805D5ED4;
    lbl_805D5ED4 = temp_r4 + 1;
    *temp_r4 = arg0;
}

}
