#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8001DC24_lbl_80515BC8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
extern s32 TLobby__data_805D4A98;
void TLobby__sub_8001DBD8(s32 _w0);
extern RecoveredGlobal_8001DC24_lbl_80515BC8 lbl_80515BC8;
M2C_UNK *get_shared_text_buffer(void);
}

extern "C" {

void TLobby__sub_8001DC04(void* p);
void broadcast__6TLobbyFPv(void* a0);
void forward_8001DBD8__6TLobbyFPv(void* p);
s32 is_active__6TLobbyFv(void);
int broadcast_to_players__6TLobbyFii(void*, void*);
s8 *get_card_window_area__6TLobbyFv();

s32 is_active__6TLobbyFv(void) {
    return *get_card_window_area__6TLobbyFv() == 0 ? 0 : 1;
}

void TLobby__sub_8001DBD8(s32 _w0) {
    TLobby__data_805D4A98 = 0;
}

void forward_8001DBD8__6TLobbyFPv(void* p) { TLobby__sub_8001DBD8((s32)(p)); }
void TLobby__sub_8001DC04(void* p) { TLobby__sub_8001DBD8((s32)(p)); }

    extern int TLobby__lobby_instance;

typedef char RecoveredGlobal_8001DC24_lbl_80515BC8_size[sizeof(RecoveredGlobal_8001DC24_lbl_80515BC8) == 0x100 ? 1 : -1];
M2C_UNK *get_shared_text_buffer(void) {
    return &lbl_80515BC8.value;
}

void broadcast__6TLobbyFPv(void* a0) { broadcast_to_players__6TLobbyFii((void*)(TLobby__lobby_instance), a0); }

}
