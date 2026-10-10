#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803107D0_8031058C { char pad[0x18]; };
struct VObj_803107D0_8031058C : Base_803107D0_8031058C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)
#undef VV
    virtual void v64();
};

struct RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct T_803102A4 { u8 pad[0x28]; s32 arr[4]; };

struct T_803102C8 { u8 pad[0x298]; s32 mode; };

struct Ctl_803101D4 { u8 pad[0x28]; void *win[4]; };

struct Ctl_80310230 { u8 pad[0x28]; void *win[4]; };

struct Ctl_8031012C { u8 pad[0x28]; void *win[4]; };

struct MapEnt_8031012C { u8 pad[0x20]; u8 sub[0x30]; };

struct Ent_803104CC { u8 pad0[0x30]; u32 flags; u8 pad1[0x754 - 0x34]; u8 sub[4]; };

struct Ctl_803104CC { u8 pad[0x264]; s32 ok[4]; };

typedef s32 M2C_UNK;
struct VBase_80310830 { char pad[0x18]; };

struct VObj_80310830 : VBase_80310830 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual char *v10();
};

struct Ent_80310830 { u16 id; s16 idx; u32 pad; };

struct Ctl_80310910 {
    u8 pad0[0x238];
    s8 flags[8];
    u8 pad240[0x260 - 0x240];
    s32 state;
};

struct P_803109D4 { s32 v[2]; };

struct O_803109D4 { u8 pad[0x264]; s32 active[4]; };

struct Ent_8031030C { u16 id; s16 idx; u32 pad; };

struct Node_80311304 { u8 pad0[0xC]; Node_80311304 *next; };

struct Par_80311304 { u8 pad0[0x14]; Node_80311304 *head; };

struct Ctl_80311380 { u8 pad[0x288]; u16 tbl[1]; };

typedef s32 M2C_UNK;
struct Ctl_8031171C {
    u8 pad0[0x244];
    s32 f244;
    s32 f248;
    u8 pad24C[0x264 - 0x24C];
    s32 ok[4];
};

struct O_80311618 { u8 pad[0x238]; u8 flags[8]; u8 pad2[0x250 - 0x240]; u64 time; u8 pad3[0x284 - 0x258]; s32 v; };

struct O_80311400 { u8 pad[0x20]; void *w0; void *w1; u8 pad2[0x288 - 0x28]; s16 order[4]; };

struct Ctl_80310F10
{
  u8 pad[0x1C];
  u8 *cfg;
  u8 pad20[0x274 - 0x20];
  s32 team[4];
};

extern "C" {
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
M2C_UNK *TPlayerBattleCtrl4P__sub_80310300(void);
void TPlayerBattleCtrl4P__sub_803102A4(T_803102A4 *self);
extern void *TPlayerBattleCtrl4P__instance;
u8 is_battle_mode_active__19TPlayerBattleCtrl4PFv(void);
void TWindow__close(void *);
void close_player_windows__19TPlayerBattleCtrl4PFPv(Ctl_803101D4 *o);
void *get_player_by_client_id(s32);
void *__nw__7TObjectFUl(u32);
void *TWindowDuelResult__ct(void *, int);
void create_result_windows__19TPlayerBattleCtrl4PFPv(Ctl_80310230 *o);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_map_id__13TRaderMapCoreFPv();
void *get_player_by_client_id(s32);
void TWindow__close(void *);
extern MapEnt_8031012C controller_input_state[];
s32 close_windows_on_button__19TPlayerBattleCtrl4PFPv(Ctl_8031012C *self);
void *get_player_by_client_id(s32);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *);
u8 TLobby__sub_801D7100(void *);
extern u8 lobby_rule_settings[];
void update_player_alive_flags__19TPlayerBattleCtrl4PFPv(Ctl_803104CC *self);
void *get_player_by_client_id(s32);
void init_all__11TWindowCtrlFPvPv(void *, s32);
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p);
void TPlayerBattleCtrl4P__sub_80310C08(void *);
int sprintf(char *, const char *, ...);
extern char lbl_80475B90[];
extern char lbl_80475B98[];
extern char lbl_80475BA0[];
extern char *TPlayerBattleCtrl4P_player_name_formats[];
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
void start_match__19TPlayerBattleCtrl4PFPv(void *arg0);
s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0);
void start_match__19TPlayerBattleCtrl4PFPv(void *arg0);
void TPlayerBattleCtrl4P__sub_80310904(void* p);
extern s16 battle_event_second_table[];
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
void update_timed_events__19TPlayerBattleCtrl4PFPvi(Ctl_80310910 *o, s32 frames);
void *get_player_by_client_id(s32);
s32 TLobby__sub_801C19D0(void *);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
u8 TLobby__sub_801D7100(void *);
extern P_803109D4 lbl_80475B80[];
extern u8 lobby_rule_settings[];
u8 is_battle_decided__19TPlayerBattleCtrl4PFPv(O_803109D4 *o);
void *get_player_by_client_id(s32);
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
s32 TPlayerBattleCtrl4P__sub_8031030C(void);
void *get_player_by_client_id(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FCE6C();
void *get_card_window__17TWindowSubComCardFUi(u16);
s32 TPlayerBattleCtrl4P__sub_8031030C(void);
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
void TPlayerBattleCtrl4P__sub_80310674(void);

int obj_getPtr2B0_20(void *);
f32 fn_801C19A4(void *);
s32 TWindowDuelResult__sub_801C19AC(void *);
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void *, s32);

