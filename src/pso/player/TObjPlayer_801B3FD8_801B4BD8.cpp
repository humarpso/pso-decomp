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

struct Obj_801B4FD8 {
    u16 f0;
    s16 f2;
    s32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    u8 f28[0x64 - 0x28];
    s32 f64;
    u8 f68[8];
    u8 f70[8];
    u8 f78[0x94 - 0x78];
    u8 f94[4];
    u8 f98[0xAC - 0x98];
    s32 fAC;
    s32 fB0;
    s8 fB4[0x13];
    u8 padC7[0x13C - 0xC7];
    u8 f13C[0x488 - 0x13C];
    s32 f488;
};

struct Pkt_801B5254 {
    u8 hdr[2];
    u16 client;
    s16 f4;
    s16 f6;
    f32 f8;
    f32 fC;
    f32 f10;
};

struct VBase_801B4CE4 { u8 pad[0x18]; };

struct Equip_801B4CE4 : VBase_801B4CE4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void restore(s32);
    virtual void store(s32);
};

struct Rec12_801B4CE4 { u8 b[0xC]; };

struct Rec1C_801B4CE4 { u8 b[0x1C]; };

struct Src_801B4CE4 {
    u8 pad0[0x2E];
    s16 f2E;
    u32 f30;
    u8 pad34[0x38 - 0x34];
    u8 pos38[0x5C - 0x38];
    u8 f5C[0x254 - 0x5C];
    Rec12_801B4CE4 f254[5];
    u8 pad290[0x2B0 - 0x290];
    s32 f2B0;
    u8 pad2B4[0x326 - 0x2B4];
    s16 f326;
    u8 pad328[0x32C - 0x328];
    s16 f32C;
    u8 pad32E[0x334 - 0x32E];
    s32 f334;
    u8 pad338[0x41C - 0x338];
    u8 f41C[0x428 - 0x41C];
    u8 f428[0x730 - 0x428];
    u8 f730[0x828 - 0x730];
    u8 f828[0x830 - 0x828];
    u8 f830[0x858 - 0x830];
    u8 f858[0x85C - 0x858];
    u8 f85C[0xD00 - 0x85C];
    s32 fD00;
    u8 padD04[0xDAC - 0xD04];
    u8 fDAC[4];
};

