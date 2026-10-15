#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {
s32 poll_pso_screen_load__15TObjBoss2TunnelFv();
s32 load_snapshot__15TObjBoss2TunnelFv();
s32 save_snapshot_to_card__15TObjBoss2TunnelFv();
s32 save_snapshot__15TObjBoss2TunnelFv();
s32 get_localized_text_entry(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_load_result__15TAdPlayerLoadGCFPv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E24F8(int, int, int, int, int);
s32 play_sound_effect(int, int, int, int);
s32 get_slot_or_neg1__17TWindowSubComCardFv(int);
s32 get_card_data__17TWindowSubComCardFv(int);
s32 is_child_visible__17TWindowSubComCardFv(int);
extern s32 controller_input_state[];
}

extern "C" {

int TLobby__sub_8034C384(void* p);
int TLobby__sub_8034C3A4(void* p);
void TWindowOptionCtrl__sub_8034C4C4(void* p);
s32 get_localized_text_entry(s32);
int TLobby__sub_80338534(void);
int update_pulse_colors__6TLobbyFl(void*);
u32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFv(void *);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(u32, s32, s32, f32);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);
s32 initialize_option_dialog(u32, s32, s32, f32);
int reset_info_board__6TLobbyFv(void*);

int TLobby__sub_8034C384(void* p) { return reset_info_board__6TLobbyFv(p); }
int TLobby__sub_8034C3A4(void* p) { return reset_info_board__6TLobbyFv(p); }
s32 TWindowOptionCtrl::get_field_24() { return *(s32*)((char*)this + 0x24); }

extern s32 local_client_id;
extern s32 tl_01;
extern const f32 lbl_805DFDD0;

