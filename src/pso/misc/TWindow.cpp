#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TQuestListOffline.h"
#include "pso/misc/TWindow.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TQuestListVM.h"
#include "pso/misc/TWindowSubComCard.h"

struct Base_80216BCC_80216B44 { char pad[0x18]; };
struct VObj_80216BCC_80216B44 : Base_80216BCC_80216B44 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual s32 m7(s32, s32);
    virtual s32 m8();
};
struct Entry_80216BCC_80216B44 {
    u8 pad00[0x18];
    s32 field18;
};

struct Base_80216CF8 { char pad[0x18]; };

struct VObj_80216CF8 : Base_80216CF8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual s32 m7(s32, s32);
    virtual s32 m8();
};

struct Entry_80216CF8 {
    u8 pad00[0x8];
    s32 f8;
    s32 fC;
    u8 pad10[0x4];
    u32 f14;
    s32 f18;
};

struct Pos_80216CF8 { s32 a, b; };

struct Win_80216CF8 {
    u8 pad0[0x24];
    void *f24;
    u8 pad28[0x34 - 0x28];
    VObj_80216CF8 *f34;
    void *f38;
    void *f3C;
    void *f40;
    void *f44;
    u8 pad48[0x50 - 0x48];
    s32 f50;
    Entry_80216CF8 *f54;
};

struct Base_80216F50 { char pad[0x18]; };

struct VObj_80216F50 : Base_80216F50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual s32 m7(s32, s32);
    virtual s32 m8();
};

struct Entry_80216F50 {
    u8 pad00[0x4];
    s32 f4;
    s32 f8;
    u8 padC[0x4];
    s16 f10;
    s16 f12;
    u8 pad14[0x8];
};

struct Pos_80216F50 { s32 a, b; };

struct Win_80216F50 {
    u8 pad0[0x24];
    void *f24;
    u8 pad28[0x34 - 0x28];
    VObj_80216F50 *f34;
    void *f38;
    void *f3C;
    void *f40;
    void *f44;
    u8 pad48[0x50 - 0x48];
    s32 f50;
    Entry_80216F50 *f54;
};

extern "C" {
u16 obj_getField1c(void *);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_quest_list_text(s32, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy__13TUnk_804CDFE8Fff(void *, f32, f32);
s32 TWindow__close(void *);
void *create_yes_no_window(void *, s32, s32, s32);
s32 select_cursor_entry__6TLobbyFv(s32);
void *create_message_window__6TLobbyFllUls(void *, void *, s32, s32);
void *get_window_layout_position(s32);
extern Pos_80216CF8 lbl_8044BEA4[];
extern const f32 lbl_805DC694;
extern const f32 lbl_805DC698;
void update_list_navigation__17TQuestListOfflineFPv(Win_80216CF8 *self);
u16 obj_getField1c(void *);
s32 get_story_flag(s16);
s32 are_all_story_quests_complete();
s32 refresh_story_quest_availability(void *);
s32 get_quest_list_text(s32, s32);
void *get_guild_text(s32);
s32 calc_list_content_extent(void *);
void *set_window_mode_4__6TLobbyFPvll(void *, void *, s32);
void *get_window_layout_position(s32);
void *create_item_list_window(void *, s32, s32);
extern Pos_80216F50 lbl_8044BE9C[];
extern void *story_quest_list_resource;
void init_quest_list_window__17TQuestListOfflineFv(Win_80216F50 *self);
}

extern "C" {

void handle_confirm_dialog(void *arg0);
s32 prepare_offline_quest_filenames(s32);
s32 get_selected_menu_value(u32);
s32 TWindow__close(void *);
s32 select_cursor_entry__6TLobbyFv(s32);

void TWindow::close_sub_windows() {
    if ((u32) *(u32 *)((s8 *)this + 0x38) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x38));
        *(u32 *)((s8 *)this + 0x38) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x44) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x44));
        *(u32 *)((s8 *)this + 0x44) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x40) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x40));
        *(u32 *)((s8 *)this + 0x40) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x3C) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x3C));
        *(u32 *)((s8 *)this + 0x3C) = 0U;
    }
}