struct Dst_801B4CE4 {
    s16 f0;
    s16 f2;
    u32 f4;
    u8 f8[0x14 - 0x8];
    u8 f14[0x20 - 0x14];
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    Rec12_801B4CE4 f28[5];
    s32 f64;
    u8 f68[8];
    u8 f70[8];
    u8 f78[0x94 - 0x78];
    u8 f94[4];
    u8 f98[0xAC - 0x98];
    s32 fAC;
    s32 fB0;
    u8 fB4[0x13];
    u8 padC7[0xC8 - 0xC7];
    u8 fC8[0x118 - 0xC8];
    u8 f118[0x13C - 0x118];
    s32 f13C;
    u8 f140[2];
    Rec1C_801B4CE4 f142[0x13];
    u8 pad[0x488 - 0x142 - 0x13 * 0x1C];
    s32 f488;
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
s32 is_outside_movement_hold__10TObjPlayerFPvPv(u8 *self, f32 *pos);
void TObjPlayer__sub_8011E204(u8 *, int);
s32 draw_small_font__10TObjPlayerFi(s32 arg0, void *arg1);
s32 get_player_by_client_id(s32);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);
s32 validate_6x2D_release_hold(void *);
void handle_6x2D_release_hold(void *arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
void TObjPlayer__sub_801C0B24(void *);
void bswap_and_send_packet__10TObjPlayerFi(void *);
void send_6x2C_impose_hold(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius);
void init_forward__10TObjPlayerFPv(void *);
void clear_header_struct__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE890(void *);
void TObjPlayer__sub_801BF660(void *);
s8 get_item_count_max__10TObjPlayerFv();
void TObjPlayer__sub_801C1A00(void *);
void TObjPlayer__sub_801C20A4(void *);
void __construct_array(void *, void *(*)(void *), void *, u32, u32);
void *init_192dc_return_self__10TObjPlayerFPv(void *);
extern const f32 TObjPlayer__data_805DC278;
Obj_801B4FD8 *TObjPlayer__sub_801B4FD8(Obj_801B4FD8 *self);
void set_state_flags__10TObjPlayerFPvUi(s32, u32);
s32 TObjPlayer__sub_801AFF0C();
s32 get_player_by_client_id(s32);
s32 check_flag_4__10TObjPlayerFPv(s32);
void TObjPlayer__sub_801BF6C0(s32, f32);
void TObjPlayer__sub_801BF6C8(s32, f32, f32);
void TObjPlayer__sub_801BF6D4(s32, s16);
void TObjPlayer__sub_801BF6DC(s32, s16);
void TObjPlayer__sub_801BFFA8(Pkt_801B5254 *, s32);
void bswap_pkt_u16x2_u32__10TObjPlayerFPv(Pkt_801B5254 *);
void TObjPlayer__sub_801C0B24(void *);
s32 validate_6x2C_impose_hold(Pkt_801B5254 *);
void create__17TObjEneHoldEffectFPvPvPv(s32, s16, s16);
void handle_6x2C_impose_hold(s32 arg0);
void TObjPlayer__sub_800113E4(void *, s32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getS16_32E(void *);
s32 obj_getS16_32C(void *);
s16 obj_getField1c(s32);
s32 get_field_3e4__10TObjPlayerFPv(void *);
void copy_data__6TLobbyFPvPv(void *, s32);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 get_field_3e0__12TBoss3VoloptFPv(void *);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void TNpcPlayer__sub_8007206C(void *, void *);
void TItem__sub_80101CF4(void *);
void set_facing__10TObjPlayerFPvs(void *, s32);
s16 get_stat_bonus__10TObjPlayerFPv(void *);
s16 get_stat__10TObjPlayerFPv(void *);
Equip_801B4CE4 *get_equip_field_d04__10TObjPlayerFPv(void *, s32);
void TLobby__sub_8013A348(void *);
s32 TObjPlayer__sub_801AFD8C(void *);
void TObjPlayer__sub_801BE784(void *, s32);
s32 get_battle_mode__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE794(void *, s32);
s32 get_byte_339__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE7A4(void *, s32);
s32 get_mag_level__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE7B4(void *, s32);
s32 TObjPlayer__sub_801BE7BC(void *);
void TObjPlayer__sub_801BE7E0(void *, s32);
s32 get_equip_flags__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE80C(void *, s32);
s32 get_inventory_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE838(void *, s32);
s32 get_field_374_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE864(void *, s32);
s32 get_field_374__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BEEAC(void *, void *);
void TObjPlayer__sub_801BEEE0(void *, void *);
void TObjPlayer__sub_801BEEEC(void *, void *);
void TObjPlayer__sub_801BEF30(void *, void *);
void TObjPlayer__sub_801BEF44(void *, void *);
u32 TObjPlayer__sub_801BFFA0(void *);
u8 TObjPlayer__sub_801C0124(void *, s16);
s32 run_state_query__10TObjPlayerFPvi(s32, void *);
void split_capped_value__10TObjPlayerFUcPvPv(u8, void *, void *);
void TObjPlayer__sub_801B4CE4(Src_801B4CE4 *src, Dst_801B4CE4 *dst);
}

extern "C" {

struct S801B5200_801B3FD8 { s8 b[2]; s16 h; };

void clear_action_flag__10TObjPlayerFPv(void *arg0);
s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0);
void send_code_45_1__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
s32 TObjPlayer__sub_801AFF0C();
s32 TObjPlayer__sub_801C2044(s32);
s32 get_player_by_client_id(s32);
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

    temp_r3 = get_player_by_client_id((u16)arg0);
    if ((temp_r3 != 0) && (TObjPlayer__sub_801AFF0C() != 0)) {
        return temp_r3;
    }
    return 0;
}

