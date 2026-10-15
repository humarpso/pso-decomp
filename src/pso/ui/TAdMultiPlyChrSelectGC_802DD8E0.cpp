#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

struct Stack_802DDF40 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DDD08_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802DDBA8_lbl_804727E8 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DDBA8_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
s32 TWindow__close(void *);
s32 close__17TWindowSubComCardFv(void *);
s32 split_slot_index__22TAdMultiPlyChrSelectGCFlPlPl(s32, s32 *, s32 *);
s32 init__22TAdMultiPlyChrSelectGCFv();
s32 is_multiplayer_character_slot_selected(s32);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C658C();
s32 TAdMultiPlyChrSelectGC__sub_802C6920();
s32 set_state_ready__22TAdMultiPlyChrSelectGCFv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
s32 set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, s32);
s32 set_field_4ec__22TAdMultiPlyChrSelectGCFl(s32, s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_ready_state__22TAdMultiPlyChrSelectGCFv(s32);
s32 create_effects__14TAdGameStartGCFPv(s32);
s32 get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(void *, s32);
s32 clear_entries__18TAdChrMoveEffectGCFv();
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 close__17TWindowSubComCardFv(void *);
s32 init_slot_position__22TAdMultiPlyChrSelectGCFlll(int, void *, int, int);
s32 clear_slot_entries__22TAdMultiPlyChrSelectGCFl(int, int);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFv(u32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
s32 is_state_closing__22TAdMultiPlyChrSelectGCFv(int);
extern RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__character_slot_positions;
extern s32 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DDD08(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFv(u32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
extern RecoveredGlobal_802DDBA8_lbl_804727E8 multi_chr_select_item_rect_table;
extern s32 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DDBA8(u8 *arg0);
}

extern "C" {

u32 open_yes_no_window__16TAdChrSelASlotGCFlll(u32, s32 *, s32);
s32 is_slot_state_one__16TAdChrSelBSlotGCFlUl(s32, s32);
s32 create_confirm_window__22TAdMultiPlyChrSelectGCFv(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 close__17TWindowSubComCardFv(void *);
u32 __ct__9TAdFadeGCFv(u32, s32, s32);
u32 __nw__7TObjectFUl(s32);
u32 TAdSinglePlyChrSelectGC__sub_801FE3E4(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FE800(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFv(u32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFv(s32);
u32 check_slot_flags__23TAdSinglePlyChrSelectGCFlUl(s32, s32);
s32 set_status_value__22TAdMultiPlyChrSelectGCFl(s32, s32);
s32 queue_destruction__7TObjectFv(void *);

s32 load_tables(s32);
extern s32 lbl_80472860[];
extern s32 controller_physical_port_bank[];
extern s32 tl_fade;

void TAdMultiPlyChrSelectGC::update_select() {
    s32 temp_r30;
    s32 temp_r5;
    u32 var_r0;

    if ((u32) *(u32 *)((s8 *)this + 0x90) != 0U) {
        close__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x90));
        *(u32 *)((s8 *)this + 0x90) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x8C) != 0U) {
        close__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x8C));
        *(u32 *)((s8 *)this + 0x8C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x74) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x74));
        *(u32 *)((s8 *)this + 0x74) = 0U;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((s32 *)((s8 *)controller_physical_port_bank + temp_r5 + 0x20), 2, temp_r5) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x6C)) <= 1) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFv(*(u32 *)((s8 *)this + 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
                *(u32 *)((s8 *)this + 0x68) = 0U;
            }
            *(s32 *)((s8 *)this + 0x20) = 0xB;
            return;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xC;
        return;
    }
    temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(this, get_cursor__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)));
    if ((s32) *(s32 *)((s8 *)this + 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)this + 0x5C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), 1);
        *(s32 *)((s8 *)this + 0x40) = 0;
        if (TAdSinglePlyChrSelectGC__sub_801FE3E4(temp_r30) != 0U) {
            load_tables(temp_r30);
            set_status_value__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), temp_r30);
            set_field_100__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), 2);
            if ((check_slot_flags__23TAdSinglePlyChrSelectGCFlUl(temp_r30, 1) != 0U) && ((s32) *(s32 *)((s8 *)this + 0x3C) != 0)) {
                *(s32 *)((s8 *)this + 0x40) = 1;
            }
        }
        *(s32 *)((s8 *)this + 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)this + 0x5C));
    }
    if ((s32) *(s32 *)((s8 *)this + 0x50) != 0) {
        set_field_100__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x60), 1);
        *(s32 *)((s8 *)this + 0x20) = 0x15;
        return;
    }
    if (get_selection__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)) != 0) {
        load_tables(temp_r30);
        if (TAdSinglePlyChrSelectGC__sub_801FE800(temp_r30) != 0) {
            if (is_slot_state_one__16TAdChrSelBSlotGCFlUl(*(s32 *)((s8 *)this + 0x6C), temp_r30) == 0) {
                *(s32 *)((s8 *)this + 0x88) = create_confirm_window__22TAdMultiPlyChrSelectGCFv(this, get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)));
                *(s32 *)((s8 *)this + 0x20) = 0xF;
                return;
            }
            var_r0 = __nw__7TObjectFUl(0x38);
            if (var_r0 != 0U) {
                var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
            }
            *(u32 *)((s8 *)this + 0x74) = var_r0;
            *(u32 *)((s8 *)this + 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFlll(*(u32 *)((s8 *)this + 0x68), lbl_80472860, get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C)));
            *(s32 *)((s8 *)this + 0x20) = 0x10;
            return;
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
    }
}

