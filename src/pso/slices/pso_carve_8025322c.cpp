#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001DC24();
M2C_UNK fn_80253154();
M2C_UNK fn_802531A4(s32, s32);

void fn_8025322C(s32 arg0) {
    fn_80253154();
    fn_802531A4(arg0, TLobby__sub_8001DC24());
}

}
