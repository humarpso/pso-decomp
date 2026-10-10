#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_character_save_record(M2C_UNK);
s32 get_shared_text_buffer();
M2C_UNK TWindowSubComCard__sub_80225E80(void *, int);
M2C_UNK strncpy(int, int, int);
extern s32 info_board_state_flags;
void set_info_board_text__6TLobbyFi(s32 arg0);
extern s32 info_board_state_flags;
extern u32 information_board_response_buffer;
void reset_info_board__6TLobbyFv(void);
}

extern "C" {

void init_once_data__6TLobbyFUi(u32 arg0);
void flush_pending_send__6TLobbyFv(void);
s32 get_card_window_field__6TLobbyFv(void);
M2C_UNK send_text_packet_D9__6TLobbyFPvPv(u32, s32);
M2C_UNK send_info_board_request__9TProtocolFv(u32);
s32 get_character_save_record(M2C_UNK);

extern u32 TLobby__protocol_instance;
extern s32 info_board_state_flags;
extern u32 information_board_response_buffer;

void init_once_data__6TLobbyFUi(u32 arg0) {
    if ((u32) information_board_response_buffer == 0U) {
        information_board_response_buffer = arg0;
        info_board_state_flags &= 0xFFFFFFFD;
        if ((u32) TLobby__protocol_instance != 0U) {
            send_info_board_request__9TProtocolFv(TLobby__protocol_instance);
        }
    }
}

extern u32 TLobby__protocol_instance;
extern s32 info_board_state_flags;

void flush_pending_send__6TLobbyFv(void) {
    if (info_board_state_flags & 1) {
        if ((u32) TLobby__protocol_instance != 0U) {
            send_text_packet_D9__6TLobbyFPvPv(TLobby__protocol_instance, get_card_window_field__6TLobbyFv());
        }
        info_board_state_flags &= 0xFFFFFFFE;
    }
}

s32 get_card_window_field__6TLobbyFv(void) {
    return get_character_save_record(0xFFFF) + 0x20FC;
}
void set_info_board_text__6TLobbyFi(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(get_character_save_record((M2C_UNK)(0xFFFFU)) + 0x20FC);
    TWindowSubComCard__sub_80225E80((void *) (arg0), (int) (get_shared_text_buffer()));
    strncpy((int) (temp_r31), (int) (get_shared_text_buffer()), (int) (0xAB));
    M2C_FIELD(temp_r31, s8 *, 0xAB) = 0;
    info_board_state_flags |= 1;
}
void reset_info_board__6TLobbyFv(void) { (*(int *)&info_board_state_flags) = 0; (*(int *)&information_board_response_buffer) = 0; }

}
