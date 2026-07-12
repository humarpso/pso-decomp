#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80071654(u16);

s32 fn_800717B0(u16 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return TLobby__sub_80071654(*arg0);
}

}
