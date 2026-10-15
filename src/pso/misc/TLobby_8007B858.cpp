#include "pso/map/FloorResourceCallbacks.h"

#include "types.h"

struct RecoveredGlobal_8007BA98_lbl_8048D4C0 {
    s32 value;
    u8 remaining[0xE4];
};

struct RecoveredGlobal_8007BA98_lbl_8048D5A8 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8007BA20_lbl_8048D4C0 {
    s32 value;
    u8 remaining[0xE4];
};

struct RecoveredGlobal_8007BA20_lbl_8048D5A8 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
void load_lobby_textures__9TLanguageFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_802A5154(void);
void load_obj_lobby_main(void);
s32 run_load_callback_table(void *, int);
extern RecoveredGlobal_8007BA98_lbl_8048D4C0 lbl_8048D4C0;
extern RecoveredGlobal_8007BA98_lbl_8048D5A8 lbl_8048D5A8;
s32 run_lobby_load_tables__6TLobbyFv(void);
void call_funcs_reverse__6TLobbyFPvUi(s32, u32);
void fn_80198E84(void);
s32 get_global_state__14TOKeyMachine01Fv();
void free_dialing_gc__6TLobbyFv(void);
void TLobby__sub_8035202C(void);
extern RecoveredGlobal_8007BA98_lbl_8048D4C0 lbl_8048D4C0;
extern RecoveredGlobal_8007BA98_lbl_8048D5A8 lbl_8048D5A8;
void clear_session_buffers__6TLobbyFv(void);
}

