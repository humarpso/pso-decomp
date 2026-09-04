#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_split_screen__6TLobbyFv(void);
M2C_UNK set_split_screen_flag__6TLobbyFi(s32);
M2C_UNK try_set_split_screen__6TLobbyFi(s32);

s32 is_split_screen(void);
extern s32 TLobby__data_80512220[];

void dispatch_split_screen__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220[0];
    if (is_split_screen() == 1) {
        try_set_split_screen__6TLobbyFi(temp_r31);
        return;
    }
    set_split_screen_flag__6TLobbyFi(temp_r31);
}

}
