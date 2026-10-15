#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

struct RecoveredGlobal_802DD400_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
int get_selected_slot__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdPlyPltAnimCtrlGC__sub_80355148();
extern const f32 lbl_805DE89C;
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFv(u32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
extern s8 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DD400(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
extern s8 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DCF68(void *arg0);
}

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0);
s32 clear_entries__18TAdChrMoveEffectGCFv();
s32 setup_move_effect_params__18TAdChrMoveEffectGCFll(u32, s32, u32);
s32 create_effects__14TAdGameStartGCFPv(s32);
s32 is_multiplayer_character_slot_selected(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
u32 TAdMultiPlyChrSelectGC__sub_802DBE4C(void *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802E0024(s32, u32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 TWindow__close(void *);
s32 begin_change_game_mode__21TAdMultiChgGameModeGCFv();
s32 close__17TWindowSubComCardFv(void *);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 get_card_index__22TAdMultiPlyChrSelectGCFv(s32, s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
s32 get_cursor__22TAdMultiPlyChrSelectGCFv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFv(u32);
s32 get_ready_state__22TAdMultiPlyChrSelectGCFv(s32);
s32 load_tables();
s32 queue_destruction__7TObjectFv(void *);
s32 request_scene_change__21TAdMultiChgGameModeGCFv();
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFl(u32, s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 set_game_mode_state__21TAdMultiChgGameModeGCFv();
s32 set_state__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFv(s32);
s32 set_status_value__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(u32, s32);

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0) {
    s32 temp_r0;

    reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x48);
    switch (temp_r0) {
    case 0:
        if (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() != 0) {
            begin_change_game_mode__21TAdMultiChgGameModeGCFv();
            return;
        }
        set_game_mode_state__21TAdMultiChgGameModeGCFv();
        return;
    case 1:
        request_scene_change__21TAdMultiChgGameModeGCFv();
        return;
    case 2:
        begin_change_game_mode__21TAdMultiChgGameModeGCFv();
        return;
    }
}

void TAdMultiPlyChrSelectGC::update_idle_timer() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r4;
    if (((f32) temp_r4 > lbl_805DE89C) && (get_selected_slot__22TAdMultiPlyChrSelectGCFv() != 0U) && (TAdPlyPltAnimCtrlGC__sub_80355148() == 0)) {
        *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg0 + 0x28);
    }
}

void TAdMultiPlyChrSelectGC::update_confirm_start() {
    s32 temp_r31;
    s32 temp_r3;

    if ((get_ready_state__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (is_multiplayer_character_slot_selected(0) != 0)) {
        temp_r31 = count_ready__22TAdMultiPlyChrSelectGCFv();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            create_effects__14TAdGameStartGCFPv(*(s32 *)((s8 *)this + 0x78));
        }
    }
    set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
    *(s32 *)((s8 *)this + 0x20) = 3;
}

void TAdMultiPlyChrSelectGC::handle_cancel_state() {
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)this + 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x6C)) == 0x1D) {
        *(s32 *)((s8 *)this + 0x50) = 0;
        *(s32 *)((s8 *)this + 0x54) = 1;
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DCF68(void *arg0) {
    s32 temp_r5;
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x6C)) > 1) {
        temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C)) * 0x50;
        if (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + temp_r5 + 0x20, 2, temp_r5) == 0) {
            return;
        }
    }
    {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x6C)) <= 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)arg0 + 0x68)) == 0x14) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0x18;
        set_field_1c__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)arg0 + 0x6C), 0x1B);
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)arg0 + 0x68)) == 0x13) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x80));
            *(u32 *)((s8 *)arg0 + 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFv();
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x17;
    }
}

extern s32 lbl_80472870[];
extern s32 lbl_80472878[];
extern s8 controller_physical_port_bank[];

void TAdMultiPlyChrSelectGC::update_state_move() {
    s32 iter;
    u32 temp_u;
    s32 temp_r5;
    s32 ret;
    s32 temp_r3;

    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x6C)) <= 1) {
        *(s32 *)((s8 *)this + 0x20) = 0xC;
        return;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + temp_r5 + 0x20, 2, temp_r5) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
        return;
    }
    iter = 0;
loop_7:
    ret = get_card_index__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C), 1);
    if (swap_characters__23TAdSinglePlyChrSelectGCFii((u32)iter, ret + 4) == 1) {
        if ((u32) *(u32 *)((s8 *)this + 0x84) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x84));
            *(u32 *)((s8 *)this + 0x84) = 0U;
        }
        temp_u = get_global_state__22TAdMultiPlyChrSelectGCFv();
        if (temp_u != 0U) {
            setup_move_effect_params__18TAdChrMoveEffectGCFll(temp_u, ret, (u32)iter + 3);
        }
        TAdMultiPlyChrSelectGC__sub_802E0024(*(s32 *)((s8 *)this + 0x5C), (u32)iter);
        set_state__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x5C), 1);
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802DC294(this, get_cursor__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)));
        load_tables();
        set_status_value__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), temp_r3);
        set_field_100__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), 2);
        *(s32 *)((s8 *)this + 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(this, lbl_80472870);
        set_cursor_index__22TAdMultiPlyChrSelectGCFl(*(u32 *)((s8 *)this + 0x68), 0x11);
        *(s32 *)((s8 *)this + 0x20) = 0x16;
        return;
    }
    iter += 1;
    if ((u32)iter >= 4U) {
        *(s32 *)((s8 *)this + 0x54) = 0;
        if ((u32) *(u32 *)((s8 *)this + 0x84) == 0U) {
            *(u32 *)((s8 *)this + 0x84) = TAdMultiPlyChrSelectGC__sub_802DBE4C(this, lbl_80472878);
        }
        *(s32 *)((s8 *)this + 0x20) = 0xE;
        return;
    }
    goto loop_7;
}

void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0) {
    void *temp_r3;
    temp_r3 = *(void **)((s8 *)arg0 + 0x8C);
    if ((u32) temp_r3 != 0U) {
        close__17TWindowSubComCardFv(temp_r3);
        *(u32 *)((s8 *)arg0 + 0x8C) = 0U;
    }
    temp_r3 = *(void **)((s8 *)arg0 + 0x74);
    if ((u32) temp_r3 != 0U) {
        queue_destruction__7TObjectFv(temp_r3);
        *(u32 *)((s8 *)arg0 + 0x74) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x6C)) == 1) {
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
    }
}

void TAdMultiPlyChrSelectGC::handle_confirm_state() {
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)this + 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)this + 0x50) = 0;
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)this + 0x68)) == 1) {
        *(s32 *)((s8 *)this + 0x50) = 0;
        *(s32 *)((s8 *)this + 0x54) = 1;
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
    }
}
typedef char RecoveredGlobal_802DD400_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DD400_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DD400(u8 *arg0) {
    s32 temp_r5;
    if (get_mode__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x6C)))) > 1) {
        temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x5C)))) * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DD400_lbl_8050E3B8 *)&controller_physical_port_bank).value + temp_r5 + 0x20)), (s32)((int) (2)), (s32)((int) (temp_r5))) != 0) {
            goto block_2;
        }
    } else {
block_2:
        if (get_player_index__22TAdMultiPlyChrSelectGCFv((u32)((int) (*(u32 *)((s8 *)arg0 + 0x68)))) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x5C))));
        play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
    }
}

}
