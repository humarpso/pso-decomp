#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
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

extern "C" {
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_line_width();
M2C_UNK set_line_width(s32);
void TWindowSubComCard__sub_80245A10(u8 *arg0, s32 arg1, void *r, f32 len);
f32 trunc_float__17TWindowSubComCardFf(f32);
extern u16 lbl_805D63F4;
extern s16 lbl_805D63F6;
void draw_window_scanlines(u8 *arg0, u8 *arg1);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(s32, s32);
extern UVPair_8024503C lbl_8044E664;
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCAE4;
extern const f32 lbl_805DCAE8;
void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2);
extern const f32 lbl_805DCB48;
extern const f32 lbl_805DCB30;
extern const f32 lbl_805DCB28;
extern const f32 lbl_805DCB2C;
M2C_UNK draw_textured_quad_at_depth(void *, f32);
extern const f32 lbl_805DCB48;
void draw_window_frame_strips(u8 *a, Quad_80245D64 *q, Rect_80245D64 *r);
void draw_window_scanlines(u8 *arg0, u8 *arg1);
void draw_window_frame_strips(u8 *a, Quad_80245D64 *q, Rect_80245D64 *r);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv();
void set_draw_texture_and_color(s32, s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCB10;
void draw_window_frame(Card_80245F98 *a, Rect_80245F98 *r);
}

extern "C" {

struct Base_8010B054_8010A710_card_0 { char pad[0x18]; };

struct VObj_8010B054_8010A710_card_0 : Base_8010B054_8010A710_card_0 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};

struct VOff_8024491C_arg0_card_1 { char pad_0[0x38]; char f_38[1]; };

struct VOff_80244958_arg0_card_1 { char pad_0[0x30]; char f_30[1]; };

struct Win_80244DFC { u8 pad[0xC]; Win_80244DFC *next; };

struct Quad_802455CC { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Rect_802455CC { f32 x, y, w, h; u8 pad10[0x20 - 0x10]; f32 px, py, sx, sy; u8 pad30[0x38 - 0x30]; f32 depth; };

void queue_destruction__7TObjectFv(void *);
M2C_UNK allow_rendering__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
f32 get_card_window_scale__20TWindowSubStatusDispFi(s16);
s32 get_card_window_flags__20TWindowSubStatusDispFi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 set_parent__7TObjectFP7TObject(s32, s32);
int TWindowSubComCard__sub_80244774(void);
s32 get_field_20__17TWindowSubComCardFPv(void* p);
f32 TWindowSubComCard__sub_80244784(void *arg0);
f32 calc_offset__17TWindowSubComCardFPv(void *arg0);
f32 get_normalized_progress__17TWindowSubComCardFPv(u8 *arg0);
void reparent_to_main_ctrl__17TWindowSubComCardFi(s32 arg0);
void save_position__17TWindowSubComCardFPv(void* p);
void TWindowSubTradeMain__sub_802448E4(void *arg0);
void fn_8024491C(void *arg0);
void fn_80244958(void *arg0);
s32 fn_80244994(void *arg0);
void fn_802449E0(u8 *arg0);
void TWindow__close(u8 *arg0);
void request_close__19TWindowSubTradeMainFPv(u8 *arg0);
s32 is_window_reveal_complete(u8 *arg0);
void window_request_refresh(u8 *arg0);
void window_request_show(void *arg0);
s32 setup_window_draw_context(u8 *arg0, s32 arg1);
void draw_default_entry__9TWindowDDFi(s32 arg0);
void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0);
bool is_balloon_overlapping(u8 *arg0, u8 *arg1, u8 *arg2);
Win_80244DFC * find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p);
void find_balloon_overlap_for__15TWindowFukidasiFii(s32 arg0, s32 arg1);
void TWindowBase__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
void draw_message_frame_row(u8 *a, Quad_802455CC *q, Rect_802455CC *r);
void update_fade__17TWindowSubComCardFPv(void *arg0);
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 TWindowFukidasi__sub_8024695C(void *);
s32 get_visible_flag__15TWindowFukidasiFPv(void *);
s32 is_bit10_set__15TWindowFukidasiFPv(void *);
s32 TWindowCtrlMain__sub_8024CE24();
M2C_UNK apply_window_closing_stretch(int, int);
M2C_UNK set_open_tick__19TWindowKeyBoardSoftFPvi(int, int);
M2C_UNK set_bounds__19TWindowKeyBoardSoftFPvffff(int, f32, f32, f32, f32);
M2C_UNK shrink_clip_right__19TWindowKeyBoardSoftFPv(int);
M2C_UNK animate_scale__19TWindowKeyBoardSoftFPv();
s32 open_singleton__19TWindowKeyBoardSoftFiiii(void *, void *, void *, int, f32);
M2C_UNK init_window_layout_entries(void *, int, int);
s32 fn_8026CB68();
M2C_UNK TWindowCtrlMain__sub_8026CC28();
M2C_UNK resort_window_order__15TWindowCtrlMainFPv(void *);
M2C_UNK draw_textured_quad_at_depth(void *, f32);

