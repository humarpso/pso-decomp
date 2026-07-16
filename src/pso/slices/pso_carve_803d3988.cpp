#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_805D7664;

void TLobby__sub_803D3988(void) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D7664, s32 *, 4));
    }
}

}
