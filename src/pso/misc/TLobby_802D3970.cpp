#include "types.h"

extern "C" {

void update_game_modes__6TLobbyFv(void);
int close_trade_request__6TLobbyFPv(void* p);
int TLobby__sub_802D39BC(void* p);
int TLobby__sub_802D39DC(void* p);
int TLobby__sub_802D39FC(void* p);
void byteswap_trade_packet__6TLobbyFPv(void* p);
void TLobby__sub_802D3A58(void* p, void* a1);
void build_6xA6_modify_trade_proposal(void* p);
int TLobby__sub_801E44D8(void*, void*);
int TLobby__sub_802D245C(void);
int TLobby__sub_802D2518(void);
int TLobby__sub_802D3820(void);
int TLobby__sub_802D38B4(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);
int close_trade_request__6TLobbyFv(void*);
int prepare_trade_packet__6TLobbyFPv(void*);
int update_battle_mode__6TLobbyFv(void);

void update_game_modes__6TLobbyFv(void) { TLobby__sub_802D3820(); update_battle_mode__6TLobbyFv(); TLobby__sub_802D2518(); TLobby__sub_802D245C(); }
int close_trade_request__6TLobbyFPv(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39BC(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39DC(void* p) { return TLobby__sub_802D38B4(p); }
int TLobby__sub_802D39FC(void* p) { return TLobby__sub_802D38B4(p); }
void byteswap_trade_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void TLobby__sub_802D3A58(void* p, void* a1) { prepare_trade_packet__6TLobbyFPv(p); TLobby__sub_801E44D8(p, a1); }
void build_6xA6_modify_trade_proposal(void* p) { *(u8*)((char*)p + 0x0) = 166; *(u8*)((char*)p + 0x1) = 4; }

}
