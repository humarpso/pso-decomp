#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct pkt_801B5164 {
    u8 hdr[2];
    u16 player_id;
};

struct Vec_801B5328 { f32 x, y, z; };

struct Pkt_801B5328 {
    u8 hdr[2];
    s16 actor_id;
    s16 a;
    s16 b;
    f32 x;
    f32 z;
    f32 radius_sq;
};

extern "C" {
f32 get_mag_scale_f__10TObjPlayerFPv(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
extern s32 some_id_805c6f74;
extern f32 TObjPlayer__data_805DC294;
void TObjPlayer__sub_801B4C34(s32 arg0);
s32 check_player_flag1__6TLobbyFPv();
f32 TObjPlayer__sub_801BF6B0(void *, f32, f32, f32);
f32 *TObjPlayer__sub_801BF6B8(void *);
s32 TObjPlayer__sub_801B50C0(u8 *self, f32 *pos);
void TObjPlayer__sub_8011E204(u8 *, int);
s32 draw_small_font__10TObjPlayerFi(s32 arg0, void *arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);
s32 validate_6x2D_release_hold(void *);
void handle_6x2D_release_hold(void *arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
void TObjPlayer__sub_801C0B24(void *);
void bswap_and_send_packet__10TObjPlayerFi(void *);
void TObjPlayer__sub_801B5328(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius);
}

extern "C" {

struct S801B5200_801B3FD8 { s8 b[2]; s16 h; };

void clear_action_flag__10TObjPlayerFPv(void *arg0);
s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0);
void send_code_45_1__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
s32 TObjPlayer__sub_801AFF0C();
s32 TObjPlayer__sub_801C2044(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK clear_flag_0x2__10TObjPlayerFPv(void *);
u32 is_action_active__10TObjPlayerFPv(void *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();
M2C_UNK send_lobby_update_font__10TObjPlayerFPv(void *);
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);

void clear_action_flag__10TObjPlayerFPv(void *arg0) {
    if ((TObjPlayer__sub_801C2044(M2C_FIELD(arg0, s32 *, 0xD00) + 0x20) == 0) && (is_action_active__10TObjPlayerFPv(arg0) != 0U)) {
        clear_flag_0x2__10TObjPlayerFPv(arg0);
        send_code_45_1__10TObjPlayerFi((s32)(arg0));
    }
}

void TObjPlayer__sub_801B4C34(s32 arg0) {
    if (!(get_mag_scale_f__10TObjPlayerFPv((void *) (arg0 + 0x608)) >= TObjPlayer__data_805DC294)) {
        reset_transform_state__10TObjPlayerFv();
        some_id_805c6f74 |= 0x810;
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
        set_chunk_material_color((void *) (arg0 + 0x624));
    }
}

s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && (TObjPlayer__sub_801AFF0C() != 0)) {
        return temp_r3;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 TObjPlayer__sub_801B50C0(u8 *self, f32 *pos) {
    f32 *center;
    f32 x, y, z;
    f32 dx, dz;
    if (check_player_flag1__6TLobbyFPv() == 0) {
        return 0;
    }
    center = TObjPlayer__sub_801BF6B8(self + 0x730);
    x = center[0];
    y = pos[0];
    z = center[1];
    dx = x - y;
    dz = z - pos[2];
    return (u32)__cntlzw(TObjPlayer__sub_801BF6B0(self + 0x730, z, y, x) > (dx * dx + dz * dz)) >> 5;
}
#pragma pop

void handle_6x2D_release_hold(void *arg0) {
    struct pkt_801B5164 pkt;
    set_code_45_1__10TObjPlayerFPv(&pkt);
    draw_small_font__10TObjPlayerFi((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x2D_release_hold(&pkt) != 0) {
        u8 *p = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(pkt.player_id);
        if (p != NULL) {
            TObjPlayer__sub_8011E204(p, 1);
        }
    }
}

s32 draw_small_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_code_45_1__10TObjPlayerFi(s32 arg0) {
    struct S801B5200_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_45_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        send_lobby_update_font__10TObjPlayerFPv(&sp8);
    }
}
void TObjPlayer__sub_801B5328(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius) {
    struct Pkt_801B5328 pkt;
    if (arg0 == 0 || obj_isState2_324() == 0) {
        TObjPlayer__sub_801C0B24(&pkt);
        pkt.actor_id = obj_getField1c(arg0);
        pkt.b = arg3;
        pkt.a = arg2;
        pkt.x = pos->x;
        pkt.z = pos->z;
        pkt.radius_sq = radius * radius;
        bswap_and_send_packet__10TObjPlayerFi(&pkt);
    }
}

}
