#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
int update_trade_list_send__6TLobbyFv(void);
int update_trade_proposal_state__6TLobbyFv(void);
int update_trade_partner__6TLobbyFv(void);
int reset_trade_state__6TLobbyFv(void*);
int bswap_32__FPUl(void*);
int close_trade_request__6TLobbyFv(void*);
int prepare_trade_packet__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int update_battle_mode__6TLobbyFv(void);

void update_game_modes__6TLobbyFv(void) { update_trade_partner__6TLobbyFv(); update_battle_mode__6TLobbyFv(); update_trade_proposal_state__6TLobbyFv(); update_trade_list_send__6TLobbyFv(); }
int close_trade_request__6TLobbyFPv(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39BC(void* p) { return close_trade_request__6TLobbyFv(p); }
int TLobby__sub_802D39DC(void* p) { return reset_trade_state__6TLobbyFv(p); }
int TLobby__sub_802D39FC(void* p) { return reset_trade_state__6TLobbyFv(p); }
void byteswap_trade_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void prepare_and_send_trade_packet__6TLobbyFPvPv(void* p, void* a1) { prepare_trade_packet__6TLobbyFPv(p); send_subcommand_to_client__6TLobbyFPvUi(p, a1); }
void build_6xA6_modify_trade_proposal(void* p) { *(u8*)((char*)p + 0x0) = 166; *(u8*)((char*)p + 0x1) = 4; }

extern u16 lbl_805D63FC;

void TLobby__sub_802D3AA8(void) {
    lbl_805D63FC |= 8;
}

}
