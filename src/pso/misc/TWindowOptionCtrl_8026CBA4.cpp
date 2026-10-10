#include "types.h"

struct V2_8026CBB8 { f32 x, y; };

struct Node_8026CC28 { u8 p0[0xC]; Node_8026CC28 *fC; u8 p10[0x44]; f32 f54; };

struct Grp_8026CC28 { u8 p0[0x14]; Node_8026CC28 *f14; };

struct Win_8026CC28 { u8 p0[0x10]; Grp_8026CC28 *f10; u8 p14[0x40]; f32 f54; };

extern "C" {
struct Grp_8026CCA4;
struct Node_8026CCA4 {
    u8 p0[0x8];
    Node_8026CCA4 *prev;
    Node_8026CCA4 *next;
    Grp_8026CCA4 *grp;
    u8 p14[0x40];
    f32 f54;
};
struct Grp_8026CCA4 { u8 p0[0x14]; Node_8026CCA4 *head; };

extern const f32 lbl_805DD2CC;
s32 is_split_screen(void);
s32 get_camera_id__11TCameraCtrlFv(void);
extern V2_8026CBB8 window_layout_position_table[];
extern V2_8026CBB8 lbl_80477890[];
extern unsigned char window_layout_rect_table[];
V2_8026CBB8 *get_window_layout_position(s32 idx);
s32 TWindowCtrlMain__sub_8024CE58(void);
void get_scale__20TWindowSubStatusDispFPv(void *);
extern f32 window_depth_order_cursor;
extern const f32 lbl_805DD2C8;
void TWindowCtrlMain__sub_8026CC28(Win_8026CC28 *w);
}

extern "C" {

void* get_option_entry__17TWindowOptionCtrlFi(int a0);

    extern unsigned char window_layout_rect_table[];
void* get_option_entry__17TWindowOptionCtrlFi(int a0) {  return (char*)window_layout_rect_table + a0 * 8; }
V2_8026CBB8 *get_window_layout_position(s32 idx) {
    if (is_split_screen() != 0) {
        return (get_camera_id__11TCameraCtrlFv() == 2) ? &lbl_80477890[idx] : &window_layout_position_table[idx];
    }
    return (V2_8026CBB8 *)((char *)window_layout_rect_table + idx * 8);
}
void TWindowCtrlMain__sub_8026CC28(Win_8026CC28 *w) {
    Node_8026CC28 *n;
    f32 lim;
    f32 t;
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        get_scale__20TWindowSubStatusDispFPv(w);
        window_depth_order_cursor -= lbl_805DD2C8;
        lim = w->f54;
        for (n = w->f10->f14; n != NULL; n = n->fC) {
            t = n->f54;
            if (lim > t) {
                n->f54 = t - lbl_805DD2C8;
            }
        }
    }
}

void resort_window_order__15TWindowCtrlMainFPv(Node_8026CCA4 *w) {
    Node_8026CCA4 *n;
    Grp_8026CCA4 *g;
    Node_8026CCA4 *last;
    f32 scale;

    w->f54 = lbl_805DD2CC;
    if (TWindowCtrlMain__sub_8024CE58() != 0 && w->prev != w) {
    g = w->grp;
    if (g->head == w) {
        g->head = w->next;
        w->prev->next = NULL;
        if (w->next != NULL) {
            w->next->prev = w->prev;
        }
    } else {
        w->prev->next = w->next;
        if (w->next != NULL) {
            w->next->prev = w->prev;
        } else {
            g->head->prev = w->prev;
        }
    }
    scale = ((f32 (*)(void *))get_scale__20TWindowSubStatusDispFPv)(w);
    window_depth_order_cursor += lbl_805DD2C8;
    for (n = g->head; n != NULL; n = n->next) {
        last = n;
        if (!(scale < ((f32 (*)(void *))get_scale__20TWindowSubStatusDispFPv)(n))) {
            break;
        }
        n->f54 += lbl_805DD2C8;
    }
    if (n == NULL) {
        g->head->prev = w;
        last->next = w;
        w->next = NULL;
        w->prev = last;
        return;
    }
    if (n == g->head) {
        g->head = w;
    }
    w->prev = n->prev;
    w->next = n;
    if (n->prev->next != NULL) {
        n->prev->next = w;
    }
    n->prev = w;
    for (; n != NULL; n = n->next) {
        w->f54 += lbl_805DD2C8;
    }
    }
}

}
