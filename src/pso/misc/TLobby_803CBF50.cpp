#include "types.h"

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
s32 set_stream_channel_pan__6TLobbyFPvii();
s32 set_sound_stream_volume();
s32 set_stream_frequency__6TLobbyFPvi();
s32 TLobby__sub_803D4704();
s32 update_active_streams__6TLobbyFv();
s32 get_packet_size__6TLobbyFPv();
s32 get_available_size__6TLobbyFPv();
s32 GCRNA_SetPlaySw();
s32 GCRNA_SetTransSw();

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
