#include "types.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowFukidasi.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/TObject.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct UV_8024503C { f32 u, v; };

struct UVPair_8024503C { UV_8024503C e[2]; };

struct Quad_80245D64
{
  f32 x0;
  f32 y0;
  f32 x1;
  f32 y1;
  f32 u0;
  f32 v0;
  f32 u1;
  f32 v1;
};

struct Rect_80245D64
{
  f32 x;
  f32 y;
  f32 w;
  f32 h;
  u8 pad10[0x20 - 0x10];
  f32 px;
  f32 py;
  f32 sx;
  f32 sy;
  u8 pad30[0x38 - 0x30];
  f32 depth;
};

struct Quad_80245F98
{
  f32 x0;
  f32 y0;
  f32 x1;
  f32 y1;
  f32 u0;
  f32 v0;
  f32 u1;
  f32 v1;
};

struct Rect_80245F98
{
  f32 x;
  f32 y;
  f32 w;
  f32 h;
  u8 pad10[0x20 - 0x10];
  f32 px;
  f32 py;
  f32 sx;
  f32 sy;
  s32 f30;
  s32 f34;
  f32 depth;
};

struct Card_80245F98
{
  u8 pad0[0x4C];
  f32 f4C;
};

struct QFrameQuad_80245808
{
  f32 x;
  f32 y;
  f32 right;
  f32 bottom;
  f32 u;
  f32 v;
  f32 uRight;
  f32 vBottom;
};

struct QFrameWindow_80245808
{
  u8 pad[0x4c];
  f32 height;
};

struct QFrameCtx_80245808
{
  f32 x;
  f32 y;
  u8 pad[0x1c];
  f32 pivotY;
  u8 pad2[4];
  f32 scaleY;
};

extern "C" {
void reset_line_width(void);
void set_line_width(int a0);
void TWindowSubComCard__sub_80245A10(u8 *arg0, s32 arg1, void *r, f32 len);
extern u16 window_ui_theme_index;
extern s16 lbl_805D63F6;
void draw_window_scanlines(u8 *arg0, u8 *arg1);
void begin_screen_draw(s32);
s32 draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(s32, s32);
extern UVPair_8024503C selection_bar_texture_coordinates;
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCAE4;
extern const f32 lbl_805DCAE8;
void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2);
extern const f32 lbl_805DCB48;
extern const f32 lbl_805DCB28;
extern const f32 lbl_805DCB2C;
void draw_window_frame_strips(u8 *a, Quad_80245D64 *q, Rect_80245D64 *r);
extern const f32 lbl_805DCB10;
void draw_window_frame(Card_80245F98 *a, Rect_80245F98 *r);
extern const f32 lbl_805DCAD4;
extern const f32 lbl_805DCAFC;
struct VOff_8024491C_arg0_card_1 { char pad_0[0x38]; char f_38[1]; };

struct VOff_80244958_arg0_card_1 { char pad_0[0x30]; char f_30[1]; };

struct Win_80244DFC { u8 pad[0xC]; Win_80244DFC *next; };

struct Quad_802455CC { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Rect_802455CC { f32 x, y, w, h; u8 pad10[0x20 - 0x10]; f32 px, py, sx, sy; u8 pad30[0x38 - 0x30]; f32 depth; };

void queue_destruction__7TObjectFv(void *);
void allow_rendering__7TObjectFv(void *arg0);
void disallow_rendering__7TObjectFv(void *);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void*);
s32 play_sound_effect(s32, s32, s32, s32);
int TWindowSubComCard__sub_80244774(void);
f32 TWindowSubComCard__sub_80244784(void *arg0);
void save_position__13TUnk_804CE018Fv(void* p);
void TWindowSubTradeMain__sub_802448E4(void *arg0);
void fn_8024491C(void *arg0);
void fn_80244958(void *arg0);
void fn_802449E0(u8 *arg0);
void TWindow__close(u8 *arg0);
void window_request_refresh(u8 *arg0);
void window_request_show(void *arg0);
bool is_balloon_overlapping(u8 *arg0, u8 *arg1, u8 *arg2);
Win_80244DFC * find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p);
void draw_message_frame_row(u8 *a, Quad_802455CC *q, Rect_802455CC *r);
s32 sub_80246948__13TUnk_804CE018Fv();
int TWindowFukidasi__sub_8024695C(void *p);
s32 TWindowCtrlMain__sub_8024CE24();
void apply_window_closing_stretch(u8 *arg0, int arg1);
s32 animate_scale__19TWindowKeyBoardSoftFv();
s32 open_singleton__19TWindowKeyBoardSoftFiiii(void *, void *, void *, int, f32);
s32 init_window_layout_entries(void *, int, int);
char *fn_8026CB68(void);
s32 sub_8026CC28__13TUnk_804CE018Fv();
s32 resort_window_order__15TWindowCtrlMainFv(void *);

