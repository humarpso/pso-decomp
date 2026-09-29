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

struct Eff_801B2C04 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct Pair_801B2C04 { u32 a; u32 b; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(s32, s32);
s32 obj_isState2_324();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
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
void TObjPlayer__sub_801B28AC(u32, Pair_801B2C04 *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TObjPlayer__sub_801BEE68(void *, void *);
void bswap_status_effect__10TObjPlayerFPv(void *);
void set_code_13_3__10TObjPlayerFPv(void *);
s32 fn_8036B748(void *);
void handle_6x0D_add_or_remove_status_effect(void *arg0);
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

void TObjPlayer__sub_801B1FA4(u16 slot, void *pos, s32 heading) {
    struct pkt_801B1FA4 pkt;
    init_cmd_6x24__10TObjPlayerFPv(&pkt);
    if (TPlayerBattleCtrl4P__sub_801BA74C(slot) != 0U && obj_isState2_324() == 0) {
        pkt.slot = slot;
        pkt.heading = heading;
        VecCopy__FP3VecPC3Vec((s32) &pkt.pos, (s32) pos);
        send_lobby_update__10TObjPlayerFPv(&pkt);
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
void handle_6x0D_add_or_remove_status_effect(void *arg0) {
    Eff_801B2C04 e;
    set_code_13_3__10TObjPlayerFPv(&e);
    TObjPlayer__sub_801BEE68(&e, arg0);
    bswap_status_effect__10TObjPlayerFPv(&e);
    if (fn_8036B748(&e) != 0) {
        u32 p = TPlayerBattleCtrl4P__sub_801BA74C(e.f2);
        if (p != 0) {
            Pair_801B2C04 q;
            q.a = e.f4;
            q.b = e.f8;
            TObjPlayer__sub_801B28AC(p, &q);
        }
    }
}

}
