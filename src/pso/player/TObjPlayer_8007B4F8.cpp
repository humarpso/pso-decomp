#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 fill_guild_card_from_char__6TLobbyFPvi(s32, s32);
u32 get_character_save_record();

extern s32 com_card_keyboard_mode;

void TObjPlayer::set_com_card_window(s32 arg0) {
    s32 temp_r31;
    u32 temp_r3;

    com_card_keyboard_mode = 0;
    temp_r3 = get_character_save_record();
    if (temp_r3 != 0U) {
        temp_r31 = temp_r3 + 0x1510;
        if (temp_r31 != 0) {
            fill_guild_card_from_char__6TLobbyFPvi(temp_r31, arg0);
            com_card_keyboard_mode = temp_r31;
        }
    }
}

}