extern int lbl_805D3614;
extern s32 lbl_805D3888;
extern s16 lbl_805D63F6;
extern f32 lbl_805DCAC8;
extern const f32 lbl_805DCACC;
extern const f32 lbl_805DCAD0;
extern const f32 lbl_805DCAD4;
extern const f32 lbl_805DCAD8;
extern const f32 lbl_805DCADC;
extern const f32 lbl_805DCAE0;
extern const f32 lbl_805DCAE4;
extern const f32 lbl_805DCAF4;
extern const f32 lbl_805DCAFC;
extern const f32 lbl_805DCB00;
extern const f32 lbl_805DCB04;
extern const f32 lbl_805DCB0C;
extern const f32 lbl_805DCB10;
extern const f32 lbl_805DCB14;
extern const f32 lbl_805DCB18;
extern const f32 lbl_805DCB1C;
extern const f32 lbl_805DCB20;
extern const f32 lbl_805DCB24;

extern "C" {
s32 try_open__19TWindowKeyBoardSoftFii(void *, Quad_802455CC *);
}

int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

s32 get_field_20__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x20); }

f32 TWindowSubComCard__sub_80244784(void *arg0) {
    f32 v = calc_offset__17TWindowSubComCardFPv(arg0);
    if (v < lbl_805DCAC8) {
        return v;
    }
    return get_normalized_progress__17TWindowSubComCardFPv((u8 *)arg0);
}

f32 calc_offset__17TWindowSubComCardFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / (*(f32 *)&lbl_805DCACC));
    }
    return lbl_805DCAC8;
}

#pragma push
#pragma opt_common_subs off
f32 get_normalized_progress__17TWindowSubComCardFPv(u8 *arg0) {
    s32 temp_r3;
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x2000) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x5C);
    if ((f32) temp_r3 >= lbl_805DCAD0) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    return (f32) temp_r3 / lbl_805DCAD0;
}
#pragma pop

void reparent_to_main_ctrl__17TWindowSubComCardFi(s32 arg0) {
    set_parent__7TObjectFP7TObject((s32)((void*)((void*)(arg0))), (s32)((void*)((void*)(TWindowCtrlMain__sub_8024CE24()))));
}

void save_position__17TWindowSubComCardFPv(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }

void TWindowSubTradeMain__sub_802448E4(void *arg0) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)((void *)((char *)arg0 + 48)));
    M2C_FIELD(arg0, u32 *, 0x50) = 3;
}

void fn_8024491C(void *arg0) {
    struct VOff_8024491C_arg0_card_1 *self = (struct VOff_8024491C_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_38));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 72), self->f_38);
}

void fn_80244958(void *arg0) {
    struct VOff_80244958_arg0_card_1 *self = (struct VOff_80244958_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_30));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 64), self->f_30);
}

#pragma push
#pragma fp_contract on
s32 fn_80244994(void *arg0) {
    if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
        return 0;
    }
    return (s32) ((u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x2C) & 4) >> 5);
}
#pragma pop

void fn_802449E0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFF8);
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    disallow_rendering__7TObjectFv(arg0);
}

void TWindow__close(u8 *arg0) {
    request_close__19TWindowSubTradeMainFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x10);
}

void request_close__19TWindowSubTradeMainFPv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r3 & 1)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (!(temp_r3 & 0x20)) {
        ((M2C_UNK)play_sound_effect((s32)((int) (0x53704)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0))));
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
}

