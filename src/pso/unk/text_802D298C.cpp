#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D298C_TLobby__data_80540BD0 {
    M2C_UNK value;
    u8 remaining[0x3DC];
};

struct RecoveredGlobal_802D299C_TLobby__data_80540BD0 {
    M2C_UNK value;
    u8 remaining[0x3DC];
};

struct RecoveredGlobal_802D29AC_TLobby__data_80540BD0 {
    M2C_UNK value;
    u8 remaining[0x3DC];
};

struct E_802D2A70 { u32 id; s32 count; };

extern "C" {
extern RecoveredGlobal_802D298C_TLobby__data_80540BD0 TLobby__trade_window_state;
u8 *TLobby__sub_802D298C(void);
extern RecoveredGlobal_802D298C_TLobby__data_80540BD0 TLobby__trade_window_state;
u8 *TLobby__sub_802D299C(void);
extern RecoveredGlobal_802D298C_TLobby__data_80540BD0 TLobby__trade_window_state;
M2C_UNK *TLobby__sub_802D29AC(void);
M2C_UNK try_spend_actor_meseta(s32, s32);
M2C_UNK send_6x29_delete_item__10TObjPlayerFPvii(s32, s32, s32);
s32 get_player_by_client_id(s32);
s32 check_player_action_allowed();
M2C_UNK remove_list_entry_by_id(s32);
s32 fn_801D4270(s32);
M2C_UNK send_trade_ready__9TProtocolFv(s32);
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFv();
M2C_UNK *TLobby__sub_802D29AC(void);
extern s32 local_client_id;
extern s32 TLobby__protocol_instance;
extern u8 TLobby__data_805D688B;
void apply_trade_items__6TLobbyFv(void);
}

extern "C" {

extern u32 TLobby__data_805D689C;

typedef char RecoveredGlobal_802D298C_TLobby__data_80540BD0_size[sizeof(RecoveredGlobal_802D298C_TLobby__data_80540BD0) == 0x3E0 ? 1 : -1];
u8 *TLobby__sub_802D298C(void) {
    return (u8 *)&TLobby__trade_window_state.value + 0xF8;
}

typedef char RecoveredGlobal_802D299C_TLobby__data_80540BD0_size[sizeof(RecoveredGlobal_802D299C_TLobby__data_80540BD0) == 0x3E0 ? 1 : -1];
u8 *TLobby__sub_802D299C(void) {
    return (u8 *)&(*(RecoveredGlobal_802D299C_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value + 0x1F0;
}

typedef char RecoveredGlobal_802D29AC_TLobby__data_80540BD0_size[sizeof(RecoveredGlobal_802D29AC_TLobby__data_80540BD0) == 0x3E0 ? 1 : -1];
M2C_UNK *TLobby__sub_802D29AC(void) {
    return &(*(RecoveredGlobal_802D29AC_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value;
}

s32 TLobby__sub_802D29B8(u32 arg0) {
    if ((u32) TLobby__data_805D689C != arg0) {
        return 0;
    }
    TLobby__data_805D689C = 0U;
    return 1;
}

int TLobby__sub_802D29DC(int a0) { TLobby__data_805D689C = a0; return 1; }

extern u32 TLobby__data_805D6898;

s32 TLobby__sub_802D29E8(u32 arg0) {
    if ((u32) TLobby__data_805D6898 != arg0) {
        return 0;
    }
    TLobby__data_805D6898 = 0U;
    return 1;
}

extern u32 TLobby__data_805D6898;

s32 TLobby__sub_802D2A0C(u32 arg0) {
    if ((u32) TLobby__data_805D6898 != 0U) {
        return 0;
    }
    TLobby__data_805D6898 = arg0;
    return 1;
}

extern u32 TLobby__data_805D6894;

s32 TLobby__sub_802D2A2C(u32 arg0) {
    if ((u32) TLobby__data_805D6894 != arg0) {
        return 0;
    }
    TLobby__data_805D6894 = 0U;
    return 1;
}

extern u32 TLobby__data_805D6894;

s32 TLobby__sub_802D2A50(u32 arg0) {
    if ((u32) TLobby__data_805D6894 != 0U) {
        return 0;
    }
    TLobby__data_805D6894 = arg0;
    return 1;
}
void apply_trade_items__6TLobbyFv(void) {
    s32 allowed;
    struct E_802D2A70 *list;
    u32 id;
    s32 player;
    struct E_802D2A70 *p;
    s32 i;
    s32 count;
    s32 flag;
    if ((s32) TLobby__data_805D688B == 7) {
        player = get_player_by_client_id(local_client_id);
        if (player != 0) {
            list = (struct E_802D2A70 *)((s32 *)TLobby__sub_802D29AC());
            if (list != NULL) {
                allowed = check_player_action_allowed();
                p = list;
                flag = 0;
                for (i = 0; i < 0x1F; i++, p++) {
                    count = p->count;
                    id = p->id;
                    if (count > 0) {
                        if (id == 0xFFFFFF01) {
                            try_spend_actor_meseta(player, count);
                        } else {
                            if ((allowed != 0) && (fn_801D4270(id) != 0)) {
                                remove_list_entry_by_id(id);
                                flag = 1;
                            }
                            send_6x29_delete_item__10TObjPlayerFPvii(player, id, count);
                        }
                    }
                }
                if ((flag == 0) || (load_character_from_card__23TAdSinglePlyChrSelectGCFv() == 0)) {
                    TLobby__data_805D688B = 8;
                    send_trade_ready__9TProtocolFv(TLobby__protocol_instance);
                }
            }
        }
    }
}

}
