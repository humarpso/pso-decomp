#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80182E60();
s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();

s32 is_rader_map_active(void) {
    s32 temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (TLobby__sub_8030A7B0() == 1) {
            return 0;
        }
        goto block_6;
    }
    temp_r3 = TLobby__sub_80182E60();
    if ((temp_r3 != -1) && (temp_r3 == 1)) {
        return 0;
    }
block_6:
    return 1;
}

}