s32 is_window_reveal_complete(u8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCAD0;
}

void window_request_refresh(u8 *arg0) {
    if (!((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCAD0)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
}

void window_request_show(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r3 & 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (get_card_window_scale__20TWindowSubStatusDispFi(M2C_FIELD(arg0, s16 *, 0x20)) > lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 3);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x20)) {
        play_sound_effect((s32)(0x53703), (s32)(0), (s32)(0), (s32)(0));
    }
    allow_rendering__7TObjectFv(arg0);
}

s32 setup_window_draw_context(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 var_r4;
    temp_r31 = ((s32 (*)(void *, void *, void *, f32, int))open_singleton__19TWindowKeyBoardSoftFiiii)((void *) (arg0 + 0x40), (void *) (arg0 + 0x48), (void *) (arg1), (f32) (M2C_FIELD(arg0, f32 *, 0x54)), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
        animate_scale__19TWindowKeyBoardSoftFPv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x80) {
        shrink_clip_right__19TWindowKeyBoardSoftFPv((int) (temp_r31));
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 8) {
        set_bounds__19TWindowKeyBoardSoftFPvffff((int) (temp_r31), (f32) (lbl_805DCAD4), (f32) (lbl_805DCAD4), (f32) (lbl_805DCAD8), (f32) (lbl_805DCADC));
    }
    var_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x2000)) {
        var_r4 = (s32) ((f32) var_r4 - lbl_805DCAD0);
    }
    set_open_tick__19TWindowKeyBoardSoftFPvi((int) (temp_r31), (int) (var_r4));
    apply_window_closing_stretch((int) (temp_r31), (int) (M2C_FIELD(arg0, s16 *, 0x22)));
    return temp_r31;
}

void draw_default_entry__9TWindowDDFi(s32 arg0) {
    ((int (*)(s32, s32))setup_window_draw_context)(arg0, fn_8026CB68());
}

void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0) {
    TWindowCtrlMain__sub_8026CC28();
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    resort_window_order__15TWindowCtrlMainFPv(arg0);
}

bool is_balloon_overlapping(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 0);
    if (temp_f2_2 >= (M2C_FIELD(arg0, f32 *, 0x30) + M2C_FIELD(arg0, f32 *, 0x38))) {
        return 0;
    }
    if ((temp_f2_2 + M2C_FIELD(arg2, f32 *, 0)) <= M2C_FIELD(arg0, f32 *, 0x40)) {
        return 0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    if (temp_f1 >= (temp_f2 + M2C_FIELD(arg0, f32 *, 0x3C))) {
        return 0;
    }
    return ((temp_f1 + M2C_FIELD(arg2, f32 *, 4)) <= temp_f2) == 0;
}

Win_80244DFC *find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p) {
    if (TWindowFukidasi__sub_8024695C(self) == 0) {
        return 0;
    }
    if (is_bit10_set__15TWindowFukidasiFPv(self) != 0) {
        return 0;
    }
    if (fn_80244994(self) == 0) {
        return 0;
    }
    for (; p != 0; p = p->next) {
        if (TWindowFukidasi__sub_8024695C(p) != 0 && is_bit10_set__15TWindowFukidasiFPv(p) == 0 &&
            fn_80244994(p) != 0 && p != self &&
            (get_visible_flag__15TWindowFukidasiFPv(self) == 0 || get_visible_flag__15TWindowFukidasiFPv(p) == 0) &&
            ((s32 (*)(void *, void *, void *))is_balloon_overlapping)(p, a, b) != 0) {
            return p;
        }
    }
    return 0;
}

void find_balloon_overlap_for__15TWindowFukidasiFii(s32 arg0, s32 arg1) {
    find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv((Win_80244DFC *)((void *) (arg0)), (void *)((void *) (arg0 + 0x30)), (void *)((void *) (arg0 + 0x38)), (Win_80244DFC *)((void *) (arg1)));
}

