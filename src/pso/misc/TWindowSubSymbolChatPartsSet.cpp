#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80286824_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Set_8028625C {
    u8 pad0[0x69];
    s8 mode;
    s16 x;
    s16 y;
    s16 color;
    s8 *p70;
    s32 cur;
    u32 sel;
    s32 *p7C;
    s32 *p80;
    s32 *p84;
};

struct Win_802864C4 {
    u8 pad0[0x69];
    u8 f69;
    s16 x;
    s16 y;
    u8 pad6e[0x74 - 0x6E];
    s32 f74;
};

typedef s32 M2C_UNK;
typedef struct T_8028642C {
    u8 pad[0x69];
    s8 f69;
    u8 pad6a[0x78 - 0x6A];
    u32 f78;
    u8 pad7c[0x84 - 0x7C];
    s32 *f84;
} T_8028642C;

typedef struct T_802869BC {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0x20 - 0x1C];
    s16 f20;
    u8 pad22[0x2C - 0x22];
    u32 f2c;
    u8 pad30[0x68 - 0x30];
    s8 f68;
    u8 pad69;
    s16 f6a;
    s16 f6c;
    s16 f6e;
    s32 f70;
    u8 pad74[0x7C - 0x74];
    s32 f7c;
    s32 f80;
    u8 pad84[0x88 - 0x84];
    void *f88;
    f32 f8c;
    f32 f90;
    f32 f94;
} T_802869BC;

struct V2_80286120 { f32 x, y; };

struct Pt_80286120 { u8 pad[8]; f32 f8; f32 fc; };

struct Ps_80286120 { u8 pad[0x69]; s8 f69; u8 pad6a[0xA]; s32 f74; };

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 is_active__20TWindowSubSymbolChatFPv(void *);
void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80286824_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD820;
void run_task__28TWindowSubSymbolChatPartsSetFv(u8 *arg0);
void set_pos__28TWindowSubSymbolChatPartsSetFPvss(void *, s16, s16);
void set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii(void *, s16, s32, s32);
u16 *get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *, s32);
void setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii(void *, void *, void *, u16, s32, s32, s32, s32);
void *TWindowSubSymbolChatPartsSet__sub_802482B8(void *, s32);
void *get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *, s32);
void *get_parts_entry__28TWindowSubSymbolChatPartsSetFii(void *, s32);
void TWindowSubSymbolChatPartsSet__sub_8028625C(Set_8028625C *arg0);
s32 is_flag_set__11TLoadingCurFPv(void *, M2C_UNK);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);
M2C_UNK update_visibility__20TWindowSubSymbolChatFPv(void *, s16);
extern RecoveredGlobal_80286824_lbl_8050E208 controller_input_state;
void handle_cursor_input__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
s32 TWindowShortListCtrl__check_controller_button(int, int);
extern RecoveredGlobal_80286824_lbl_8050E208 controller_input_state;
void toggle_selected_part__28TWindowSubSymbolChatPartsSetFPv(T_8028642C *arg0);
void TWindowChatSymbol__ct(void *, void *, void *);
void set_field_1c__6TLobbyFPvf(void *, f32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
void *construct_type1_heading__20TWindowSubStatusDispFPvii(void *, s32, s32);
u32 get_instance__20TWindowSubSymbolChatFv(void);
void set_selection__20TWindowSubSymbolChatFPvUi(void *, u32);
extern u8 lbl_8044FC30[];
extern M2C_UNK __vt__28TWindowSubSymbolChatPartsSet[];
extern s32 lbl_805D3AC8;
extern const f32 lbl_805DD824;
extern const f32 lbl_805DD828;
extern const f32 lbl_805DD82C;
extern const f32 lbl_805DD830;
T_802869BC *TWindowSubSymbolChatPartsSet__ct(T_802869BC *self, void *parent, s16 arg2, s32 arg3, s32 arg4);
void *get_parts_entry__28TWindowSubSymbolChatPartsSetFii(void *, s32);
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
extern const f32 lbl_805DD814;
extern const f32 lbl_805DD818;
extern const f32 lbl_805DD81C;
M2C_UNK draw_selected_part_cursor__28TWindowSubSymbolChatPartsSetFPvi(void *self, int arg1);
}

extern "C" {

struct Vec2_80286708_802861AC { f32 x; f32 y; };

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1);
void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK draw_quest_message_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int, f32);
void __dl__7TObjectFPv(void *);
void __dt__17TWindowChatSymbolFv(void *, int);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

