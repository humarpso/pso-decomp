#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8036B2E8(u32, u16, s32);
extern u32 lbl_805D7008;

void dispatch_by_index__6TLobbyFUsi(u16 arg0, s32 arg1) {
    if (((u32) lbl_805D7008 != 0U) && (arg0 < 4U)) {
        TLobby__sub_8036B2E8(lbl_805D7008, arg0, arg1);
    }
}

}