s32 calc_battle_score__19TPlayerBattleCtrl4PFPvPv(void *self, u8 *arg1);
s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0);
void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, int);
void queue_destruction__7TObjectFv(void *);
extern s32 lbl_805D2A98;
void destroy_matching_children__19TPlayerBattleCtrl4PFPvPv(void *self, Par_80311304 *p);
s32 obj_getField1c(void);
void reset_cameras_to_actor(void *, int);
void TObjPlayer__send_selected_spawn_position(void *, int);
void destroy__23TAdSinglePlyChrSelectGCFv(void);
void init_scene_objects__6TLobbyFv(void);
void destroy_matching_children__19TPlayerBattleCtrl4PFPvPv(void *self, Par_80311304 *p);
extern s32 tl_05;
void reset_players__19TPlayerBattleCtrl4PFPv(Ctl_80311380 *o);
M2C_UNK obj_set_flag_20000();
void destroy_matching_traps__10TOMineTrapFv(void);
void update_child_player__6TLobbyFi(void *);
void set_timer_window_time__11TWindowCtrlFi(s32);
void create_alt_timer__11TWindowCtrlFv(void);
void TPlayerBattleCtrl4P__sub_80310C08(void *);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0);
void init_battle__19TPlayerBattleCtrl4PFPv(Ctl_8031171C *o);
u64 OSGetTime();
M2C_UNK obj_clear_flag30_20000(u32);
M2C_UNK init_with_name__6TLobbyFPvPvPvPv(void *, void *, void *, int);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F14(int);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F18();
s32 get_global_state__14TOKeyMachine01Fv();
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
extern char lbl_80475BAC[];
extern char lbl_80475BB8[];
extern s16 battle_event_second_table[];
extern s32 TLobby__battle_ctrl_default_value;
void start_duel__19TPlayerBattleCtrl4PFPv(O_80311618 *o);
void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1);
s32 rand();
extern const f32 lbl_805DF240;
extern const f32 lbl_805DF244;
void shuffle_order__19TPlayerBattleCtrl4PFPv(O_80311400 *o);

