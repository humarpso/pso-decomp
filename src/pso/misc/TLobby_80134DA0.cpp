#include "types.h"
#include "pso/TProtocol.h"

extern "C" {

void set_lobby_event_theme(int a0);
int init_once__6TLobbyFPv(void* p);
int TLobby__sub_80134DC8(void* p);
int TLobby__sub_80134DE8(void* p);
void reset_lobby_state__6TLobbyFv(void);
s32 set_clock_offset_from_server_time();
int fn_800779A0(void*);
int TAdSinglePlyChrSelectGC__sub_80077AE8(void*);
int init_once__6TLobbyFl(void*);

    extern int TLobby__event_theme_id;
void set_lobby_event_theme(int a0) { TLobby__event_theme_id = a0; }

int init_once__6TLobbyFPv(void* p) { return init_once__6TLobbyFl(p); }
int TLobby__sub_80134DC8(void* p) { return fn_800779A0(p); }
int TLobby__sub_80134DE8(void* p) { return TAdSinglePlyChrSelectGC__sub_80077AE8(p); }

extern s32 TLobby__protocol_instance;

void reset_lobby_state__6TLobbyFv(void) {
    set_clock_offset_from_server_time();
    ((TProtocol *)TLobby__protocol_instance)->send_server_time_accepted();
}

}
