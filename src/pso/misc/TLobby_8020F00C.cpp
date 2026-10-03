#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void push_shop_pool_entry(u8 *arg0, s8 arg1);
void reset_counter_64__6TLobbyFPv(void* p);
s32 get_game_play_mode();
s32 is_not_split_screen__13TRaderMapCoreFv();

void push_shop_pool_entry(u8 *arg0, s8 arg1) {
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r5 < 0x64) {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_r5 + 1);
        *(arg0 + temp_r5) = arg1;
    }
}

void reset_counter_64__6TLobbyFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
