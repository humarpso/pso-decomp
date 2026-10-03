#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
f32 TWindowSubComCard__sub_80244818(u8 *arg0);
void TWindowSubComCard__sub_80244888(s32 arg0);
void save_position__17TWindowSubComCardFPv(void* p);
void TWindowSubTradeMain__sub_802448E4(void *arg0);
void fn_8024491C(void *arg0);
void fn_80244958(void *arg0);
s32 fn_80244994(void *arg0);
void fn_802449E0(u8 *arg0);
void TWindow__close(u8 *arg0);
void TWindowSubTradeMain__sub_80244A4C(u8 *arg0);
s32 is_window_reveal_complete(u8 *arg0);
void window_request_refresh(u8 *arg0);
void window_request_show(void *arg0);
s32 setup_window_draw_context(u8 *arg0, s32 arg1);
void draw_default_entry__9TWindowDDFi(s32 arg0);
void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0);
bool fn_80244D70(u8 *arg0, u8 *arg1, u8 *arg2);
Win_80244DFC * find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p);
void TWindowFukidasi__sub_80244F00(s32 arg0, s32 arg1);
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
M2C_UNK TWindowCtrlMain__sub_8026CCA4(void *);
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

int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

s32 get_field_20__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x20); }

f32 TWindowSubComCard__sub_80244784(void *arg0) {
    f32 v = calc_offset__17TWindowSubComCardFPv(arg0);
    if (v < lbl_805DCAC8) {
        return v;
    }
    return TWindowSubComCard__sub_80244818((u8 *)arg0);
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
f32 TWindowSubComCard__sub_80244818(u8 *arg0) {
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

void TWindowSubComCard__sub_80244888(s32 arg0) {
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
    TWindowSubTradeMain__sub_80244A4C((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x10);
}

void TWindowSubTradeMain__sub_80244A4C(u8 *arg0) {
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
    TWindowCtrlMain__sub_8026CCA4(arg0);
}

bool fn_80244D70(u8 *arg0, u8 *arg1, u8 *arg2) {
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
            ((s32 (*)(void *, void *, void *))fn_80244D70)(p, a, b) != 0) {
            return p;
        }
    }
    return 0;
}

void TWindowFukidasi__sub_80244F00(s32 arg0, s32 arg1) {
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
    ((M2C_UNK (*)(void *, f32))TWindowCtrlMain__sub_8026CCA4)((void *) (arg0), (f32) (temp_f1));
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

void TWindowSubComCard__sub_80246464(u8 *arg0) {
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
