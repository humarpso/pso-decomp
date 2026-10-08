#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 filter_lobby_pigeon_theme(void);
s32 get_filtered_event_theme__6TLobbyFv();

s32 filter_lobby_pigeon_theme(void) {
    s32 var_r3;

    var_r3 = get_filtered_event_theme__6TLobbyFv();
    switch (var_r3) {
    case 3:
    case 9:
        var_r3 = 3;
        break;
    }
    return var_r3;
}

}
