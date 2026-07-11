#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001E5C8();
s32 fn_8030A834();
extern s32 lbl_805D5550;

s32 fn_8030A6A8(void) {
    if (((s32) lbl_805D5550 == 3) && (TLobby__sub_8001E5C8() == 0)) {
        return 1;
    }
    if (fn_8030A834() != 0) {
        return 1;
    }
    return 0;
}

}
