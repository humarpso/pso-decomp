#include "types.h"

typedef struct Self_80264EB8 {
    u8 pad0[0x1C];
    u8 state;
    u8 flags;
    u8 sel1E;
    u8 sel1F;
    u8 pad20[4];
    char *name;
    char *comment;
    void *menu;
    void *window;
    void *keyboard;
} Self_80264EB8;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TWindow__close(void *);
void clear_flag_and_release2__17TWindowSubComCardFPv(void *);
void update_ok_button__15TWindowMakeTeamFPv(void *);
s32 get_flag__17TWindowSubComCardFPv(void *);
s32 is_open__17TWindowSubComCardFPv(void *);
s32 update_selected_entry__17TWindowSubComCardFPv(void *);
void set_state__15TWindowMakeTeamFPvi(void *, s32);
void *__nw__7TObjectFUl(u32);
void *TKeyBoardControl__ct(void *, void *, s32, s32, s32, s32);
extern s32 lbl_805D53A0;
void *get_window_layout_position(s32);
void set_sub_position__15TWindowMakeTeamFPvPv(void *, void *);
extern const f32 lbl_805DD144;
void get_lobby_field_20__15TWindowMakeTeamFPv(void *, f32);
void update_chat_window(void *);
void get_keyboard_field_6c__15TWindowMakeTeamFPv(void *, char *);
void TWindowMakeTeam__sub_80268650(void *, char *, s32);
s32 is_keyboard_active__17TWindowSubComCardFPv(void *);
s32 update_keyboard__17TWindowSubComCardFPv(void *);
void free__11TOBoss4RockFUi(void *);
char *realloc_buffer__17TWindowSubComCardFPv(void *);
char *get_shared_text_buffer(void);
void TWindowSubComCard__sub_80225E80(char *, char *);
s32 measure_string_len__20TWindowSubStatusDispFPv(char *);
char *strncpy(char *, const char *, u32);
void *TWindowMakeTeam__sub_80264D3C(void *);
void *TWindowMakeTeam__sub_80264C54(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
u8 get_selected_menu_value(void *);
char *draw_entry_0x110__15TWindowMakeTeamFc(u8);
char *init_status_disp__15TWindowMakeTeamFc(u8);
void send_state__15TWindowMakeTeamFPv(void *);
void run_task__15TWindowMakeTeamFv(Self_80264EB8 *self);
}