extern int lbl_805D3614;
extern s32 lbl_805D3888;
extern f32 lbl_805DCAC8;
extern const f32 lbl_805DCACC;
extern const f32 lbl_805DCAD0;
extern const f32 lbl_805DCAD8;
extern const f32 lbl_805DCADC;
extern const f32 lbl_805DCAE0;
extern const f32 lbl_805DCAF4;
extern const f32 lbl_805DCB00;
extern const f32 lbl_805DCB04;
extern const f32 lbl_805DCB0C;
extern const f32 lbl_805DCB14;
extern const f32 lbl_805DCB18;
extern const f32 lbl_805DCB1C;
extern const f32 lbl_805DCB20;
extern const f32 lbl_805DCB24;

extern "C" {
s32 try_open__19TWindowKeyBoardSoftFii(void *, Quad_802455CC *);
}

int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

s32 TWindowSubComCard::get_field_20() { return *(s32 *)&this->m_20; }

f32 TWindowSubComCard__sub_80244784(void *arg0) {
    f32 v = ((TWindowSubComCard *)arg0)->calc_offset();
    if (v < lbl_805DCAC8) {
        return v;
    }
    return ((TWindowSubComCard *)arg0)->get_normalized_progress();
}

f32 TWindowSubComCard::calc_offset() {
    s16 temp_r3;

    temp_r3 = *(s16 *)((s8 *)this + 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / (*(f32 *)&lbl_805DCACC));
    }
    return lbl_805DCAC8;
}

#pragma push
#pragma opt_common_subs off
f32 TWindowSubComCard::get_normalized_progress() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    if (*(s32 *)&this->m_2c & 0x2000) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    temp_r3 = *(s32 *)&this->m_5c;
    if ((f32) temp_r3 >= lbl_805DCAD0) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    return (f32) temp_r3 / lbl_805DCAD0;
}
#pragma pop

void TWindowSubComCard::reparent_to_main_ctrl() {
    s32 arg0 = (s32)this;
    ((TObject *)arg0)->set_parent((TObject *)(TWindowCtrlMain__sub_8024CE24()));
}

void TUnk_804CE018::save_position() { *(f32*)((char*)this + 0x40) = *(f32*)((char*)this + 0x30); *(f32*)((char*)this + 0x44) = *(f32*)((char*)this + 0x34); *(f32*)((char*)this + 0x48) = *(f32*)((char*)this + 0x38); *(f32*)((char*)this + 0x4c) = *(f32*)((char*)this + 0x3c); }

void TWindowSubTradeMain__sub_802448E4(void *arg0) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv((void*)((void *)((char *)arg0 + 48)));
    *(u32 *)((s8 *)arg0 + 0x50) = 3;
}

void fn_8024491C(void *arg0) {
    struct VOff_8024491C_arg0_card_1 *self = (struct VOff_8024491C_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv((void*)(self->f_38));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPv)((void *)((char *)arg0 + 72), self->f_38);
}

void fn_80244958(void *arg0) {
    struct VOff_80244958_arg0_card_1 *self = (struct VOff_80244958_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv((void*)(self->f_30));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPv)((void *)((char *)arg0 + 64), self->f_30);
}

#pragma push
#pragma fp_contract on
s32 TUnk_804CE018::sub_80244994() {
    if (sub_80246948__13TUnk_804CE018Fv() != 0) {
        return 0;
    }
    return (s32) ((u32) __cntlzw(*(s32 *)((s8 *)this + 0x2C) & 4) >> 5);
}
#pragma pop

void fn_802449E0(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) & 0xFFFFFFF8);
    *(s16 *)((s8 *)arg0 + 0x22) = 0;
    disallow_rendering__7TObjectFv(arg0);
}

void TWindow__close(u8 *arg0) {
    ((TWindowLockOn *)arg0)->request_close();
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) | 0x10);
}

