#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_or_send__6TLobbyFv(void);
M2C_UNK TLobby__sub_80070D20();
M2C_UNK TLobby__sub_80291F14();

s32 is_split_screen();

void draw_or_send__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291F14();
        return;
    }
    TLobby__sub_80070D20();
}

}
