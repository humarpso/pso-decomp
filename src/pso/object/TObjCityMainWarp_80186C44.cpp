#include "types.h"

struct Pkt_80186CC8 { u8 cmd; u8 size; u16 id; u16 value; u16 pad; };

struct Obj_80186CC8 { u8 pad[0x1c]; u16 id; };

struct Obj_80186DA0 {
    u8 pad0[0xD0];
    s32 fD0;
    u8 padD4[0xDC - 0xD4];
    s16 fDC;
    u8 padDE[2];
    s16 fE0;
    u8 padE2[0x16C - 0xE2];
    s32 f16C;
};

extern "C" {
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void *p);
void send_60_update__19TWindowSubTradeMainFPv(void *p);
void send_6x6A_set_boss_warp_flags__16TObjCityMainWarpFPvUs(Obj_80186CC8 *self, u16 value);
u8 is_current_floor_switch_set(int);
void update_floor_switch_state__16TObjCityMainWarpFPv(Obj_80186DA0 *arg0);
}

extern "C" {

void close_windows__16TObjCityMainWarpFPv(void *arg0);
void notify_player_warp__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
void trigger_warp_effect__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
s32 get_player_by_client_id(s32);
s32 end_player_keyboard_hold(s32);
s32 unsuppress_slot__11TWindowCtrlFi(s32);
s32 TWindow__close(void *);
s32 clear_flag__11TWindowCtrlFv();
s32 close__17TWindowSubComCardFPv(void *);
s32 obj_clear_flag30_20000(s32);
s32 obj_set_flag_20000(s32);
s32 play_effect_default__10TObjPlayerFii(s32, s32);
s32 send_code_45_1__10TObjPlayerFi();

extern s32 local_client_id;

void close_windows__16TObjCityMainWarpFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x168) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x168));
        *(u32 *)((s8 *)arg0 + 0x168) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0xB0));
        *(u32 *)((s8 *)arg0 + 0xB0) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x164) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x164));
        *(u32 *)((s8 *)arg0 + 0x164) = 0U;
    }
    end_player_keyboard_hold(local_client_id);
    clear_flag__11TWindowCtrlFv();
    unsuppress_slot__11TWindowCtrlFi(local_client_id);
}

void send_6x6A_set_boss_warp_flags__16TObjCityMainWarpFPvUs(Obj_80186CC8 *self, u16 value) {
    Pkt_80186CC8 pkt;
    init_pkt_cmd_6A__19TWindowSubTradeMainFPv(&pkt);
    pkt.id = self->id;
    pkt.value = value;
    send_60_update__19TWindowSubTradeMainFPv(&pkt);
}

void notify_player_warp__16TObjCityMainWarpFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        send_code_45_1__10TObjPlayerFi();
        obj_clear_flag30_20000(temp_r3);
    }
}

void trigger_warp_effect__16TObjCityMainWarpFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
        obj_set_flag_20000(temp_r3);
        *(s32 *)((s8 *)arg0 + 0x174) = 0x12C;
    }
}
void update_floor_switch_state__16TObjCityMainWarpFPv(Obj_80186DA0 *arg0) {
    switch (arg0->fE0) {
    case 0:
        arg0->fD0 = 0;
        arg0->fE0 = 1;
        break;
    case 1:
        if (arg0->f16C >= 0 && is_current_floor_switch_set((u16)arg0->f16C) == 1) {
            arg0->fDC = 0;
        }
        break;
    case -1:
        break;
    }
}

}
