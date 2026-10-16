#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TLobby__sub_802D39BC(void* p);
int TLobby__sub_802D39DC(void* p);
int TLobby__sub_802D39FC(void* p);
void TLobby__sub_802D3AA8(void);
void build_6xA6_modify_trade_proposal(void* p);
void byteswap_trade_packet__6TLobbyFPv(void* p);
int close_trade_request__6TLobbyFPv(void* p);
void prepare_and_send_trade_packet__6TLobbyFPvPv(void* p, void* a1);
void update_game_modes__6TLobbyFv(void);
int send_subcommand_to_client__6TLobbyFPvUi(void*, void*);
int reset_trade_state__6TLobbyFv(void*);
int bswap_32__FPUl(void*);
int close_trade_request__6TLobbyFv(void*);

void update_game_modes__6TLobbyFv(void) { TLobby::update_trade_partner(); TLobby::update_battle_mode(); TLobby::update_trade_proposal_state(); TLobby::update_trade_list_send(); }
int close_trade_request__6TLobbyFPv(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39BC(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39DC(void* p) { return reset_trade_state__6TLobbyFv(p); }
int TLobby__sub_802D39FC(void* p) { return reset_trade_state__6TLobbyFv(p); }
void byteswap_trade_packet__6TLobbyFPv(void* p) { ((TObjPlayer *)p)->read_be16_field2(); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void prepare_and_send_trade_packet__6TLobbyFPvPv(void* p, void* a1) { ((TLobby *)p)->prepare_trade_packet(); send_subcommand_to_client__6TLobbyFPvUi(p, a1); }
void build_6xA6_modify_trade_proposal(void* p) { *(u8*)((char*)p + 0x0) = 166; *(u8*)((char*)p + 0x1) = 4; }

extern u16 lbl_805D63FC;

void TLobby__sub_802D3AA8(void) {
    lbl_805D63FC |= 8;
}

}
