#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubMag.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/ui/TWindowInputNumber.h"

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
void save_position__17TWindowSubComCardFPv(void *self);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32 size);
void *init__21TWindowSubComCardListFiii(void *p, s32 a, s32 b, s32 c);
void call_if_split_screen(void *self, s32 idx);

}

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 handle_list_page_flip_input(s32);
s32 setup_window_draw_context(void *, void *);
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 update_window_entry_list(void *, void *);
s32 draw_list_page_indicator(int, int);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFs(void *, int);
s32 fn_80244994(void *);
s32 toggle_help_window_on_button(void *, s16);
s32 decay_page_arrow_offset(s32);

void TWindowHelpItem::update_cursor_selection() {
    this->m_60 = (u8) (this->m_60 | 1);
    if ((s32) *(s32 *)&this->m_a4 != -1) {
        *(s32 *)&this->m_68 = (s32) *(s32 *)&this->m_70;
        *(s32 *)&this->m_9c = (s32) *(s32 *)&this->m_a4;
        return;
    }
    if ((s32) *(s32 *)&this->m_a0 != -1) {
        *(s32 *)&this->m_68 = (s32) *(s32 *)&this->m_6c;
        *(s32 *)&this->m_9c = (s32) *(s32 *)&this->m_a0;
        return;
    }
    this->m_60 = (u8) (this->m_60 & 0xFE);
    *(s32 *)&this->m_68 = 0;
    *(s32 *)&this->m_9c = -1;
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

void TWindowHelpItem::update_display() {
    u8 *arg0 = (u8 *)this;
    if (!(this->m_2c & 2)) {
        this->m_5c = 0x01000000;
    }
    if ((this->m_60 & 1) && (fn_80244994(arg0) != 0) && !(this->m_2c & 4)) {
        if (!(this->m_60 & 4)) {
            if (handle_list_page_flip_input(*(s32 *)&this->m_64) != 0) {
                ((TWindowHelpItem *)arg0)->dispatch_item_help();
            }
        } else {
            decay_page_arrow_offset(*(s32 *)&this->m_64);
        }
        ((TWindowHelpItem *)arg0)->invoke_callback_pmf();
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TWindowSubComCard *)arg0)->update_fade();
    update_window_entry_list(arg0, arg0 + 0x24);
    if (!(this->m_60 & 8)) {
        toggle_help_window_on_button(arg0, this->m_20);
    }
}

extern s32 TWindowHelpItem__object_vtable[];

void *TWindowHelpItem::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 * *)&this->m_vtable18 = TWindowHelpItem__object_vtable;
        delete_if_allocated(*(void * *)&this->m_64, 1);
        destroy_window_base__9TWindowDDFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
TWindowHelpItem::TWindowHelpItem(void *pos, u16 idx) {
    TWindowHelpItem *self = this;
    void *p;
    construct_base__9TWindowDDFPvPvsPv(self, __vt__15TWindowHelpItem, idx, pos);
    self->m_vtable18 = ((s32 *)&TWindowHelpItem__object_vtable);
    self->m_00 = lbl_805D3910;
    ((TWindowSubSymbolChatPartsSet *)((u8 *)self + 0x30))->copy_vec2(pos);
    save_position__17TWindowSubComCardFPv(self);
    self->m_60 = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0xc);
    if (p != 0) {
        p = init__21TWindowSubComCardListFiii(p, 0, 3, self->m_20);
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
    ((TWindowHelpItem *)self)->dispatch_item_help();
    call_if_split_screen(self, self->m_20);
}
extern "C" {

s32 get_help_text_string(s32 arg0) {
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 0x18)) + (arg0 * 4));
}

s32 TWindowHelpItem__sub_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void TWindowHelpItem::set_flag0_bit20() { *(u16*)((char*)this + 0x0) |= 0x20; }

}
