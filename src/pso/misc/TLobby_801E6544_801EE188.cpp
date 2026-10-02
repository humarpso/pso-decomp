#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801EE330 {
    u8 cmd;
    u8 size;
    u16 pad0;
    u16 a;
    u16 pad1;
    s32 b;
};

extern "C" {
void sync_quest_register_and_send__6TLobbyFPv(void* p);
void build_6x77_sync_quest_register(void* p);
extern s32 TLobby__data_80512220[];
void send_6x77_sync_quest_register(void);
u8* get_global_state__23TAdSinglePlyChrSelectGCFv(void);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801EE374(void);
u8* get_global_state__23TAdSinglePlyChrSelectGCFv(void);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801EE3C0(void);
}

extern "C" {

void handle_active_battle__6TLobbyFv(void);
void reset_battle_camera__6TLobbyFv(void);
void sync_battle_ctrl_4p__6TLobbyFv(void);
void update_local_player__6TLobbyFv(void);
M2C_UNK reset_cameras_to_actor(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B3FD8();
s32 get_player_by_client_id(s32);
M2C_UNK forward_1BF500_at_63c__10TObjPlayerFPv(s32);
M2C_UNK player_flag_1__6TLobbyFPv();
M2C_UNK reset_battle_camera__11TCameraCtrlFPv();
M2C_UNK stop_battle__10TObjPlayerFPv();

extern s32 lbl_805D53A0;

void handle_active_battle__6TLobbyFv(void) {
    if (get_player_by_client_id((s32)(lbl_805D53A0)) != 0U) {
        stop_battle__10TObjPlayerFPv();
    }
}

extern s32 lbl_805D53A0;

void sync_battle_ctrl_4p__6TLobbyFv(void) {
    if (get_player_by_client_id((s32)(lbl_805D53A0)) != 0U) {
        player_flag_1__6TLobbyFPv();
    }
}

extern s32 lbl_805D53A0;

void reset_battle_camera__6TLobbyFv(void) {
    u32 temp_r3;
    reset_battle_camera__11TCameraCtrlFPv();
    temp_r3 = get_player_by_client_id((s32)(lbl_805D53A0));
    if (temp_r3 != 0U) {
        reset_cameras_to_actor(temp_r3, 0);
    }
}

extern s32 lbl_805D53A0;

void send_6x77_sync_quest_register(void) {
    Pkt_801EE330 pkt;
    build_6x77_sync_quest_register(&pkt);
    pkt.a = TLobby__data_80512220[0];
    pkt.b = TLobby__data_80512220[1];
    sync_quest_register_and_send__6TLobbyFPv(&pkt);
}

void TLobby__sub_801EE374(void) {
    u32 x = ((u32 *)&TLobby__data_80512220)[0];
    u32 y = ((u32 *)&TLobby__data_80512220)[1];
    u8* s = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (s != 0 && x < 0x100) {
        s[x + 0x10] = y;
    }
}

void TLobby__sub_801EE3C0(void) {
    u32 x = ((u32 *)&TLobby__data_80512220)[0];
    u32 y = ((u32 *)&TLobby__data_80512220)[1];
    u8* s = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (s != 0 && x < 0x100) {
        s[x + 0x10] = y;
    }
}

void update_local_player__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id((s32)(lbl_805D53A0));
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B3FD8();
        forward_1BF500_at_63c__10TObjPlayerFPv(temp_r3);
    }
}

}
