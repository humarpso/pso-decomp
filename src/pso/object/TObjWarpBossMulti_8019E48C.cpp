#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pl_8019E4E8 { u8 pad0[0x38]; f32 pos[3]; };
struct Wb_8019E4E8 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x68]; f32 fAC; };
struct Pkt_8019E6C0 { u8 cmd; u8 size; u16 id; u16 value; u16 pad; };

struct Obj_8019E6C0 { u8 pad[0x1c]; u16 id; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(s32);
f32 xz_distance_squared(s32, s32);
s32 get_player_by_client_id(s32);
extern s32 lbl_805D53A0;
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0);
s32 TObjWarpBossMulti__sub_8019E4E8(Wb_8019E4E8 *arg0);
s32 get_main_phase();
extern s32 lbl_805D55C0;
s32 TObjWarpBossMulti__sub_8019E4B4(void);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void *p);
void send_60_update__19TWindowSubTradeMainFPv(void *p);
void TObjWarpBossMulti__sub_8019E6C0(Obj_8019E6C0 *self, u16 value);
}

extern "C" {

void close_windows__17TObjWarpBossMultiFPv(void *arg0);
void handle_6x6A_set_boss_warp_flags(void *arg0);
s32 is_lobby_active__17TObjWarpBossMultiFv(void);
void *find_entity_by_id(u16);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
M2C_UNK TWindowSubTradeMain__sub_80187CCC();
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_state__6TLobbyFv();

s32 is_lobby_active__17TObjWarpBossMultiFv(void) {
    return get_state__6TLobbyFv() ? 1 : 0;
}

extern s32 lbl_805D53A0;

s32 TObjWarpBossMulti__sub_8019E4B4(void) {
    return ((get_main_phase() - 0xF) == 0) ? lbl_805D55C0 : 0;
}

s32 TObjWarpBossMulti__sub_8019E4E8(Wb_8019E4E8 *arg0) {
    s32 ok = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        Pl_8019E4E8 *p = (Pl_8019E4E8 *)get_player_by_client_id(i);
        if (p != 0) {
            if (((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(p) != get_current_floor() || ((f32 (*)(void *, void *))xz_distance_squared)(p->pos, arg0->pos) > arg0->fAC * arg0->fAC) {
                ok = 0;
            }
        }
    }
    return ok;
}

#pragma push
#pragma fp_contract on
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0) {
    s32 temp_r31;
    s32 temp_r3b;
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = get_current_floor();
        temp_r3b = get_field_3e4__10TObjPlayerFPv(temp_r3);
        if ((temp_r3b == temp_r31) && (xz_distance_squared(arg0 + 0x38, temp_r3 + 0x38) < (farg0 * farg0))) {
            return temp_r3;
        }
    }
    return 0;
}
#pragma pop

void close_windows__17TObjWarpBossMultiFPv(void *arg0) {
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
    end_player_keyboard_hold(lbl_805D53A0);
    clear_flag__11TWindowCtrlFv();
    unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
}

void handle_6x6A_set_boss_warp_flags(void *arg0) {
    void *temp_r3;

    TWindowSubTradeMain__sub_80187CCC();
    temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0xDC) = (s16) M2C_FIELD(arg0, s16 *, 4);
    }
}
void TObjWarpBossMulti__sub_8019E6C0(Obj_8019E6C0 *self, u16 value) {
    Pkt_8019E6C0 pkt;
    init_pkt_cmd_6A__19TWindowSubTradeMainFPv(&pkt);
    pkt.id = self->id;
    pkt.value = value;
    send_60_update__19TWindowSubTradeMainFPv(&pkt);
}

}