extern "C" {

void create_tasks__6TLobbyFv(void);
s32 TCineCtrl__ct(u32, s32);
s32 create_area_fog_ctrl();
s32 THunterGuildSeqOnlineTask__ct(u32, s32);
s32 is_scene_ready__6TLobbyFv();
s32 activate_triggered_floor_events();
s32 cleanup_game_objects__9TMainTaskFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 restore_floor_telepipes();
s32 TWindowCtrlMain__ct();
s32 TWindowCtrl__ct(u32, s32);
s32 __ct__7TSwitchFv(u32, s32);
s32 __ct__8TTecCtrlFv(u32, s32);
u32 __nw__7TObjectFUl(s32);
s32 create__13TRaderMapCoreFv();
s32 create__6TSceneFv();
s32 create_instance__10TSceneSoraFv();
s32 init_subobject__6TLobbyFPvPvPv(u32, s32, s32);
s32 set_fade_params__6TLobbyFi(s32);
s32 ct_register__6TLobbyFPv(u32, s32);
s32 TWindowTimer__sub_80198D98();
s32 create__11TSetManagerFv();
s32 TLobby__sub_8032BDC4(u32, s32);
s32 TLobby__sub_8033ED24(u32, s32);
s32 construct_party_area__10TNpcPlayerFPvPv(u32, s32);
s32 TLobby__sub_80351F3C();
s32 get_main_phase();
s32 init__13TQuestColCtrlFv();
s32 is_split_screen();

extern s32 tl_00;
extern s32 tl_01;
extern s32 tl_06;
extern s32 tl_particlemodel;
extern s32 tl_fade;

void create_tasks__6TLobbyFv(void) {
    u32 tmp;
    create_area_fog_ctrl();
    if (is_split_screen() == 0) {
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 1);
        }
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 0);
        }
        tmp = __nw__7TObjectFUl(0x84);
        if (tmp != 0U) {
            TLobby__sub_8032BDC4(tmp, tl_particlemodel);
        }
        tmp = __nw__7TObjectFUl(0x24);
        if (tmp != 0U) {
            TLobby__sub_8033ED24(tmp, tl_particlemodel);
        }
    }
    cleanup_game_objects__9TMainTaskFv();
    create__6TSceneFv();
    create_instance__10TSceneSoraFv();
    create__11TSetManagerFv();
    activate_triggered_floor_events();
    tmp = __nw__7TObjectFUl(0x1C);
    if (tmp != 0U) {
        TWindowCtrlMain__ct();
    }
    tmp = __nw__7TObjectFUl(0xE8);
    if (tmp != 0U) {
        TWindowCtrl__ct(tmp, tl_00);
    }
    tmp = __nw__7TObjectFUl(0x2C);
    if (tmp != 0U) {
        ct_register__6TLobbyFPv(tmp, tl_fade);
    }
    set_fade_params__6TLobbyFi(0);
    tmp = __nw__7TObjectFUl(0x30);
    if (tmp != 0U) {
        TCineCtrl__ct(tmp, tl_00);
    }
    create__13TRaderMapCoreFv();
    restore_floor_telepipes();
    tmp = __nw__7TObjectFUl(0x20);
    if (tmp != 0U) {
        construct_party_area__10TNpcPlayerFPvPv(tmp, tl_06);
    }
    tmp = __nw__7TObjectFUl(0x28);
    if (tmp != 0U) {
        __ct__7TSwitchFv(tmp, tl_00);
    }
    init__13TQuestColCtrlFv();
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        TLobby__sub_80351F3C();
    }
    if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && (is_scene_ready__6TLobbyFv() != 0)) {
        TWindowTimer__sub_80198D98();
    }
    if ((get_main_phase() == 0xF) && ((get_global_state__14TOKeyMachine01Fv() == 0) || (get_global_state__14TOKeyMachine01Fv() == 0x12))) {
        tmp = __nw__7TObjectFUl(0x1C);
        if (tmp != 0U) {
            THunterGuildSeqOnlineTask__ct(tmp, tl_01);
        }
    }
    tmp = __nw__7TObjectFUl(0x24);
    if (tmp != 0U) {
        __ct__8TTecCtrlFv(tmp, tl_01);
    }
}
typedef char RecoveredGlobal_8007BA98_lbl_8048D4C0_size[sizeof(RecoveredGlobal_8007BA98_lbl_8048D4C0) == 0xE8 ? 1 : -1];
typedef char RecoveredGlobal_8007BA98_lbl_8048D5A8_size[sizeof(RecoveredGlobal_8007BA98_lbl_8048D5A8) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_8007BA20_lbl_8048D4C0_size[sizeof(RecoveredGlobal_8007BA20_lbl_8048D4C0) == 0xE8 ? 1 : -1];
typedef char RecoveredGlobal_8007BA20_lbl_8048D5A8_size[sizeof(RecoveredGlobal_8007BA20_lbl_8048D5A8) == 0x20 ? 1 : -1];
void clear_session_buffers__6TLobbyFv(void) {
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        free_dialing_gc__6TLobbyFv();
        fn_80198E84();
        TLobby__sub_8035202C();
    }
    if ((get_global_state__14TOKeyMachine01Fv() != 0) && (get_global_state__14TOKeyMachine01Fv() != 0xF) && (get_global_state__14TOKeyMachine01Fv() != 0x12)) {
        call_funcs_reverse__6TLobbyFPvUi((s32) &(*(RecoveredGlobal_8007BA20_lbl_8048D5A8 *)&lbl_8048D5A8).value, 0x20U);
    }
    call_funcs_reverse__6TLobbyFPvUi((s32) &(*(RecoveredGlobal_8007BA20_lbl_8048D4C0 *)&lbl_8048D4C0).value, 0xE8U);
}

s32 run_lobby_load_tables__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    temp_r3_2 = run_load_callback_table((void *) (&lbl_8048D4C0.value), (int) (0xE8));
    if (temp_r3_2 == 0) {
        return temp_r3_2;
    }
    if ((get_global_state__14TOKeyMachine01Fv() != 0) && (get_global_state__14TOKeyMachine01Fv() != 0xF) && (get_global_state__14TOKeyMachine01Fv() != 0x12)) {
        temp_r3 = run_load_callback_table((void *) (&lbl_8048D5A8.value), (int) (0x20));
        if (temp_r3 == 0) {
            return temp_r3;
        }
    }
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        load_obj_lobby_main();
        load_lobby_textures__9TLanguageFv();
        TLobby__sub_802A5154();
    }
    return 1;
}

}

