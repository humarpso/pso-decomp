#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_table_entry__6TLobbyFs(s16 arg0);
M2C_UNK copy_short_fields__6TLobbyFPvPv(s32);

extern s32 TLobby__data_805D6140;

s32 apply_table_entry__6TLobbyFs(s16 arg0) {
    if (arg0 > 0xB9F) {
        return 0;
    }
    copy_short_fields__6TLobbyFPvPv(TLobby__data_805D6140 + (arg0 * 4));
    return 1;
}

}
