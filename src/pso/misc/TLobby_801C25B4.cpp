#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Lobby_801C2898 {
    u8 pad0[0x268];
    s8 pending[8];
    s32 state;
} Lobby_801C2898;

struct Pair_801C271C { s32 v[2]; };

struct Ent_801C26A8 { u16 id; s16 active; u8 pad[4]; };

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv(void);
u8 is_battle_mode_active__19TPlayerBattleCtrl4PFv(void);
extern u8 *TLobby__battle_mode_data_ptr;
u8 TLobby__sub_801C2614(void);
extern s32 TLobby__data_805D5DC0;
s32 TLobby__sub_801C2678(void);
void send_battle_mode_data__6TLobbyFv(void *);
u8 check_timeout__6TLobbyFPv(void *arg0);
void show_score_results__6TLobbyFPv(void *);
extern s16 lbl_80511CB0[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void update_battle_sync__6TLobbyFPvi(Lobby_801C2898 *self, s32 t);
u32 get_player_by_client_id(s32);
s32 TLobby__sub_801C19D0(void *);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
u8 TLobby__sub_801D7100(void *);
extern u8 lbl_8050EA40[];
extern s32 TLobby__data_80511CA0[];
u8 check_battle_end__6TLobbyFv(void);
u32 get_player_by_client_id(s32);
extern Ent_801C26A8 TLobby__data_80511C80[];
s32 TLobby__sub_801C26A8(void);
s32 update_battle_controller__10TObjPlayerFv();
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
M2C_UNK stop_audio_streams__6TLobbyFv();
void __ct__7TObjectFP7TObject(void *);
M2C_UNK export_character_data__10TObjPlayerFPvPv(s32, s32);
extern u8 __vt__17TPlayerBattleCtrl[];
extern u8 lbl_804EFA50[];
extern u8 lbl_804EFA6C[];
extern s32 lbl_805D3554;
extern s32 lbl_805D5544;
void *TPlayerBattleCtrl__ct(void *arg0, s32 _w1);
}

extern "C" {

struct S801C295C_801C25B4 { M2C_UNK f0; s8 f4; s8 pad[0x13]; };

s32 check_all_battle_flags__6TLobbyFv(void);
void clear_counter__6TLobbyFPv(void* a0);
u32 get_player_by_client_id(s32);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
s32 obj_testFlags30(u32, M2C_UNK);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);

extern "C" {
__declspec(section ".rodata") char lbl_80446F80[] = "TPlayerBattleCtrl";
__declspec(section ".rodata") u32 lbl_80446F94[2] = { 0x43A40000, 0x43260000 };
__declspec(section ".rodata") u32 lbl_80446F9C[2] = { 0, 0 };
__declspec(section ".rodata") u32 lbl_80446FA4[2] = { 0x43580000, 0x42A80000 };
__declspec(section ".rodata") u32 lbl_80446FAC[2] = { 0, 0 };
__declspec(section ".rodata") u32 lbl_80446FB4[2] = { 0x436E0000, 0x433C0000 };
__declspec(section ".rodata") u32 lbl_80446FBC[2] = { 0, 0 };
}
#define lbl_80446F94 ((Pair_801C49B8 *)lbl_80446F94)
#define lbl_80446F9C ((Cnt_801C49B8 *)lbl_80446F9C)
#define lbl_80446FA4 ((u8 *)lbl_80446FA4)
#define lbl_80446FAC ((Cnt_801C3C1C *)lbl_80446FAC)
#define lbl_80446FB4 ((Pair_801C3AF4 *)lbl_80446FB4)
#define lbl_80446FBC ((Team_801C343C *)lbl_80446FBC)

s32 check_all_battle_flags__6TLobbyFv(void) {
    u32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
loop_1:
    temp_r3 = get_player_by_client_id(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

u8 TLobby__sub_801C2614(void) {
  u8 var_r0;
  u8 *var_r3;
  if (is_not_split_screen__13TRaderMapCoreFv() == 1)
  {
    var_r0 = is_battle_mode_active__19TPlayerBattleCtrl4PFv();
    return var_r0;
  }
  var_r3 = (u8 *) TLobby__battle_mode_data_ptr;
  if (var_r3 != 0)
  {
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r3) + 0x1C)));
    var_r0 = 0;
    if ((((s32) var_r3) == 1) || (((s32) var_r3) == 2))
    {
      var_r0 = 1;
    }
    var_r3 = (u8 *) ((void *) var_r0);
    return (u8) var_r3;
  }
  var_r3 = (u8 *) 0;
  return 0U;
}

s32 TLobby__sub_801C2678(void) {
    if (TLobby__sub_801C26A8() != 0) {
        return 0;
    }
    return TLobby__data_805D5DC0;
}

s32 TLobby__sub_801C26A8(void) {
    Ent_801C26A8 *e;
    s32 result = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        e = &TLobby__data_80511C80[i];
        if (get_player_by_client_id(e->id) != 0 && e->active != 0) {
            result = 0;
            break;
        }
    }
    return result;
}

u8 check_battle_end__6TLobbyFv(void) {
    u8 *p;
    s32 cnt;
    s32 i;
    s32 ok;
    s32 idx;
    s32 seen[2] = {0, 0};
    cnt = 0;
    for (i = 0; i < 4; i++) {
        p = (u8 *)get_player_by_client_id(i);
        if (p != NULL) {
            ok = 1;
            if (TLobby__data_80511CA0[i] == 0) {
                ok = 0;
            } else if (*(s32 *)(p + 0x30) & 0x800) {
                if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
                    ok = 0;
                } else if (TLobby__sub_801D7100(lbl_8050EA40) == 2 &&
                           get_state__19TPlayerBattleCtrl4PFPv(p + 0x754) == 0) {
                    ok = 0;
                }
            }
            if (ok != 0) {
                cnt++;
                if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1) {
                    idx = TLobby__sub_801C19D0(p + 0x828) - 1;
                    if (idx >= 0 && idx < 2) {
                        seen[idx] = 1;
                    }
                }
            }
        }
    }
    if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1 && (seen[0] == 0 || seen[1] == 0)) {
        return 1;
    }
    return cnt <= 1;
}

void update_battle_sync__6TLobbyFPvi(Lobby_801C2898 *self, s32 t) {
    s32 i;
    switch (self->state) {
    case 0:
        if (lbl_805D53A0 == TLobby__data_805D53AC) {
            for (i = 0; i < 8; i++) {
                if (self->pending[i] != 0 && t / 60 == lbl_80511CB0[i]) {
                    self->pending[i] = 0;
                    send_battle_mode_data__6TLobbyFv((void *)(self));
                }
            }
        }
        break;
    case 1:
        check_timeout__6TLobbyFPv(self);
        break;
    case 2:
        show_score_results__6TLobbyFPv(self);
        break;
    }
}

void send_battle_mode_data__6TLobbyFv(void * _w0) {
    struct S801C295C_801C25B4 sp8;

    build_6x7D_set_battle_mode_data(&sp8);
    sp8.f4 = 5;
    send_set_battle_mode_data__6TLobbyFPv(&sp8);
}

    extern int lbl_805D5DB0;
void clear_counter__6TLobbyFPv(void* a0) { *(int*)((char*)a0 + 0x270) = 0; lbl_805D5DB0 = 0; }

}

#pragma push
namespace P1_801C29A0 {
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Msg_801C29F0 {
    u8 pad0[4];
    u8 kind;
    u8 pad5[2];
    u8 enabled;
    u32 id;
    s32 player;
    u8 pad10[0x10];
} Msg_801C29F0;

typedef struct Player_801C29F0 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x754 - 0x34];
    u8 ctrl[4];
} Player_801C29F0;

struct VBase_801C2B04 { char pad[0x18]; };

struct VObj_801C2B04 : VBase_801C2B04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9();
    virtual char *m10();
};

typedef struct Entry_801C2B04 {
    u16 id;
    s16 name;
    u8 pad4[4];
} Entry_801C2B04;