void TObjPlayer__sub_801B4CE4(Src_801B4CE4 *src, Dst_801B4CE4 *dst) {
    s32 j;
    s32 i;
    s32 a;
    s32 b;
    u32 v;
    dst->f0 = obj_getField1c((s32)src);
    dst->f2 = src->f2E;
    dst->f4 = src->f30 & ~0x02000000;
    VecCopy__FP3VecPC3Vec(dst->f8, src->pos38);
    copy_xyz__10TObjPlayerFPvPv(dst->f14, src->f5C);
    dst->f20 = src->f326;
    dst->f22 = src->f32C;
    for (i = 0; i < 5; i++) {
        TObjPlayer__sub_801BEF44(&dst->f28[i], &src->f254[i]);
    }
    copy_header_struct__6TLobbyFPvPv(dst->f68, src->fDAC);
    TObjPlayer__sub_801BEF30(dst->f70, src->f828);
    TObjPlayer__sub_801BEEEC(dst->f78, src->f830);
    TObjPlayer__sub_801BEEE0(dst->f94, src->f858);
    TObjPlayer__sub_801BEEAC(dst->f98, src->f730);
    dst->fAC = get_field_3e0__12TBoss3VoloptFPv(src);
    dst->f488 = get_field_3e4__10TObjPlayerFPv(src);
    dst->fB0 = src->f334;
    dst->f64 = TObjPlayer__sub_801AFD8C(src);
    TNpcPlayer__sub_8007206C(dst->fC8, src->f85C);
    dst->f13C = run_state_query__10TObjPlayerFPvi(src->fD00, dst->f140);
    a = obj_getS16_32C(src);
    b = obj_getS16_32E(src);
    for (i = 0; i != 0xD; i++) {
        Equip_801B4CE4 *e = get_equip_field_d04__10TObjPlayerFPv(src, i);
        if (e != NULL) {
            e->store(1);
        }
    }
    copy_data__6TLobbyFPvPv(dst->f118, src->f2B0);
    dst->f24 = get_stat__10TObjPlayerFPv(src);
    dst->f26 = get_stat_bonus__10TObjPlayerFPv(src);
    TObjPlayer__sub_801BE864(dst, get_field_374__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE838(dst, get_field_374_state__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE80C(dst, get_inventory_state__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE7E0(dst, get_equip_flags__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE7B4(dst, TObjPlayer__sub_801BE7BC(src));
    for (i = 0; i < 0x13; i++) {
        split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801C0124(src->f428, i), &dst->fB4[i], &dst->f142[i]);
    }
    for (j = 0; j != 0xD; j++) {
        Equip_801B4CE4 *e = get_equip_field_d04__10TObjPlayerFPv(src, j);
        if (e != NULL) {
            e->restore(1);
        }
    }
    TObjPlayer__sub_800113E4(src, a);
    set_facing__10TObjPlayerFPvs(src, b);
    TItem__sub_80101CF4(dst);
    v = TObjPlayer__sub_801BFFA0(src->f41C);
    dst->f142[0].b[1] = v;
    dst->f142[1].b[1] = v >> 8;
    dst->f142[2].b[1] = v >> 16;
    dst->f142[3].b[1] = v >> 24;
    TObjPlayer__sub_801BE7A4(dst, get_mag_level__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE794(dst, get_byte_339__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE784(dst, get_battle_mode__10TObjPlayerFPv(src));
    TLobby__sub_8013A348(dst);
}

Obj_801B4FD8 *TObjPlayer__sub_801B4FD8(Obj_801B4FD8 *self) {
    s32 i;
    __construct_array(self->f28, init_192dc_return_self__10TObjPlayerFPv, 0, 0xC, 5);
    clear_header_struct__10TObjPlayerFPv(self->f68);
    TObjPlayer__sub_801C1A00(self->f70);
    TObjPlayer__sub_801C20A4(self->f78);
    init_forward__10TObjPlayerFPv(self->f94);
    TObjPlayer__sub_801BF660(self->f98);
    TObjPlayer__sub_801BE890(self->f13C);
    self->f0 = 0xFFFF;
    self->f2 = 0;
    self->f4 = 0;
    self->f8 = self->fC = self->f10 = TObjPlayer__data_805DC278;
    self->f14 = self->f18 = self->f1C = 0;
    self->f20 = 0;
    self->f22 = 0;
    self->f24 = 0;
    self->f26 = 0;
    self->f64 = 0;
    self->fAC = 0;
    self->f488 = 0;
    self->fB0 = 0;
    for (i = 0; i < 0x13; i++) {
        self->fB4[i] = get_item_count_max__10TObjPlayerFv();
    }
    return self;
}

#pragma push
#pragma fp_contract on
s32 is_outside_movement_hold__10TObjPlayerFPvPv(u8 *self, f32 *pos) {
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
        u8 *p = (u8 *) get_player_by_client_id(pkt.player_id);
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

void handle_6x2C_impose_hold(s32 arg0) {
    Pkt_801B5254 pkt;
    s32 player;
    TObjPlayer__sub_801C0B24(&pkt);
    TObjPlayer__sub_801BFFA8(&pkt, arg0);
    bswap_pkt_u16x2_u32__10TObjPlayerFPv(&pkt);
    if (validate_6x2C_impose_hold(&pkt) == 0) {
        return;
    }
    player = get_player_by_client_id(pkt.client);
    if (player == 0) {
        return;
    }
    TObjPlayer__sub_801BF6DC(player + 0x730, pkt.f6);
    TObjPlayer__sub_801BF6D4(player + 0x730, pkt.f4);
    TObjPlayer__sub_801BF6C8(player + 0x730, pkt.f8, pkt.fC);
    TObjPlayer__sub_801BF6C0(player + 0x730, pkt.f10);
    set_state_flags__10TObjPlayerFPvUi(player, 1);
    if (check_flag_4__10TObjPlayerFPv(player) == 0 && ((s32 (*)(s32))TObjPlayer__sub_801AFF0C)(player) != 0) {
        create__17TObjEneHoldEffectFPvPvPv(player, pkt.f6, pkt.f4);
    }
}

void send_6x2C_impose_hold(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius) {
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
