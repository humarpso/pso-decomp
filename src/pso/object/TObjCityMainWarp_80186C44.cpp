#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void TObjCityMainWarp__sub_80186CC8(Obj_80186CC8 *self, u16 value);
u8 TODoorAncient08__sub_80229220(int);
void TObjCityMainWarp__sub_80186DA0(Obj_80186DA0 *arg0);
}

extern "C" {

void close_windows__16TObjCityMainWarpFPv(void *arg0);
void notify_player_warp__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
void trigger_warp_effect__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
s32 get_player_by_client_id(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK obj_clear_flag30_20000(s32);
M2C_UNK obj_set_flag_20000(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();

extern s32 lbl_805D53A0;

void close_windows__16TObjCityMainWarpFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168));
        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x164));
        M2C_FIELD(arg0, u32 *, 0x164) = 0U;
    }
    TWindowChat__sub_8024AD30(lbl_805D53A0);
    clear_flag__11TWindowCtrlFv();
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

void TObjCityMainWarp__sub_80186CC8(Obj_80186CC8 *self, u16 value) {
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
        M2C_FIELD(arg0, s32 *, 0x174) = 0x12C;
    }
}
void TObjCityMainWarp__sub_80186DA0(Obj_80186DA0 *arg0) {
    switch (arg0->fE0) {
    case 0:
        arg0->fD0 = 0;
        arg0->fE0 = 1;
        break;
    case 1:
        if (arg0->f16C >= 0 && TODoorAncient08__sub_80229220((u16)arg0->f16C) == 1) {
            arg0->fDC = 0;
        }
        break;
    case -1:
        break;
    }
}

}
