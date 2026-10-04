#include "types.h"
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

extern "C" {
void handle_6x7E(void);
extern void *TLobby__data_805D5D98;
void TLobby__sub_801C38A4(void);
int TLobby__sub_801B09A4(void);
int inc_player_count__10TObjPlayerFv(void);
    extern int lbl_805D5DB4;
void init_and_set_flag__6TLobbyFv(void);
u32 TPlayerBattleCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
void strncpy(void *, void *, int);
extern void *TLobby__data_805D5D98;
extern s32 TLobby__data_805D5DA0;
extern s32 tl_00;
void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2);
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
extern s32 TLobby__data_805D5DA0;
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
extern void *TLobby__data_805D5D98;
extern s32 lbl_805D5D9C;
extern void *lbl_805D5DB8;
extern s32 TLobby__data_805D5DC0;
void TLobby__sub_801C3A7C(void);
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
void set_slot__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void);
void TWindow__close(void *);
void send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
extern Pair_801C3AF4 lbl_80446FB4[];
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
extern void *TLobby__data_805D5D98;
extern s32 lbl_805D5DA4;
extern s32 lbl_805D5DB0;
extern u8 lbl_805D5DBC[4];
void handle_6x7D_set_battle_mode_data(Pkt_801C374C *pkt);
void TLobby__sub_801C2F40(Lobby_801C484C *);
s32 TLobby__sub_801C3C1C(Lobby_801C484C *, s32);
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2);
s64 OSGetTime();
void TWindowCtrl__sub_8024A4B0(s32);
s32 TLobby__sub_801C271C(Lobby_801C484C *);
void TLobby__sub_801C2898(Lobby_801C484C *, s32);
void TLobby__sub_801C29F0(Lobby_801C484C *);
void TLobby__sub_801C343C(Lobby_801C484C *);
void TLobby__sub_801C484C(Lobby_801C484C *self);
s32 get_game_mode__6TLobbyFv();
M2C_UNK TLobby__sub_801B0B88();
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
extern s32 TLobby__data_805D5DA0;
extern const f32 lbl_805D5DC4;
extern const f32 lbl_805D5DC8;
void TLobby__sub_801C3D50(M2C_UNK arg0, s32 arg1);
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
void TLobby__sub_801C29F0(Lobby_801C484C *);
M2C_UNK send_6x7D_set_battle_mode_data(void *);
M2C_UNK init__6TLobbyFPv();
void send_neg50__6TLobbyFPvPv(void* p, void* a1);
M2C_UNK TLobby__sub_801C32B4(void *);
void TLobby__sub_801C343C(Lobby_801C484C *);
s32 TLobby__sub_801C3C1C(Lobby_801C484C *, s32);
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2);
void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
u32 __nw__7TObjectFUl(M2C_UNK);
void TWindow__close(void *);
M2C_UNK TWindowCtrl__sub_8024A4EC();
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
u32 TWindowDuelResult__ct(void *, s32);
s32 get_selected_menu_value(void *);
M2C_UNK align_menu_entry_positions(void *);
M2C_UNK TWindowSubComCard__sub_80265F60(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, int, int);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
void send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
extern u8 lbl_80446FA4[];
extern u8 lbl_80447008[];
extern u8 lbl_80447010[];
extern Flags_801C3AF4 *lbl_8050E208[];
extern M2C_UNK TLobby__data_80511C80[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5DA8;
extern s32 lbl_805D5DAC;
void TLobby__sub_801C4214(u8 *arg0);
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
extern Pair_801C49B8 lbl_80446F94[];
extern Cnt_801C49B8 lbl_80446F9C[];
extern M2C_UNK lbl_8050EA40[];
extern s32 lbl_80511CC8[];
extern char lbl_80511CD8[];
extern s32 lbl_805D5DA4;
void TLobby__sub_801C49B8(Lobby_801C49B8 *self);
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
int fn_801C23A8(void*, void*);
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

void send_neg50__6TLobbyFPvPv(void* p, void* a1) { play_cue_stream_file(p); fn_801C23A8((void*)-50, a1); }

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
        if (TLobby__data_805D5D98 != NULL) {
            ((Lobby_801C374C *)TLobby__data_805D5D98)->mode = pkt->mode;
            ((Lobby_801C374C *)TLobby__data_805D5D98)->a = pkt->v[0];
            ((Lobby_801C374C *)TLobby__data_805D5D98)->b = pkt->v[1];
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
        if (TLobby__data_805D5D98 != NULL) {
            set_flag_270__6TLobbyFPv(TLobby__data_805D5D98);
        }
        break;
    case 6:
        if (TLobby__data_805D5D98 != NULL) {
            ((Lobby_801C374C *)TLobby__data_805D5D98)->mode = 6;
            for (i = 0; i < 4; i++) {
                lbl_80511CC0[i] = pkt->v[i];
            }
        }
        break;
    }
}