void TWindowLockOn::request_close() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    temp_r3 = *(s32 *)&(*(u32 *)((u8 *)this + 0x2C));
    if (!(temp_r3 & 1)) {
        *(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        *(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) = (s32) (temp_r3 | 4);
        return;
    }
    if (!(temp_r3 & 0x20)) {
        ((s32)play_sound_effect((s32)((int) (0x53704)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0))));
    }
    *(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) = (s32) (*(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) & 0xFFFFFFFE);
    *(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) = (s32) (*(s32 *)&(*(u32 *)((u8 *)this + 0x2C)) | 2);
}

s32 TUnk_804CE018::is_window_reveal_complete() {
    return (f32) *(s32 *)((s8 *)((u8 *)this) + 0x5C) >= lbl_805DCAD0;
}

void window_request_refresh(u8 *arg0) {
    if (!((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DCAD0)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 7;
    }
}

void window_request_show(void *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((s8 *)arg0 + 0x2C);
    if (temp_r3 & 1) {
        *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (TWindowSubStatusDisp::get_card_window_scale(*(s16 *)((s8 *)arg0 + 0x20)) > lbl_805DCAD4) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) | 3);
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 0x20)) {
        play_sound_effect((s32)(0x53703), (s32)(0), (s32)(0), (s32)(0));
    }
    allow_rendering__7TObjectFv(arg0);
}

s32 TUnk_804CE018::setup_window_draw_context(s32 arg1) {
    s32 temp_r31;
    s32 var_r4;
    temp_r31 = ((s32 (*)(void *, void *, void *, f32, int))open_singleton__19TWindowKeyBoardSoftFiiii)((void *) (((u8 *)this) + 0x40), (void *) (((u8 *)this) + 0x48), (void *) (arg1), (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x54)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x2C)));
    if (*(s32 *)((s8 *)((u8 *)this) + 0x2C) & 0x40) {
        animate_scale__19TWindowKeyBoardSoftFv();
    }
    if (*(s32 *)((s8 *)((u8 *)this) + 0x2C) & 0x80) {
        ((TWindowKeyBoardSoft *)temp_r31)->shrink_clip_right();
    }
    if (*(s32 *)((s8 *)((u8 *)this) + 0x2C) & 8) {
        ((TWindowKeyBoardSoft *)temp_r31)->set_bounds((f32) (lbl_805DCAD4), (f32) (lbl_805DCAD4), (f32) (lbl_805DCAD8), (f32) (lbl_805DCADC));
    }
    var_r4 = *(s32 *)((s8 *)((u8 *)this) + 0x5C);
    if (!(*(s32 *)((s8 *)((u8 *)this) + 0x2C) & 0x2000)) {
        var_r4 = (s32) ((f32) var_r4 - lbl_805DCAD0);
    }
    ((TWindowKeyBoardSoft *)temp_r31)->set_open_tick((int) (var_r4));
    apply_window_closing_stretch((u8 *)(temp_r31), (*(s16 *)((s8 *)((u8 *)this) + 0x22)));
    return temp_r31;
}

s32 TWindowDD::draw_default_entry(s32 arg0) {
    return ((TUnk_804CE018 *)arg0)->setup_window_draw_context((s32)fn_8026CB68());
}

void TLobby::set_field_1c(f32 farg0) {
    sub_8026CC28__13TUnk_804CE018Fv();
    *(f32 *)((s8 *)this + 0x1C) = farg0;
    resort_window_order__15TWindowCtrlMainFv(this);
}

bool is_balloon_overlapping(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    temp_f2_2 = *(f32 *)((s8 *)arg1 + 0);
    if (temp_f2_2 >= (*(f32 *)((s8 *)arg0 + 0x30) + *(f32 *)((s8 *)arg0 + 0x38))) {
        return 0;
    }
    if ((temp_f2_2 + *(f32 *)((s8 *)arg2 + 0)) <= *(f32 *)((s8 *)arg0 + 0x40)) {
        return 0;
    }
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x34);
    temp_f1 = *(f32 *)((s8 *)arg1 + 4);
    if (temp_f1 >= (temp_f2 + *(f32 *)((s8 *)arg0 + 0x3C))) {
        return 0;
    }
    return ((temp_f1 + *(f32 *)((s8 *)arg2 + 4)) <= temp_f2) == 0;
}

