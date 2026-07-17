#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_position_update__6TLobbyFv(void);
M2C_UNK fn_801DB684(s32, s32, s32);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv();
s32 get_player_count__23TAdSinglePlyChrSelectGCFv();

extern s32 TLobby__data_805D5580;

void send_position_update__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = increment_frame__23TAdSinglePlyChrSelectGCFv();
    temp_r4 = get_player_count__23TAdSinglePlyChrSelectGCFv();
    fn_801DB684(TLobby__data_805D5580, temp_r4, temp_r31);
}

}
