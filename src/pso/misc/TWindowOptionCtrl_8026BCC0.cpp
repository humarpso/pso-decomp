#include "types.h"
typedef s32 M2C_UNK;
struct Opt_8026BCC0 {
    u8 pad0[0x1C];
    s8 state;
    u8 f1D;
    u8 pad1E[2];
    s16 f20;
    u8 pad22[2];
    s32 f24;
    void *f28;
    void *f2C;
    void *f30;
    void *f34;
    void *f38;
    void *f3C;
    void *f40;
    void *f44;
    void *f48;
};

extern "C" {
void TWindow__close(void *);
void close__17TWindowSubComCardFPv(void *);
void *create_menu__17TWindowOptionCtrlFv(void *);
void clear_transition_flag__17TWindowSubComCardFPv(void *);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(void *);
void open__17TWindowOptionCtrlFPv(void *);
void *create_select_menu_window__17TWindowOptionCtrlFv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 update_selected_item__17TWindowOptionCtrlFPv(void *);
s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowOptionCtrl__sub_802273B4(int);
void *create_list_window__17TWindowOptionCtrlFv(void *);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void *);
void stop_audio_streams__6TLobbyFv(void);
void close_option_window__6TLobbyFv(void);
void play_area_music(void *);
extern u8 lbl_8044F4B4[];
void apply_and_close__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
void *create_sound_mode_menu__17TWindowOptionCtrlFPv(void *);
void *create_sound_balance_window__17TWindowOptionCtrlFv(void *);
s32 TWindowOptionCtrl__sub_8026C658(void *);
s32 get_field_64__17TWindowOptionCtrlFPv(void *p);
s32 get_field_62__17TWindowOptionCtrlFPv(void *p);
void set_params__17TWindowOptionCtrlFPvsc(void *arg0, s16 arg1, s8 arg2);
s32 is_active__17TWindowOptionCtrlFPv(void *);
s32 save_snapshot__15TObjBoss2TunnelFv(void);
void save_screen_snapshot(void);
s32 load_snapshot__15TObjBoss2TunnelFv(void);
void *create_snap_shot_window__17TWindowOptionCtrlFv(void *);
s32 TWindowOptionCtrl__sub_8026C630(void *);
void *__nw__7TObjectFUl(u32);
void *ct__17TWindowOptionCtrlFPv(void *arg0);
s32 get_field_24__17TWindowOptionCtrlFPv(void *);
void queue_destruction__7TObjectFv(void *);
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
void *create_sub_menu_window__17TWindowOptionCtrlFv(void *);
void *create_option_menu__17TWindowOptionCtrlFv(void *);
void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1);
s32 TWindowOptionCtrl__sub_8026B64C(s32 arg0, s32 arg1, s32 arg2);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
s32 create_serial_info_window__17TWindowOptionCtrlFPvi(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
void play_sound_effect(int, int, int, int);
extern u8 lbl_8050E208[];
void run_task__17TWindowOptionCtrlFv(Opt_8026BCC0 *self);
}