void handle_confirm_dialog(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    VObj_80216BCC_80216B44 *temp_r3;
    VObj_80216BCC_80216B44 *temp_r3_3;
    VObj_80216BCC_80216B44 *temp_r3_4;

    temp_r3 = *(VObj_80216BCC_80216B44 **)((s8 *)arg0 + 0x34);
    if (temp_r3->m8() != 0) {
        if ((*(void **)((s8 *)arg0 + 0x38) != NULL) && (((TWindowMenu *)(*(void **)((s8 *)arg0 + 0x38)))->is_visible() != 0)) {
            temp_r3_2 = get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0x38));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFv(*(s32 *)((s8 *)arg0 + 0x3C));
                prepare_offline_quest_filenames((*(Entry_80216BCC_80216B44 **)((s8 *)arg0 + 0x54))[temp_r0].field18);
                ((TQuestListVM *)arg0)->set_field_20(3);
                return;
            }
            if (temp_r3_2 == 1) {
                ((TWindow *)arg0)->close_sub_windows();
                temp_r3_3 = *(VObj_80216BCC_80216B44 **)((s8 *)arg0 + 0x34);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 1);
                }
                ((TQuestListVM *)arg0)->set_field_20(0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((*(void **)((s8 *)arg0 + 0x38) != NULL) && (((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x38)))->get_status_flag() != 0)) {
            ((TWindow *)arg0)->close_sub_windows();
            temp_r3_4 = *(VObj_80216BCC_80216B44 **)((s8 *)arg0 + 0x34);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 1);
            }
            ((TQuestListVM *)arg0)->set_field_20(0);
        }
    }
}
void update_list_navigation__17TQuestListOfflineFPv(Win_80216CF8 *self) {
    s32 sel;
    s32 msg;
    s32 msg2;
    Pos_80216CF8 pos;
    if (self->f34->m8() == 0) {
        return;
    }
    if (self->f3C != NULL && self->f40 != NULL) {
        sel = select_cursor_entry__6TLobbyFv((s32)self->f3C);
        if (sel != self->f50) {
            msg = get_quest_list_text(0xE, self->f54[sel].f8);
            ((TLobby *)(self->f40))->send_and_handle(msg, 0x80);
            self->f50 = sel;
            if (self->f44 != NULL) {
                TWindow__close(self->f44);
                self->f44 = NULL;
            }
        }
    }
    if (self->f3C != NULL && ((TLobby *)(self->f3C))->get_flag_bit2() != 0) {
        ((TQuestListVM *)self)->set_field_20(5);
        return;
    }
    if (self->f3C != NULL && ((TUnk_804D0618 *)(self->f3C))->get_status_flag() != 0) {
        sel = select_cursor_entry__6TLobbyFv((s32)self->f3C);
        if (self->f54[sel].f14 & 1) {
            ((TQuestListVM *)self)->set_field_20(4);
            return;
        }
        if (self->f44 == NULL) {
            pos.a = lbl_8044BEA4[0].a;
            pos.b = lbl_8044BEA4[0].b;
            self->f44 = create_message_window__6TLobbyFllUls(get_window_layout_position(0x2E), &pos, 1, obj_getField1c(self->f24));
            msg2 = get_quest_list_text(0xE, self->f54[sel].fC);
            ((TLobby *)(self->f44))->send_and_handle(msg2, 0x80);
            ((TLobby *)(self->f44))->set_field_1c(lbl_805DC694);
            if (get_camera_id__11TCameraCtrlFv() >= 2) {
                set_position_xy__13TUnk_804CDFE8Fff(self->f44, lbl_805DC698, lbl_805DC698);
            }
        }
        if (self->f38 == NULL) {
            self->f38 = create_yes_no_window(get_window_layout_position(0x2B), obj_getField1c(self->f24), 0, 0);
            set_position_xy__13TUnk_804CDFE8Fff(self->f38, get_scale__15TShopWindowBaseFv(self), get_scale__15TShopWindowBaseFv(self));
            if (self->f34 != NULL) {
                self->f34->m7(5, 1);
            }
            ((TQuestListVM *)self)->set_field_20(2);
        }
    }
}
void TQuestListOffline::init_quest_list_window() {
    Win_80216F50 *self = (Win_80216F50 *)this;
    void *t;
    Entry_80216F50 *e;
    s32 i;
    Entry_80216F50 *e2;
    s32 i2;
    Pos_80216F50 pos;
    if (self->f34->m8() == 0) {
        return;
    }
    refresh_story_quest_availability(story_quest_list_resource);
    if (self->f3C == NULL) {
        t = get_guild_text(0);
        self->f3C = create_item_list_window(t, 0x40, obj_getField1c(self->f24));
        if (are_all_story_quests_complete() == 1) {
            e = self->f54;
            i = 0;
            while (e->f4 != -1) {
                if (e->f12 == -1) {
                    ((TLobby *)(self->f3C))->add_list_entry(0x2C, get_quest_list_text(0xE, e->f4), i);
                } else if (get_story_flag(e->f10) != 0) {
                    ((TLobby *)(self->f3C))->add_list_entry(0x16, get_quest_list_text(0xE, e->f4), i);
                }
                i++;
                e++;
            }
        } else {
            e2 = self->f54;
            i2 = 0;
            while (e2->f4 != -1) {
                if (e2->f12 == -1) {
                    ((TLobby *)(self->f3C))->add_list_entry(0x2C, get_quest_list_text(0xE, e2->f4), i2);
                } else if (get_story_flag(e2->f10) != 0) {
                    if (get_story_flag(e2->f12) != 0) {
                        ((TLobby *)(self->f3C))->add_list_entry(0x18, get_quest_list_text(0xE, e2->f4), i2);
                    } else {
                        ((TLobby *)(self->f3C))->add_list_entry(0x17, get_quest_list_text(0xE, e2->f4), i2);
                    }
                }
                i2++;
                e2++;
            }
        }
        calc_list_content_extent(self->f3C);
        if (self->f40 == NULL) {
            pos.a = lbl_8044BE9C[0].a;
            pos.b = lbl_8044BE9C[0].b;
            self->f40 = set_window_mode_4__6TLobbyFPvll(get_window_layout_position(0x2D), &pos, 1);
            ((TLobby *)(self->f40))->send_and_handle(get_quest_list_text(0xE, self->f54->f8), 0x80);
            self->f50 = 0;
        } else {
            ((TLobby *)(self->f40))->send_and_handle(get_quest_list_text(0xE, self->f54->f8), 0x80);
            self->f50 = 0;
        }
    }
    ((TQuestListVM *)self)->set_field_20(1);
}

}
