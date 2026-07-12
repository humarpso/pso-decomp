#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);
extern u32 lbl_805D5AF0;
extern s32 lbl_805D5AF4;

void fn_8017D1D4(void) {
    TObjPlayer__sub_801E483C(lbl_805D5AF4);
    lbl_805D5AF4 = 0;
    if ((u32) lbl_805D5AF0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AF0, 1);
        lbl_805D5AF0 = 0U;
    }
}

}