extern "C" {

void run_task__17TWindowOptionCtrlFv(Opt_8026BCC0 *self) {
    switch (self->state) {
    case 0:
    case 1:
        if (self->f44 != NULL) {
            TWindow__close(self->f44);
            self->f44 = NULL;
        }
        if (self->f40 != NULL) {
            close__17TWindowSubComCardFPv(self->f40);
            self->f40 = NULL;
        }
        if (self->f3C != NULL) {
            TWindow__close(self->f3C);
            self->f3C = NULL;
        }
        if (self->f38 != NULL) {
            TWindow__close(self->f38);
            self->f38 = NULL;
        }
        if (self->f34 != NULL) {
            TWindow__close(self->f34);
            self->f34 = NULL;
        }
        if (self->f2C != NULL) {
            TWindow__close(self->f2C);
            self->f2C = NULL;
        }
        if (self->f28 == NULL) {
            self->f28 = create_menu__17TWindowOptionCtrlFv(self);
        }
        clear_transition_flag__17TWindowSubComCardFPv(self->f28);
        clear_flag_and_release__17TWindowSubComCardFPv(self->f28);
        self->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv(self->f28) != 0) {
            self->state = 0x1B;
        } else if (is_visible__17TWindowSubComCardFPv(self->f28) != 0) {
            self->state = get_selected_menu_value(self->f28);
        }
        break;
    case 3:
        open__17TWindowOptionCtrlFPv(self->f28);
        if (self->f34 == NULL) {
            self->f34 = create_select_menu_window__17TWindowOptionCtrlFv(self);
        }
        self->state = 4;
    case 4:
        if (get_flag_bit2__6TLobbyFPv(self->f34) != 0) {
            self->state = 1;
        }
        if (handle_input__17TWindowOptionCtrlFPvi(self, update_selected_item__17TWindowOptionCtrlFPv(self->f34)) != 0) {
            self->state = 1;
        }
        break;
    case 5:
        TWindowOptionCtrl__sub_802273B4(0x1E);
        open__17TWindowOptionCtrlFPv(self->f28);
        if (self->f2C == NULL) {
            self->f2C = create_list_window__17TWindowOptionCtrlFv(self);
        }
        self->state = 6;
    case 6:
        if (get_status_flag__17TWindowSubComCardFPv(self->f2C) != 0) {
            if (self->f1D & 2) {
                TWindowOptionCtrl__sub_802273B4(0x1E);
                self->f1D &= ~2;
                clear_flag70_bit4__17TWindowOptionCtrlFPv(self->f2C);
            } else {
                stop_audio_streams__6TLobbyFv();
                close_option_window__6TLobbyFv();
                play_area_music(lbl_8044F4B4);
                self->state = 1;
                break;
            }
        }
        if (is_visible__17TWindowSubComCardFPv(self->f2C) != 0) {
            apply_and_close__17TWindowOptionCtrlFPvi(self, get_selected_menu_value(self->f2C));
            clear_flag_and_release__17TWindowSubComCardFPv(self->f2C);
        }
        break;
    case 7:
        open__17TWindowOptionCtrlFPv(self->f28);
        if (self->f34 == NULL) {
            self->f34 = create_sound_mode_menu__17TWindowOptionCtrlFPv(self);
        }
        self->state = 8;
    case 8:
        self->f20 = update_selected_item__17TWindowOptionCtrlFPv(self->f34);
        if (get_flag_bit2__6TLobbyFPv(self->f34) != 0) {
            self->state = 1;
        }
        break;
    case 9:
        open__17TWindowOptionCtrlFPv(self->f28);
        if (self->f38 == NULL) {
            self->f38 = create_sound_balance_window__17TWindowOptionCtrlFv(self);
        }
        self->state = 0xA;
    case 10:
        if (TWindowOptionCtrl__sub_8026C658(self->f38) != 0) {
            s16 b = get_field_64__17TWindowOptionCtrlFPv(self->f38);
            ((void (*)(void *, s16, s16)) set_params__17TWindowOptionCtrlFPvsc)(self, (s16)get_field_62__17TWindowOptionCtrlFPv(self->f38), b);
            self->state = 1;
        } else if (is_active__17TWindowOptionCtrlFPv(self->f38) != 0) {
            s16 b = get_field_64__17TWindowOptionCtrlFPv(self->f38);
            ((void (*)(void *, s16, s16)) set_params__17TWindowOptionCtrlFPvsc)(self, (s16)get_field_62__17TWindowOptionCtrlFPv(self->f38), b);
            self->state = 1;
        }
        break;
    case 11:
        if (save_snapshot__15TObjBoss2TunnelFv() != 1) {
            self->state = 0xE;
        } else {
            save_screen_snapshot();
            self->state = 0xC;
        }
        break;
    case 12:
        if (load_snapshot__15TObjBoss2TunnelFv() != 0) {
            open__17TWindowOptionCtrlFPv(self->f28);
            if (self->f3C == NULL) {
                self->f3C = create_snap_shot_window__17TWindowOptionCtrlFv(self);
            }
            self->state = 0xD;
        }
        break;
    case 13:
        if (TWindowOptionCtrl__sub_8026C630(self->f3C) != 0) {
            self->state = 1;
        }
        break;
    case 14:
        if (self->f48 == NULL) {
            void *p = __nw__7TObjectFUl(0x30);
            if (p != NULL) {
                p = ((void *(*)(void *, void *)) ct__17TWindowOptionCtrlFPv)(p, self);
            }
            self->f48 = p;
        }
        open__17TWindowOptionCtrlFPv(self->f28);
        self->state = 0xF;
    case 15: {
        s32 r = get_field_24__17TWindowOptionCtrlFPv(self->f48);
        if (r == 1 || r == 2) {
            queue_destruction__7TObjectFv(self->f48);
            self->f48 = NULL;
            if (r == 1) {
                self->state = 0xB;
            } else {
                self->state = 1;
            }
        } else if (r == 3) {
            TKeyBoardControl__sub_8000F9CC(0);
        }
        break;
    }
    case 16:
        if (self->f40 != NULL) {
            close__17TWindowSubComCardFPv(self->f40);
            self->f40 = NULL;
        }
        if (self->f34 != NULL) {
            TWindow__close(self->f34);
            self->f34 = NULL;
        }
        if (self->f30 != NULL) {
            TWindow__close(self->f30);
            self->f30 = NULL;
        }
        if (self->f2C == NULL) {
            self->f2C = create_sub_menu_window__17TWindowOptionCtrlFv(self);
        }
        open__17TWindowOptionCtrlFPv(self->f28);
        clear_transition_flag__17TWindowSubComCardFPv(self->f2C);
        clear_flag_and_release__17TWindowSubComCardFPv(self->f2C);
        self->state = 0x11;
    case 17:
        if (get_status_flag__17TWindowSubComCardFPv(self->f2C) != 0) {
            self->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(self->f2C) != 0) {
            self->state = get_selected_menu_value(self->f2C);
        }
        break;
    case 18:
        open__17TWindowOptionCtrlFPv(self->f2C);
        if (self->f34 == NULL) {
            self->f34 = create_option_menu__17TWindowOptionCtrlFv(self);
        }
        self->state = 0x13;
    case 19:
        ((void (*)(void *, s32)) set_field_value__17TWindowOptionCtrlFis)(self, update_selected_item__17TWindowOptionCtrlFPv(self->f34));
        if (get_flag_bit2__6TLobbyFPv(self->f34) != 0) {
            self->state = 0x10;
        }
        break;
    case 20:
    case 21:
        self->state = 0x17;
        break;
    case 22:
        if (get_status_flag__17TWindowSubComCardFPv(self->f30) != 0) {
            self->state = 0x10;
        }
        if (is_visible__17TWindowSubComCardFPv(self->f30) != 0) {
            self->state = 0x17;
        }
        break;
    case 23:
        if (self->f40 == NULL) {
            switch (get_selected_menu_value(self->f2C)) {
            case 0x14:
                self->f40 = (void *)TWindowOptionCtrl__sub_8026B64C((s32)self, 0x22, 0xD0);
                break;
            case 0x15:
                self->f40 = (void *)TWindowOptionCtrl__sub_8026B64C((s32)self, 0x24, 0xD0);
                break;
            }
        }
        open__17TWindowOptionCtrlFPv(self->f2C);
        self->state = 0x18;
    case 24:
        if (get_card_data__17TWindowSubComCardFPv(self->f40) != 0) {
            self->state = 0x10;
        } else if (is_child_visible__17TWindowSubComCardFPv(self->f40) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(self->f40) == 0) {
                if (get_selected_menu_value(self->f2C) == 0x14) {
                    self->f24 = 1;
                } else {
                    self->f24 = 3;
                }
                self->state = 0x1B;
            } else {
                self->state = 0x10;
            }
        }
        break;
    case 25:
        if (self->f44 == NULL) {
            self->f44 = (void *)create_serial_info_window__17TWindowOptionCtrlFPvi((void *)get_option_entry__17TWindowOptionCtrlFi(0xCF), 1);
        }
        open__17TWindowOptionCtrlFPv(self->f28);
        self->state = 0x1A;
    case 26:
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 6) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 6) != 0) {
            play_sound_effect(0x52F16, 0, 0, 0);
            self->state = 1;
        }
        break;
    case 27:
        self->f1D |= 1;
        break;
    }
}

}