extern "C" {
u16 obj_getField1c(void *);
Player_801C29F0 *update_battle_controller__10TObjPlayerFv(void);
s32 assign_player_id__6TLobbyFv(void *);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *p);
void send_set_battle_mode_data__6TLobbyFPv(void *p);
void build_6x7D_set_battle_mode_data(void *);
u8 TLobby__sub_801D7100(void *);
extern u8 lbl_8050EA40[];
extern s32 TLobby__data_80511CA0[];
extern s32 lbl_805D53A0;
void send_battle_mode_state__6TLobbyFPv(void *self);
VObj_801C2B04 *get_player_by_client_id(s32);
void clear_counter__6TLobbyFPv(void *a0);
void send_neg50__6TLobbyFPvPv(void *p, s32 a1);
void calc_player_rankings__6TLobbyFPv(void *);
void init_all_default__11TWindowCtrlFPv(void *);
int sprintf(char *, const char *, ...);
extern char lbl_80446FCC[];
extern char lbl_80446FD4[];
extern char lbl_80446FDC[];
extern char *lbl_804C3E78[];
extern Entry_801C2B04 TLobby__data_80511C80[];
void show_score_results__6TLobbyFPv(void *self);
}

extern "C" {

u8 check_timeout__6TLobbyFPv(void *arg0);
void set_flag_270__6TLobbyFPv(void *arg0);
s32 get_game_mode__6TLobbyFv();

extern s32 lbl_805D5DB0;

u8 check_timeout__6TLobbyFPv(void *arg0) {
    if ((s32) lbl_805D5DB0 >= get_game_mode__6TLobbyFv()) {
        M2C_FIELD(arg0, s32 *, 0x270) = 2;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x270) == 2);
}

void send_battle_mode_state__6TLobbyFPv(void *self) {
    Msg_801C29F0 m;
    Player_801C29F0 *p;
    s32 id;
    s32 on;
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL) {
        id = assign_player_id__6TLobbyFv(self);
        build_6x7D_set_battle_mode_data(&m);
        m.kind = 3;
        m.id = obj_getField1c(p);
        m.player = id;
        on = 1;
        if (p->flags & 0x800) {
            if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
                on = 0;
            } else if (TLobby__sub_801D7100(lbl_8050EA40) == 2 &&
                       get_state__19TPlayerBattleCtrl4PFPv(p->ctrl) == 0) {
                on = 0;
            }
        }
        m.enabled = on;
        TLobby__data_80511CA0[lbl_805D53A0] = on;
        send_set_battle_mode_data__6TLobbyFPv(&m);
    }
}

void set_flag_270__6TLobbyFPv(void *arg0) {
    send_battle_mode_state__6TLobbyFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x270) = 1;
}
void show_score_results__6TLobbyFPv(void *self) {
    char buf[0x48];
    Entry_801C2B04 *e;
    s32 i;
    VObj_801C2B04 *p;
    clear_counter__6TLobbyFPv(self);
    calc_player_rankings__6TLobbyFPv(self);
    init_all_default__11TWindowCtrlFPv(lbl_80446FCC);
    for (i = 0; i < 4; i++) {
        e = &TLobby__data_80511C80[i];
        p = get_player_by_client_id(e->id);
        if (p != NULL) {
            sprintf(buf, lbl_80446FD4, lbl_804C3E78[e->name], p->m10());
            init_all_default__11TWindowCtrlFPv(buf);
        }
    }
    send_neg50__6TLobbyFPvPv(lbl_80446FDC, 0x3C);
}
__declspec(section ".rodata") char lbl_80446FCC[] = "SCORE";
__declspec(section ".rodata") char lbl_80446FD4[] = "%s %s";
__declspec(section ".rodata") char lbl_80446FDC[] = "start.adx";

}
}
#pragma pop