Win_80244DFC *find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p) {
    if (TWindowFukidasi__sub_8024695C(self) == 0) {
        return 0;
    }
    if (((TWindowFukidasi *)self)->is_bit10_set() != 0) {
        return 0;
    }
    if (((TUnk_804CE018 *)self)->sub_80244994() == 0) {
        return 0;
    }
    for (; p != 0; p = p->next) {
        if (TWindowFukidasi__sub_8024695C(p) != 0 && ((TWindowFukidasi *)p)->is_bit10_set() == 0 &&
            ((TUnk_804CE018 *)p)->sub_80244994() != 0 && p != self &&
            (((TWindowFukidasi *)self)->get_visible_flag() == 0 || ((TWindowFukidasi *)p)->get_visible_flag() == 0) &&
            ((s32 (*)(void *, void *, void *))is_balloon_overlapping)(p, a, b) != 0) {
            return p;
        }
    }
    return 0;
}

void TWindowFukidasi::find_balloon_overlap_for(s32 arg1) {
    s32 arg0 = (s32)this;
    find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv((Win_80244DFC *)((void *) (arg0)), (void *)((void *) (arg0 + 0x30)), (void *)((void *) (arg0 + 0x38)), (Win_80244DFC *)((void *) (arg1)));
}

void TUnk_804CE018::sub_80244F2C(u8 *arg1, u8 *arg2, s16 arg3) {
    f32 temp_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    *(s32 *)((s8 *)((u8 *)this) + 0) = (s32) lbl_805D3888;
    ((s32 (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPv)((void *) (((u8 *)this) + 0x30), (void *) (arg2));
    ((s32 (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPv)((void *) (((u8 *)this) + 0x38), (void *) (arg1));
    ((s32 (*)(void *))save_position__13TUnk_804CE018Fv)((void *) (((u8 *)this)));
    temp_f1 = *(f32 *)((s8 *)arg1 + 8);
    *(f32 *)((s8 *)((u8 *)this) + 0x1C) = temp_f1;
    *(f32 *)((s8 *)((u8 *)this) + 0x54) = (f32) lbl_805DCAE0;
    *(s32 *)((s8 *)((u8 *)this) + 0x2C) = (s32) *(s32 *)((s8 *)arg1 + 0x10);
    ((s32 (*)(void *, f32))resort_window_order__15TWindowCtrlMainFv)((void *) (((u8 *)this)), (f32) (temp_f1));
    *(s32 *)((s8 *)((u8 *)this) + 0x50) = 0;
    *(s16 *)((s8 *)((u8 *)this) + 0x20) = arg3;
    init_window_layout_entries((void *) (((u8 *)this) + 0x24), (int) (*(s32 *)((s8 *)arg1 + 0xC)), (int) (*(s16 *)((s8 *)((u8 *)this) + 0x20)));
    *(s32 *)((s8 *)((u8 *)this) + 0x5C) = 0;
    *(s16 *)((s8 *)((u8 *)this) + 0x22) = 0;
    temp_r3 = *(s32 *)((s8 *)((u8 *)this) + 0x2C);
    if (!(temp_r3 & 1) && !(temp_r3 & 2)) {
        ((s32 (*)(void *))disallow_rendering__7TObjectFv)((void *) (((u8 *)this)));
    }
    temp_r3_2 = *(s32 *)((s8 *)((u8 *)this) + 0x2C);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2) && !(temp_r3_2 & 0x20)) {
        ((s32 (*)(int, int, int, int))play_sound_effect)((int) (0x53703), (int) (0), (int) (0), (int) (0));
    }
    if (TWindowSubStatusDisp::get_card_window_scale((int) (*(s16 *)((s8 *)((u8 *)this) + 0x20))) <= lbl_805DCAD4) {
        *(s32 *)((s8 *)((u8 *)this) + 0x5C) = 0x01000000;
    }
}

void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2) {
    UVPair_8024503C uv = selection_bar_texture_coordinates;
    UV_8024503C *p;
    Quad_802455CC q;
    f32 x1;
    f32 x;
    f32 y;
    f32 z;
    f32 t;
    f32 u;
    if (*(s32 *)((s8 *)arg0 + 0x30) < 0) {
        return;
    }
    p = &uv.e[0];
    if (arg2 != 0) {
        p = &uv.e[1];
    }
    y = *(f32 *)((s8 *)arg0 + 0x14) + *(f32 *)((s8 *)arg1 + 0xC);
    x = *(f32 *)((s8 *)arg0 + 0x10);
    z = lbl_805DCAE4 / (lbl_805DCAE8 + *(f32 *)((s8 *)arg0 + 0x38));
    TObjPlayer::init_xyz_limits();
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D63F0);
    set_draw_texture_and_color(2, -1);
    q.x0 = x - 2.0f;
    q.y0 = y;
    q.x1 = x1 = (16.0f + x) - 2.0f;
    q.y1 = y + *(f32 *)((s8 *)arg1 + 0x14);
    q.u0 = p->u / 256.0f;
    q.v0 = p->v / 256.0f;
    q.u1 = (16.0f + p->u) / 256.0f;
    q.v1 = (18.0f + p->v) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &q) != 0) {
        draw_textured_quad_at_depth(&q, z);
    }
    t = x + *(f32 *)((s8 *)arg0 + 0x18);
    q.x0 = 2.0f + (t - 16.0f);
    q.y0 = y;
    q.x1 = 2.0f + t;
    q.y1 = y + *(f32 *)((s8 *)arg1 + 0x14);
    u = 32.0f + p->u;
    q.u0 = u / 256.0f;
    q.v0 = p->v / 256.0f;
    q.u1 = (16.0f + u) / 256.0f;
    q.v1 = (18.0f + p->v) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &q) != 0) {
        draw_textured_quad_at_depth(&q, z);
    }
    q.x0 = x1;
    q.y0 = y;
    q.x1 = 2.0f + ((x + *(f32 *)((s8 *)arg0 + 0x18)) - 16.0f);
    q.y1 = y + *(f32 *)((s8 *)arg1 + 0x14);
    q.u0 = (16.0f + p->u) / 256.0f;
    q.v0 = p->v / 256.0f;
    q.u1 = (16.0f + (16.0f + p->u)) / 256.0f;
    q.v1 = (18.0f + p->v) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &q) != 0) {
        draw_textured_quad_at_depth(&q, z);
    }
    TWindowSubStatusDisp::get_player();
    TObjPlayer::reset_transform_state();
}

