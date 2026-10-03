#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80216BCC_80216B44 { char pad[0x18]; };
struct VObj_80216BCC_80216B44 : Base_80216BCC_80216B44 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
};
struct Entry_80216BCC_80216B44 {
    u8 pad00[0x18];
    s32 field18;
};

typedef s32 M2C_UNK;
struct Base_80216CF8 { char pad[0x18]; };

struct VObj_80216CF8 : Base_80216CF8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
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
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
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
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 TLobby__sub_80222C28(s32, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(void *, f32, f32);
M2C_UNK TWindow__close(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(void *, f32);
void *create_yes_no_window(void *, s32, s32, s32);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *TLobby__sub_80269CC0(void *, void *, s32, s32);
void *get_window_layout_position(s32);
extern Pos_80216CF8 lbl_8044BEA4[];
extern const f32 lbl_805DC694;
extern const f32 lbl_805DC698;
void update_list_navigation__17TQuestListOfflineFPv(Win_80216CF8 *self);
u16 obj_getField1c(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_story_flag(s16);
s32 TLobby__sub_80219F64();
M2C_UNK update_lobbies_and_events__6TLobbyFPv(void *);
s32 TLobby__sub_80222C28(s32, s32);
void *TLobby__sub_80222C54(s32);
M2C_UNK TLobby__sub_80266E34(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *get_window_layout_position(s32);
M2C_UNK add_list_entry__6TLobbyFPviii(void *, s32, s32, s32);
void *TShopJudgmentItemWindow__sub_8026DF00(void *, s32, s32);
extern Pos_80216F50 lbl_8044BE9C[];
extern void *lbl_805D61D8;
void init_quest_list_window__17TQuestListOfflineFPv(Win_80216F50 *self);
}

extern "C" {

void close_sub_windows__7TWindowFPv(void *arg0);
void handle_confirm_dialog(void *arg0);
M2C_UNK prepare_offline_quest_filenames(s32);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void close_sub_windows__7TWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
}

void handle_confirm_dialog(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    VObj_80216BCC_80216B44 *temp_r3;
    VObj_80216BCC_80216B44 *temp_r3_3;
    VObj_80216BCC_80216B44 *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
    if (temp_r3->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x38));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x3C));
                prepare_offline_quest_filenames(M2C_FIELD(arg0, Entry_80216BCC_80216B44 **, 0x54)[temp_r0].field18);
                set_field_20__12TQuestListVMFPvi(arg0, 3);
                return;
            }
            if (temp_r3_2 == 1) {
                close_sub_windows__7TWindowFPv((void *)(arg0));
                temp_r3_3 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 1);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            close_sub_windows__7TWindowFPv((void *)(arg0));
            temp_r3_4 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 1);
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0);
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
        sel = select_cursor_entry__6TLobbyFPv((s32)self->f3C);
        if (sel != self->f50) {
            msg = TLobby__sub_80222C28(0xE, self->f54[sel].f8);
            send_and_handle__6TLobbyFPvii(self->f40, msg, 0x80);
            self->f50 = sel;
            if (self->f44 != NULL) {
                TWindow__close(self->f44);
                self->f44 = NULL;
            }
        }
    }
    if (self->f3C != NULL && get_flag_bit2__6TLobbyFPv(self->f3C) != 0) {
        set_field_20__12TQuestListVMFPvi(self, 5);
        return;
    }
    if (self->f3C != NULL && get_status_flag__6TLobbyFPv(self->f3C) != 0) {
        sel = select_cursor_entry__6TLobbyFPv((s32)self->f3C);
        if (self->f54[sel].f14 & 1) {
            set_field_20__12TQuestListVMFPvi(self, 4);
            return;
        }
        if (self->f44 == NULL) {
            pos.a = lbl_8044BEA4[0].a;
            pos.b = lbl_8044BEA4[0].b;
            self->f44 = TLobby__sub_80269CC0(get_window_layout_position(0x2E), &pos, 1, obj_getField1c(self->f24));
            msg2 = TLobby__sub_80222C28(0xE, self->f54[sel].fC);
            send_and_handle__6TLobbyFPvii(self->f44, msg2, 0x80);
            set_field_1c__6TLobbyFPvf(self->f44, lbl_805DC694);
            if (get_camera_id__11TCameraCtrlFv() >= 2) {
                set_position_xy(self->f44, lbl_805DC698, lbl_805DC698);
            }
        }
        if (self->f38 == NULL) {
            self->f38 = create_yes_no_window(get_window_layout_position(0x2B), obj_getField1c(self->f24), 0, 0);
            set_position_xy(self->f38, get_scale__15TShopWindowBaseFv(self), get_scale__15TShopWindowBaseFv(self));
            if (self->f34 != NULL) {
                self->f34->m7(5, 1);
            }
            set_field_20__12TQuestListVMFPvi(self, 2);
        }
    }
}
void init_quest_list_window__17TQuestListOfflineFPv(Win_80216F50 *self) {
    void *t;
    Entry_80216F50 *e;
    s32 i;
    Entry_80216F50 *e2;
    s32 i2;
    Pos_80216F50 pos;
    if (self->f34->m8() == 0) {
        return;
    }
    update_lobbies_and_events__6TLobbyFPv(lbl_805D61D8);
    if (self->f3C == NULL) {
        t = TLobby__sub_80222C54(0);
        self->f3C = TShopJudgmentItemWindow__sub_8026DF00(t, 0x40, obj_getField1c(self->f24));
        if (TLobby__sub_80219F64() == 1) {
            e = self->f54;
            i = 0;
            while (e->f4 != -1) {
                if (e->f12 == -1) {
                    add_list_entry__6TLobbyFPviii(self->f3C, 0x2C, TLobby__sub_80222C28(0xE, e->f4), i);
                } else if (get_story_flag(e->f10) != 0) {
                    add_list_entry__6TLobbyFPviii(self->f3C, 0x16, TLobby__sub_80222C28(0xE, e->f4), i);
                }
                i++;
                e++;
            }
        } else {
            e2 = self->f54;
            i2 = 0;
            while (e2->f4 != -1) {
                if (e2->f12 == -1) {
                    add_list_entry__6TLobbyFPviii(self->f3C, 0x2C, TLobby__sub_80222C28(0xE, e2->f4), i2);
                } else if (get_story_flag(e2->f10) != 0) {
                    if (get_story_flag(e2->f12) != 0) {
                        add_list_entry__6TLobbyFPviii(self->f3C, 0x18, TLobby__sub_80222C28(0xE, e2->f4), i2);
                    } else {
                        add_list_entry__6TLobbyFPviii(self->f3C, 0x17, TLobby__sub_80222C28(0xE, e2->f4), i2);
                    }
                }
                i2++;
                e2++;
            }
        }
        TLobby__sub_80266E34(self->f3C);
        if (self->f40 == NULL) {
            pos.a = lbl_8044BE9C[0].a;
            pos.b = lbl_8044BE9C[0].b;
            self->f40 = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x2D), &pos, 1);
            send_and_handle__6TLobbyFPvii(self->f40, TLobby__sub_80222C28(0xE, self->f54->f8), 0x80);
            self->f50 = 0;
        } else {
            send_and_handle__6TLobbyFPvii(self->f40, TLobby__sub_80222C28(0xE, self->f54->f8), 0x80);
            self->f50 = 0;
        }
    }
    set_field_20__12TQuestListVMFPvi(self, 1);
}

}
