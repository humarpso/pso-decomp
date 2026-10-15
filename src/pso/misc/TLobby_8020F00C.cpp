#include "types.h"

extern "C" {

void push_shop_pool_entry(u8 *arg0, s8 arg1);
void reset_counter_64__6TLobbyFPv(void* p);
s32 get_game_play_mode();
s32 is_not_split_screen__13TRaderMapCoreFv();

void push_shop_pool_entry(u8 *arg0, s8 arg1) {
    s32 temp_r5;
    temp_r5 = *(s32 *)((s8 *)arg0 + 0x64);
    if (temp_r5 < 0x64) {
        *(s32 *)((s8 *)arg0 + 0x64) = (s32) (temp_r5 + 1);
        *(arg0 + temp_r5) = arg1;
    }
}

void reset_counter_64__6TLobbyFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