void TWindowBase__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    f32 temp_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3888;
    ((M2C_UNK (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *) (arg0 + 0x30), (void *) (arg2));
    ((M2C_UNK (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *) (arg0 + 0x38), (void *) (arg1));
    ((M2C_UNK (*)(void *))save_position__17TWindowSubComCardFPv)((void *) (arg0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DCAE0;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    ((M2C_UNK (*)(void *, f32))resort_window_order__15TWindowCtrlMainFPv)((void *) (arg0), (f32) (temp_f1));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    init_window_layout_entries((void *) (arg0 + 0x24), (int) (M2C_FIELD(arg1, s32 *, 0xC)), (int) (M2C_FIELD(arg0, s16 *, 0x20)));
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r3 & 1) && !(temp_r3 & 2)) {
        ((M2C_UNK (*)(void *))disallow_rendering__7TObjectFv)((void *) (arg0));
    }
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2) && !(temp_r3_2 & 0x20)) {
        ((M2C_UNK (*)(int, int, int, int))play_sound_effect)((int) (0x53703), (int) (0), (int) (0), (int) (0));
    }
    if (((f32 (*)(int))get_card_window_scale__20TWindowSubStatusDispFi)((int) (M2C_FIELD(arg0, s16 *, 0x20))) <= lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
}

void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2) {
    UVPair_8024503C uv = lbl_8044E664;
    UV_8024503C *p;
    Quad_802455CC q;
    f32 x1;
    f32 x;
    f32 y;
    f32 z;
    f32 t;
    f32 u;
    if (M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        return;
    }
    p = &uv.e[0];
    if (arg2 != 0) {
        p = &uv.e[1];
    }
    y = M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg1, f32 *, 0xC);
    x = M2C_FIELD(arg0, f32 *, 0x10);
    z = lbl_805DCAE4 / (lbl_805DCAE8 + M2C_FIELD(arg0, f32 *, 0x38));
    init_xyz_limits__10TObjPlayerFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(2, -1);
    q.x0 = x - 2.0f;
    q.y0 = y;
    q.x1 = x1 = (16.0f + x) - 2.0f;
    q.y1 = y + M2C_FIELD(arg1, f32 *, 0x14);
    q.u0 = p->u / 256.0f;
    q.v0 = p->v / 256.0f;
    q.u1 = (16.0f + p->u) / 256.0f;
    q.v1 = (18.0f + p->v) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &q) != 0) {
        draw_textured_quad_at_depth(&q, z);
    }
    t = x + M2C_FIELD(arg0, f32 *, 0x18);
    q.x0 = 2.0f + (t - 16.0f);
    q.y0 = y;
    q.x1 = 2.0f + t;
    q.y1 = y + M2C_FIELD(arg1, f32 *, 0x14);
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
    q.x1 = 2.0f + ((x + M2C_FIELD(arg0, f32 *, 0x18)) - 16.0f);
    q.y1 = y + M2C_FIELD(arg1, f32 *, 0x14);
    q.u0 = (16.0f + p->u) / 256.0f;
    q.v0 = p->v / 256.0f;
    q.u1 = (16.0f + (16.0f + p->u)) / 256.0f;
    q.v1 = (18.0f + p->v) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &q) != 0) {
        draw_textured_quad_at_depth(&q, z);
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}

#pragma push
#pragma fp_contract on
bool TWindowSubComCard__sub_80245558(M2C_UNK arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
    temp_f1 = (lbl_805DCB00 * (f32) lbl_805D63F6) - lbl_805DCB04;
    if (temp_f1 <= temp_f2) {
        return 0;
    }
    return !(temp_f1 >= (temp_f2 + M2C_FIELD(arg2, f32 *, 0)));
}
#pragma pop