#pragma push
namespace P2_801C2BCC {
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801C2C34 {
    M2C_UNK sp8;
    s8 spC;
    u8 pad_D[0x3];
    s32 sp10;
};

typedef struct Lobby_801C2F40 {
    u8 pad0[0x30];
    u64 time;
    u8 pad38[0x64 - 0x38];
    s32 f64;
    u8 pad68[0x268 - 0x68];
    s8 pending[8];
} Lobby_801C2F40;

typedef struct Msg_801C2D54 {
    s32 hdr;
    s8 sub;
    u8 pad5[3];
    s32 order[4];
} Msg_801C2D54;

extern "C" {
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_801C2C34(void);
extern u8 lbl_805D5DBC;
void TLobby__sub_801C2C70(void);
u64 OSGetTime(void);
void obj_clear_flag30_20000(void *);
s32 update_battle_controller__10TObjPlayerFv();
void clear_counter__6TLobbyFPv(void *a0);
void init_with_name__6TLobbyFPvPvPvPv(void *, void *, void *, s32);
void handle_battle_result__6TLobbyFii(u16, s32);
void TObjEneRe4Sorcerer__sub_801E3F14(s32);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void *__nw__7TObjectFUl(u32);
extern char lbl_80446FF0[];
extern char lbl_80446FFC[];
extern s16 lbl_80511CB0[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5DC0;
void start_duel_battle__6TLobbyFPv(Lobby_801C2F40 *self);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
extern s32 lbl_805D2A98;
void destroy_matching_children__6TLobbyFPv(void *arg0);
s32 obj_getField1c();
M2C_UNK reset_cameras_to_actor(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BC068(s32, u16);
s32 update_battle_controller__10TObjPlayerFv();
void destroy_matching_children__6TLobbyFPv(void *arg0);
M2C_UNK destroy__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_scene_objects__6TLobbyFv();
extern u16 lbl_80511CC0[];
extern s32 tl_05;
void finish_chr_select_scene_init__6TLobbyFv(void);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
M2C_UNK send_6x7D_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK send_60_sized__6TLobbyFPv(void *);
s32 rand();
void send_6x7D_set_battle_mode_data(void);
M2C_UNK obj_set_flag_20000();
M2C_UNK destroy_matching_traps__10TOMineTrapFv();
s32 update_battle_controller__10TObjPlayerFv();
M2C_UNK calc_player_rankings__6TLobbyFPv(void *);
M2C_UNK apply_game_settings__6TLobbyFii(void *, M2C_UNK);
M2C_UNK close_and_play_effect__6TLobbyFii(u16, M2C_UNK);
s32 TLobby__sub_801C417C();
M2C_UNK set_battle_mode__19TPlayerBattleCtrl4PFPvi(s32, M2C_UNK);
M2C_UNK update_child_player__6TLobbyFi(s32);
M2C_UNK set_slot__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FCE6C();
M2C_UNK set_timer_window_time__11TWindowCtrlFi(s32);
M2C_UNK create_alt_timer__11TWindowCtrlFv();
extern s32 TLobby__data_80511CA0[];
extern s32 lbl_805D53A0;
void init_battle_round__6TLobbyFPv(void *arg0);
}

extern "C" {

s32 check_all_players_ready__6TLobbyFv(void);
void init__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
M2C_UNK destroy_matching_traps__10TOMineTrapFv();
u32 get_player_by_client_id(s32);
M2C_UNK close_and_play_effect__6TLobbyFii(u16, M2C_UNK);
M2C_UNK destroy__23TAdSinglePlyChrSelectGCFv();
M2C_UNK clear_trap_counts(s32);
M2C_UNK destroy_children_with_tag(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK obj_set_flag_20000();
M2C_UNK set_flag_270__6TLobbyFPv();
M2C_UNK set_type__10TObjPlayerFPvi(s32, M2C_UNK);
s32 update_battle_controller__10TObjPlayerFv();

extern u8 lbl_805D5DBC;

s32 check_all_players_ready__6TLobbyFv(void) {
    u8 *var_r31;
    s32 var_r30;
    s32 var_r29;

    var_r31 = &lbl_805D5DBC;
    var_r30 = 1;
    var_r29 = 0;
loop_1:
    if ((get_player_by_client_id(var_r29) != 0U) && ((s8) *var_r31 == 0)) {
        var_r30 = 0;
    } else {
        var_r29 += 1;
        var_r31 += 1;
        if (var_r29 < 4) {
            goto loop_1;
        }
    }
    return var_r30;
}

extern s32 lbl_805D53A0;
extern s32 tl_00;
extern s32 tl_01;

void TLobby__sub_801C2C34(void) {
    Stack_801C2C34 stack;
    build_6x7D_set_battle_mode_data((void *) (&stack.sp8));
    stack.spC = 4;
    stack.sp10 = lbl_805D53A0;
    send_set_battle_mode_data__6TLobbyFPv((void *) (&stack.sp8));
}

void TLobby__sub_801C2C70(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        (&lbl_805D5DBC)[i] = 0;
    }
}

void destroy_matching_children__6TLobbyFPv(void *arg0) {
    void *var_r31;
    var_r31 = M2C_FIELD(arg0, void **, 0x14);
while (var_r31 != NULL) {
        if (check_value_equals__13TQuestColCtrlFPvi(var_r31, lbl_805D2A98) != 0) {
            queue_destruction__7TObjectFv(var_r31);
        }
        destroy_matching_children__6TLobbyFPv(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

void finish_chr_select_scene_init__6TLobbyFv(void) {
    s32 temp_r3;
    init_scene_objects__6TLobbyFv();
    temp_r3 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3 != 0) {
        TObjPlayer__sub_801BC068(temp_r3, lbl_80511CC0[(u16)obj_getField1c()]);
        reset_cameras_to_actor(temp_r3, 0);
    }
    destroy_matching_children__6TLobbyFPv((void *)tl_05);
    destroy__23TAdSinglePlyChrSelectGCFv();
}

void send_6x7D_set_battle_mode_data(void) {
    Msg_801C2D54 msg;
    s32 i;
    s32 a;
    s32 b;
    s32 t;
    build_6x7D_set_battle_mode_data(&msg);
    msg.sub = 6;
    for (i = 0; i < 4; i++) {
        msg.order[i] = i;
    }
    for (i = 0; i < 0x1E; i++) {
        a = (s32) (4.0f * (3.0517578125e-05f * (f32) rand()));
        b = (s32) (4.0f * (3.0517578125e-05f * (f32) rand()));
        if (a != b) {
            t = msg.order[a];
            msg.order[a] = msg.order[b];
            msg.order[b] = t;
        }
    }
    send_6x7D_set_battle_mode_data__6TLobbyFPv(&msg);
    send_60_sized__6TLobbyFPv(&msg);
}

void init__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r3_2;

    set_flag_270__6TLobbyFPv();
    close_and_play_effect__6TLobbyFii((u16) lbl_805D53A0, 1);
    temp_r3 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3 != 0) {
        obj_set_flag_20000();
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, 0xE10);
    }
    destroy_matching_traps__10TOMineTrapFv();
    fn_8020910C(tl_01);
    destroy_children_with_tag(tl_00);
    TLobby__sub_8020BCE4();
    destroy__23TAdSinglePlyChrSelectGCFv();
    TLobby__sub_8020BB18();
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    do {
        temp_r3_2 = get_player_by_client_id(var_r31);
        if (temp_r3_2 != 0U) {
            clear_trap_counts(temp_r3_2 + 0x7C4);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
void start_duel_battle__6TLobbyFPv(Lobby_801C2F40 *self) {
    char *name;
    void *obj;
    u32 p;
    s32 st;
    s32 i;
    TObjEneRe4Sorcerer__sub_801E3F14(4);
    TObjEneRe4Sorcerer__sub_801E3F18();
    self->time = OSGetTime();
    handle_battle_result__6TLobbyFii(lbl_805D53A0, 1);
    if ((p = update_battle_controller__10TObjPlayerFv()) != 0) {
        obj_clear_flag30_20000((void *)p);
    }
    clear_counter__6TLobbyFPv(self);
    st = get_global_state__14TOKeyMachine01Fv();
    name = (st == 0x10) ? lbl_80446FF0 : lbl_80446FFC;
    obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        init_with_name__6TLobbyFPvPvPvPv(obj, self, name, 0x2D);
    }
    for (i = 0; i < 8; i++) {
        self->pending[i] = 1;
        if (lbl_80511CB0[i] == 0) {
            self->pending[i] = 0;
        }
    }
    self->f64 = TLobby__data_805D5DC0;
}
__declspec(section ".rodata") char lbl_80446FF0[] = "duel1.adx";
__declspec(section ".rodata") char lbl_80446FFC[] = "duel2.adx";
void init_battle_round__6TLobbyFPv(void *arg0) {
  s32 temp_r0;
  s32 temp_r3;
  s32 var_ctr;
  s32 var_r3;
  s32 var_r3_2;
  *((s32 *) (((s8 *) arg0) + 0x3C)) = TLobby__sub_801C417C();
  create_alt_timer__11TWindowCtrlFv();
  set_timer_window_time__11TWindowCtrlFi(*((s32 *) (((s8 *) arg0) + 0x3C)));
  destroy_matching_traps__10TOMineTrapFv();
  temp_r0 = get_char_select_slot__23TAdSinglePlyChrSelectGCFv();
  temp_r0 = temp_r0 + 1;
  var_r3 = 0xFFFF;
  if (temp_r0 < var_r3)
  {
    var_r3 = temp_r0;
  }
  set_slot__23TAdSinglePlyChrSelectGCFi((u16) var_r3);
  TAdSinglePlyChrSelectGC__sub_801FCE6C();
  apply_game_settings__6TLobbyFii(arg0, 1);
  close_and_play_effect__6TLobbyFii((u16) lbl_805D53A0, 1);
  temp_r3 = update_battle_controller__10TObjPlayerFv();
  if (temp_r3 != 0)
  {
    obj_set_flag_20000();
    update_child_player__6TLobbyFi(temp_r3 + 0x78C);
    update_child_player__6TLobbyFi(temp_r3 + 0x77C);
    update_child_player__6TLobbyFi(temp_r3 + 0x75C);
    update_child_player__6TLobbyFi(temp_r3 + 0x76C);
    update_child_player__6TLobbyFi(temp_r3 + 0x79C);
    set_battle_mode__19TPlayerBattleCtrl4PFPvi(temp_r3 + 0x7AC, 0);
  }
  *((s32 *) (((s8 *) arg0) + 0x60)) = 0x5A;
  calc_player_rankings__6TLobbyFPv(arg0);
  for (var_r3_2 = 0; var_r3_2 < 4; var_r3_2++)
  {
    TLobby__data_80511CA0[var_r3_2] = 1;
  }
}

}
}
#pragma pop

#pragma push
namespace P3_801C25B4 {
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801C3CFC {
    M2C_UNK sp8;
    s8 spC;
    s8 spD;
    u8 pad_E[0x2];
    s32 sp10;
    s32 sp14;
};

typedef struct Pair_801C3AF4 { u32 a; u32 b; } Pair_801C3AF4;

typedef struct Flags_801C3AF4 {
    u8 pad0[0x10];
    u32 flags;
} Flags_801C3AF4;

typedef struct Lobby_801C3AF4 {
    u8 pad0[0x20];
    s32 state;
    s32 next;
    u8 pad28[0x40 - 0x28];
    s32 *msgs;
    u8 pad44[0x4C - 0x44];
    void *window;
    u8 pad50[0x58 - 0x50];
    s32 f58;
} Lobby_801C3AF4;

typedef s32 M2C_UNK;
struct Pkt_801C374C {
    u8 pad0[4];
    s8 type;
    s8 mode;
    u8 pad6;
    s8 team;
    s32 v[4];
};

struct Lobby_801C374C {
    u8 pad0[0x24];
    s32 mode;
    u8 pad28[0x30];
    s32 a;
    s32 b;
};

struct Lobby_801C484C {
    u8 pad0[0x20];
    s32 state;
    s32 result;
    u8 pad28[8];
    s64 start;
    s32 remain;
    s32 limit;
    u8 pad40[8];
    s32 timer48;
    u8 pad4c[0x14];
    s32 timer60;
};

struct Cfg_801C3D50 {
    u8 b[0xC];
    s8 c;
    u8 arr[4];
    u8 d11;
    s8 lvl;
    u8 d13;
    u8 pad14[4];
    s32 vol;
    s32 v1c;
    s32 v20;
    s32 v24;
    s16 v28;
};

struct VBase_801C4214 { char pad[0x18]; };

struct VObj_801C4214 : VBase_801C4214 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61();
    virtual void m62();
};

struct VBase_18_26c590 { char pad[0x18]; };

struct VObj_18_26c590 : VBase_18_26c590 {
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
    virtual s32 m10();
};

struct Pair_801C49B8 { s32 a, b; };

struct Name_801C49B8 { char s[16]; };

struct Lobby_801C49B8 {
    u8 pad0[0x20];
    s32 state;
    s32 next;
    u8 pad28[4];
    s32 timer;
    u8 pad30[0x10];
    u8 *cfg;
    s32 timer2;
    u8 pad48[4];
    void *window;
    u8 pad50[0x18];
    u8 msg[0x80];
};

struct Cnt_801C49B8 { s32 v[2]; };

struct Rank_801C343C { u16 id; s16 rank; s32 score; };

struct Team_801C343C { s32 v[2]; };

struct Lobby_801C484C;
typedef struct Cnt_801C3C1C { s32 v[2]; } Cnt_801C3C1C;

struct Base_801C418C { u8 pad[0x18]; };

struct V_801C418C : Base_801C418C {
    virtual ~V_801C418C();
};

extern "C" {
void handle_6x7E(void);
extern void *TLobby__battle_mode_data_ptr;
void TLobby__sub_801C38A4(void);
int TLobby__sub_801B09A4(void);
int inc_player_count__10TObjPlayerFv(void);
    extern int lbl_805D5DB4;
void init_and_set_flag__6TLobbyFv(void);
u32 __nw__7TObjectFUl(M2C_UNK);
void strncpy(void *, void *, int);
extern void *TLobby__battle_mode_data_ptr;
extern s32 TLobby__battle_config_ptr;
extern s32 tl_00;
void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
void send_battle_mode_params__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2);
u32 get_player_by_client_id(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();
extern s32 lbl_805D53A0;
void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
u32 get_player_by_client_id(u16);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK begin_player_keyboard_hold(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
extern s32 lbl_805D53A0;
M2C_UNK request_active_window_close();
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
extern s32 TLobby__battle_config_ptr;
s32 TLobby__sub_801C417C(void);
extern void *lbl_805D5DB8;
void __destroy_new_array(void *, void *);
void TLobby__sub_801C3A40(void);
s32 TKeyBoardControl__sub_8000F828(void);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void TLobby__sub_801C2C70(void);
void TAdSinglePlyChrSelectGC__sub_801C5120(void);
void TAdSinglePlyChrSelectGC__sub_801C5158(void);
void *__construct_new_array(void *, void *, void *, s32, s32);
void destroy_char_data__10TObjPlayerFis(int, s16);
void init_char_data__10TObjPlayerFPv(void);
extern void *TLobby__battle_mode_data_ptr;
extern s32 lbl_805D5D9C;
extern void *lbl_805D5DB8;
extern s32 TLobby__data_805D5DC0;
void init_char_slots__6TLobbyFv(void);
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
void set_slot__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void);
void TWindow__close(void *);
void send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
extern Flags_801C3AF4 *lbl_8050E208[];
extern s32 lbl_805D53A0;
void TLobby__sub_801C3AF4(Lobby_801C3AF4 *self);
u32 get_player_by_client_id(u16);
void set_flag_270__6TLobbyFPv(void *);
M2C_UNK set_battle_mode__19TPlayerBattleCtrl4PFPvi(s32, s32);
void bswap_set_battle_mode_data__6TLobbyFPv(Pkt_801C374C *);
extern s32 TLobby__data_80511CA0[];
extern s16 lbl_80511CC0[];
extern s32 lbl_805D53A0;
extern void *TLobby__battle_mode_data_ptr;
extern s32 lbl_805D5DA4;
extern s32 lbl_805D5DB0;
extern u8 lbl_805D5DBC[4];
void handle_6x7D_set_battle_mode_data(Pkt_801C374C *pkt);
void start_duel_battle__6TLobbyFPv(Lobby_801C484C *);
void send_battle_mode_params__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2);
s64 OSGetTime();
void set_timer_window_time__11TWindowCtrlFi(s32);
s32 check_battle_end__6TLobbyFv(Lobby_801C484C *);
void update_battle_sync__6TLobbyFPvi(Lobby_801C484C *, s32);
void send_battle_mode_state__6TLobbyFPv(Lobby_801C484C *);
void update_timed_wait__6TLobbyFPv(Lobby_801C484C *self);
s32 get_game_mode__6TLobbyFv();
M2C_UNK apply_battle_rules_to_players__6TLobbyFv();
u32 get_player_by_client_id(u16);
s32 update_battle_controller__10TObjPlayerFv();
M2C_UNK fn_801C19D8(void *, int);
M2C_UNK set_pos_z__6TLobbyFPvf(void *, f32);
M2C_UNK set_scale__6TLobbyFPvf(void *, f32);
M2C_UNK set_level__10TObjPlayerFPvi(void *, int);
M2C_UNK fn_801D6D8C(void *, int, int);
M2C_UNK set_volume__6TLobbyFPvUc(void *, int);
M2C_UNK set_validated_field_0x11__6TLobbyFPvUc(void *, int);
M2C_UNK set_clamped_index__6TLobbyFPvs(void *, int);
M2C_UNK set_clamped_value_1c__6TLobbyFPvi(void *, int);
M2C_UNK fn_801D726C(void *, int);
M2C_UNK fn_801D72B0(void *, int);
M2C_UNK set_field_0xE__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_d__6TLobbyFPvUc(void *, int);
M2C_UNK set_clamped_field_c__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_b__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_a__6TLobbyFPvUc(void *, int);
M2C_UNK set_byte9_clamped__6TLobbyFPvUc(void *, int);
M2C_UNK set_difficulty__6TLobbyFPvUc(void *, int);
M2C_UNK set_field7_clamped__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_0x6__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_5__6TLobbyFPvUc(void *, int);
M2C_UNK set_clamped_field_4__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_3__6TLobbyFPvUc(void *, int);
M2C_UNK set_field_2__6TLobbyFPvUc(void *, int);
M2C_UNK set_validated_field_0x1__6TLobbyFPvUc(void *, int);
M2C_UNK set_section_id__6TLobbyFPvUc(void *, int);
M2C_UNK reset_settings_to_default__6TLobbyFPv(void *);
extern u32 lbl_8050EA10[];
extern M2C_UNK lbl_8050EA40[];
extern s32 lbl_80511CC8[];
extern const f32 lbl_805D3538;
extern const f32 lbl_805D353C;
extern const f32 lbl_805D3540;
extern const f32 lbl_805D3544;
extern const f32 lbl_805D3548;
extern const f32 lbl_805D354C;
extern const f32 lbl_805D3550;
extern s32 TLobby__battle_config_ptr;
extern const f32 lbl_805D5DC4;
extern const f32 lbl_805D5DC8;
void apply_game_settings__6TLobbyFii(M2C_UNK arg0, s32 arg1);
void obj_clear_flag30_20000(void *arg0);
s32 check_player_flag1__6TLobbyFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK __ct__15TDuelEffectCtrlFP7TObjectUc(void *, void *, int);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
M2C_UNK release_attached_resource__10TObjPlayerFPv(void *);
u32 get_player_by_client_id(u16);
s32 update_battle_controller__10TObjPlayerFv();
M2C_UNK clear_counter__6TLobbyFPv(void *);
s32 check_timeout__6TLobbyFPv(void *, int);
void send_battle_mode_state__6TLobbyFPv(Lobby_801C484C *);
M2C_UNK send_6x7D_set_battle_mode_data(void *);
M2C_UNK init__6TLobbyFPv();
void send_neg50__6TLobbyFPvPv(void* p, void* a1);
M2C_UNK TLobby__sub_801C32B4(void *);
void send_battle_mode_params__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2);
void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
u32 __nw__7TObjectFUl(M2C_UNK);
void TWindow__close(void *);
M2C_UNK close_timer_window__11TWindowCtrlFv();
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
u32 TWindowDuelResult__ct(void *, s32);
s32 get_selected_menu_value(void *);
M2C_UNK align_menu_entry_positions(void *);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, int, int);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
void send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
extern u8 lbl_80447008[];
extern u8 lbl_80447010[];
extern Flags_801C3AF4 *lbl_8050E208[];
extern M2C_UNK TLobby__data_80511C80[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5DA8;
extern s32 lbl_805D5DAC;
void update_duel_result__6TLobbyFPv(u8 *arg0);
M2C_UNK __ct__15TDuelEffectCtrlFP7TObjectUc(void *, void *, int);
u32 get_player_by_client_id(u16);
s32 check_all_battle_flags__6TLobbyFv(void *);
s32 check_all_players_ready__6TLobbyFv(void *);
void TLobby__sub_801C2C34(void *);
void TLobby__sub_801C2C70(void);
u8 get_rule_field_a__6TLobbyFPv(void *);
u32 __nw__7TObjectFUl(M2C_UNK);
void TWindow__close(void *);
void send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
int sprintf(char *str, const char *format, ...);
void strncpy(void *, void *, int);
extern M2C_UNK lbl_8050EA40[];
extern s32 lbl_80511CC8[];
extern char lbl_80511CD8[];
extern s32 lbl_805D5DA4;
void update_battle_intro__6TLobbyFPv(Lobby_801C49B8 *self);
u32 get_player_by_client_id(u16);
s16 obj_getField1c(u32);
s32 TLobby__sub_801C19D0(void *);
void TLobby__sub_801C36E4(void *arg0, void *arg1);
s32 TLobby__sub_801C4FC4(void *p);
u8 get_rule_field_a__6TLobbyFPv(void *);
extern M2C_UNK lbl_8050EA40[];
extern M2C_UNK TLobby__data_80511C80[];
s32 calc_player_rankings__6TLobbyFPv(Lobby_801C484C *);
M2C_UNK init_fadeout_state__6TLobbyFi(void *);
M2C_UNK set_fade_params__6TLobbyFi(void *);
M2C_UNK TLobby__sub_801036CC();
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
s32 update_battle_controller__10TObjPlayerFv();
M2C_UNK finish_chr_select_scene_init__6TLobbyFv();
M2C_UNK clear_buffer__12TQuestThreadFPv(u32);
M2C_UNK TLobby__sub_8020BC50();
M2C_UNK stop_audio_streams__6TLobbyFv();
void TLobby__sub_801C38A4(void);
void init_and_set_flag__6TLobbyFv(void);
extern int lbl_805D5DB4;
extern u32 lbl_805D5EE8;
void TLobby__sub_801C38E8(void *arg0);
s32 get_game_mode__6TLobbyFv();
u32 get_player_by_client_id(u16);
s32 TLobby__sub_801C19D0(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
extern M2C_UNK lbl_8050EA40[];
s32 check_team_balance__6TLobbyFPvi(Lobby_801C484C *self, s32 arg1);
M2C_UNK TKeyBoardControl__sub_8000F950();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK clear_counter__6TLobbyFv();
extern void *TLobby__data_805D5608;
extern s16 TLobby__data_805D5CE8;
extern s32 evt2_random_enemies_mode;
void end_battle_mode_cleanup__6TLobbyFPv(void *arg0);
}

extern "C" {

void TLobby__sub_801C36E4(void *arg0, void *arg1);
s32 assign_player_id__6TLobbyFv(void);
void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1);
void handle_6x7F_battle_scores(s32 arg0);
void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void release_ref__6TLobbyFPv(u8 *arg0);
void send_neg50__6TLobbyFPvPv(void* p, void* a1);
int play_cue_stream_file(void*);
M2C_UNK play_area_music(void *);
s32 TObjPlayer__sub_801AFFD0();
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK bswap_packet_header__6TLobbyFPv();
int show_duel_result_window(void*, void*);
M2C_UNK memcpy(M2C_UNK *, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_battle_mode__19TPlayerBattleCtrl4PFPvi(s32, s32);
void strncpy(void *, void *, int);
s32 update_battle_controller__10TObjPlayerFv();

void release_ref__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        play_area_music(arg0 + 0x20);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK lbl_804C3E88[];

void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C3E88[];

void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    strncpy((void *)((char *)arg0 + 32), arg2, 32);
    return arg0;
}

s32 assign_player_id__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3_2 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801AFFD0();
    set_battle_mode__19TPlayerBattleCtrl4PFPvi(temp_r3_2 + 0x7AC, temp_r3);
    return temp_r3;
}

void send_neg50__6TLobbyFPvPv(void* p, void* a1) { play_cue_stream_file(p); show_duel_result_window((void*)-50, a1); }

#define TBL_801C343C ((Rank_801C343C *)TLobby__data_80511C80)
#define PLAYER_801C343C(k) ((u32 (*)(s32))get_player_by_client_id)(k)
s32 calc_player_rankings__6TLobbyFPv(Lobby_801C484C *) {
    s32 n;
    s32 i;
    s32 j;
    u32 p;
    s32 rank;
    s32 m;
    s32 k;
    for (k = 0; k < 4; k++) {
        TBL_801C343C[k].id = 0xFFFF;
        TBL_801C343C[k].rank = 0;
        TBL_801C343C[k].score = 0;
    }
    n = 0;
    if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1) {
        Team_801C343C team = lbl_80446FBC[0];
        for (k = 0; k < 4; k++) {
            p = PLAYER_801C343C(k);
            if (p != 0) {
                s32 t = TLobby__sub_801C19D0((void *)(p + 0x828)) != 1 ? 1 : 0;
                team.v[t] += TLobby__sub_801C4FC4((void *)(p + 0x7AC));
            }
        }
        for (k = 0; k < 4; k++) {
            p = PLAYER_801C343C(k);
            if (p != 0) {
                TBL_801C343C[n].id = obj_getField1c(p);
                TBL_801C343C[n].score = team.v[TLobby__sub_801C19D0((void *)(p + 0x828)) != 1 ? 1 : 0];
                n++;
            }
        }
    } else {
        for (k = 0; k < 4; k++) {
            p = PLAYER_801C343C(k);
            if (p != 0) {
                TBL_801C343C[n].id = obj_getField1c(p);
                TBL_801C343C[n].score = TLobby__sub_801C4FC4((void *)(p + 0x7AC));
                n++;
            }
        }
        if (n <= 1) {
            return 0;
        }
    }
    for (i = 0; i < n - 1; i++) {
        if (TBL_801C343C[i].id != 0xFFFF) {
            for (j = i + 1; j < n; j++) {
                if (TBL_801C343C[j].id != 0xFFFF && TBL_801C343C[i].score < TBL_801C343C[j].score) {
                    Rank_801C343C tmp = TBL_801C343C[i];
                    TLobby__sub_801C36E4(&TBL_801C343C[i], &TBL_801C343C[j]);
                    TLobby__sub_801C36E4(&TBL_801C343C[j], &tmp);
                }
            }
        }
    }
    rank = 0;
    for (m = 0; m < n; m++) {
        TBL_801C343C[m].rank = rank;
        if (m < n - 1 && TBL_801C343C[m].score != TBL_801C343C[m + 1].score) {
            rank = m + 1;
        }
    }
    return 1;
}