#pragma push
#pragma fp_contract on
bool TWindowSubComCard__sub_80245558(s32 arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg1 + 0);
    temp_f1 = (lbl_805DCB00 * (f32) lbl_805D63F6) - lbl_805DCB04;
    if (temp_f1 <= temp_f2) {
        return 0;
    }
    return !(temp_f1 >= (temp_f2 + *(f32 *)((s8 *)arg2 + 0)));
}
#pragma pop

#pragma push
#pragma fp_contract on
void draw_message_frame_row(u8 *a, Quad_802455CC *q, Rect_802455CC *r) {
    f32 rem;
    f32 t;
    f32 z;
    f32 w;
    if (*(f32 *)((s8 *)a + 0x48) < lbl_805DCB10) {
        w = lbl_805DCB0C * *(f32 *)((s8 *)a + 0x48);
    } else {
        w = lbl_805DCAFC;
    }
    z = lbl_805DCAE4 / r->depth;
    q->x0 = r->x;
    q->x1 = r->x + w;
    q->u0 = lbl_805DCB14;
    q->u1 = lbl_805DCB18;
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    q->x1 = r->sx * (q->x1 - r->px) + r->px;
    draw_textured_quad_at_depth(q, z);
    q->x0 = (r->x + *(f32 *)((s8 *)a + 0x48)) - w;
    q->x1 = r->x + *(f32 *)((s8 *)a + 0x48);
    q->u0 = lbl_805DCB1C;
    q->u1 = lbl_805DCB20;
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    q->x1 = r->sx * (q->x1 - r->px) + r->px;
    draw_textured_quad_at_depth(q, z);
    q->x0 = lbl_805DCAFC + r->x;
    q->u0 = lbl_805DCB18;
    q->u1 = lbl_805DCB1C;
    rem = r->sx * (*(f32 *)((s8 *)a + 0x48) - lbl_805DCB10);
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    while (rem >= lbl_805DCAD4) {
        if (rem < lbl_805DCAFC) {
            q->x1 = q->x0 + rem;
            t = lbl_805DCB24 + rem;
            q->u1 = t * lbl_805DCAF4;
        } else {
            q->x1 = lbl_805DCAFC + q->x0;
        }
        draw_textured_quad_at_depth(q, z);
        rem -= lbl_805DCAFC;
        q->x0 = q->x0 + lbl_805DCAFC;
    }
}
#pragma pop

