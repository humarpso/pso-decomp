#include "types.h"
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
void TLobby__sub_801C3030(void *arg0);
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
void TLobby__sub_801C3030(void *arg0) {
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
