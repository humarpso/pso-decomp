#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_801B1FA4 { f32 x, y, z; };

struct pkt_801B1FA4 {
    u8 hdr[2];
    u16 slot;
    s32 heading;
    struct Vec_801B1FA4 pos;
};

typedef s32 M2C_UNK;
typedef struct Ctx_801B1BA4 { s16 f0; s16 f2; } Ctx_801B1BA4;

typedef struct Ctx_801B1C8C { s16 f0; s16 f2; } Ctx_801B1C8C;

typedef struct Msg_801B1E54 {
    u8 pad0[2];
    u16 a;
    s32 b;
    s16 c;
    u16 d;
} Msg_801B1E54;

struct Eff_801B2C04 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct Pair_801B2C04 { u32 a; u32 b; };

struct Pkt_801B1D8C {
    u8 hdr[4];
    s32 type;
    s16 amount;
    u16 client;
};

struct Pkt_801B1EE0 {
    u8 hdr[2];
    u16 slot;
    s32 heading;
    f32 pos[3];
};

struct Pair_801B2AE8 { u32 a; u32 b; };

struct VBase_801B2AE8 { char pad[0x18]; };

struct VObj_801B2AE8 : VBase_801B2AE8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46(s32);
    virtual void m47();
    virtual void m48();
    virtual void m49(Pair_801B2AE8);
    virtual void m50(Pair_801B2AE8);
};

struct Pair_801B2AE8;
struct Item_801B2014 { s32 id; f32 val; };

struct Item_801B21AC { s32 id; f32 val; };

struct VBase_801B21AC { char pad[0x18]; };

struct VObj_801B21AC : VBase_801B21AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76(Item_801B21AC);
};

struct Player_801B21AC {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x3CC - 0x34];
    u32 prev;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(s32, s32);
s32 obj_isState2_324();
u32 get_player_by_client_id(s32);
void init_cmd_6x24__10TObjPlayerFPv(void *);
void send_lobby_update__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801B1FA4(u16 slot, void *pos, s32 heading);
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void *update_battle_controller__10TObjPlayerFv();
M2C_UNK fn_801C05E8(Ctx_801B1BA4 *);
M2C_UNK fn_801C05FC(Ctx_801B1BA4 *);
void TObjPlayer__sub_801B1BA4(void);
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void *update_battle_controller__10TObjPlayerFv();
M2C_UNK fn_801C0630(Ctx_801B1C8C *);
M2C_UNK fn_801C0644(Ctx_801B1C8C *);
void TObjPlayer__sub_801B1C8C(void);
s32 is_locally_controlled__10TObjPlayerFPv();
void TObjPlayer__sub_801C0708(void *);
void TObjPlayer__sub_801C0734(void *);
void TObjPlayer__sub_801B1E54(s32 arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_801B28AC(u32, Pair_801B2C04 *);
u32 get_player_by_client_id(s32);
void TObjPlayer__sub_801BEE68(void *, void *);
void bswap_status_effect__10TObjPlayerFPv(void *);
void set_code_13_3__10TObjPlayerFPv(void *);
s32 fn_8036B748(void *);
void handle_6x0D_add_or_remove_status_effect(void *arg0);
void TObjPlayer__sub_800113E4(u32, s32);
void add_actor_hp(u32, s32);
s32 obj_testFlags30(s32, M2C_UNK);
u32 get_player_by_client_id(s32);
void TObjPlayer__sub_801C0678(Pkt_801B1D8C *);
void TObjPlayer__sub_801C06BC(Pkt_801B1D8C *, s32);
void TObjPlayer__sub_801C0708(void *);
s32 validate_6x2F_change_player_hp(Pkt_801B1D8C *);
void handle_6x2F_change_player_hp(s32 arg0);
void calc_attach_pos__10TObjPlayerFPv(u32);
s32 is_locally_controlled__10TObjPlayerFPv();
s16 obj_getField1c(void *);
void TBoss4DarkFalz__sub_8004C220(u32, f32 *);
void reset_cameras_to_actor(u32, s32);
void TObjPlayer__sub_801B0FF4(u32);
u32 get_player_by_client_id(s32);
void clear_flag_4000__10TObjPlayerFPv(u32);
void TObjPlayer__sub_801C0768(Pkt_801B1EE0 *);
void TObjPlayer__sub_801C07B4(Pkt_801B1EE0 *, s32);
void init_cmd_6x24__10TObjPlayerFPv(void *);
void create__15TPlyOnCountOverFPvPvPv(s16, s32, void (*)(void));
s32 validate_6x24_teleport_player(Pkt_801B1EE0 *);
void TObjPlayer__sub_801BE6E4(void);
void handle_6x24_teleport_player(s32 arg0);
void TObjPlayer__sub_801B2AE8(u32 arg0, Pair_801B2AE8 *msg);
s32 obj_testFlags30(s32, M2C_UNK);
void TObjPlayer__sub_801B2AE8(u32 arg0, Pair_801B2AE8 *msg);
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801B2014(s32 arg0);
M2C_UNK send_code_13_3__10TObjPlayerFii(void *, Item_801B21AC);
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801B21AC(s32 *arg0);
}

