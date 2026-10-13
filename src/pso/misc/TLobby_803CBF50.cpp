#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF50(void);
void trigger_sub_task__6TLobbyFv(void);
void TLobby__sub_803CBF90(void);
void TLobby__sub_803CBFB0(void);
void run_sequence__6TLobbyFv(void);
void TLobby__sub_803CBFF0(void);
void query_available_size__6TLobbyFv(void);
void TLobby__sub_803CC030(void);
void dispatch_packet__6TLobbyFv(void);
M2C_UNK set_stream_channel_pan__6TLobbyFPvii();
M2C_UNK set_sound_stream_volume();
M2C_UNK set_stream_frequency__6TLobbyFPvi();
M2C_UNK TLobby__sub_803D4704();
M2C_UNK update_active_streams__6TLobbyFv();
M2C_UNK get_packet_size__6TLobbyFPv();
M2C_UNK get_available_size__6TLobbyFPv();
M2C_UNK GCRNA_SetPlaySw();
M2C_UNK GCRNA_SetTransSw();

void TLobby__sub_803CBF50(void) {
    set_stream_channel_pan__6TLobbyFPvii();
}

void trigger_sub_task__6TLobbyFv(void) {
    set_sound_stream_volume();
}

void TLobby__sub_803CBF90(void) {
    set_stream_frequency__6TLobbyFPvi();
}

void TLobby__sub_803CBFB0(void) {
    TLobby__sub_803D4704();
}

void run_sequence__6TLobbyFv(void) {
    update_active_streams__6TLobbyFv();
}

void TLobby__sub_803CBFF0(void) {
    get_packet_size__6TLobbyFPv();
}

void query_available_size__6TLobbyFv(void) {
    get_available_size__6TLobbyFPv();
}

void TLobby__sub_803CC030(void) {
    GCRNA_SetPlaySw();
}

void dispatch_packet__6TLobbyFv(void) {
    GCRNA_SetTransSw();
}

}