void TWindowOptionCtrl::open_confirm_dialog(s32 arg1, s32 arg2) {
    if ((u32) *(u32 *)((s8 *)this + 0x2C) != 0U) {
        close__17TWindowSubComCardFv((void *)(*(void **)((s8 *)this + 0x2C)));
        *(u32 *)((s8 *)this + 0x2C) = 0U;
    }
    *(u32 *)((s8 *)this + 0x2C) = create__19TWindowMessageYesNoFPvPvPvPv(tl_01, local_client_id, 0, 0);
    if (arg2 != 0) {
        forward_slot_selection__16TAdChrSelASlotGCFPvPv(*(u32 *)((s8 *)this + 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
        return;
    }
    initialize_option_dialog(*(u32 *)((s8 *)this + 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
}

void TWindowOptionCtrl::set_option_and_confirm(s32 arg1, s32 arg2) {
    if (arg1 != (s32) *(s32 *)((s8 *)this + 0x28)) {
        *(s32 *)((s8 *)this + 0x28) = arg1;
        open_confirm_dialog((s32)(get_localized_text_entry(0x24)), (s32)(arg2));
    }
}

void TWindowOptionCtrl__sub_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { update_pulse_colors__6TLobbyFl((void*)1); TLobby__sub_80338534(); } }

extern s32 lbl_804F01A8[];

void TWindowOptionCtrl::handle_save_result() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    if (!(*(s32 *)((s8 *)arg0 + 0x20) & 1)) {
        temp_r3 = save_snapshot__15TObjBoss2TunnelFv();
        switch (temp_r3) {
        case 1:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 2);
            *(s32 *)((s8 *)arg0 + 0x24) = 1;
            *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
            break;
        case -4:
            if (*(s32 *)((s8 *)arg0 + 0x20) & 2) {
                *(s32 *)((s8 *)arg0 + 0x24) = 0;
                *(s32 *)((s8 *)arg0 + 0x1C) = 3;
            }
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (1), (int) (0));
            }
            break;
        case -3:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (2), (int) (1));
                *(s32 *)((s8 *)arg0 + 0x1C) = 0xB;
            }
            break;
        case -2:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (3), (int) (0));
            }
            break;
        case -9:
            temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
            if ((temp_r0 == 4) || (temp_r0 == 0)) {
                set_option_and_confirm((int) (7), (int) (1));
                *(s32 *)((s8 *)arg0 + 0x1C) = 9;
            }
            break;
        case -1:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (4), (int) (1));
                *(s32 *)((s8 *)arg0 + 0x1C) = 7;
            }
            break;
        case -7:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (5), (int) (1));
                *(s32 *)((s8 *)arg0 + 0x1C) = 7;
            }
            break;
        case 0:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (6), (int) (0));
                *(s32 *)((s8 *)arg0 + 0x1C) = 5;
            }
            break;
        case -6:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) {
                set_option_and_confirm((int) (0xA), (int) (0));
            }
            break;
        case -8:
            if (((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 4) && ((s32) *(s32 *)((s8 *)arg0 + 0x28) != 0xF)) {
                *(s32 *)((s8 *)arg0 + 0x28) = 0xF;
                open_confirm_dialog((int) (((s32 (*)(int, int)) get_localized_text_entry)((int) (0x16), (int) (5))), (int) (0));
            }
            break;
        }
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x1C);
    {
        switch (temp_r0_2) {
        case 0:
        case 1:
            set_option_and_confirm((int) (0), (int) (1));
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        case 2:
            if (get_card_data__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                if (get_slot_or_neg1__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) == 0) {
                    *(s32 *)((s8 *)arg0 + 0x1C) = 3;
                    return;
                }
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            break;
        case 3:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
            *(s32 *)((s8 *)arg0 + 0x1C) = 4;
        case 4:
            if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (6)) != 0)) {
                play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            break;
        case 5:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 1);
            save_snapshot_to_card__15TObjBoss2TunnelFv();
            *(s32 *)((s8 *)arg0 + 0x1C) = 6;
        case 6:
            if (load_snapshot__15TObjBoss2TunnelFv() != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFE);
                *(s32 *)((s8 *)arg0 + 0x1C) = 3;
                return;
            }
            break;
        case 7:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 2);
            *(s32 *)((s8 *)arg0 + 0x1C) = 8;
        case 8:
            if (get_card_data__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) == 0) {
                    *(s32 *)((s8 *)arg0 + 0x24) = 3;
                    *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                    return;
                }
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            break;
        case 9:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 2);
            *(s32 *)((s8 *)arg0 + 0x1C) = 0xA;
        case 10:
            if (get_card_data__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) == 0) {
                    poll_pso_screen_load__15TObjBoss2TunnelFv();
                    *(s32 *)((s8 *)arg0 + 0x24) = 2;
                    *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                    return;
                }
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            break;
        case 11:
            *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 2);
            *(s32 *)((s8 *)arg0 + 0x1C) = 0xC;
        case 12:
            if (get_card_data__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFv((int) (*(s32 *)((s8 *)arg0 + 0x2C))) == 0) {
                    *(s32 *)((s8 *)arg0 + 0x1C) = 0xD;
                    return;
                }
                *(s32 *)((s8 *)arg0 + 0x24) = 2;
                *(s32 *)((s8 *)arg0 + 0x1C) = 0x10;
                return;
            }
            break;
        case 13:
            if (TAdPlayerLoadGC__sub_801E24F8((int) (1), (int) (0), (int) (0), (int) (0), (int) (0)) == 0) {
                set_option_and_confirm((int) (8), (int) (0));
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | 1);
                *(s32 *)((s8 *)arg0 + 0x1C) = 0xE;
                return;
            }
            set_option_and_confirm((int) (9), (int) (0));
            *(s32 *)((s8 *)arg0 + 0x1C) = 0xF;
            return;
        case 14:
            if (TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) {
                if ((u32) get_load_result__15TAdPlayerLoadGCFPv((int) (1)) == 0xFFFFFF81U) {
                    set_option_and_confirm((int) (9), (int) (0));
                    *(s32 *)((s8 *)arg0 + 0x1C) = 0xF;
                    return;
                }
                *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & 0xFFFFFFFE);
                *(s32 *)((s8 *)arg0 + 0x1C) = 0;
                return;
            }
            break;
        case 15:
            if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (6)) != 0)) {
                play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
                *(s32 *)((s8 *)arg0 + 0x1C) = 3;
            }
            break;
        case 16:
            break;
        }
    }
}

void *TWindowOptionCtrl::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804F01A8;
        if (*(void **)((s8 *)this + 0x2C) != NULL) { close__17TWindowSubComCardFv((void *)(*(void **)((s8 *)this + 0x2C))); *(s32 *)((s8 *)this + 0x2C) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern s32 lbl_804F01A8[];

void *TWindowOptionCtrl::ct() {
    __ct__7TObjectFP7TObject(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804F01A8;
    *(u32 *)((s8 *)this + 0x1C) = 0;
    *(u32 *)((s8 *)this + 0x20) = 0;
    *(u32 *)((s8 *)this + 0x24) = 0;
    *(u32 *)((s8 *)this + 0x28) = 14;
    *(u32 *)((s8 *)this + 0x2C) = 0;
    return this;
}

}
