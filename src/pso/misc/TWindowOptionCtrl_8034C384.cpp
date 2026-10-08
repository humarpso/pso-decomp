#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjBoss2Tunnel__sub_8007C880();
s32 load_snapshot__15TObjBoss2TunnelFv();
M2C_UNK save_snapshot_to_card__15TObjBoss2TunnelFv();
s32 save_snapshot__15TObjBoss2TunnelFv();
s32 get_localized_text_entry(M2C_UNK);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E24F8(int, int, int, int, int);
M2C_UNK play_sound_effect(int, int, int, int);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
extern M2C_UNK lbl_8050E208[];
void handle_save_result__17TWindowOptionCtrlFPv(u8 *arg0);
}

extern "C" {

int TLobby__sub_8034C384(void* p);
int TLobby__sub_8034C3A4(void* p);
void TWindowOptionCtrl__sub_8034C4C4(void* p);
void *ct__17TWindowOptionCtrlFPv(void *arg0);
void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1);
s32 get_field_24__17TWindowOptionCtrlFPv(void* p);
void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
s32 get_localized_text_entry(M2C_UNK);
int TLobby__sub_80338534(void);
int update_pulse_colors__6TLobbyFi(void*);
u32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, M2C_UNK, M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(u32, s32, s32, f32);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
M2C_UNK initialize_option_dialog(u32, s32, s32, f32);
int reset_info_board__6TLobbyFv(void*);

int TLobby__sub_8034C384(void* p) { return reset_info_board__6TLobbyFv(p); }
int TLobby__sub_8034C3A4(void* p) { return reset_info_board__6TLobbyFv(p); }
s32 get_field_24__17TWindowOptionCtrlFPv(void* p) { return *(s32*)((char*)p + 0x24); }

extern s32 lbl_805D53A0;
extern s32 tl_01;
extern const f32 lbl_805DFDD0;

void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        close__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x2C)));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = create__19TWindowMessageYesNoFPvPvPvPv(tl_01, lbl_805D53A0, 0, 0);
    if (arg2 != 0) {
        forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
        return;
    }
    initialize_option_dialog(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
}

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        open_confirm_dialog__17TWindowOptionCtrlFPvii((void *)(arg0), (s32)(get_localized_text_entry(0x24)), (s32)(arg2));
    }
}

void TWindowOptionCtrl__sub_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { update_pulse_colors__6TLobbyFi((void*)1); TLobby__sub_80338534(); } }

extern M2C_UNK lbl_804F01A8[];

void handle_save_result__17TWindowOptionCtrlFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x20) & 1)) {
        temp_r3 = save_snapshot__15TObjBoss2TunnelFv();
        switch (temp_r3) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 2);
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
            break;
        case -4:
            if (M2C_FIELD(arg0, s32 *, 0x20) & 2) {
                M2C_FIELD(arg0, s32 *, 0x24) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 3;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (1), (int) (0));
            }
            break;
        case -3:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (2), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
            }
            break;
        case -2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (3), (int) (0));
            }
            break;
        case -9:
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
            if ((temp_r0 == 4) || (temp_r0 == 0)) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (7), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x1C) = 9;
            }
            break;
        case -1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (4), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            }
            break;
        case -7:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (5), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            }
            break;
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (6), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x1C) = 5;
            }
            break;
        case -6:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (0xA), (int) (0));
            }
            break;
        case -8:
            if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 4) && ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0xF)) {
                M2C_FIELD(arg0, s32 *, 0x28) = 0xF;
                open_confirm_dialog__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (((s32 (*)(int, int)) get_localized_text_entry)((int) (0x16), (int) (5))), (int) (0));
            }
            break;
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    {
        switch (temp_r0_2) {
        case 0:
        case 1:
            set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (0), (int) (1));
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        case 2:
            if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x1C) = 3;
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
            M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        case 4:
            if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (6)) != 0)) {
                play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            break;
        case 5:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
            save_snapshot_to_card__15TObjBoss2TunnelFv();
            M2C_FIELD(arg0, s32 *, 0x1C) = 6;
        case 6:
            if (load_snapshot__15TObjBoss2TunnelFv() != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
                M2C_FIELD(arg0, s32 *, 0x1C) = 3;
                return;
            }
            break;
        case 7:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 2);
            M2C_FIELD(arg0, s32 *, 0x1C) = 8;
        case 8:
            if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x24) = 3;
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            break;
        case 9:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 2);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
        case 10:
            if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) == 0) {
                    TObjBoss2Tunnel__sub_8007C880();
                    M2C_FIELD(arg0, s32 *, 0x24) = 2;
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            break;
        case 11:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 2);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xC;
        case 12:
            if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFD);
                if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0xD;
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
                return;
            }
            break;
        case 13:
            if (TAdPlayerLoadGC__sub_801E24F8((int) (1), (int) (0), (int) (0), (int) (0), (int) (0)) == 0) {
                set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (8), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
                M2C_FIELD(arg0, s32 *, 0x1C) = 0xE;
                return;
            }
            set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (9), (int) (0));
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
            return;
        case 14:
            if (TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) {
                if ((u32) get_load_result__15TAdPlayerLoadGCFv((int) (1)) == 0xFFFFFF81U) {
                    set_option_and_confirm__17TWindowOptionCtrlFPvii((void *) (arg0), (int) (9), (int) (0));
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                return;
            }
            break;
        case 15:
            if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (6)) != 0)) {
                play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
                M2C_FIELD(arg0, s32 *, 0x1C) = 3;
            }
            break;
        case 16:
            break;
        }
    }
}

void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { close__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x2C))); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F01A8[];

void *ct__17TWindowOptionCtrlFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 14;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