M2C_UNK draw_selected_part_cursor__28TWindowSubSymbolChatPartsSetFPvi(void *self, int arg1) {
#define arg0 ((Ps_80286120 *)self)
    V2_80286120 sp;
    Pt_80286120 *e;
    switch (arg0->f69) {
    case 1:
    case 3:
        e = (Pt_80286120 *)get_parts_entry__28TWindowSubSymbolChatPartsSetFii(arg0, arg0->f74);
        sp.x = e->f8 - lbl_805DD814;
        sp.y = e->fc - lbl_805DD814;
        TWindowSubSymbolChatFaceType__sub_80283C84((void *)arg1, &sp, lbl_805DD818, lbl_805DD81C);
        break;
    case 0:
    case 2:
        return;
    }
#undef arg0
}

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    if (is_active__20TWindowSubSymbolChatFPv((void *)(arg0)) == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 2);
    }
}

void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    play_sound_effect(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

extern M2C_UNK lbl_8044FC38;
extern const f32 lbl_805DD820;

void TWindowSubSymbolChatPartsSet__sub_8028625C(Set_8028625C *arg0) {
    u16 *e2;
    void *b3;
    void *a1;
    void *a3;
    void *b1;
    u16 *e;
    void *c;
    switch (arg0->mode) {
    case 0:
    case 2:
        e = get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(arg0, arg0->cur);
        set_pos__28TWindowSubSymbolChatPartsSetFPvss(e, arg0->x, arg0->y);
        set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii(e, arg0->color, *arg0->p7C, *arg0->p80);
        if (*arg0->p84 != 0) {
            e2 = get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(arg0, arg0->sel);
            *e2 &= ~2;
            set_pos__28TWindowSubSymbolChatPartsSetFPvss(e2, (s16)(0x40 - arg0->x), arg0->y);
            set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii(e2, arg0->color, *arg0->p7C == 0, *arg0->p80);
        } else if (arg0->sel < 0xC) {
            *get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(arg0, arg0->sel) |= 2;
        }
        break;
    case 3:
        a3 = get_parts_entry__28TWindowSubSymbolChatPartsSetFii(arg0, arg0->sel);
        b3 = get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(arg0, arg0->sel);
        c = TWindowSubSymbolChatPartsSet__sub_802482B8(arg0, arg0->sel);
        setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii(a3, b3, c, 0xFF, 0, 0, 0, 0);
    case 1:
        a1 = get_parts_entry__28TWindowSubSymbolChatPartsSetFii(arg0, arg0->cur);
        b1 = get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(arg0, arg0->cur);
        c = TWindowSubSymbolChatPartsSet__sub_802482B8(arg0, arg0->cur);
        setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii(a1, b1, c, arg0->color, *arg0->p70, *arg0->p7C, *arg0->p80, arg0->cur);
        break;
    }
}

void toggle_selected_part__28TWindowSubSymbolChatPartsSetFPv(T_8028642C *arg0) {
    switch (arg0->f69) {
    case 0:
    case 2:
        if (arg0->f78 < 12 && TWindowShortListCtrl__check_controller_button((int)((u8 *)&controller_input_state.value + 0x20), 0x400) != 0) {
            if (*arg0->f84 != 0) {
                *arg0->f84 = 0;
            } else {
                *arg0->f84 = 1;
            }
        }
        break;
    case 1:
        break;
    case 3:
        break;
    }
}

void handle_cursor_input__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    s16 temp_r4;
    u8 temp_r0;
    void *temp_r30;
    Win_802864C4 *w = (Win_802864C4 *)arg0;
    temp_r30 = (u8 *)&controller_input_state.value + 0x20;
    if ((is_on_current_screen__11TCameraCtrlFPv(temp_r30, 0xF0) != 0) || (is_flag_set__11TLoadingCurFPv((u8 *)&controller_input_state.value + 0x160, 0xF0) != 0)) {
        if ((is_on_current_screen__11TCameraCtrlFPv(temp_r30, 0x80) != 0) || (is_flag_set__11TLoadingCurFPv((u8 *)&controller_input_state.value + 0x160, 0x80) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) + 1);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv(temp_r30, 0x40) != 0) || (is_flag_set__11TLoadingCurFPv((u8 *)&controller_input_state.value + 0x160, 0x40) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) - 1);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv(temp_r30, 0x10) != 0) || (is_flag_set__11TLoadingCurFPv((u8 *)&controller_input_state.value + 0x160, 0x10) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x6C) = (s16) (M2C_FIELD(arg0, s16 *, 0x6C) - 1);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv(temp_r30, 0x20) != 0) || (is_flag_set__11TLoadingCurFPv((u8 *)&controller_input_state.value + 0x160, 0x20) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x6C) = (s16) (M2C_FIELD(arg0, s16 *, 0x6C) + 1);
        }
        switch ((s8)w->f69) {
        case 0:
        case 2:
            if (w->x < 0) {
                w->x = 0;
            }
            if (w->x >= 0x40) {
                w->x = 0x3F;
            }
            if (w->y < 0) {
                w->y = 0;
            }
            if (w->y >= 0x40) {
                w->y = 0x3F;
            }
            break;
        case 1:
        case 3:
            if (w->x < 0) {
                w->x = 0;
            }
            if (w->x >= 2) {
                w->x = 1;
            }
            if (w->y < 0) {
                w->y = 0;
            }
            if (w->y >= 2) {
                w->y = 1;
            }
            temp_r4 = w->x;
            w->f74 = temp_r4 + w->y * 2;
            update_visibility__20TWindowSubSymbolChatFPv(arg0, temp_r4);
            break;
        }
    }
}