typedef char RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DDD08_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DDD08_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_802DDBA8_lbl_804727E8_size[sizeof(RecoveredGlobal_802DDBA8_lbl_804727E8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DDBA8_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DDBA8_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DDBA8(u8 *arg0) {
    s32 temp_r5;
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x5C)))) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DDBA8_lbl_8050E3B8 *)&controller_physical_port_bank).value + temp_r5 + 0x20)), (s32)((int) (2)), (s32)((int) (temp_r5))) != 0) {
        play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x6C)))) <= 1) {
        play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
        if (get_player_index__22TAdMultiPlyChrSelectGCFv((u32)((int) (*(u32 *)((s8 *)arg0 + 0x68)))) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                *(u32 *)((s8 *)arg0 + 0x68) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
            return;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
        return;
    }
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&multi_chr_select_item_rect_table.value), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 8), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 0x10), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 0x18), (int) (2));
    *(s32 *)((s8 *)arg0 + 0x20) = 0xE;
}

void TAdMultiPlyChrSelectGC__sub_802DDD08(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x88) != 0U) {
        close__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x88));
        *(u32 *)((s8 *)arg0 + 0x88) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x8C) != 0U) {
        close__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x8C));
        *(u32 *)((s8 *)arg0 + 0x8C) = 0U;
    }
    set_field_100__22TAdMultiPlyChrSelectGCFl((s32)((int) (*(s32 *)((s8 *)arg0 + 0x60))), (s32)((int) (1)));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x74));
        *(u32 *)((s8 *)arg0 + 0x74) = 0U;
    }
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    if (is_state_closing__22TAdMultiPlyChrSelectGCFv((int) (*(s32 *)((s8 *)arg0 + 0x6C))) == 0) {
        temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x5C)))) * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DDD08_lbl_8050E3B8 *)&controller_physical_port_bank).value + temp_r5 + 0x20)), (s32)((int) (2)), (s32)((int) (temp_r5))) != 0) {
            play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
            if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                *(u32 *)((s8 *)arg0 + 0x68) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
            return;
        }
    }
    clear_slot_entries__22TAdMultiPlyChrSelectGCFl((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (int) (2));
    if (get_player_index__22TAdMultiPlyChrSelectGCFv((u32)((int) (*(u32 *)((s8 *)arg0 + 0x68)))) >= 0xE) {
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__character_slot_positions.value), (int) (0), (int) (1));
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 8), (int) (1), (int) (1));
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 0x10), (int) (2), (int) (1));
    } else {
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__character_slot_positions.value), (int) (0), (int) (0));
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 8), (int) (1), (int) (0));
        init_slot_position__22TAdMultiPlyChrSelectGCFlll((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 0x10), (int) (2), (int) (0));
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x6C)))) == 0x14) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0xD;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFv((u32)((int) (*(u32 *)((s8 *)arg0 + 0x68)))) == 1) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) + 1;
        *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
        if (temp_r0 > 0xA) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
            if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                *(u32 *)((s8 *)arg0 + 0x68) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        }
    }
}

void TAdMultiPlyChrSelectGC::reset_to_select() {
    Stack_802DDF40 stack;
    s32 temp_r31;
    s32 temp_r3;
    if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
        clear_entries__18TAdChrMoveEffectGCFv();
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if ((is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) || ((s32) *(s32 *)((s8 *)this + 0x54) == 0)) {
            split_slot_index__22TAdMultiPlyChrSelectGCFlPlPl(TAdMultiPlyChrSelectGC__sub_802C6920(), &stack.spC, &stack.sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFl(*(s32 *)((s8 *)this + 0x5C), stack.spC);
            TAdMultiPlyChrSelectGC__sub_802E0024(*(s32 *)((s8 *)this + 0x5C), stack.sp8);
        }
    }
    if ((u32) *(u32 *)((s8 *)this + 0x6C) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x6C));
        *(u32 *)((s8 *)this + 0x6C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x84) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x84));
        *(u32 *)((s8 *)this + 0x84) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x88) != 0U) {
        close__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x88));
        *(u32 *)((s8 *)this + 0x88) = 0U;
    }
    *(s32 *)((s8 *)this + 0x50) = 0;
    *(s32 *)((s8 *)this + 0x68) = get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(this, 1);
    set_select_mode__22TAdMultiPlyChrSelectGCFii(*(s32 *)((s8 *)this + 0x5C), 0);
    set_state_ready__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x5C));
    if ((get_ready_state__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)this + 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (is_multiplayer_character_slot_selected(0) != 0)) {
        temp_r31 = count_ready__22TAdMultiPlyChrSelectGCFv();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            create_effects__14TAdGameStartGCFPv(*(s32 *)((s8 *)this + 0x78));
        }
    }
    *(s32 *)((s8 *)this + 0x20) = 0;
}

}