typedef struct QFrameCtx_80245808 QFrameCtx_80245808;
typedef struct QFrameQuad_80245808 QFrameQuad_80245808;
typedef struct QFrameWindow_80245808 QFrameWindow_80245808;
#pragma fp_contract on
void TUnk_804CE018::draw_quest_message_frame(void *c_arg) {
    struct QFrameCtx_80245808 *c = (struct QFrameCtx_80245808 *)c_arg;
  struct QFrameQuad_80245808 q;
  f32 step;
  f32 rem;
  f32 half;
  begin_screen_draw((s32)(1));
  TObjFish::set_global_param((s32)((*(void * *)&lbl_805D63F0)));
  set_draw_texture_and_color((s32)(1), (s32)(-1));
  if (((struct QFrameWindow_80245808 *)this)->height < 64.0f)
  {
    half = 0.5f * ((struct QFrameWindow_80245808 *)this)->height;
  }
  else
  {
    half = 32.0f;
  }
  q.y = c->y;
  q.bottom = c->y + half;
  q.v = 0.0f;
  q.vBottom = 0.125f;
  q.y = (c->scaleY * (q.y - c->pivotY)) + c->pivotY;
  q.bottom = (c->scaleY * (q.bottom - c->pivotY)) + c->pivotY;
  draw_message_frame_row((u8 *)(((struct QFrameWindow_80245808 *)this)), (Quad_802455CC *)(&q), (Rect_802455CC *)(c));
  q.bottom = c->y + ((struct QFrameWindow_80245808 *)this)->height;
  q.y = q.bottom - half;
  q.v = 0.25f;
  q.vBottom = 0.375f;
  q.y = (c->scaleY * (q.y - c->pivotY)) + c->pivotY;
  q.bottom = (c->scaleY * (q.bottom - c->pivotY)) + c->pivotY;
  draw_message_frame_row((u8 *)(((struct QFrameWindow_80245808 *)this)), (Quad_802455CC *)(&q), (Rect_802455CC *)(c));
  q.y = lbl_805DCAFC + c->y;
  q.v = lbl_805DCB28;
  q.vBottom = lbl_805DCB2C;
  step = lbl_805DCAFC * c->scaleY;
  rem = ((struct QFrameWindow_80245808 *)this)->height - lbl_805DCB10;
  q.y = (c->scaleY * (q.y - c->pivotY)) + c->pivotY;
  step = lbl_805DCAFC * c->scaleY;
  while (rem >= lbl_805DCAD4)
  {
    if (rem < lbl_805DCAFC)
    {
      step = rem * ((float) c->scaleY);
      q.vBottom = (lbl_805DCAFC + rem) / 256.0f;
    }
    q.bottom = q.y + step;
    draw_message_frame_row((u8 *)(((struct QFrameWindow_80245808 *)this)), (Quad_802455CC *)(&q), (Rect_802455CC *)(c));
    rem -= lbl_805DCAFC;
    q.y += step;
  }
  TWindowSubStatusDisp::get_player();
}

#pragma push
#pragma fp_contract on
void draw_window_scanlines(u8 *arg0, u8 *arg1) {
    s32 n1;
    s32 i;
    s32 n2;
    f32 step;
    f32 y;
    switch (window_ui_theme_index) {
    case 0:
    case 1:
        return;
    }
    n1 = TWindowSubComCard::trunc_float((12.0f + *(f32 *)((s8 *)arg0 + 0x44)) / 4.0f);
    n2 = TWindowSubComCard::trunc_float((*(f32 *)((s8 *)arg0 + 0x4C) - 24.0f) / 4.0f);
    y = ((5.0f * ((f32)lbl_805D63F6 - 0.2f * (f32)n1) - 100.0f) - 12.0f) - *(f32 *)((s8 *)arg0 + 0x40);
    if (y <= 0.0f) {
        return;
    }
    if (y - (f32)n2 >= *(f32 *)((s8 *)arg0 + 0x48) - 24.0f) {
        return;
    }
    set_line_width(12.0f * *(f32 *)((s8 *)arg1 + 0x2C));
    TObjPlayer::init_xyz_limits();
    step = 1.0f;
    for (i = 0; i < n2; i++) {
        TWindowSubComCard__sub_80245A10(arg0, i, arg1, y);
        y -= step;
    }
    TObjPlayer::reset_transform_state();
    reset_line_width();
}
#pragma pop