extern "C" {

s32 TObjPlayer__vt33(s32 arg0);
s32 TObjPlayer__vt34(s32 arg0);
s32 TObjPlayer__vt35(s32 arg0);
s32 TObjPlayer__vt36(s32 arg0);
s32 TObjPlayer__vt37(s32 arg0);
s32 TObjPlayer__vt38(s32 arg0);
s32 TObjPlayer__vt39(s32 arg0);
s32 TObjPlayer__vt40(s32 arg0);
s32 check_flag30_bit20__10TObjPlayerFi(s32 arg0);
void check_flag_40000__10TObjPlayerFPv(void *arg0);
s32 handle_set_visible__10TObjPlayerFi(s32 arg0);
s32 is_flag30_10_set__10TObjPlayerFi(s32 arg0);
s32 is_flag30_8_set__10TObjPlayerFi(s32 arg0);
u8 is_in_tl03_state__10TObjPlayerFPv(void *arg0);
void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TFontSmallLobby__sub_801C0228();
s32 TObjPlayer__sub_800166DC(s32);
s32 TObjPlayer__sub_80016944(s32);
s32 TObjPlayer__sub_80016C54(s32);
s32 TObjPlayer__sub_80016D78(s32);
s32 TObjPlayer__sub_80016FF8(s32);
s32 TObjPlayer__sub_800171A0(s32);
s32 TObjPlayer__sub_801AFF0C();
s32 check_flag_4__10TObjPlayerFPv();
M2C_UNK check_flag__10TObjPlayerFPvi(void *, M2C_UNK);
s32 get_position_ptr__10TObjPlayerFPv(s32);
s32 obj_testFlags30(s32, M2C_UNK);
s32 reset_volopt_state__10TObjPlayerFv();
s32 test_flag_2000000__10TObjPlayerFPv(s32);
s32 update_action_timer__10TObjPlayerFPv(s32);
s32 update_flag30_timer__10TObjPlayerFPv(s32);

void check_flag_40000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x40000);
}

s32 handle_set_visible__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TObjPlayer__sub_801B1BA4(void) {
    Ctx_801B1BA4 ctx;
    void *p;
    fn_801C05E8(&ctx);
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL && (p == NULL || obj_isState2_324() == 0)) {
        ctx.f2 = obj_getField1c(p);
        fn_801C05FC(&ctx);
    }
}

void TObjPlayer__sub_801B1C8C(void) {
    Ctx_801B1C8C ctx;
    void *p;
    fn_801C0630(&ctx);
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL && (p == NULL || obj_isState2_324() == 0)) {
        ctx.f2 = obj_getField1c(p);
        fn_801C0644(&ctx);
    }
}

void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_801AFF0C() != 0) {
        TBoss3Volopt__sub_8022675C(arg1, get_position_ptr__10TObjPlayerFPv(arg0), 0, 0);
    }
}

extern u32 tl_03;

u8 is_in_tl03_state__10TObjPlayerFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((check_flag_4__10TObjPlayerFPv() == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x10) == (u32) tl_03)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

