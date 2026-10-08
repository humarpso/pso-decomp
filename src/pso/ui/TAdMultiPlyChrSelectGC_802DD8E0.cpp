#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802DDF40 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DDD08_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802DDBA8_lbl_804727E8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DDBA8_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
M2C_UNK TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(s32, s32 *, s32 *);
M2C_UNK init__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
M2C_UNK set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, M2C_UNK);
M2C_UNK set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK create_effects__14TAdGameStartGCFPv(s32);
s32 get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(void *, M2C_UNK);
M2C_UNK clear_entries__18TAdChrMoveEffectGCFPv();
void reset_to_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5944(int, void *, int, int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C59EC(int, int);
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00CC(int);
extern RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__data_804727B0;
extern M2C_UNK lbl_8050E3B8[];
void TAdMultiPlyChrSelectGC__sub_802DDD08(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
extern RecoveredGlobal_802DDBA8_lbl_804727E8 lbl_804727E8;
extern M2C_UNK lbl_8050E3B8[];
void TAdMultiPlyChrSelectGC__sub_802DDBA8(u8 *arg0);
}

extern "C" {

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(u32, M2C_UNK *, s32);
s32 TAdChrSelBSlotGC__sub_8030E378(s32, s32);
s32 create_confirm_window__22TAdMultiPlyChrSelectGCFv(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
u32 __ct__9TAdFadeGCFv(u32, s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
u32 TAdSinglePlyChrSelectGC__sub_801FE3E4(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FE800(s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdSinglePlyChrSelectGC__sub_802E012C(s32, M2C_UNK);
M2C_UNK set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK load_tables(s32);
extern M2C_UNK lbl_80472860[];
extern M2C_UNK lbl_8050E3B8[];
extern s32 tl_fade;

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r30;
    s32 temp_r5;
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((M2C_UNK *)((s8 *)lbl_8050E3B8 + temp_r5 + 0x20), 2, temp_r5) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        if (TAdSinglePlyChrSelectGC__sub_801FE3E4(temp_r30) != 0U) {
            load_tables(temp_r30);
            set_status_value__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), temp_r30);
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 2);
            if ((TAdSinglePlyChrSelectGC__sub_802E012C(temp_r30, 1) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x40) = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x15;
        return;
    }
    if (get_selection__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) != 0) {
        load_tables(temp_r30);
        if (TAdSinglePlyChrSelectGC__sub_801FE800(temp_r30) != 0) {
            if (TAdChrSelBSlotGC__sub_8030E378(M2C_FIELD(arg0, s32 *, 0x6C), temp_r30) == 0) {
                M2C_FIELD(arg0, s32 *, 0x88) = create_confirm_window__22TAdMultiPlyChrSelectGCFv(arg0, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
                M2C_FIELD(arg0, s32 *, 0x20) = 0xF;
                return;
            }
            var_r0 = __nw__7TObjectFUl(0x38);
            if (var_r0 != 0U) {
                var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
            }
            M2C_FIELD(arg0, u32 *, 0x74) = var_r0;
            M2C_FIELD(arg0, u32 *, 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFiii(M2C_FIELD(arg0, u32 *, 0x68), lbl_80472860, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x10;
            return;
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    }
}

typedef char RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DDD08_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DDD08_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DDD08_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_802DDBA8_lbl_804727E8_size[sizeof(RecoveredGlobal_802DDBA8_lbl_804727E8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DDBA8_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DDBA8_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DDBA8(u8 *arg0) {
    s32 temp_r5;
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x5C)))) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DDBA8_lbl_8050E3B8 *)&lbl_8050E3B8).value + temp_r5 + 0x20)), (M2C_UNK)((int) (2)), (s32)((int) (temp_r5))) != 0) {
        play_sound_effect((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x6C)))) <= 1) {
        play_sound_effect((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv((u32)((int) (M2C_FIELD(arg0, u32 *, 0x68)))) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&lbl_804727E8.value), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 8), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 0x10), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 0x18), (int) (2));
    M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
}

void TAdMultiPlyChrSelectGC__sub_802DDD08(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    set_field_100__22TAdMultiPlyChrSelectGCFPvi((s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))), (M2C_UNK)((int) (1)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    if (TAdMultiPlyChrSelectGC__sub_802E00CC((int) (M2C_FIELD(arg0, s32 *, 0x6C))) == 0) {
        temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x5C)))) * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DDD08_lbl_8050E3B8 *)&lbl_8050E3B8).value + temp_r5 + 0x20)), (M2C_UNK)((int) (2)), (s32)((int) (temp_r5))) != 0) {
            play_sound_effect((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
    }
    TAdMultiPlyChrSelectGC__sub_802C59EC((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (2));
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((u32)((int) (M2C_FIELD(arg0, u32 *, 0x68)))) >= 0xE) {
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__data_804727B0.value), (int) (0), (int) (1));
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 8), (int) (1), (int) (1));
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 0x10), (int) (2), (int) (1));
    } else {
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__data_804727B0.value), (int) (0), (int) (0));
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 8), (int) (1), (int) (0));
        TAdMultiPlyChrSelectGC__sub_802C5944((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 0x10), (int) (2), (int) (0));
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x6C)))) == 0x14) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0xD;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((u32)((int) (M2C_FIELD(arg0, u32 *, 0x68)))) == 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
        if (temp_r0 > 0xA) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            play_sound_effect((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        }
    }
}

void reset_to_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    Stack_802DDF40 stack;
    s32 temp_r31;
    s32 temp_r3;
    if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
        clear_entries__18TAdChrMoveEffectGCFPv();
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if ((is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x54) == 0)) {
            split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(TAdMultiPlyChrSelectGC__sub_802C6920(), &stack.spC, &stack.sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), stack.spC);
            TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), stack.sp8);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x84));
        M2C_FIELD(arg0, u32 *, 0x84) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(arg0, 1);
    set_select_mode__22TAdMultiPlyChrSelectGCFii(M2C_FIELD(arg0, s32 *, 0x5C), 0);
    set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((get_ready_state__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0)) {
        temp_r31 = count_ready__22TAdMultiPlyChrSelectGCFv();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            create_effects__14TAdGameStartGCFPv(M2C_FIELD(arg0, s32 *, 0x78));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

}