void TLobby__sub_801C36E4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

extern M2C_UNK TLobby__data_80511C80[];
extern s32 lbl_805D5DAC;

void handle_6x7F_battle_scores(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    memcpy(TLobby__data_80511C80, arg0 + 4, 0x20);
    lbl_805D5DAC = 1;
}
void handle_6x7E(void) {  }

void handle_6x7D_set_battle_mode_data(Pkt_801C374C *pkt) {
    u32 p;
    s32 i;
    bswap_set_battle_mode_data__6TLobbyFPv(pkt);
    switch (pkt->type) {
    case 0:
        if (TLobby__battle_mode_data_ptr != NULL) {
            ((Lobby_801C374C *)TLobby__battle_mode_data_ptr)->mode = pkt->mode;
            ((Lobby_801C374C *)TLobby__battle_mode_data_ptr)->a = pkt->v[0];
            ((Lobby_801C374C *)TLobby__battle_mode_data_ptr)->b = pkt->v[1];
        }
        break;
    case 2:
        lbl_805D5DA4 = 1;
        break;
    case 3:
        p = ((u32 (*)(s32))get_player_by_client_id)(pkt->v[0]);
        if (p != 0) {
            if (pkt->v[0] != lbl_805D53A0) {
                set_battle_mode__19TPlayerBattleCtrl4PFPvi(p + 0x7AC, pkt->v[1]);
            }
            TLobby__data_80511CA0[pkt->v[0]] = pkt->team;
        }
        lbl_805D5DB0++;
        break;
    case 4:
        lbl_805D5DBC[pkt->v[0]] = 1;
        break;
    case 5:
        if (TLobby__battle_mode_data_ptr != NULL) {
            set_flag_270__6TLobbyFPv(TLobby__battle_mode_data_ptr);
        }
        break;
    case 6:
        if (TLobby__battle_mode_data_ptr != NULL) {
            ((Lobby_801C374C *)TLobby__battle_mode_data_ptr)->mode = 6;
            for (i = 0; i < 4; i++) {
                lbl_80511CC0[i] = pkt->v[i];
            }
        }
        break;
    }
}