void handle_6x2F_change_player_hp(s32 arg0) {
    Pkt_801B1D8C pkt;
    u32 player;
    TObjPlayer__sub_801C0708(&pkt);
    TObjPlayer__sub_801C06BC(&pkt, arg0);
    TObjPlayer__sub_801C0678(&pkt);
    if (validate_6x2F_change_player_hp(&pkt) == 0) {
        return;
    }
    player = get_player_by_client_id(pkt.client);
    if (player == 0) {
        return;
    }
    if (obj_testFlags30(player, 0x800) != 0) {
        return;
    }
    switch (pkt.type) {
    case 0:
        TObjPlayer__sub_800113E4(player, pkt.amount);
        break;
    case 1:
        add_actor_hp(player, pkt.amount);
        break;
    case 2:
        add_actor_hp(player, *(s16 *)(player + 0x2B8));
        break;
    }
}

void TObjPlayer__sub_801B1E54(s32 arg0, s32 arg1, s32 arg2) {
    Msg_801B1E54 m;

    if (((((u32 (*)(u16))get_player_by_client_id)((u16)arg0) == 0U) || (obj_isState2_324() == 0)) && ((((u32 (*)(u16))get_player_by_client_id)((u16)arg1) == 0U) || (is_locally_controlled__10TObjPlayerFPv() != 0))) {
        TObjPlayer__sub_801C0708(&m);
        m.a = arg0;
        m.b = 0;
        m.c = arg2;
        m.d = arg1;
        TObjPlayer__sub_801C0734(&m);
    }
}

void handle_6x24_teleport_player(s32 arg0) {
    Pkt_801B1EE0 pkt;
    u32 player;
    init_cmd_6x24__10TObjPlayerFPv(&pkt);
    TObjPlayer__sub_801C07B4(&pkt, arg0);
    TObjPlayer__sub_801C0768(&pkt);
    if (validate_6x24_teleport_player(&pkt) == 0) {
        return;
    }
    player = get_player_by_client_id(pkt.slot);
    if (player == 0) {
        return;
    }
    TBoss4DarkFalz__sub_8004C220(player, pkt.pos);
    *(s32 *)(player + 0x60) = *(s32 *)(player + 0x3F0) = pkt.heading;
    calc_attach_pos__10TObjPlayerFPv(player);
    clear_flag_4000__10TObjPlayerFPv(player);
    TObjPlayer__sub_801B0FF4(player);
    create__15TPlyOnCountOverFPvPvPv(obj_getField1c((void *)player), 2, TObjPlayer__sub_801BE6E4);
    if (((s32 (*)(u32))is_locally_controlled__10TObjPlayerFPv)(player) != 0) {
        reset_cameras_to_actor(player, 0);
    }
}

void TObjPlayer__sub_801B1FA4(u16 slot, void *pos, s32 heading) {
    struct pkt_801B1FA4 pkt;
    init_cmd_6x24__10TObjPlayerFPv(&pkt);
    if (get_player_by_client_id(slot) != 0U && obj_isState2_324() == 0) {
        pkt.slot = slot;
        pkt.heading = heading;
        VecCopy__FP3VecPC3Vec((s32) &pkt.pos, (s32) pos);
        send_lobby_update__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801B2014(s32 arg0) {
    Item_801B2014 item;
    item.val = TObjPlayer__data_805DC278;
    if (obj_testFlags30(arg0, 1) != 0) {
        item.id = 0xF;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 2) != 0) {
        item.id = 0x10;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x40) != 0) {
        item.id = 7;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 8) != 0) {
        item.id = 0x11;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x10) != 0) {
        item.id = 0x12;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x20) != 0) {
        item.id = 2;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
    if (obj_testFlags30(arg0, 4) != 0) {
        item.id = 3;
        ((void (*)(s32, Item_801B2014))TObjPlayer__sub_801B2AE8)(arg0, item);
    }
}