#include "types.h"

extern "C" {

s32 run_lobby_load_tables__6TLobbyFv();
s32 is_area_transfer_pending();
s32 apply_phase_keyboard_mode();
s32 load_area_gsl();
s32 close_gsl_archive();
s32 update_key_machine__6TLobbyFv();
void reset_and_invoke__6TLobbyFv(void);
int reset_keyboard_state__6TLobbyFv(void);
int clear_callback_and_reset_keyboard__6TLobbyFv(void);
int invoke_callback__6TLobbyFv(void);

s32 check_disconnect_conditions__6TLobbyFv(void) {
    apply_phase_keyboard_mode();
    if (run_lobby_load_tables__6TLobbyFv() == 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    load_area_gsl();
    if (update_key_machine__6TLobbyFv() == 0) {
        close_gsl_archive();
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    if (load_current_floor_resources() == 0) {
        close_gsl_archive();
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    close_gsl_archive();
    if (is_area_transfer_pending() != 0) {
        reset_and_invoke__6TLobbyFv();
        return 1;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    return 0;
}
void reset_and_invoke__6TLobbyFv(void) { reset_keyboard_state__6TLobbyFv(); invoke_callback__6TLobbyFv(); clear_callback_and_reset_keyboard__6TLobbyFv(); }

}

#include "types.h"

struct L_8007BC5C { u8 pad0; u8 count; u8 pad2[2]; s32 ids[30]; };

extern "C" {
s32 get_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_card_slot__17TWindowSubComCardFi(s32 arg0);
s32 get_card_id__17TWindowSubComCardFPv(void *);
s32 is_active__17TWindowSubComCardFPv(void *);
s32 get_card_slot__17TWindowSubComCardFi(s32 arg0);
void collect_active_card_ids__6TLobbyFPv(L_8007BC5C *arg0);
}

extern "C" {

void TLobby__sub_8007BBEC(void);
void TLobby__sub_8007BBF8(void);
void send_status_packet__6TLobbyFv(void);
s32 send_c6_packet__6TLobbyFPvPv(s32, s32 *);

    extern short quest_collision_next_id;
void TLobby__sub_8007BBEC(void) { quest_collision_next_id = 0; }

    extern short quest_collision_next_id;
void TLobby__sub_8007BBF8(void) { quest_collision_next_id = 0; }

extern s32 TLobby__protocol_instance;

s32 get_card_slot__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r3 = 0;
        return 0;
    }
    if (var_r31 >= 0x1C) {
        var_r3 = 0;
        return 0;
    }
    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    var_r3 = temp_r3 + 0x10000;
    var_r3 = temp_r3 + 0xD2C4;
    var_r3 += var_r31 * 0x90;
    return var_r3;
}

void collect_active_card_ids__6TLobbyFPv(L_8007BC5C *arg0) {
    u8 *card;
    s32 *p;
    s32 i;
    s32 n;
    card = (u8 *)get_card_slot__17TWindowSubComCardFi(0);
    p = arg0->ids;
    n = 0;
    i = 0;
    do {
        if (is_active__17TWindowSubComCardFPv(card) == 0) {
            break;
        }
        *p++ = get_card_id__17TWindowSubComCardFPv(card);
        i++;
        n++;
        card += 0x90;
    } while (i < 0x1c);
    arg0->count = n;
    for (i = n; i < 0x1e; i++) {
        *p++ = 0;
    }
}

void send_status_packet__6TLobbyFv(void) {
    char sp8[0x84];

    collect_active_card_ids__6TLobbyFPv((L_8007BC5C *)((s32 *) sp8));
    send_c6_packet__6TLobbyFPvPv(TLobby__protocol_instance, (s32 *) sp8);
}

}