typedef struct Quad_80245D64 Quad_80245D64;
typedef struct Rect_80245D64 Rect_80245D64;
#pragma push
#pragma fp_contract on
void draw_window_frame_strips(u8 *a, Quad_80245D64 *q, Rect_80245D64 *r) {
  f32 rem;
  f32 t;
  f32 z;
  f32 w;
  z = (-1.0f) / r->depth;
  w = 0.5f * (*((f32 *) (((s8 *) a) + 0x48)));
  if (w > 32.0f)
  {
    w = 32.0f;
  }
  q->x0 = r->x;
  q->x1 = r->x + w;
  q->u0 = 0.0f;
  q->u1 = w / 256.0f;
  q->x0 = (r->sx * (q->x0 - r->px)) + r->px;
  q->x1 = (r->sx * (q->x1 - r->px)) + r->px;
  ((void (*)(void *, f32))draw_textured_quad_at_depth)(q, z);
  q->x0 = (r->x + (*((f32 *) (((s8 *) a) + 0x48)))) - w;
  q->x1 = r->x + (*((f32 *) (((s8 *) a) + 0x48)));
  q->u0 = (lbl_805DCB48 - w) / 256.0f;
  q->u1 = 0.375f;
  q->x0 = (r->sx * (q->x0 - r->px)) + r->px;
  q->x1 = (r->sx * (q->x1 - r->px)) + r->px;
  ((void (*)(void *, f32))draw_textured_quad_at_depth)(q, z);
  q->x0 = 32.0f + r->x;
  q->u0 = 0.125f;
  q->u1 = 0.25f;
  rem = r->sx * ((*((f32 *) (((s8 *) a) + 0x48))) - 64.0f);
  q->x0 = (r->sx * (q->x0 - r->px)) + r->px;
  while (rem >= lbl_805DCAD4)
  {
    if (rem < 32.0f)
    {
      q->x1 = q->x0 + rem;
      t = 32.0f + rem;
      q->u1 = t * lbl_805DCAF4;
    }
    else
    {
      q->x1 = 32.0f + q->x0;
    }
    ((void (*)(void *, f32))draw_textured_quad_at_depth)(q, z);
    rem -= 32.0f;
    q->x0 += 32.0f;
  }

}
#pragma pop

typedef struct Card_80245F98 Card_80245F98;
typedef struct Quad_80245F98 Quad_80245F98;
typedef struct Rect_80245F98 Rect_80245F98;
#pragma fp_contract on
void draw_window_frame(Card_80245F98 *a, Rect_80245F98 *r) {
  Quad_80245F98 q;
  s32 n;
  f32 h;
  f32 dy;
  f32 rem;
  begin_screen_draw(1);
  TObjFish::set_global_param((s32)((*(void * *)&lbl_805D63F0)));
  set_draw_texture_and_color(1, r->f34);
  n = (s32) a->f4C;
  n += (4 - (n & 3)) & 3;
  if (((f32) n) < 64.0f)
  {
    h = 0.5f * n;
  }
  else
  {
    h = 32.0f;
  }
  q.y0 = r->y;
  q.y1 = r->y + h;
  q.v0 = 0.0f;
  q.v1 = h / 256.0f;
  q.y0 = (r->sy * (q.y0 - r->py)) + r->py;
  q.y1 = (r->sy * (q.y1 - r->py)) + r->py;
  draw_window_frame_strips((u8 *)(a), (Quad_80245D64 *)(&q), (Rect_80245D64 *)(r));
  q.y0 = (r->y + n) - h;
  q.y1 = r->y + n;
  q.v0 = (96.0f - h) / 256.0f;
  q.v1 = 0.375f;
  q.y0 = (r->sy * (q.y0 - r->py)) + r->py;
  q.y1 = (r->sy * (q.y1 - r->py)) + r->py;
  draw_window_frame_strips((u8 *)(a), (Quad_80245D64 *)(&q), (Rect_80245D64 *)(r));
  q.y0 = 32.0f + r->y;
  q.v0 = 0.125f;
  q.v1 = 0.25f;
  rem = n - lbl_805DCB10;
  q.y0 = (r->sy * (q.y0 - r->py)) + r->py;
  dy = 32.0f * r->sy;
  while (rem >= 0.0f)
  {
    if (rem < 32.0f)
    {
      dy = rem * r->sy;
      q.v1 = (32.0f + rem) / 256.0f;
    }
    q.y1 = q.y0 + dy;
    draw_window_frame_strips((u8 *)(a), (Quad_80245D64 *)(&q), (Rect_80245D64 *)(r));
    rem -= 32.0f;
    q.y0 += dy;
  }
  TWindowSubStatusDisp::get_player();
  draw_window_scanlines((u8 *)(a), (u8 *)(r));
}

