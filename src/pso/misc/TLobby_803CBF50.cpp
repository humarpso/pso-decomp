#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_803CBF50(void);
void TLobby__sub_803CBF90(void);
void TLobby__sub_803CBFB0(void);
void TLobby__sub_803CBFF0(void);
void TLobby__sub_803CC030(void);
s32 set_stream_channel_pan__6TLobbyFll();
s32 set_sound_stream_volume();
s32 set_stream_frequency__6TLobbyFPvi();
s32 TLobby__sub_803D4704();
s32 update_active_streams__6TLobbyFv();
s32 get_packet_size__6TLobbyFv();
s32 get_available_size__6TLobbyFv();
s32 GCRNA_SetPlaySw();
s32 GCRNA_SetTransSw();

void TLobby__sub_803CBF50(void) {
    set_stream_channel_pan__6TLobbyFll();
}

void TLobby::trigger_sub_task() {
    set_sound_stream_volume();
}

void TLobby__sub_803CBF90(void) {
    set_stream_frequency__6TLobbyFPvi();
}

void TLobby__sub_803CBFB0(void) {
    TLobby__sub_803D4704();
}

void TLobby::run_sequence() {
    update_active_streams__6TLobbyFv();
}

void TLobby__sub_803CBFF0(void) {
    get_packet_size__6TLobbyFv();
}

void TLobby::query_available_size() {
    get_available_size__6TLobbyFv();
}

void TLobby__sub_803CC030(void) {
    GCRNA_SetPlaySw();
}

void TLobby::dispatch_packet() {
    GCRNA_SetTransSw();
}

}
