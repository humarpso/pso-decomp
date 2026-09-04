#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8001DC04(void* p);
void broadcast__6TLobbyFPv(void* a0);
int forward_8001DBD8__6TLobbyFPv(void* p);
s32 is_active__6TLobbyFv(void);
int TLobby__sub_8001DBD8(void*);
int broadcast_to_players__6TLobbyFii(void*, void*);
s8 *get_card_window_area__6TLobbyFv();

s32 is_active__6TLobbyFv(void) {
    return *get_card_window_area__6TLobbyFv() == 0 ? 0 : 1;
}

int forward_8001DBD8__6TLobbyFPv(void* p) { return TLobby__sub_8001DBD8(p); }
int TLobby__sub_8001DC04(void* p) { return TLobby__sub_8001DBD8(p); }

    extern int TLobby__data_805D4ABC;
void broadcast__6TLobbyFPv(void* a0) { broadcast_to_players__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