void TLobby__sub_801C38A4(void) {
    if ((void *) TLobby__battle_mode_data_ptr != NULL) {
        M2C_FIELD(TLobby__battle_mode_data_ptr, s32 *, 0x24) = 0;
    }
}
void init_and_set_flag__6TLobbyFv(void) { TLobby__sub_801B09A4(); inc_player_count__10TObjPlayerFv(); lbl_805D5DB4 = 1; }

void TLobby__sub_801C38E8(void *arg0) {
    u32 t;
    switch (*(s32 *)((u8 *)arg0 + 0x20)) {
    case 0:
        t = update_battle_controller__10TObjPlayerFv();
        if (t != 0) {
            play_effect_default__10TObjPlayerFii(t, -1);
        }
        *(s32 *)((u8 *)arg0 + 0x2C) = 0xF;
        *(s32 *)((u8 *)arg0 + 0x20) = 1;
    case 1:
        if (--*(s32 *)((u8 *)arg0 + 0x2C) <= 0) {
            TLobby__sub_8020BC50();
            TLobby__sub_801036CC();
            if (lbl_805D5EE8 != 0) {
                clear_buffer__12TQuestThreadFPv(lbl_805D5EE8);
            }
            stop_audio_streams__6TLobbyFv();
            lbl_805D5DB4 = 0;
            init_fadeout_state__6TLobbyFi((void *)init_and_set_flag__6TLobbyFv);
            *(s32 *)((u8 *)arg0 + 0x20) = 2;
        }
        break;
    case 2:
        if (lbl_805D5DB4 != 0) {
            finish_chr_select_scene_init__6TLobbyFv();
            set_fade_params__6TLobbyFi((void *)TLobby__sub_801C38A4);
            *(s32 *)((u8 *)arg0 + 0x20) = 3;
        }
        break;
    case 3:
    default:
        break;
    }
}

