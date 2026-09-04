#include "types.h"

extern "C" {

int TLobby__sub_800F79C4(void);
void TLobby__sub_800F7A1C(void* p);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);
void broadcast_state__6TLobbyFPv(void* p);
void bswap_enemy_state__6TLobbyFPv(void* p);
void bswap_field__6TLobbyFPv(void* p);
void reset_keyboard_control__6TLobbyFv(void);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int get_global_state__14TOKeyMachine01Fv(void);
void handle_disconnect_cleanup(void);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_field__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void broadcast_state__6TLobbyFPv(void* p) { bswap_field__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }

int TLobby__sub_800F79C4(void) { return 0; }

void bswap_enemy_state__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_800F7A1C(void* p) { bswap_enemy_state__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TLobby__sub_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int TLobby__sub_800F7A64(void) { return 4; }

void reset_keyboard_control__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7A8C(); }

}
