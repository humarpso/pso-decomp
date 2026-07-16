#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803C1A24(int);

void TLobby__sub_803C07C0(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    fn_803C1A24((int) (M2C_FIELD(arg0, s32 *, 4)));
}

}