void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 var_r3;
    if ((u32) (*(u32 *)&TLobby__battle_mode_data_ptr) == 0U) {
        var_r3 = __nw__7TObjectFUl(0x278);
        if (var_r3 != 0U) {
            var_r3 = ((u32)TPlayerBattleCtrl__ct((void *)(var_r3), (s32)(tl_00)));
        }
        (*(u32 *)&TLobby__battle_mode_data_ptr) = var_r3;
    }
    if ((u32) (*(u32 *)&TLobby__battle_mode_data_ptr) != 0U) {
        strncpy((void *)((*(u32 *)&TLobby__battle_mode_data_ptr) + 0x68), (void *)(arg1), (int)(0x200));
        TLobby__battle_config_ptr = arg0;
    }
}

void TLobby__sub_801C3A40(void) {
    if (lbl_805D5DB8 != 0) {
        __destroy_new_array(lbl_805D5DB8, (void *)destroy_char_data__10TObjPlayerFis);
        lbl_805D5DB8 = 0;
    }
}

void init_char_slots__6TLobbyFv(void) {
    TLobby__battle_mode_data_ptr = 0;
    lbl_805D5D9C = TKeyBoardControl__sub_8000F828() == 1 ? 0x19 : 0x1E;
    lbl_805D5DB8 = __construct_new_array(alloc_buffer__11TOBoss4RockFPv(0x3220), (void *)init_char_data__10TObjPlayerFPv, (void *)destroy_char_data__10TObjPlayerFis, 0x42C, 0xC);
    TAdSinglePlyChrSelectGC__sub_801C5158();
    TLobby__sub_801C2C70();
    TLobby__data_805D5DC0 = 1;
    TAdSinglePlyChrSelectGC__sub_801C5120();
}

void TLobby__sub_801C3AF4(Lobby_801C3AF4 *self) {
    s32 idx;
    s32 s;
    switch (self->state) {
    case 0: {
        close_and_play_effect__6TLobbyFii((u16)lbl_805D53A0, 1);
        if (self->window != NULL) {
            TWindow__close(self->window);
            self->window = NULL;
        }
        if (self->f58 != 0) {
            idx = 5;
        } else {
            idx = 4;
            s = get_char_select_slot__23TAdSinglePlyChrSelectGCFv() - 1;
            set_slot__23TAdSinglePlyChrSelectGCFi(s > 0 ? s : 0);
        }
        Pair_801C3AF4 p = lbl_80446FB4[0];
        self->window = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0xB3), &p, 1);
        if (self->window != NULL) {
            send_and_handle__6TLobbyFPvii(self->window, self->msgs[idx], 0x80);
        }
        self->state = 1;
        break;
    }
    case 1:
        if (lbl_8050E208[0]->flags & 8) {
            self->next = 4;
        }
        break;
    case -1:
        break;
    }
}

s32 check_team_balance__6TLobbyFPvi(Lobby_801C484C *self, s32 arg1) {
    s32 i;
    s32 t;
    u32 pl;
    if (get_game_mode__6TLobbyFv() <= 1) {
        return 1;
    }
    if (arg1 != 0 && get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1) {
        Cnt_801C3C1C cnt = lbl_80446FAC[0];
        i = 0;
        do {
            pl = ((u32 (*)(s32))get_player_by_client_id)(i);
            if (pl != 0) {
                t = TLobby__sub_801C19D0((void *)(pl + 0x828)) - 1;
                if (t >= 0 && t < 2) {
                    cnt.v[t] = 1;
                }
            }
            i++;
        } while (i < 4);
        if (cnt.v[0] == 0 || cnt.v[1] == 0) {
            return 1;
        }
    }
    return 0;
}

void send_battle_mode_params__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2) {
    Stack_801C3CFC stack;
    build_6x7D_set_battle_mode_data(&stack.sp8);
    stack.spD = arg0;
    stack.spC = 0;
    stack.sp10 = arg1;
    stack.sp14 = arg2;
    send_set_battle_mode_data__6TLobbyFPv(&stack.sp8);
}

#define CFG (*(Cfg_801C3D50 **)&TLobby__battle_config_ptr)
void apply_game_settings__6TLobbyFii(M2C_UNK arg0, s32 arg1) {
    reset_settings_to_default__6TLobbyFPv((void *) (lbl_8050EA40));
    if (arg1 != 0) {
        s32 flag;
        set_validated_field_0x1__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[0]);
        set_field_2__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[1]);
        set_field_3__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[2]);
        set_clamped_field_4__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[3]);
        set_field_5__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[4]);
        set_field_0x6__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[5]);
        set_field7_clamped__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[6]);
        set_difficulty__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[7]);
        set_byte9_clamped__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[8]);
        set_field_b__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[0xA]);
        set_clamped_field_c__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->b[0xB]);
        fn_801D72B0((void *) (lbl_8050EA40), CFG->c);
        for (s32 i = 0; i < 4; i++) {
            fn_801D6D8C((void *) (lbl_8050EA40), CFG->b[i + 0xD], i);
        }
        set_field_d__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->d11);
        set_level__10TObjPlayerFPvi((void *) (lbl_8050EA40), CFG->lvl);
        set_field_0xE__6TLobbyFPvUc((void *) (lbl_8050EA40), CFG->d13);
        set_volume__6TLobbyFPvUc((void *) (lbl_8050EA40), (u8) CFG->vol);
        set_validated_field_0x11__6TLobbyFPvUc((void *) (lbl_8050EA40), (u8) CFG->v1c);
        set_clamped_index__6TLobbyFPvs((void *) (lbl_8050EA40), (s16) CFG->v20);
        set_clamped_value_1c__6TLobbyFPvi((void *) (lbl_8050EA40), CFG->v24);
        fn_801D726C((void *) (lbl_8050EA40), (u8) CFG->v28);
        flag = 0;
        if ((s32) CFG->b[9] == 1 && get_game_mode__6TLobbyFv() == 4) {
            s32 toggle = 1;
            for (s32 i = 0; i < 4; i++) {
                u32 p = ((u32 (*)(s32))get_player_by_client_id)(i);
                if (p != 0U) {
                    toggle = 1 - toggle;
                    s32 v = 2;
                    if (toggle != 0) {
                        v = 1;
                    }
                    lbl_80511CC8[i] = v;
                    fn_801C19D8((void *) (p + 0x828), lbl_80511CC8[i]);
                } else {
                    lbl_80511CC8[i] = -1;
                }
            }
            flag = 1;
        }
        set_field_a__6TLobbyFPvUc((void *) (lbl_8050EA40), (u8) (flag != 0));
        for (s32 i = 0; i < 4; i++) {
            u32 p = lbl_8050EA10[i];
            if (p != 0U) {
                set_scale__6TLobbyFPvf((void *) (p + 0x78C), lbl_805D3538);
                set_pos_z__6TLobbyFPvf((void *) (p + 0x78C), lbl_805D3548);
                set_scale__6TLobbyFPvf((void *) (p + 0x77C), lbl_805D353C);
                set_pos_z__6TLobbyFPvf((void *) (p + 0x77C), lbl_805D5DC4);
                set_scale__6TLobbyFPvf((void *) (p + 0x75C), lbl_805D3540);
                set_pos_z__6TLobbyFPvf((void *) (p + 0x75C), lbl_805D354C);
                set_scale__6TLobbyFPvf((void *) (p + 0x76C), lbl_805D3544);
                set_pos_z__6TLobbyFPvf((void *) (p + 0x76C), lbl_805D3550);
                set_scale__6TLobbyFPvf((void *) (p + 0x79C), lbl_805D5DC8);
                set_pos_z__6TLobbyFPvf((void *) (p + 0x79C), lbl_805D5DC8);
            }
        }
        set_section_id__6TLobbyFPvUc((void *) (lbl_8050EA40), 1);
    }
    if (((u32 (*)(void))update_battle_controller__10TObjPlayerFv)() != 0U) {
        apply_battle_rules_to_players__6TLobbyFv();
    }
}