s32 get_game_mode__6TLobbyFv();
M2C_UNK apply_battle_rules_to_players__6TLobbyFv();
void *get_player_by_client_id(s32);
M2C_UNK fn_801C19D8(void *, int);
M2C_UNK set_pos_z__6TLobbyFPvf(void *, f32);
M2C_UNK set_scale__6TLobbyFPvf(void *, f32);
M2C_UNK set_level__10TObjPlayerFPvi(void *, s32);
M2C_UNK fn_801D6D8C(void *, u8, int);
M2C_UNK set_volume__6TLobbyFPvUc(void *, void *);
M2C_UNK set_validated_field_0x11__6TLobbyFPvUc(void *, void *);
M2C_UNK set_clamped_index__6TLobbyFPvs(void *, void *);
M2C_UNK set_clamped_value_1c__6TLobbyFPvi(void *, void *);
M2C_UNK fn_801D726C(void *, void *);
M2C_UNK fn_801D72B0(void *, s32);
M2C_UNK set_field_0xE__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_d__6TLobbyFPvUc(void *, void *);
M2C_UNK set_clamped_field_c__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_b__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_a__6TLobbyFPvUc(void *, int);
M2C_UNK set_byte9_clamped__6TLobbyFPvUc(void *, void *);
M2C_UNK set_difficulty__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field7_clamped__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_0x6__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_5__6TLobbyFPvUc(void *, void *);
M2C_UNK set_clamped_field_4__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_3__6TLobbyFPvUc(void *, void *);
M2C_UNK set_field_2__6TLobbyFPvUc(void *, void *);
M2C_UNK set_validated_field_0x1__6TLobbyFPvUc(void *, void *);
M2C_UNK set_section_id__6TLobbyFPvUc(void *, int);
M2C_UNK reset_settings_to_default__6TLobbyFPv(void *);
extern u8 lobby_rule_settings[];
extern const f32 lbl_805D3538;
extern const f32 lbl_805D353C;
extern const f32 lbl_805D3540;
extern const f32 lbl_805D3544;
extern const f32 lbl_805D3548;
extern const f32 lbl_805D354C;
extern const f32 lbl_805D3550;
extern const f32 lbl_805D5DC4;
extern const f32 lbl_805D5DC8;
void apply_rule_configuration__19TPlayerBattleCtrl4PFPvi(Ctl_80310F10 *o, s32 arg1);
}

extern "C" {

void TPlayerBattleCtrl4P__sub_8031058C(void* p);
void TPlayerBattleCtrl4P__sub_80310904(void* p);
void init__19TPlayerBattleCtrl4PFv(void);
int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p);
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void);
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p);
s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0);
void update_players__19TPlayerBattleCtrl4PFv(void);
M2C_UNK TLobby__sub_801B09A4();
int play_cue_stream_file(void*);
void *get_player_by_client_id(s32);
int show_duel_result_window(void*, void*);
M2C_UNK inc_player_count__10TObjPlayerFv();

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);
void update__19TPlayerBattleCtrl4PFv(void);
void update_all_players__19TPlayerBattleCtrl4PFv(void);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
void TPlayerBattleCtrl4P__vt28(void);
void TPlayerBattleCtrl4P__vt29(void);
M2C_UNK end_player_keyboard_hold(u16);
M2C_UNK suppress_slot__11TWindowCtrlFi(u32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK clear_trap_counts(s32);
M2C_UNK destroy_children_with_tag(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK begin_player_keyboard_hold(u32);
M2C_UNK obj_set_flag_20000();
s32 obj_testFlags30(u32, s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);
s32 release_attached_resource__10TObjPlayerFPv();
M2C_UNK request_active_window_close();
M2C_UNK send_code_45_1__10TObjPlayerFi();

typedef char RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90_size[sizeof(RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90) == 0x20 ? 1 : -1];

s32 close_windows_on_button__19TPlayerBattleCtrl4PFPv(Ctl_8031012C *self) {
    s32 r = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (get_player_by_client_id(i) != 0) {
            if (self->win[i] != NULL) {
                if (TWindowShortListCtrl__check_controller_button(controller_input_state[get_map_id__13TRaderMapCoreFPv()].sub, 2) != 0) {
                    TWindow__close(self->win[i]);
                    self->win[i] = 0;
                } else {
                    r = 0;
                }
            }
        }
    }
    return r;
}

void close_player_windows__19TPlayerBattleCtrl4PFPv(Ctl_803101D4 *o) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (o->win[i] != 0) {
            TWindow__close(o->win[i]);
            o->win[i] = 0;
        }
    }
}