void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    struct Vec2_80286708_802861AC sp10;
    struct Vec2_80286708_802861AC sp8;
    f32 temp_f1;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp10), (void *) (temp_r3 + 0x10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp8), (void *) (temp_r3 + 0x28));
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DD820);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    draw_quest_message_frame((void *) (arg0), (int) (temp_r3));
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 0x8C));
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x90));
    M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x94));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x2C);
    M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) (temp_f1 * M2C_FIELD(arg0, f32 *, 0x94));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3), (f32) (temp_f1));
    draw_selected_part_cursor__28TWindowSubSymbolChatPartsSetFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3)));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x10), (void *) (&sp10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x28), (void *) (&sp8));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)), (int) (temp_r3));
}

extern M2C_UNK __vt__28TWindowSubSymbolChatPartsSet[];

typedef char RecoveredGlobal_80286824_lbl_8050E208_size[sizeof(RecoveredGlobal_80286824_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    u8 *temp_r31;
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (is_active__20TWindowSubSymbolChatFPv((void *)((void *) (arg0))) == 0) {
        handle_cursor_input__28TWindowSubSymbolChatPartsSetFPv((void *)((void *) (arg0)));
        temp_r31 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            handle_decide__28TWindowSubSymbolChatPartsSetFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__28TWindowSubSymbolChatPartsSetFPv((void *) (arg0));
        }
    }
    toggle_selected_part__28TWindowSubSymbolChatPartsSetFPv((T_8028642C *)((void *) (arg0)));
    TWindowSubSymbolChatPartsSet__sub_8028625C((Set_8028625C *)((void *) (arg0)));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD820) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TWindowSubSymbolChatPartsSet;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        __dt__17TWindowChatSymbolFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
T_802869BC *TWindowSubSymbolChatPartsSet__ct(T_802869BC *self, void *parent, s16 arg2, s32 arg3, s32 arg4) {
    void *h;
    TWindowChatSymbol__ct(self, parent, lbl_8044FC30);
    self->vt = ((s32 *)&__vt__28TWindowSubSymbolChatPartsSet);
    self->f0 = lbl_805D3AC8;
    set_field_1c__6TLobbyFPvf(self, lbl_805DD824);
    self->f68 = 0;
    self->f6a = 0;
    self->f6c = 0;
    self->f6e = arg2;
    self->f70 = 0;
    self->f7c = arg3;
    self->f80 = arg4;
    h = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
    if (h != 0) {
        h = construct_type1_heading__20TWindowSubStatusDispFPvii(h, get_message_10__20TWindowSubStatusDispFPv(0x34), self->f20);
    }
    self->f88 = h;
    self->f8c = lbl_805DD828;
    self->f90 = lbl_805DD82C;
    self->f94 = lbl_805DD830;
    self->f2c |= 0x40;
    set_selection__20TWindowSubSymbolChatFPvUi(self, get_instance__20TWindowSubSymbolChatFv());
    return self;
}

}
