#include "types.h"

extern "C" {

void send_card_window_state__6TLobbyFv(void);
s32 get_character_save_record(s32);
s32 TLobby__sub_80077798(s32, s32 *);
s32 open_hard_keyboard__6TLobbyFPv(s32);
s32 send_choice_search_parameters__9TProtocolFR22ChoiceSearchParameters(s32, s32 *);

extern s32 local_client_id;
extern s32 TLobby__protocol_instance;

void send_card_window_state__6TLobbyFv(void) {
    s32 sp8[5];
    s32 temp_r31;

    temp_r31 = get_character_save_record(0xFFFF);
    sp8[0] = open_hard_keyboard__6TLobbyFPv(local_client_id) ? 1 : 0;
    TLobby__sub_80077798(temp_r31 + 0x22EC, sp8);
    send_choice_search_parameters__9TProtocolFR22ChoiceSearchParameters(TLobby__protocol_instance, sp8);
}

}