void create_result_windows__19TPlayerBattleCtrl4PFPv(Ctl_80310230 *o) {
    s32 i;
    void *w;
    for (i = 0; i < 4; i++) {
        if (get_player_by_client_id(i) != 0) {
            w = __nw__7TObjectFUl(0x6C);
            if (w != 0) {
                w = TWindowDuelResult__ct(w, i);
            }
            o->win[i] = w;
        }
    }
}

void TPlayerBattleCtrl4P__sub_803102A4(T_803102A4 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

u8 is_battle_mode_active__19TPlayerBattleCtrl4PFv(void) {
    T_803102C8 *p = (*(T_803102C8 * *)&TPlayerBattleCtrl4P__instance);
    if (p != 0) {
        return p->mode == 1 || p->mode == 2;
    }
    return 0;
}

M2C_UNK *TPlayerBattleCtrl4P__sub_80310300(void) {
    return &TPlayerBattleCtrl4P__data_80542E90.value;
}

s32 TPlayerBattleCtrl4P__sub_8031030C(void) {
    Ent_8031030C *e;
    s32 result;
    s32 i;
    result = 1;
    for (i = 0; i < 4; i++) {
        e = &((Ent_8031030C *)&TPlayerBattleCtrl4P__data_80542E90)[i];
        if (get_player_by_client_id(e->id) != NULL && e->idx != 0) {
            result = 0;
            break;
        }
    }
    return result;
}

s32 calc_battle_score__19TPlayerBattleCtrl4PFPvPv(void *self, u8 *arg1) {
    f32 score;
    s32 mode;

    score = (f32)TWindowDuelResult__sub_801C19AC(arg1 + 0x78C);
    score -= (f32)TWindowDuelResult__sub_801C19AC(arg1 + 0x77C);
    score += (f32)TWindowDuelResult__sub_801C19AC(arg1 + 0x75C);
    score -= (f32)TWindowDuelResult__sub_801C19AC(arg1 + 0x76C);
    score += (f32)obj_getPtr2B0_20(arg1) * fn_801C19A4(arg1 + 0x79C);
    mode = (s32)score;
    set_battle_mode__19TPlayerBattleCtrl4PFPvi(arg1 + 0x7AC, mode);
    return mode;
}

void update_player_alive_flags__19TPlayerBattleCtrl4PFPv(Ctl_803104CC *self) {
    s32 i;
    Ent_803104CC *e;
    s32 v;
    for (i = 0; i < 4; i++) {
        e = (Ent_803104CC *)get_player_by_client_id(i);
        if (e != NULL) {
            ((s32 (*)(void *, void *))calc_battle_score__19TPlayerBattleCtrl4PFPvPv)(self, e);
            v = 1;
            if (e->flags & 0x800) {
                if (TLobby__sub_801D7100(lobby_rule_settings) == 1) {
                    v = 0;
                } else if (TLobby__sub_801D7100(lobby_rule_settings) == 2 && get_state__19TPlayerBattleCtrl4PFPv(e->sub) == 0) {
                    v = 0;
                }
            }
            self->ok[i] = v;
        }
    }
}

void TPlayerBattleCtrl4P__sub_8031058C(void* p) { update_player_alive_flags__19TPlayerBattleCtrl4PFPv((Ctl_803104CC *)(p)); }

extern void *TPlayerBattleCtrl4P__instance;

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void) {
    void *temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__instance;
    if (temp_r3 != NULL) {
        init_ctrl_default__19TPlayerBattleCtrl4PFPv((void*)(temp_r3));
    }
}

extern s32 TPlayerBattleCtrl4P__init_flag;

void init__19TPlayerBattleCtrl4PFv(void) {
    TLobby__sub_801B09A4();
    inc_player_count__10TObjPlayerFv();
    TPlayerBattleCtrl4P__init_flag = 1;
}

int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p) { return ((int (*)(void*, int))TPlayerBattleCtrl4P__sub_803112AC)(p, 0); }
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2) { play_cue_stream_file(a1); show_duel_result_window((void*)-50, a2); }
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p) { *(s32*)((char*)p + 0x260) = 0; *(s32*)((char*)p + 0x290) = 0; }

