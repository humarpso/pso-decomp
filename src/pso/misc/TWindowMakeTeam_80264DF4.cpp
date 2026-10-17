#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TUnk_804D0658.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

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
s32 update_selected_entry__17TWindowSubComCardFv(void *);
void *__nw__7TObjectFUl(u32);
void *TKeyBoardControl__ct(void *, void *, s32, s32, s32, s32);
extern s32 local_client_id;
void *get_window_layout_position(s32);
extern const f32 lbl_805DD144;
void get_lobby_field_20__15TWindowMakeTeamFv(void *, f32);
void update_chat_window(void *);
void get_keyboard_field_6c__15TWindowMakeTeamFv(void *, char *);
void mem_free(void *);
char *realloc_buffer__17TWindowSubComCardFv(void *);
char *get_shared_text_buffer(void);
void TWindowSubComCard__sub_80225E80(char *, char *);
s32 measure_string_len__20TWindowSubStatusDispFv(char *);
char *strncpy(char *, const char *, u32);
void *create_entry_menu_window__15TWindowMakeTeamFv(void *);
void *create_status_menu_window__15TWindowMakeTeamFv(void *);
u8 get_selected_menu_value(void *);
char *draw_entry_0x110__15TWindowMakeTeamFSc(u8);
char *init_status_disp__15TWindowMakeTeamFc(u8);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 create_information_counter_window(s32);

s32 TWindowMakeTeam::create_menu() {
    s32 temp_r31;

    temp_r31 = create_information_counter_window(5);
    ((TWindowSubComCard *)temp_r31)->update_next_entry(get_message_10__20TWindowSubStatusDispFl(0x4D), 0, 0);
    ((TWindowSubComCard *)temp_r31)->update_next_entry(get_message_10__20TWindowSubStatusDispFl(0x4E), 0, 1);
    ((TWindowSubComCard *)temp_r31)->update_next_entry(get_message_10__20TWindowSubStatusDispFl(0x4F), 0, 2);
    ((TWindowSubComCard *)temp_r31)->update_next_entry(get_message_10__20TWindowSubStatusDispFl(0x50), 0, 3);
    ((TWindowSubStatusDisp *)temp_r31)->add_text_entry(get_message_10__20TWindowSubStatusDispFl(0x51), 4);
    return temp_r31;
}
void TWindowMakeTeam::render() {  }
void TWindowMakeTeam::run_task() {
    Self_80264EB8 *self = (Self_80264EB8 *)this;
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
        ((TWindowSubComCard *)(self->menu))->clear_flag_and_release2();
        ((TWindowMakeTeam *)self)->update_ok_button();
        self->state = 2;
    case 2:
        if (((TWindowSubComCard *)(self->menu))->get_flag() != 0) {
            self->flags |= 2;
            self->state = 11;
        } else if (((TUnk_804D0658 *)(self->menu))->is_open() != 0) {
            ((TWindowMakeTeam *)self)->set_state(update_selected_entry__17TWindowSubComCardFv(self->menu));
        }
        break;
    case 3: {
        void *kb = __nw__7TObjectFUl(0x2C);
        if (kb != NULL) {
            kb = TKeyBoardControl__ct(kb, self, 0xE, 0, 4, local_client_id);
        }
        self->keyboard = kb;
        ((TWindowMakeTeam *)(self->keyboard))->set_sub_position((u8 *)(get_window_layout_position(0xCB)));
        get_lobby_field_20__15TWindowMakeTeamFv(self->keyboard, lbl_805DD144);
        update_chat_window(self->keyboard);
        get_keyboard_field_6c__15TWindowMakeTeamFv(self->keyboard, self->name);
        ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(NULL, 0);
        self->state = 4;
    }
    case 4:
        if (((TWindowSubComCard *)(self->keyboard))->is_keyboard_active() != 0) {
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(self->name, 0);
            self->state = 1;
        }
        if (((TWindowSubComCard *)(self->keyboard))->update_keyboard() != 0) {
            s32 n;
            mem_free(self->name);
            self->name = realloc_buffer__17TWindowSubComCardFv(self->keyboard);
            TWindowSubComCard__sub_80225E80(self->name, get_shared_text_buffer());
            n = measure_string_len__20TWindowSubStatusDispFv(self->name);
            strncpy(self->name, get_shared_text_buffer(), n);
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(self->name, 0);
            self->state = 1;
        }
        break;
    case 5: {
        void *kb = __nw__7TObjectFUl(0x2C);
        if (kb != NULL) {
            kb = TKeyBoardControl__ct(kb, self, 0x10, 0, 0, local_client_id);
        }
        self->keyboard = kb;
        ((TWindowMakeTeam *)(self->keyboard))->set_sub_position((u8 *)(get_window_layout_position(0xCC)));
        get_lobby_field_20__15TWindowMakeTeamFv(self->keyboard, lbl_805DD144);
        get_keyboard_field_6c__15TWindowMakeTeamFv(self->keyboard, self->comment);
        ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(NULL, 1);
        self->state = 6;
    }
    case 6:
        if (((TWindowSubComCard *)(self->keyboard))->is_keyboard_active() != 0) {
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(self->comment, 1);
            self->state = 1;
        }
        if (((TWindowSubComCard *)(self->keyboard))->update_keyboard() != 0) {
            s32 n;
            mem_free(self->comment);
            self->comment = realloc_buffer__17TWindowSubComCardFv(self->keyboard);
            TWindowSubComCard__sub_80225E80(self->comment, get_shared_text_buffer());
            n = measure_string_len__20TWindowSubStatusDispFv(self->comment);
            strncpy(self->comment, get_shared_text_buffer(), n);
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(self->comment, 1);
            self->state = 1;
        }
        break;
    case 7:
        self->window = create_entry_menu_window__15TWindowMakeTeamFv(self);
        self->state = 8;
    case 8:
        if (((TWindowSubComCard *)(self->window))->get_status_flag() != 0) {
            self->state = 1;
        } else if (((TWindowMenu *)(self->window))->is_visible() != 0) {
            self->sel1E = get_selected_menu_value(self->window);
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(draw_entry_0x110__15TWindowMakeTeamFSc(self->sel1E), 2);
            ((TWindowMakeTeam *)self)->send_state();
            self->state = 1;
        }
        break;
    case 9:
        self->window = create_status_menu_window__15TWindowMakeTeamFv(self);
        self->state = 10;
    case 10:
        if (((TWindowSubComCard *)(self->window))->get_status_flag() != 0) {
            self->state = 1;
        } else if (((TWindowMenu *)(self->window))->is_visible() != 0) {
            self->sel1F = get_selected_menu_value(self->window);
            ((TWindowMakeTeam *)(self->menu))->set_entry_string_by_id(init_status_disp__15TWindowMakeTeamFc(self->sel1F), 3);
            self->state = 1;
        }
        break;
    case 11:
        break;
    }
}

}
