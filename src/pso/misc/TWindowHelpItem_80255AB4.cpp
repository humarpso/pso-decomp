#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V3_80255CCC { f32 v[3]; };

struct THelp_80255CCC {
    u32 w0;
    u8 pad4[0x14];
    s32 *vt18;
    u8 pad1c[4];
    s16 idx20;
    u8 pad22[0x3e];
    u8 b60;
    u8 pad61[3];
    void *list64;
    s32 w68;
    s32 w6c;
    s32 w70;
    u8 pad74[0x28];
    s32 w9c;
    s32 wa0;
    s32 wa4;
    f32 fa8;
    f32 fac;
    V3_80255CCC vb0;
};

extern "C" {
extern u8 *lbl_805D553C;
s32 get_help_text_string(s32 arg0);
extern void *__vt__15TWindowHelpItem[];
extern M2C_UNK lbl_804CF8B0[];
extern u32 lbl_805D3910;
extern V3_80255CCC lbl_8047B9F8;
extern const f32 lbl_805DCE10;
void TWindowDD__sub_802466E0(void *self, void *vt, s16 idx, void *pos);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *dst, void *src);
void save_position__17TWindowSubComCardFPv(void *self);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32 size);
void *init__21TWindowSubComCardListFPviii(void *p, s32 a, s32 b, s32 c);
M2C_UNK dispatch_item_help__15TWindowHelpItemFv(void *);
void call_if_split_screen(void *self, s32 idx);
THelp_80255CCC *TWindowHelpItem__ct(THelp_80255CCC *self, void *pos, s32 idx);
}

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void update_cursor_selection__15TWindowHelpItemFPv(void *arg0);
void update_display__15TWindowHelpItemFPv(u8 *arg0);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
M2C_UNK TWindowHelpItem__sub_802553F8(void *);
M2C_UNK dispatch_item_help__15TWindowHelpItemFv(void *);
s32 handle_list_page_flip_input(s32);
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
M2C_UNK update_window_entry_list(void *, void *);
M2C_UNK draw_list_page_indicator(int, int);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 fn_80244994(void *);
M2C_UNK toggle_help_window_on_button(void *, s16);
M2C_UNK decay_page_arrow_offset(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFE);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = -1;
}

void TWindowHelpItem__sub_80255B20(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r3_2;

    temp_r3 = setup_window_draw_context((void *) (arg0), (void *) (arg0 + 0xA8));
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2)) {
        draw_list_page_indicator((int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (temp_r3));
    }
}

void update_display__15TWindowHelpItemFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x60) & 1) && (fn_80244994(arg0) != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 4)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
            if (handle_list_page_flip_input(M2C_FIELD(arg0, s32 *, 0x64)) != 0) {
                dispatch_item_help__15TWindowHelpItemFv(arg0);
            }
        } else {
            decay_page_arrow_offset(M2C_FIELD(arg0, s32 *, 0x64));
        }
        TWindowHelpItem__sub_802553F8(arg0);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 8)) {
        toggle_help_window_on_button(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    }
}

extern M2C_UNK lbl_804CF8B0[];

void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF8B0;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x64), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

THelp_80255CCC *TWindowHelpItem__ct(THelp_80255CCC *self, void *pos, s32 idx) {
    void *p;
    TWindowDD__sub_802466E0(self, __vt__15TWindowHelpItem, idx, pos);
    self->vt18 = ((s32 *)&lbl_804CF8B0);
    self->w0 = lbl_805D3910;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((u8 *)self + 0x30, pos);
    save_position__17TWindowSubComCardFPv(self);
    self->b60 = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0xc);
    if (p != 0) {
        p = init__21TWindowSubComCardListFPviii(p, 0, 3, self->idx20);
    }
    self->list64 = p;
    self->w68 = 0;
    self->w6c = 0;
    self->w70 = 0;
    self->w9c = -1;
    self->wa0 = -1;
    self->wa4 = -1;
    self->vb0 = lbl_8047B9F8;
    self->fa8 = lbl_805DCE10;
    self->fac = lbl_805DCE10;
    dispatch_item_help__15TWindowHelpItemFv(self);
    call_if_split_screen(self, self->idx20);
    return self;
}

s32 get_help_text_string(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x18), M2C_UNK *, (arg0 * 4));
}

s32 TWindowHelpItem__sub_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void set_flag0_bit20__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x20; }

}