void TPlayerBattleCtrl4P__sub_80310674(void) {
    void *obj;
    s8 *base;
    s32 outer;
    s32 off;
    s8 *entry;
    outer = 0;
    base = (s8 *)&TPlayerBattleCtrl4P__data_80542E90;
    off = 0;
    do {
        entry = base + off;
        if (get_player_by_client_id(M2C_FIELD(entry, u16 *, 0)) != NULL) {
            obj = get_card_window__17TWindowSubComCardFUi(M2C_FIELD(entry, u16 *, 0));
            if (obj != NULL) {
                s16 field2 = M2C_FIELD(entry, s16 *, 2);
                if (TPlayerBattleCtrl4P__sub_8031030C() == 0) {
                    switch (field2) {
                    case 0:
                        {
                            s32 inc = (s32)(u16)M2C_FIELD(obj, u16 *, 0x2354) + 1;
                            s32 lim = 0xFFFF;
                            if (inc < lim) lim = inc;
                            M2C_FIELD(obj, u16 *, 0x2354) = lim;
                        }
                        break;
                    case 1:
                        {
                            s32 inc = (s32)(u16)M2C_FIELD(obj, u16 *, 0x2356) + 1;
                            s32 lim = 0xFFFF;
                            if (inc < lim) lim = inc;
                            M2C_FIELD(obj, u16 *, 0x2356) = lim;
                        }
                        break;
                    case 2:
                        {
                            s32 inc = (s32)(u16)M2C_FIELD(obj, u16 *, 0x2358) + 1;
                            s32 lim = 0xFFFF;
                            if (inc < lim) lim = inc;
                            M2C_FIELD(obj, u16 *, 0x2358) = lim;
                        }
                        break;
                    case 3:
                        {
                            s32 inc = (s32)(u16)M2C_FIELD(obj, u16 *, 0x235A) + 1;
                            s32 lim = 0xFFFF;
                            if (inc < lim) lim = inc;
                            M2C_FIELD(obj, u16 *, 0x235A) = lim;
                        }
                        break;
                    }
                }
                {
                    s32 v = M2C_FIELD(obj, u16 *, 0x235C) - 1;
                    M2C_FIELD(obj, u16 *, 0x235C) = (u16) (v & ((s32) (-v & ~v) >> 0x1F));
                }
            }
        }
        outer += 1;
        off += 8;
    } while (outer < 4);
    TAdSinglePlyChrSelectGC__sub_801FCE6C();
}

s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x260) = 2;
    return 1;
}

void update_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = get_player_by_client_id(var_r31);
        if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
            ((VObj_803107D0_8031058C *)temp_r3)->v64();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void start_match__19TPlayerBattleCtrl4PFPv(void *arg0) {
    char buf[0x40];
    Ent_80310830 *e;
    s32 i;
    VObj_80310830 *p;
    reset_score_counters__19TPlayerBattleCtrl4PFPv(arg0);
    TPlayerBattleCtrl4P__sub_80310C08(arg0);
    init_all__11TWindowCtrlFPvPv(lbl_80475B90, 0x200);
    for (i = 0; i < 4; i++) {
        e = &((Ent_80310830 *)&TPlayerBattleCtrl4P__data_80542E90)[i];
        p = (VObj_80310830 *)get_player_by_client_id(e->id);
        if (p != 0) {
            sprintf(buf, lbl_80475B98, TPlayerBattleCtrl4P_player_name_formats[e->idx], p->v10());
            init_all__11TWindowCtrlFPvPv(buf, 0x200);
        }
    }
    notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(arg0, lbl_80475BA0, (void *)0x3C);
}