#pragma push
#pragma fp_contract on
void draw_message_frame_row(u8 *a, Quad_802455CC *q, Rect_802455CC *r) {
    f32 rem;
    f32 t;
    f32 z;
    f32 w;
    if (M2C_FIELD(a, f32 *, 0x48) < lbl_805DCB10) {
        w = lbl_805DCB0C * M2C_FIELD(a, f32 *, 0x48);
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
    q->x0 = (r->x + M2C_FIELD(a, f32 *, 0x48)) - w;
    q->x1 = r->x + M2C_FIELD(a, f32 *, 0x48);
    q->u0 = lbl_805DCB1C;
    q->u1 = lbl_805DCB20;
    q->x0 = r->sx * (q->x0 - r->px) + r->px;
    q->x1 = r->sx * (q->x1 - r->px) + r->px;
    draw_textured_quad_at_depth(q, z);
    q->x0 = lbl_805DCAFC + r->x;
    q->u0 = lbl_805DCB18;
    q->u1 = lbl_805DCB1C;
    rem = r->sx * (M2C_FIELD(a, f32 *, 0x48) - lbl_805DCB10);
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

#pragma push
#pragma fp_contract on
void draw_window_scanlines(u8 *arg0, u8 *arg1) {
    s32 n1;
    s32 i;
    s32 n2;
    f32 step;
    f32 y;
    switch (lbl_805D63F4) {
    case 0:
    case 1:
        return;
    }
    n1 = trunc_float__17TWindowSubComCardFf((12.0f + M2C_FIELD(arg0, f32 *, 0x44)) / 4.0f);
    n2 = trunc_float__17TWindowSubComCardFf((M2C_FIELD(arg0, f32 *, 0x4C) - 24.0f) / 4.0f);
    y = ((5.0f * ((f32)lbl_805D63F6 - 0.2f * (f32)n1) - 100.0f) - 12.0f) - M2C_FIELD(arg0, f32 *, 0x40);
    if (y <= 0.0f) {
        return;
    }
    if (y - (f32)n2 >= M2C_FIELD(arg0, f32 *, 0x48) - 24.0f) {
        return;
    }
    set_line_width(12.0f * M2C_FIELD(arg1, f32 *, 0x2C));
    init_xyz_limits__10TObjPlayerFv();
    step = 1.0f;
    for (i = 0; i < n2; i++) {
        TWindowSubComCard__sub_80245A10(arg0, i, arg1, y);
        y -= step;
    }
    reset_transform_state__10TObjPlayerFv();
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
  set_global_param__8TObjFishFi((s32)((*(void * *)&lbl_805D63F0)));
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
  get_player__20TWindowSubStatusDispFv();
  draw_window_scanlines((u8 *)(a), (u8 *)(r));
}

void update_fade__17TWindowSubComCardFPv(void *arg0) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x50);
    if (temp_r5 == 0) {
        ((M2C_UNK (*)(void))save_position__17TWindowSubComCardFPv)();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x40) += (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x40)) / (f32) temp_r5;
    M2C_FIELD(arg0, f32 *, 0x44) += (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x44)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x48) += (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x48)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) += (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x4C)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, u32 *, 0x50) = (u32) (M2C_FIELD(arg0, u32 *, 0x50) - 1);
}

void update_open_close__17TWindowSubComCardFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r5;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) < 0x01000000) {
        temp_r3 = get_card_window_flags__20TWindowSubStatusDispFi(M2C_FIELD(arg0, s16 *, 0x20));
        temp_r3 += M2C_FIELD(arg0, s32 *, 0x5C);
        M2C_FIELD(arg0, s32 *, 0x5C) = temp_r3 + 1;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r5 & 2)) {
        if ((temp_r5 & 0x10) && (((s32 (*)(void *))TWindowSubAreaMapDisp__sub_80246948)(arg0) != 0)) {
            queue_destruction__7TObjectFv(arg0);
        }
    } else if (temp_r5 & 1) {
        if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCAD0) {
            if (temp_r5 & 4) {
                if (!(temp_r5 & 0x20)) {
                    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x53704, 0U, 0, 0);
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & ~5);
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r5 & 0xFFFFFFFD);
        }
    } else {
        M2C_FIELD(arg0, s16 *, 0x22) = (s16) (M2C_FIELD(arg0, s16 *, 0x22) + 1);
        if ((f32) M2C_FIELD(arg0, s16 *, 0x22) >= lbl_805DCACC) {
            if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x10) {
                disallow_rendering__7TObjectFv(arg0);
                queue_destruction__7TObjectFv(arg0);
            }
            M2C_FIELD(arg0, s16 *, 0x22) = 0;
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
            if (temp_r3 & 4) {
                if (!(temp_r3 & 0x20)) {
                    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x53703, 0U, 0, 0);
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFFB);
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 1);
                M2C_FIELD(arg0, s32 *, 0x5C) = 0;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFD);
            disallow_rendering__7TObjectFv(arg0);
        }
    }
}

}