void handle_battle_result__6TLobbyFii(int arg0, s32 arg1) {
    if (get_player_by_client_id(arg0) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (arg1 != 0) {
        end_player_keyboard_hold(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
    }
}
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg1 != 0) {
        begin_player_keyboard_hold(lbl_805D53A0);
        request_active_window_close();
        suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
    }
}
s32 TLobby__sub_801C417C(void) {
    return M2C_FIELD((*(void * *)&TLobby__battle_config_ptr), s32 *, 0x24) * 0x3C;
}

struct Lobby_801C484C;
struct Flags_801C3AF4;
#define G28 (((u32 *)lbl_8050E208)[10])

void end_battle_mode_cleanup__6TLobbyFPv(void *arg0) {
    switch (*(s32 *)((u8 *)arg0 + 0x20)) {
    case 0:
        if (TLobby__data_805D5608 != NULL) {
            delete (V_801C418C *)TLobby__data_805D5608;
            TLobby__data_805D5608 = NULL;
        }
        clear_counter__6TLobbyFv();
        evt2_random_enemies_mode = 0;
        TKeyBoardControl__sub_8000F950();
        TLobby__data_805D5CE8 = 1;
        queue_destruction__7TObjectFv(arg0);
        break;
    case -1:
        break;
    }
}

void update_duel_result__6TLobbyFPv(u8 *arg0) {
    void *p;
    void *q;
    switch (M2C_FIELD(arg0, s32 *, 0x20)) {
    case 0:
        init__6TLobbyFPv();
        lbl_805D5DA8 = 0;
        lbl_805D5DAC = 0;
        p = (void *)__nw__7TObjectFUl(0x28);
        if (p != NULL) {
            __ct__15TDuelEffectCtrlFP7TObjectUc(p, arg0, 1);
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = 0x78;
        close_timer_window__11TWindowCtrlFv();
        suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL) {
            release_attached_resource__10TObjPlayerFPv(p);
        }
        break;
    case 1:
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL) {
            release_attached_resource__10TObjPlayerFPv(p);
        }
        if (--M2C_FIELD(arg0, s32 *, 0x2C) <= 0) {
            send_battle_mode_state__6TLobbyFPv((Lobby_801C484C *)arg0);
            M2C_FIELD(arg0, s32 *, 0x2C) = 0x5A;
            M2C_FIELD(arg0, s32 *, 0x20) = 2;
        }
        break;
    case 2:
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL) {
            release_attached_resource__10TObjPlayerFPv(p);
        }
        if (--M2C_FIELD(arg0, s32 *, 0x2C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0x1C2;
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL) {
            release_attached_resource__10TObjPlayerFPv(p);
        }
        if (check_timeout__6TLobbyFPv(arg0, M2C_FIELD(arg0, s32 *, 0x44)--) != 0 || M2C_FIELD(arg0, s32 *, 0x44) <= 0) {
            clear_counter__6TLobbyFPv(arg0);
            calc_player_rankings__6TLobbyFPv((Lobby_801C484C *)((Lobby_801C484C *)arg0));
            TLobby__sub_801C32B4(arg0);
            if (((u16 *)TLobby__data_80511C80)[0] == lbl_805D53A0) {
                send_neg50__6TLobbyFPvPv(lbl_80447008, (void *)0x96);
            } else {
                send_neg50__6TLobbyFPvPv(lbl_80447010, (void *)0x96);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 4;
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        }
        p = (void *)__nw__7TObjectFUl(0x6C);
        if (p != NULL) {
            p = (void *)TWindowDuelResult__ct(p, lbl_805D53A0);
        }
        M2C_FIELD(arg0, void **, 0x54) = p;
        q = (void *)update_battle_controller__10TObjPlayerFv();
        if (q != NULL) {
            if (check_player_flag1__6TLobbyFPv(q) == 0) {
                close_and_play_effect__6TLobbyFii((u16)lbl_805D53A0, 1);
            }
            release_attached_resource__10TObjPlayerFPv(q);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
        break;
    case 5:
        if (G28 & 2) {
            handle_battle_result__6TLobbyFii((u16)lbl_805D53A0, 1);
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, void **, 0x54) = NULL;
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            p = (void *)update_battle_controller__10TObjPlayerFv();
            if (p != NULL && (M2C_FIELD(p, s32 *, 0x30) & 0x800)) {
                ((VObj_801C4214 *)p)->m62();
            }
        }
        break;
    case 6:
        if (check_team_balance__6TLobbyFPvi((Lobby_801C484C *)((Lobby_801C484C *)arg0), (s32)(0)) != 0) {
            send_battle_mode_params__6TLobbyFcii(5, 1, 0);
        } else {
            q = (void *)update_battle_controller__10TObjPlayerFv();
            if (lbl_805D53A0 == TLobby__data_805D53AC && has_player_active_menu__11TWindowCtrlFi(lbl_805D53A0) == 0) {
                if (M2C_FIELD(arg0, void **, 0x4C) == NULL) {
                    M2C_FIELD(arg0, void **, 0x4C) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x53), lbl_80446FA4, 1);
                    if (M2C_FIELD(arg0, void **, 0x4C) != NULL) {
                        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, void **, 0x4C), M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x40), s32 *, 0), 0x80);
                    }
                }
                if (M2C_FIELD(arg0, void **, 0x50) == NULL) {
                    M2C_FIELD(arg0, void **, 0x50) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x54), 3);
                    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, void **, 0x50), M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x40), s32 *, 4), 6, 1);
                    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, void **, 0x50), M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x40), s32 *, 8), 6, 2);
                    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, void **, 0x50), M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x40), s32 *, 0xC), 6, 3);
                    calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
                    align_menu_entry_positions(M2C_FIELD(arg0, void **, 0x50));
                    set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, void **, 0x50));
                }
                if (M2C_FIELD(arg0, void **, 0x50) != NULL) {
                    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50)) != 0) {
                        switch (get_selected_menu_value(M2C_FIELD(arg0, void **, 0x50))) {
                        case 1:
                            send_6x7D_set_battle_mode_data(arg0);
                            M2C_FIELD(arg0, s32 *, 0x20) = 9;
                            break;
                        case 2:
                            M2C_FIELD(arg0, s32 *, 0x20) = 7;
                            break;
                        case 3:
                            send_battle_mode_params__6TLobbyFcii(4, 0, 0);
                            M2C_FIELD(arg0, s32 *, 0x20) = 9;
                            break;
                        }
                    } else if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50)) != 0) {
                        M2C_FIELD(arg0, s32 *, 0x20) = 7;
                    }
                }
                if (q != NULL && check_player_flag1__6TLobbyFPv(q) == 0) {
                    close_and_play_effect__6TLobbyFii((u16)lbl_805D53A0, 1);
                }
            } else if (q != NULL && check_player_flag1__6TLobbyFPv(q) != 0) {
                handle_battle_result__6TLobbyFii((u16)lbl_805D53A0, 1);
            }
        }
        break;
    case 7:
        if (M2C_FIELD(arg0, void **, 0x4C) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, void **, 0x4C) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL && check_player_flag1__6TLobbyFPv(p) != 0) {
            handle_battle_result__6TLobbyFii((u16)lbl_805D53A0, 1);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 8;
    case 8:
        if (check_team_balance__6TLobbyFPvi((Lobby_801C484C *)((Lobby_801C484C *)arg0), (s32)(0)) != 0) {
            send_battle_mode_params__6TLobbyFcii(5, 1, 0);
        } else {
            p = (void *)((u32 (*)(s32))get_player_by_client_id)(lbl_805D53A0);
            if (p != NULL && check_flag_100__10TObjPlayerFPv(p) == 0 && (G28 & 6)) {
                M2C_FIELD(arg0, s32 *, 0x20) = 6;
            }
        }
        break;
    case -1:
        if (M2C_FIELD(arg0, void **, 0x4C) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, void **, 0x4C) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, void **, 0x54) = NULL;
        }
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL) {
            obj_clear_flag30_20000(p);
        }
        close_timer_window__11TWindowCtrlFv();
        suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        break;
    case 9:
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) == 6 || M2C_FIELD(arg0, s32 *, 0x20) == 8) {
        p = (void *)update_battle_controller__10TObjPlayerFv();
        if (p != NULL && check_flag_100__10TObjPlayerFPv(p) == 0 && has_player_active_menu__11TWindowCtrlFi(lbl_805D53A0) == 0 && (G28 & 0x400)) {
            if (M2C_FIELD(arg0, void **, 0x4C) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
                M2C_FIELD(arg0, void **, 0x4C) = NULL;
            }
            if (M2C_FIELD(arg0, void **, 0x50) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x50));
                M2C_FIELD(arg0, void **, 0x50) = NULL;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 4;
        }
    }
}
__declspec(section ".rodata") u8 lbl_80447008[] = "win.adx";
__declspec(section ".rodata") u8 lbl_80447010[] = "lose.adx";

