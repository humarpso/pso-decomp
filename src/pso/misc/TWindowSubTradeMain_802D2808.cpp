#include "types.h"

struct RecoveredGlobal_802D2870_TLobby__data_80540BD0
{
  s32 value;
  u8 remaining[0x3DC];
};

extern "C" {
void set_trade_field_4__6TLobbyFii(s32, s32);
s32 snapshot_player_trade_inventory(void *, void *);
extern s32 TLobby__trade_window_state[];
extern s32 local_client_id;
extern u8 TLobby__trade_partner_client_id;
extern s32 TLobby__data_805D688C;
void TWindowSubTradeMain__sub_802D2870(void);
extern u16 trade_protocol_flags;
s32 are_both_trade_offers_confirmed(void);
}

extern "C" {

void clear_local_trade_final_confirmation(void);
void set_local_trade_final_confirmation(void);
s32 is_local_trade_offer_confirmation_requested(void);
void clear_local_trade_offer_confirmation(void);
void set_local_trade_offer_confirmation(void);
void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void transfer_trade_item_amount__6TLobbyFPvUii(void *, void *, void *);
void move_trade_item_amount__6TLobbyFPvUii(void *, void *, void *);
void send_modify_trade_proposal__6TLobbyFcii(int, void *, void *);
void draw_item_slot__19TWindowSubTradeMainFPv(void *);

extern u16 trade_protocol_flags;

s32 are_both_trade_offers_confirmed(void) {
    u16 v = trade_protocol_flags;
    if (!(v & 0x20)) {
        return 0;
    }
    return (v & 0x40) ? 1 : 0;
}

void clear_local_trade_final_confirmation(void) {
    trade_protocol_flags &= 0xFFFFFF7F;
}

extern u16 trade_protocol_flags;

void set_local_trade_final_confirmation(void) {
    trade_protocol_flags |= 0x80;
}

extern u16 trade_protocol_flags;

s32 is_local_trade_offer_confirmation_requested(void) {
    return ((u16) trade_protocol_flags >> 4U) & 1;
}

extern u16 trade_protocol_flags;

void clear_local_trade_offer_confirmation(void) {
    trade_protocol_flags &= 0xFFFFFFEF;
}

extern u16 trade_protocol_flags;

void set_local_trade_offer_confirmation(void) {
    trade_protocol_flags |= 0x10;
}

extern s32 TLobby__trade_window_state[];
extern void *TLobby__trade_main_window;

typedef struct RecoveredGlobal_802D2870_TLobby__data_80540BD0 RecoveredGlobal_802D2870_TLobby__data_80540BD0;
typedef char RecoveredGlobal_802D2870_TLobby__data_80540BD0_size[((sizeof(RecoveredGlobal_802D2870_TLobby__data_80540BD0)) == 0x3E0) ? (1) : (-1)];
void TWindowSubTradeMain__sub_802D2870(void) {
  s32 *temp_r31;
  snapshot_player_trade_inventory((void *) (&(*(RecoveredGlobal_802D2870_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value), (void *) local_client_id);
  temp_r31 = (s32 *) ((u8 *) ((s32 *) (((u8 *) (&(*(RecoveredGlobal_802D2870_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value)) + 0x1F0)));
  snapshot_player_trade_inventory((void *) temp_r31, (void *) ((s32) ((s8) (TLobby__trade_partner_client_id & 0xFFFFFFFFFFFFFFFFu))));
  set_trade_field_4__6TLobbyFii((s32) temp_r31, TLobby__data_805D688C);
}

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    send_modify_trade_proposal__6TLobbyFcii(2, arg0, arg1);
    transfer_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state, arg0, arg1);
    if (TLobby__trade_main_window != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__trade_main_window);
    }
}

extern s32 TLobby__trade_window_state[];
extern void *TLobby__trade_main_window;

void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    send_modify_trade_proposal__6TLobbyFcii(1, arg0, arg1);
    move_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state, arg0, arg1);
    if (TLobby__trade_main_window != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__trade_main_window);
    }
}

}