void TPlayerBattleCtrl4P__sub_80310904(void* p) { *(s32*)((char*)p + 0x260) = 1; }
void update_timed_events__19TPlayerBattleCtrl4PFPvi(Ctl_80310910 *o, s32 frames) {
    s32 i;
    switch (o->state) {
    case 0:
        if (local_client_id == TLobby__designated_client_id) {
            for (i = 0; i < 8; i++) {
                if (o->flags[i] != 0 && frames / 60 == battle_event_second_table[i]) {
                    o->flags[i] = 0;
                    TPlayerBattleCtrl4P__sub_80310904((void*)(o));
                }
            }
        }
        break;
    case 1:
        set_state__19TPlayerBattleCtrl4PFPv(o);
        break;
    case 2:
        start_match__19TPlayerBattleCtrl4PFPv(o);
        break;
    }
}
u8 is_battle_decided__19TPlayerBattleCtrl4PFPv(O_803109D4 *o) {
    s32 count = 0;
    s32 i = 0;
    s32 ok;
    s32 team;
    u8 *p;
    P_803109D4 seen = lbl_80475B80[0];
    do {
        p = (u8 *)get_player_by_client_id(i);
        if (p != NULL) {
            ok = 1;
            if (o->active[i] == 0) {
                ok = 0;
            } else if (M2C_FIELD(p, s32 *, 0x30) & 0x800) {
                if (TLobby__sub_801D7100(lobby_rule_settings) == 1) {
                    ok = 0;
                } else if (TLobby__sub_801D7100(lobby_rule_settings) == 2 && get_state__19TPlayerBattleCtrl4PFPv(p + 0x754) == 0) {
                    ok = 0;
                }
            }
            if (ok != 0) {
                count++;
                if (get_rule_field_a__6TLobbyFPv(lobby_rule_settings) == 1) {
                    team = TLobby__sub_801C19D0(p + 0x828) - 1;
                    if (team >= 0 && team < 2) {
                        seen.v[team] = 1;
                    }
                }
            }
        }
        i++;
    } while (i < 4);
    if (get_rule_field_a__6TLobbyFPv(lobby_rule_settings) == 1 && (seen.v[0] == 0 || seen.v[1] == 0)) {
        return 1;
    }
    return count <= 1;
}

#define get_player_by_client_id ((u32 (*)(s32))get_player_by_client_id)
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (get_player_by_client_id((s32)((s32)(temp_r31))) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (temp_r30 != 0) {
        end_player_keyboard_hold(temp_r31);
        clear_flag__11TWindowCtrlFv();
        unsuppress_slot__11TWindowCtrlFi(temp_r31);
    }
}

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    u32 var_r3;

    var_r31 = 0;
