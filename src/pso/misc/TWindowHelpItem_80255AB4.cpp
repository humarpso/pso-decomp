#include "types.h"
#include "pso/misc/TWindowHelpItem.h"

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
extern u8 *text_language_group_table;
s32 get_help_text_string(s32 arg0);
extern void *__vt__15TWindowHelpItem[];
extern s32 TWindowHelpItem__object_vtable[];
extern u32 lbl_805D3910;
extern TWindowHelpItem::CallbackWords __ptmf_null;
extern const f32 lbl_805DCE10;
void construct_base__9TWindowDDFPvPvsPv(void *self, void *vt, s16 idx, void *pos);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *dst, void *src);
void save_position__17TWindowSubComCardFPv(void *self);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32 size);
void *init__21TWindowSubComCardListFPviii(void *p, s32 a, s32 b, s32 c);
s32 dispatch_item_help__15TWindowHelpItemFv(void *);
void call_if_split_screen(void *self, s32 idx);

}

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void update_cursor_selection__15TWindowHelpItemFPv(void *arg0);
void update_display__15TWindowHelpItemFPv(u8 *arg0);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 invoke_callback_pmf__15TWindowHelpItemFPv(void *);
s32 dispatch_item_help__15TWindowHelpItemFv(void *);
s32 handle_list_page_flip_input(s32);
s32 setup_window_draw_context(void *, void *);
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 update_window_entry_list(void *, void *);
s32 draw_list_page_indicator(int, int);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 fn_80244994(void *);
s32 toggle_help_window_on_button(void *, s16);
s32 decay_page_arrow_offset(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);
s32 update_fade__17TWindowSubComCardFPv(void *);

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xA4) != -1) {
        *(s32 *)((s8 *)arg0 + 0x68) = (s32) *(s32 *)((s8 *)arg0 + 0x70);
        *(s32 *)((s8 *)arg0 + 0x9C) = (s32) *(s32 *)((s8 *)arg0 + 0xA4);
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xA0) != -1) {
        *(s32 *)((s8 *)arg0 + 0x68) = (s32) *(s32 *)((s8 *)arg0 + 0x6C);
        *(s32 *)((s8 *)arg0 + 0x9C) = (s32) *(s32 *)((s8 *)arg0 + 0xA0);
        return;
    }
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) & 0xFE);
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x9C) = -1;
}

void TWindowHelpItem__sub_80255B20(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r3_2;

    temp_r3 = setup_window_draw_context((void *) (arg0), (void *) (arg0 + 0xA8));
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r3_2 = *(u8 *)((s8 *)arg0 + 0x60);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2)) {
        draw_list_page_indicator((int) (*(s32 *)((s8 *)arg0 + 0x64)), (int) (temp_r3));
    }
}

void update_display__15TWindowHelpItemFPv(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x01000000;
    }
    if ((*(u8 *)((s8 *)arg0 + 0x60) & 1) && (fn_80244994(arg0) != 0) && !(*(s32 *)((s8 *)arg0 + 0x2C) & 4)) {
        if (!(*(u8 *)((s8 *)arg0 + 0x60) & 4)) {
            if (handle_list_page_flip_input(*(s32 *)((s8 *)arg0 + 0x64)) != 0) {
                dispatch_item_help__15TWindowHelpItemFv(arg0);
            }
        } else {
            decay_page_arrow_offset(*(s32 *)((s8 *)arg0 + 0x64));
        }
        invoke_callback_pmf__15TWindowHelpItemFPv(arg0);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
    if (!(*(u8 *)((s8 *)arg0 + 0x60) & 8)) {
        toggle_help_window_on_button(arg0, *(s16 *)((s8 *)arg0 + 0x20));
    }
}

extern s32 TWindowHelpItem__object_vtable[];

void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = TWindowHelpItem__object_vtable;
        delete_if_allocated(*(void **)((s8 *)arg0 + 0x64), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
TWindowHelpItem::TWindowHelpItem(void *pos, u16 idx) {
    TWindowHelpItem *self = this;
    void *p;
    construct_base__9TWindowDDFPvPvsPv(self, __vt__15TWindowHelpItem, idx, pos);
    self->m_vtable18 = ((s32 *)&TWindowHelpItem__object_vtable);
    self->m_00 = lbl_805D3910;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((u8 *)self + 0x30, pos);
    save_position__17TWindowSubComCardFPv(self);
    self->m_60 = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0xc);
    if (p != 0) {
        p = init__21TWindowSubComCardListFPviii(p, 0, 3, self->m_20);
    }
    self->m_64 = (u32)p;
    self->m_68 = 0;
    self->m_6c = 0;
    self->m_70 = 0;
    self->m_9c = -1;
    self->m_a0 = -1;
    self->m_a4 = -1;
    self->m_callback = __ptmf_null;
    self->m_a8 = lbl_805DCE10;
    self->m_ac = lbl_805DCE10;
    dispatch_item_help__15TWindowHelpItemFv(self);
    call_if_split_screen(self, self->m_20);
}
extern "C" {

s32 get_help_text_string(s32 arg0) {
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 0x18)) + (arg0 * 4));
}

s32 TWindowHelpItem__sub_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void set_flag0_bit20__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x20; }

}