void TUnk_804CE018::update_fade() {
    u32 temp_r5;

    temp_r5 = (*(u32 *)((u8 *)this + 0x50));
    if (temp_r5 == 0) {
        ((s32 (*)(void))save_position__13TUnk_804CE018Fv)();
        return;
    }
    *(f32 *)&(*(s32 *)((u8 *)this + 0x40)) += (*(f32 *)&(*(void * *)((u8 *)this + 0x30)) - *(f32 *)&(*(s32 *)((u8 *)this + 0x40))) / (f32) temp_r5;
    *(f32 *)((s8 *)this + 0x44) += (*(f32 *)((s8 *)this + 0x34) - *(f32 *)((s8 *)this + 0x44)) / (f32) (*(u32 *)((u8 *)this + 0x50));
    (*(f32 *)((u8 *)this + 0x48)) += ((*(f32 *)((u8 *)this + 0x38)) - (*(f32 *)((u8 *)this + 0x48))) / (f32) (*(u32 *)((u8 *)this + 0x50));
    *(f32 *)((s8 *)this + 0x4C) += (*(f32 *)((s8 *)this + 0x3C) - *(f32 *)((s8 *)this + 0x4C)) / (f32) (*(u32 *)((u8 *)this + 0x50));
    (*(u32 *)((u8 *)this + 0x50)) = (u32) ((*(u32 *)((u8 *)this + 0x50)) - 1);
}

void TWindowSubComCard::update_open_close() {
    u8 *arg0 = (u8 *)this;
    s32 card_window_flags;
    s32 temp_r5;

    if ((s32) *(s32 *)&this->m_5c < 0x01000000) {
        card_window_flags = TWindowSubStatusDisp::get_card_window_flags(*(s16 *)&this->m_20);
        card_window_flags += *(s32 *)&this->m_5c;
        *(s32 *)&this->m_5c = card_window_flags + 1;
    }
    temp_r5 = *(s32 *)&this->m_2c;
    if (!(temp_r5 & 2)) {
        if ((temp_r5 & 0x10) && (((s32 (*)(void *))sub_80246948__13TUnk_804CE018Fv)(arg0) != 0)) {
            queue_destruction__7TObjectFv(arg0);
        }
    } else if (temp_r5 & 1) {
        if ((f32) *(s32 *)&this->m_5c >= lbl_805DCAD0) {
            if (temp_r5 & 4) {
                if (!(temp_r5 & 0x20)) {
                    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x53704, 0U, 0, 0);
                }
                *(s32 *)&this->m_2c = (s32) (*(s32 *)&this->m_2c & ~5);
                return;
            }
            *(s32 *)&this->m_2c = (s32) (temp_r5 & 0xFFFFFFFD);
        }
    } else {
        *(s16 *)((s8 *)arg0 + 0x22) = (s16) (*(s16 *)((s8 *)arg0 + 0x22) + 1);
        if ((f32) *(s16 *)((s8 *)arg0 + 0x22) >= lbl_805DCACC) {
            if (*(s32 *)&this->m_2c & 0x10) {
                disallow_rendering__7TObjectFv(arg0);
                queue_destruction__7TObjectFv(arg0);
            }
            *(s16 *)((s8 *)arg0 + 0x22) = 0;
            card_window_flags = *(s32 *)&this->m_2c;
            if (card_window_flags & 4) {
                if (!(card_window_flags & 0x20)) {
                    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x53703, 0U, 0, 0);
                }
                *(s32 *)&this->m_2c = (s32) (*(s32 *)&this->m_2c & 0xFFFFFFFB);
                *(s32 *)&this->m_2c = (s32) (*(s32 *)&this->m_2c | 1);
                *(s32 *)&this->m_5c = 0;
                return;
            }
            *(s32 *)&this->m_2c = (s32) (card_window_flags & 0xFFFFFFFD);
            disallow_rendering__7TObjectFv(arg0);
        }
    }
}

}
