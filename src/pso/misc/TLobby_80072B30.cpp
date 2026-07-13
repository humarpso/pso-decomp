#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready_to_draw__6TLobbyFv(void);
s32 TLobby__sub_8006F23C();
s32 fn_8006FBE4();

s32 is_ready_to_draw__6TLobbyFv(void) {
    if ((TLobby__sub_8006F23C() != 0) || (fn_8006FBE4() <= 1)) {
        return 0;
    }
    return 1;
}

}
