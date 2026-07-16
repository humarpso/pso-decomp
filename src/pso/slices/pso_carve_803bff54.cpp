#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803C3ACC(int);

void TLobby__sub_803BFF54(u8 *arg0) {
    fn_803C3ACC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

}