void TObjPlayer__sub_801B21AC(s32 *arg0) {
    Player_801B21AC *self = (Player_801B21AC *)arg0;
    Item_801B21AC item;
    u32 diff;
    item.val = TObjPlayer__data_805DC278;
    diff = (self->prev ^ self->flags) & 0x3F;
    if (diff != 0) {
        if (diff & 3) {
            if (self->flags & 3) {
                if (self->flags & 1) {
                    item.id = 0xF;
                }
                if (self->flags & 2) {
                    item.id = 0x10;
                }
                ((VObj_801B21AC *)arg0)->m76(item);
            } else {
                item.id = 0;
                send_code_13_3__10TObjPlayerFii(arg0, item);
            }
        }
        if (diff & 0x3C) {
            if (self->flags & 0x3C) {
                if (self->flags & 8) {
                    item.id = 0x11;
                }
                if (self->flags & 0x10) {
                    item.id = 0x12;
                }
                if (self->flags & 0x20) {
                    item.id = 2;
                }
                if (self->flags & 4) {
                    item.id = 3;
                }
                ((VObj_801B21AC *)arg0)->m76(item);
            } else {
                item.id = 1;
                send_code_13_3__10TObjPlayerFii(arg0, item);
            }
        }
        if (diff & 0x40) {
            item.id = 7;
            ((VObj_801B21AC *)arg0)->m76(item);
        }
        self->prev = self->flags;
    }
}

s32 TObjPlayer__vt40(s32 arg0) {
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        return TObjPlayer__sub_800166DC(arg0);
    }
    return 0;
}

s32 TObjPlayer__vt39(s32 arg0) {
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        return TObjPlayer__sub_80016944(arg0);
    }
    return 0;
}

s32 TObjPlayer__vt38(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return TObjPlayer__sub_80016C54(arg0);
}

s32 TObjPlayer__vt37(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return TObjPlayer__sub_80016D78(arg0);
}

s32 TObjPlayer__vt36(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return update_flag30_timer__10TObjPlayerFPv(arg0);
}

s32 TObjPlayer__vt35(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return update_action_timer__10TObjPlayerFPv(arg0);
}

s32 TObjPlayer__vt34(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return TObjPlayer__sub_80016FF8(arg0);
}

s32 TObjPlayer__vt33(s32 arg0) {
    if ((reset_volopt_state__10TObjPlayerFv() == 0) || (test_flag_2000000__10TObjPlayerFPv(arg0) != 0)) {
        return 0;
    }
    return TObjPlayer__sub_800171A0(arg0);
}

s32 check_flag30_bit20__10TObjPlayerFi(s32 arg0) {
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        return obj_testFlags30(arg0, 0x20);
    }
    return 0;
}

s32 is_flag30_10_set__10TObjPlayerFi(s32 arg0) {
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        return obj_testFlags30(arg0, 0x10);
    }
    return 0;
}

s32 is_flag30_8_set__10TObjPlayerFi(s32 arg0) {
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        return obj_testFlags30(arg0, 8);
    }
    return 0;
}

#define self ((VObj_801B2AE8 *)arg0)
void TObjPlayer__sub_801B2AE8(u32 arg0, Pair_801B2AE8 *msg) {
    switch (msg->a) {
    case 15:
        self->m42();
        break;
    case 16:
        self->m43();
        break;
    case 17:
        self->m44();
        break;
    case 18:
        self->m45();
        break;
    case 3:
        self->m47();
        break;
    case 2:
        self->m46(0);
        break;
    case 7:
        self->m48();
        break;
    case 9:
    case 11:
        {
            Pair_801B2AE8 tmp = *msg;
            self->m49(tmp);
        }
        break;
    case 10:
    case 12:
        {
            Pair_801B2AE8 tmp2 = *msg;
            self->m50(tmp2);
        }
        break;
    }
}
#undef self

void handle_6x0D_add_or_remove_status_effect(void *arg0) {
    Eff_801B2C04 e;
    set_code_13_3__10TObjPlayerFPv(&e);
    TObjPlayer__sub_801BEE68(&e, arg0);
    bswap_status_effect__10TObjPlayerFPv(&e);
    if (fn_8036B748(&e) != 0) {
        u32 p = get_player_by_client_id(e.f2);
        if (p != 0) {
            Pair_801B2C04 q;
            q.a = e.f4;
            q.b = e.f8;
            TObjPlayer__sub_801B28AC(p, &q);
        }
    }
}

}