extern "C" {

s32 create_menu__15TWindowMakeTeamFv(void);
void render__15TWindowMakeTeamFv(void);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 update_next_entry__17TWindowSubComCardFPviii(s32, s32, s32, s32);
s32 add_text_entry__20TWindowSubStatusDispFPvii(s32, s32, s32);
s32 fn_80268BE4(s32);

s32 create_menu__15TWindowMakeTeamFv(void) {
    s32 temp_r31;

    temp_r31 = fn_80268BE4(5);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4D), 0, 0);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4E), 0, 1);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4F), 0, 2);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x50), 0, 3);
    add_text_entry__20TWindowSubStatusDispFPvii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x51), 4);
    return temp_r31;
}
void render__15TWindowMakeTeamFv(void) {  }
void run_task__15TWindowMakeTeamFv(Self_80264EB8 *self) {
    switch (self->state) {
    case 0:
    case 1:
        if (self->keyboard != NULL) {
            queue_destruction__7TObjectFv(self->keyboard);
            self->keyboard = NULL;
        }
        if (self->window != NULL) {
            TWindow__close(self->window);
            self->window = NULL;
        }
        clear_flag_and_release2__17TWindowSubComCardFPv(self->menu);
        update_ok_button__15TWindowMakeTeamFPv(self);
        self->state = 2;
    case 2:
        if (get_flag__17TWindowSubComCardFPv(self->menu) != 0) {
            self->flags |= 2;
            self->state = 11;
        } else if (is_open__17TWindowSubComCardFPv(self->menu) != 0) {
            set_state__15TWindowMakeTeamFPvi(self, update_selected_entry__17TWindowSubComCardFPv(self->menu));
        }
        break;
    case 3: {
        void *kb = __nw__7TObjectFUl(0x2C);
        if (kb != NULL) {
            kb = TKeyBoardControl__ct(kb, self, 0xE, 0, 4, lbl_805D53A0);
        }
        self->keyboard = kb;
        set_sub_position__15TWindowMakeTeamFPvPv(self->keyboard, get_window_layout_position(0xCB));
        get_lobby_field_20__15TWindowMakeTeamFPv(self->keyboard, lbl_805DD144);
        update_chat_window(self->keyboard);
        get_keyboard_field_6c__15TWindowMakeTeamFPv(self->keyboard, self->name);
        TWindowMakeTeam__sub_80268650(self->menu, NULL, 0);
        self->state = 4;
    }
    case 4:
        if (is_keyboard_active__17TWindowSubComCardFPv(self->keyboard) != 0) {
            TWindowMakeTeam__sub_80268650(self->menu, self->name, 0);
            self->state = 1;
        }
        if (update_keyboard__17TWindowSubComCardFPv(self->keyboard) != 0) {
            s32 n;
            free__11TOBoss4RockFUi(self->name);
            self->name = realloc_buffer__17TWindowSubComCardFPv(self->keyboard);
            TWindowSubComCard__sub_80225E80(self->name, get_shared_text_buffer());
            n = measure_string_len__20TWindowSubStatusDispFPv(self->name);
            strncpy(self->name, get_shared_text_buffer(), n);
            TWindowMakeTeam__sub_80268650(self->menu, self->name, 0);
            self->state = 1;
        }
        break;
    case 5: {
        void *kb = __nw__7TObjectFUl(0x2C);
        if (kb != NULL) {
            kb = TKeyBoardControl__ct(kb, self, 0x10, 0, 0, lbl_805D53A0);
        }
        self->keyboard = kb;
        set_sub_position__15TWindowMakeTeamFPvPv(self->keyboard, get_window_layout_position(0xCC));
        get_lobby_field_20__15TWindowMakeTeamFPv(self->keyboard, lbl_805DD144);
        get_keyboard_field_6c__15TWindowMakeTeamFPv(self->keyboard, self->comment);
        TWindowMakeTeam__sub_80268650(self->menu, NULL, 1);
        self->state = 6;
    }
    case 6:
        if (is_keyboard_active__17TWindowSubComCardFPv(self->keyboard) != 0) {
            TWindowMakeTeam__sub_80268650(self->menu, self->comment, 1);
            self->state = 1;
        }
        if (update_keyboard__17TWindowSubComCardFPv(self->keyboard) != 0) {
            s32 n;
            free__11TOBoss4RockFUi(self->comment);
            self->comment = realloc_buffer__17TWindowSubComCardFPv(self->keyboard);
            TWindowSubComCard__sub_80225E80(self->comment, get_shared_text_buffer());
            n = measure_string_len__20TWindowSubStatusDispFPv(self->comment);
            strncpy(self->comment, get_shared_text_buffer(), n);
            TWindowMakeTeam__sub_80268650(self->menu, self->comment, 1);
            self->state = 1;
        }
        break;
    case 7:
        self->window = TWindowMakeTeam__sub_80264D3C(self);
        self->state = 8;
    case 8:
        if (get_status_flag__17TWindowSubComCardFPv(self->window) != 0) {
            self->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(self->window) != 0) {
            self->sel1E = get_selected_menu_value(self->window);
            TWindowMakeTeam__sub_80268650(self->menu, draw_entry_0x110__15TWindowMakeTeamFc(self->sel1E), 2);
            send_state__15TWindowMakeTeamFPv(self);
            self->state = 1;
        }
        break;
    case 9:
        self->window = TWindowMakeTeam__sub_80264C54(self);
        self->state = 10;
    case 10:
        if (get_status_flag__17TWindowSubComCardFPv(self->window) != 0) {
            self->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(self->window) != 0) {
            self->sel1F = get_selected_menu_value(self->window);
            TWindowMakeTeam__sub_80268650(self->menu, init_status_disp__15TWindowMakeTeamFc(self->sel1F), 3);
            self->state = 1;
        }
        break;
    case 11:
        break;
    }
}

}
