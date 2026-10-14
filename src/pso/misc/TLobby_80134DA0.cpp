#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_lobby_event_theme(int a0);
int init_once__6TLobbyFPv(void* p);
int TLobby__sub_80134DC8(void* p);
int TLobby__sub_80134DE8(void* p);
void reset_lobby_state__6TLobbyFv(void);
M2C_UNK set_clock_offset_from_server_time();
int fn_800779A0(void*);
int TAdSinglePlyChrSelectGC__sub_80077AE8(void*);
M2C_UNK send_server_time_accepted__9TProtocolFv(s32);
int init_once__6TLobbyFi(void*);

    extern int TLobby__event_theme_id;
void set_lobby_event_theme(int a0) { TLobby__event_theme_id = a0; }

int init_once__6TLobbyFPv(void* p) { return init_once__6TLobbyFi(p); }
int TLobby__sub_80134DC8(void* p) { return fn_800779A0(p); }
int TLobby__sub_80134DE8(void* p) { return TAdSinglePlyChrSelectGC__sub_80077AE8(p); }

extern s32 TLobby__protocol_instance;

void reset_lobby_state__6TLobbyFv(void) {
    set_clock_offset_from_server_time();
    send_server_time_accepted__9TProtocolFv(TLobby__protocol_instance);
}

}