loop_1:
    var_r3 = get_player_by_client_id((s32)((s32)(var_r31)));
    if ((var_r3 != 0U) && (obj_testFlags30(var_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 id;
    u32 temp;

    id = arg1;
    temp = get_player_by_client_id((s32)(id));
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg2 != 0) {
        begin_player_keyboard_hold(id);
        request_active_window_close();
        suppress_slot__11TWindowCtrlFi(id);
    }
}

#pragma push
#pragma opt_lifetimes off
typedef struct Ctl_80310F10 Ctl_80310F10;
void apply_rule_configuration__19TPlayerBattleCtrl4PFPvi(Ctl_80310F10 *o, s32 arg1) {
  s32 w;
  s32 i;
  s32 flag;
  s32 t;
  s32 j;
  u32 p;
  s32 v;
  reset_settings_to_default__6TLobbyFPv(((M2C_UNK *)&lobby_rule_settings));
  if (arg1 != 0)
  {
    set_validated_field_0x1__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[0]);
    set_field_2__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[1]);
    set_field_3__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[2]);
    set_clamped_field_4__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[3]);
    set_field_5__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[4]);
    set_field_0x6__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[5]);
    set_field7_clamped__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[6]);
    set_difficulty__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[7]);
    set_byte9_clamped__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[8]);
    set_field_b__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[0xA]);
    set_clamped_field_c__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[0xB]);
    fn_801D72B0(((M2C_UNK *)&lobby_rule_settings), ((s8 *) o->cfg)[0xC]);
    for (i = 0; i < 4; i++)
    {
      fn_801D6D8C(((M2C_UNK *)&lobby_rule_settings), o->cfg[i + 0xD], i);
    }
    set_field_d__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[0x11]);
    set_level__10TObjPlayerFPvi(((M2C_UNK *)&lobby_rule_settings), ((s8 *) o->cfg)[0x12]);
    set_field_0xE__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) o->cfg[0x13]);
    set_volume__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) ((u8) (*((s32 *) (((s8 *) o->cfg) + 0x18)))));
    set_validated_field_0x11__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (void *) ((u8) (*((s32 *) (((s8 *) o->cfg) + 0x1C)))));
    set_clamped_index__6TLobbyFPvs(((M2C_UNK *)&lobby_rule_settings), (void *) ((s16) (*((s32 *) (((s8 *) o->cfg) + 0x20)))));
    set_clamped_value_1c__6TLobbyFPvi(((M2C_UNK *)&lobby_rule_settings), (void *) (*((s32 *) (((s8 *) o->cfg) + 0x24))));
    fn_801D726C(((M2C_UNK *)&lobby_rule_settings), (void *) ((u8) (*((s16 *) (((s8 *) o->cfg) + 0x28)))));
    flag = 0;
    if ((((s32) o->cfg[9]) == 1) && (get_game_mode__6TLobbyFv() == 4))
    {
      t = 1;
      for (j = 0; j < 4; j++)
      {
        p = ((u32)get_player_by_client_id((s32)(j)));
        if (p != 0)
        {
          t = 1 - t;
          w = 2;
          if (t != 0)
          {
            w = 1;
          }
          o->team[j] = w;
          fn_801C19D8((void *) (p + 0x828), o->team[(((((((((((j & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu]);
        }
        else
        {
          o->team[j] = -1;
        }
      }
      flag = 1;
    }
    set_field_a__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), (u8) (flag != 0));
    for (j = 0; j < 4; j++)
    {
      p = ((u32)get_player_by_client_id((s32)(j)));
      if (p != 0)
      {
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
    set_section_id__6TLobbyFPvUc(((M2C_UNK *)&lobby_rule_settings), 1);
  }
  for (j = 0; j < 4; j++)
  {
    if (((u32)get_player_by_client_id((s32)(j))) != 0)
    {
      apply_battle_rules_to_players__6TLobbyFv();
    }
  }
}
#pragma pop

s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24) * 0x3C;
}

void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x298) = arg1;
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
}

void update_all_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (get_player_by_client_id((s32)(var_r31)) != 0U) {
            release_attached_resource__10TObjPlayerFPv();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

extern s32 tl_00;
extern s32 tl_01;

void destroy_matching_children__19TPlayerBattleCtrl4PFPvPv(void *self, Par_80311304 *p) {
    Node_80311304 *n = p->head;
    Node_80311304 *cur;
    while (p->head != 0 && n != 0) {
        cur = n;
        n = cur->next;
        if (check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D2A98) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            destroy_matching_children__19TPlayerBattleCtrl4PFPvPv(self, (Par_80311304 *)cur);
        }
    }
}

void reset_players__19TPlayerBattleCtrl4PFPv(Ctl_80311380 *o) {
    s32 i;
    void *p;
    init_scene_objects__6TLobbyFv();
    for (i = 0; i < 4; i++) {
        p = (void *)get_player_by_client_id(i);
        if (p != 0) {
            TObjPlayer__send_selected_spawn_position(p, o->tbl[(u16)obj_getField1c()]);
            reset_cameras_to_actor(p, 0);
        }
    }
    destroy_matching_children__19TPlayerBattleCtrl4PFPvPv((void *)(o), (Par_80311304 *)(tl_05));
    destroy__23TAdSinglePlyChrSelectGCFv();
}

void shuffle_order__19TPlayerBattleCtrl4PFPv(O_80311400 *o) {
    s32 order[4];
    s32 i;
    s32 a;
    s32 b;
    s32 t;
    for (i = 0; i < 4; i++) {
        order[i] = i;
    }
    for (i = 0; i < 30; i++) {
        a = (s32)(lbl_805DF240 * (lbl_805DF244 * (f32)rand()));
        b = (s32)(lbl_805DF240 * (lbl_805DF244 * (f32)rand()));
        if (a != b) {
            t = order[a];
            order[a] = order[b];
            order[b] = t;
        }
    }
    for (i = 0; i < 4; i++) {
        o->order[i] = order[i];
    }
    if (o->w0 != NULL) {
        TWindow__close(o->w0);
        o->w0 = NULL;
    }
    if (o->w1 != NULL) {
        TWindow__close(o->w1);
        o->w1 = NULL;
    }
    ((M2C_UNK (*)(void *))close_player_windows__19TPlayerBattleCtrl4PFPv)(o);
    TPlayerBattleCtrl4P__sub_803112AC((u8 *)o, 5);
}

void update__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r3;

    ((M2C_UNK (*)())TPlayerBattleCtrl4P__sub_8031058C)();
    var_r31 = 0;
    do {
        if (get_player_by_client_id((s32)(var_r31)) != 0U) {
            obj_set_flag_20000();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    fn_8020910C(tl_01);
    destroy_children_with_tag(tl_00);
    TLobby__sub_8020BCE4();
    TLobby__sub_8020BB18();
    var_r31_2 = 0;
    do {
        temp_r3 = get_player_by_client_id((s32)(var_r31_2));
        if (temp_r3 != 0U) {
            clear_trap_counts(temp_r3 + 0x7C4);
        }
        var_r31_2 += 1;
    } while (var_r31_2 < 4);
}

void start_duel__19TPlayerBattleCtrl4PFPv(O_80311618 *o) {
    s32 i;
    s32 j;
    u32 p;
    char *name;
    void *w;
    s32 st;
    TObjEneRe4Sorcerer__sub_801E3F14(4);
    TObjEneRe4Sorcerer__sub_801E3F18();
    o->time = OSGetTime();
    for (i = 0; i < 4; i++) {
        ((void (*)(void *, u16, s32))send_code_45_to_window__19TPlayerBattleCtrl4PFPvii)(o, i, 1);
        p = get_player_by_client_id(i);
        if (p != 0) {
            obj_clear_flag30_20000(p);
        }
    }
    reset_score_counters__19TPlayerBattleCtrl4PFPv(o);
    name = get_global_state__14TOKeyMachine01Fv() == 0x10 ? lbl_80475BAC : lbl_80475BB8;
    w = __nw__7TObjectFUl(0x40);
    if (w != NULL) {
        init_with_name__6TLobbyFPvPvPvPv(w, o, name, 0x2D);
    }
    for (j = 0; j < 8; j++) {
        o->flags[j] = 1;
        if (battle_event_second_table[j] == 0) {
            o->flags[j] = 0;
        }
    }
    o->v = TLobby__battle_ctrl_default_value;
}

void init_battle__19TPlayerBattleCtrl4PFPv(Ctl_8031171C *o) {
    s32 j;
    s32 i;
    u8 *p;
    o->f244 = TPlayerBattleCtrl4P__sub_80311294((u8 *)o);
    create_alt_timer__11TWindowCtrlFv();
    set_timer_window_time__11TWindowCtrlFi(o->f244);
    destroy_matching_traps__10TOMineTrapFv();
    apply_rule_configuration__19TPlayerBattleCtrl4PFPvi((Ctl_80310F10 *)(o), (s32)(1));
    for (i = 0; i < 4; i++) {
        remove_player__19TPlayerBattleCtrl4PFPvUsi(o, i, 1);
        p = (u8 *)get_player_by_client_id(i);
        if (p != 0) {
            obj_set_flag_20000();
            update_child_player__6TLobbyFi(p + 0x78C);
            update_child_player__6TLobbyFi(p + 0x77C);
            update_child_player__6TLobbyFi(p + 0x75C);
            update_child_player__6TLobbyFi(p + 0x76C);
            update_child_player__6TLobbyFi(p + 0x79C);
            set_battle_mode__19TPlayerBattleCtrl4PFPvi(p + 0x7AC, 0);
        }
    }
    o->f248 = 0x5A;
    TPlayerBattleCtrl4P__sub_80310C08(o);
    for (j = 0; j < 4; j++) {
        o->ok[j] = 1;
    }
}

#undef get_player_by_client_id
}