void update_timed_wait__6TLobbyFPv(Lobby_801C484C *self) {
    s32 secs;
    s32 rem;
    switch (self->state) {
    case 0:
        start_duel_battle__6TLobbyFPv(self);
        self->state = 1;
    case 1:
        if (check_team_balance__6TLobbyFPvi((Lobby_801C484C *)(self), (s32)(1)) != 0) {
            send_battle_mode_params__6TLobbyFcii(5, 0, 0);
            return;
        }
        secs = (OSGetTime() - self->start) / (*(u32 *)0x800000F8 / 4);
        rem = self->limit - secs;
        self->remain = rem > 0 ? rem : 0;
        set_timer_window_time__11TWindowCtrlFi(self->remain);
        if (self->remain == 0) {
            self->result = 3;
            send_battle_mode_params__6TLobbyFcii(3, 0, 0);
            return;
        }
        if (check_battle_end__6TLobbyFv(self) != 0) {
            if (--self->timer48 <= 0) {
                self->result = 3;
                send_battle_mode_params__6TLobbyFcii(3, 0, 0);
            }
        } else {
            self->timer48 = 300;
        }
        update_battle_sync__6TLobbyFPvi(self, secs);
        if (--self->timer60 <= 0) {
            send_battle_mode_state__6TLobbyFPv(self);
            self->timer60 = 90;
        }
        calc_player_rankings__6TLobbyFPv((Lobby_801C484C *)(self));
        break;
    case -1:
        break;
    }
}
void update_battle_intro__6TLobbyFPv(Lobby_801C49B8 *self) {
    switch (self->state) {
    case 0:
        if (self->window == NULL) {
            Pair_801C49B8 p = lbl_80446F94[0];
            self->window = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x52), &p, 1);
        }
        lbl_805D5DA4 = 0;
        self->state = 1;
        break;
    case 1:
        send_and_handle__6TLobbyFPvii(self->window, (s32)self->msg, 0x80);
        self->timer = 0xF0;
        self->state = 2;
        break;
    case 2:
        if (--self->timer <= 0) {
            if (get_rule_field_a__6TLobbyFPv(((u8 *)&lbl_8050EA40)) == 1) {
                self->state = 3;
            } else {
                self->state = 5;
            }
        }
        break;
    case 3: {
        Cnt_801C49B8 cnt = lbl_80446F9C[0];
        Name_801C49B8 names[4];
        s32 i;
        for (i = 0; i < 4; i++) {
            names[i].s[0] = 0;
        }
        for (i = 0; i < 4; i++) {
            u8 *pl = (u8 *)((u32 (*)(s32))get_player_by_client_id)(i);
            if (pl != NULL) {
                s32 team = lbl_80511CC8[i] != 1 ? 1 : 0;
                if (cnt.v[team] < 2) {
                    strncpy(names[team * 2 + cnt.v[team]].s, (void *)((VObj_18_26c590 *)pl)->m10(), 0x10);
                    cnt.v[team]++;
                }
            }
        }
        sprintf(lbl_80511CD8, *(char **)(self->cfg + 0x18), names[0].s, names[1].s, names[2].s, names[3].s);
        send_and_handle__6TLobbyFPvii(self->window, (s32)lbl_80511CD8, 0x80);
        self->timer = 0xF0;
        self->state = 4;
        break;
    }
    case 4:
        if (--self->timer <= 0) {
            self->state = 5;
        }
        break;
    case 5:
        self->timer2 = 0x384;
        self->state = 6;
    case 6:
        self->timer2--;
        if (check_all_battle_flags__6TLobbyFv(self) != 0 || self->timer2 <= 0) {
            TWindow__close(self->window);
            self->window = NULL;
            TLobby__sub_801C2C34(self);
            self->timer2 = 0x1C2;
            self->state = 7;
        }
        break;
    case 7:
        self->timer2--;
        if (check_all_players_ready__6TLobbyFv(self) != 0 || self->timer2 <= 0) {
            void *o = (void *)__nw__7TObjectFUl(0x28);
            if (o != NULL) {
                __ct__15TDuelEffectCtrlFP7TObjectUc((void *)(o), (void *)(self), (int)(0));
            }
            self->timer = 0x96;
            self->state = 8;
        }
        break;
    case 8:
        if (--self->timer <= 0) {
            self->next = 2;
        }
        break;
    case -1:
        if (self->window != NULL) {
            TWindow__close(self->window);
            self->window = NULL;
        }
        TLobby__sub_801C2C70();
        break;
    }
}

}
}
#pragma pop

#include "pso/TPlayerBattleCtrl.h"
#pragma push
namespace P4_801C4CE0 {

extern "C" {
s32 TLobby__sub_801C38E8(void *);
s32 TLobby__sub_801C3AF4(void *);
s32 end_battle_mode_cleanup__6TLobbyFPv(void *);
s32 update_duel_result__6TLobbyFPv(void *);
s32 update_timed_wait__6TLobbyFPv(void *);
s32 update_battle_intro__6TLobbyFPv(void *);
void update_player_battle_ctrl_state(void *arg0);
M2C_UNK init_battle_round__6TLobbyFPv();
s32 fn_801C4CE0(void *arg0);
}

extern "C" {

s32 fn_801C4CE0(void *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0x20)) {
    case -1:
        break;
    case 0:
        init_battle_round__6TLobbyFPv();
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        break;
    }
}

void update_player_battle_ctrl_state(void *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_801C4CE0((void *)((void *) (arg0)));
        return;
    case 1:
        update_battle_intro__6TLobbyFPv((void *) (arg0));
        return;
    case 2:
        update_timed_wait__6TLobbyFPv((void *) (arg0));
        return;
    case 3:
        update_duel_result__6TLobbyFPv((void *) (arg0));
        return;
    case 4:
        end_battle_mode_cleanup__6TLobbyFPv((void *) (arg0));
        return;
    case 5:
        TLobby__sub_801C3AF4((void *) (arg0));
        return;
    case 6:
        TLobby__sub_801C38E8((void *) (arg0));
    default:
        return;
    }
}
void *TPlayerBattleCtrl__ct(void *arg0, s32 _w1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = __vt__17TPlayerBattleCtrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3554;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, u8 **, 0x40) = (lbl_805D5544 == 0) ? lbl_804EFA50 : lbl_804EFA6C;
    temp_r3 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3 != 0) {
        export_character_data__10TObjPlayerFPvPv(temp_r3, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
    }
    stop_audio_streams__6TLobbyFv();
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    return arg0;
}

}

}
#pragma pop

extern "C" {
void update_player_battle_ctrl_state(void *arg0);
void TWindow__close(void *);
extern s32 lbl_805D55C0;
}

void TPlayerBattleCtrl::run_task() {
    if (lbl_805D55C0 == 0) {
        if (state_1c != state_24) {
            if (state_20 != -1) {
                state_20 = -1;
                update_player_battle_ctrl_state(this);
            }
            state_1c = state_24;
            state_20 = 0;
        }
        update_player_battle_ctrl_state(this);
    }
}

TPlayerBattleCtrl::~TPlayerBattleCtrl() {
    if (state_20 != -1) {
        state_20 = -1;
        update_player_battle_ctrl_state(this);
    }
    if (window_4c != NULL) TWindow__close(window_4c);
    if (window_50 != NULL) TWindow__close(window_50);
    if (window_54 != NULL) TWindow__close(window_54);
    TLobby__battle_mode_data_ptr = 0;
}