void TLobby__sub_801C38A4(void) {
    if ((void *) TLobby__data_805D5D98 != NULL) {
        M2C_FIELD(TLobby__data_805D5D98, s32 *, 0x24) = 0;
    }
}
void init_and_set_flag__6TLobbyFv(void) { TLobby__sub_801B09A4(); inc_player_count__10TObjPlayerFv(); lbl_805D5DB4 = 1; }
void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 var_r3;
    if ((u32) (*(u32 *)&TLobby__data_805D5D98) == 0U) {
        var_r3 = __nw__7TObjectFUl(0x278);
        if (var_r3 != 0U) {
            var_r3 = TPlayerBattleCtrl__ct(var_r3, tl_00);
        }
        (*(u32 *)&TLobby__data_805D5D98) = var_r3;
    }
    if ((u32) (*(u32 *)&TLobby__data_805D5D98) != 0U) {
        strncpy((void *)((*(u32 *)&TLobby__data_805D5D98) + 0x68), (void *)(arg1), (int)(0x200));
        TLobby__data_805D5DA0 = arg0;
    }
}

void TLobby__sub_801C3A40(void) {
    if (lbl_805D5DB8 != 0) {
        __destroy_new_array(lbl_805D5DB8, (void *)destroy_char_data__10TObjPlayerFis);
        lbl_805D5DB8 = 0;
    }
}

void TLobby__sub_801C3A7C(void) {
    TLobby__data_805D5D98 = 0;
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

void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2) {
    Stack_801C3CFC stack;
    build_6x7D_set_battle_mode_data(&stack.sp8);
    stack.spD = arg0;
    stack.spC = 0;
    stack.sp10 = arg1;
    stack.sp14 = arg2;
    send_set_battle_mode_data__6TLobbyFPv(&stack.sp8);
}

#define CFG (*(Cfg_801C3D50 **)&TLobby__data_805D5DA0)
void TLobby__sub_801C3D50(M2C_UNK arg0, s32 arg1) {
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
        TLobby__sub_801B0B88();
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
    return M2C_FIELD((*(void * *)&TLobby__data_805D5DA0), s32 *, 0x24) * 0x3C;
}

struct Lobby_801C484C;
struct Flags_801C3AF4;
#define G28 (((u32 *)lbl_8050E208)[10])
void TLobby__sub_801C4214(u8 *arg0) {
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
        TWindowCtrl__sub_8024A4EC();
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
            TLobby__sub_801C29F0((Lobby_801C484C *)arg0);
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
            TLobby__sub_801C343C((Lobby_801C484C *)arg0);
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
        if (TLobby__sub_801C3C1C((Lobby_801C484C *)arg0, 0) != 0) {
            TLobby__sub_801C3CFC(5, 1, 0);
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
                    TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, void **, 0x50));
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
                            TLobby__sub_801C3CFC(4, 0, 0);
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
        if (TLobby__sub_801C3C1C((Lobby_801C484C *)arg0, 0) != 0) {
            TLobby__sub_801C3CFC(5, 1, 0);
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
        TWindowCtrl__sub_8024A4EC();
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

void TLobby__sub_801C484C(Lobby_801C484C *self) {
    s32 secs;
    s32 rem;
    switch (self->state) {
    case 0:
        TLobby__sub_801C2F40(self);
        self->state = 1;
    case 1:
        if (TLobby__sub_801C3C1C(self, 1) != 0) {
            TLobby__sub_801C3CFC(5, 0, 0);
            return;
        }
        secs = (OSGetTime() - self->start) / (*(u32 *)0x800000F8 / 4);
        rem = self->limit - secs;
        self->remain = rem > 0 ? rem : 0;
        TWindowCtrl__sub_8024A4B0(self->remain);
        if (self->remain == 0) {
            self->result = 3;
            TLobby__sub_801C3CFC(3, 0, 0);
            return;
        }
        if (TLobby__sub_801C271C(self) != 0) {
            if (--self->timer48 <= 0) {
                self->result = 3;
                TLobby__sub_801C3CFC(3, 0, 0);
            }
        } else {
            self->timer48 = 300;
        }
        TLobby__sub_801C2898(self, secs);
        if (--self->timer60 <= 0) {
            TLobby__sub_801C29F0(self);
            self->timer60 = 90;
        }
        TLobby__sub_801C343C(self);
        break;
    case -1:
        break;
    }
}
void TLobby__sub_801C49B8(Lobby_801C49B8 *self) {
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
