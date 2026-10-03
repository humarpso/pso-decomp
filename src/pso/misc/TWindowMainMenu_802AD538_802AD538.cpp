#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Item_802ADADC { u8 pad[0x12]; u8 f12; };

struct Obj_802ADADC { u8 pad[0x61]; s8 idx; u8 pad2[0x124 - 0x62]; Item_802ADADC *items[8]; };

struct Item_802ADAAC { u8 pad[0x11]; s8 f11; };

struct Obj_802ADAAC { u8 pad[0x61]; s8 idx; u8 pad2[0x124 - 0x62]; Item_802ADAAC *items[8]; };

struct MM_802AD90C {
    u8 pad0[0x60];
    u8 flags;
    u8 pad61;
    s16 cnt;
    u8 pad64[0x124 - 0x64];
    void *slots[8];
};

struct Hd_802ADA48 { u32 w[4]; };

struct Col_802ADA48 { Hd_802ADA48 h; u8 b0, b1, b2, b3, b4, b5, b6, b7; };

struct Menu_802AD980 {
    u8 pad[0x60];
    u8 flags;
    s8 cur;
    s16 count;
    u8 pad2[0x124 - 0x64];
    Col_802ADA48 *slots[8];
};

struct Obj_802ADC04 { u8 pad[0x124]; void *items[8]; };

struct Menu_802ADD38 {
    u8 pad[0x60];
    u8 flags;
    s8 cur;
    s16 count;
    u8 pad2[0x124 - 0x64];
    s32 slots[8];
};

struct RecoveredGlobal_802AE59C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Rect_802AE2B0 { f32 x, y, w, h; u8 pad[0x34 - 0x10]; u32 color; };

typedef char RecoveredGlobal_802AE59C_lbl_8050E208_size[sizeof(RecoveredGlobal_802AE59C_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct Item_802AD538 {
    f32 x0;
    f32 x4;
    f32 x8;
    f32 xc;
    s8 x10;
    s8 x11;
    s8 x12;
    u8 x13;
    s8 x14;
};

struct Win_802AD538 {
    u8 pad[0x38];
    f32 x38;
    f32 x3c;
    f32 x40;
};

struct UV_802AD538 { f32 u, v; };

struct Rect_802AD538 {
    f32 x0, y0, x1, y1;
    f32 u0, v0, u1, v1;
};

struct Item_802AD7F0 {
    f32 x0;
    f32 x4;
    f32 x8;
    f32 xc;
    s8 x10;
    s8 x11;
    s8 x12;
    u8 x13;
    s8 x14;
};

s32 is_split_screen();
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void begin_render__20TWindowSubStatusDispFv(void);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
f32 TWindowSubComCard__sub_80244784(void *);
s32 is_window_reveal_complete();
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 is_player_input_active(int);
M2C_UNK set_bounds__19TWindowKeyBoardSoftFPvffff(void *, f32, f32, f32, f32);
s32 try_open__19TWindowKeyBoardSoftFii(void *, Rect_802AD538 *);
Rect_802AE2B0 * open_singleton__19TWindowKeyBoardSoftFiiii(void *, void *, s32, f32, s32);
s32 fn_8026CB68();
void draw_item_labels__15TWindowMainMenuFv(Item_802AD538 *p, Win_802AD538 *w);
int is_item_active__15TWindowMainMenuFPv(void* p);
void TWindowMainMenu__sub_802AD74C(void* p);
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p, void * _w1);
void TWindowMainMenu__sub_802AD790(u8 *arg0, s32 arg1, s8 arg2, s8 arg3);
void init_color__15TWindowMainMenuFPv(void *a0);
void pop_level__15TWindowMainMenuFPv(MM_802AD90C *arg0);
void park_selection__15TWindowMainMenuFPv(Menu_802AD980 *arg0);
void TWindowMainMenu__sub_802ADA48(Col_802ADA48 *arg0, Col_802ADA48 *arg1);
int TWindowMainMenu__sub_802ADAAC(Obj_802ADAAC *self);
void TWindowMainMenu__sub_802ADADC(Obj_802ADADC *self, s8 i);
int TWindowMainMenu__sub_802ADB00(u8 *arg0);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);
u8 * TWindowMainMenu__sub_802ADB34(s32 arg0, s32 arg1);
s32 find_free_slot__15TWindowMainMenuFi(s32 arg0);
int TWindowMainMenu__sub_802ADC04(Obj_802ADC04 *self);
s32 count_active_items__15TWindowMainMenuFi(s32 arg0);
void get_row_position__15TWindowMainMenuFiPvi(s32 arg0, void *arg1, s32 arg2);
s32 is_not_split_screen__15TWindowMainMenuFv(void);
s32 update_if_active__15TWindowMainMenuFv(Menu_802ADD38 * _w0, s32 _w1);
s32 append_child_rows__15TWindowMainMenuFPvi(Menu_802ADD38 *arg0, s32 arg1);
void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0);
void update_scaled_position__15TWindowMainMenuFi(s32 arg0);
void draw_entries_reversed__15TWindowMainMenuFiPv(s32 arg0, u8 *arg1);
Rect_802AE2B0 * setup_content_frame__15TWindowMainMenuFPv(u8 *arg0);
void TWindowMainMenu__sub_802AE380(void *arg0);
void handle_cancel__15TWindowMainMenuFPv(void *arg0);
void handle_confirm__15TWindowMainMenuFPv(u8 *arg0);
M2C_UNK play_cursor_sound__15TWindowMainMenuFv(void *, int);
void handle_navigation_input__15TWindowMainMenuFPv(u8 *arg0);
void TLanguage__sub_803DAF70(int, int);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(Rect_802AD538 *, f32);
void set_draw_texture_and_color(int, u32);

extern UV_802AD538 lbl_8047063C[];
extern RecoveredGlobal_802AE59C_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DE138;
extern const f32 lbl_805DE13C;
extern const f32 lbl_805DE140;
extern const f32 lbl_805DE144;
extern const f32 lbl_805DE148;
extern const f32 lbl_805DE150;
extern const float lbl_805DE158;
extern f32 lbl_805DE15C;
extern f32 lbl_805DE160;
extern f32 lbl_805DE164;
extern const f32 lbl_805DE1A4;
extern f32 lbl_805DE1A8;

void draw_item_labels__15TWindowMainMenuFv(Item_802AD538 *p, Win_802AD538 *w) {
    Rect_802AD538 r;
    f32 scale;
    UV_802AD538 *uv;
    u32 color;
    u32 rgb;
    f32 a;

    if (is_item_active__15TWindowMainMenuFPv(p) != 0 && p->x10 > 0) {
        scale = lbl_805DE138 / (lbl_805DE13C + w->x38);
        uv = &lbl_8047063C[p->x11];
        begin_render__20TWindowSubStatusDispFv();
        switch (p->x12) {
        case 0:
            rgb = 0xFFFFFF;
            if (p->x13 & 2) {
                rgb = 0x686868;
            }
            if (p->x10 >= 4) {
                a = lbl_805DE140;
            } else {
                a = p->x10 * lbl_805DE144;
            }
            color = rgb | ((s32)(lbl_805DE148 * a) << 24);
            break;
        case 1:
            TLanguage__sub_803DAF70(2, 0x4C);
            color = 0xFFFF6121;
            break;
        case 2:
            TLanguage__sub_803DAF70(2, 0x4C);
            color = 0xFF51EAFF;
            break;
        }
        begin_screen_draw(1);
        set_draw_texture_and_color(2, color);
        r.x0 = w->x3c + p->x8;
        r.y0 = w->x40 + p->xc;
        r.x1 = 98.0f + r.x0;
        r.y1 = 16.0f + r.y0;
        r.u0 = uv->u / 256.0f;
        r.v0 = uv->v / 256.0f;
        r.u1 = (98.0f + uv->u) / 256.0f;
        r.v1 = (16.0f + uv->v) / 256.0f;
        if (try_open__19TWindowKeyBoardSoftFii(w, &r) != 0) {
            draw_textured_quad_at_depth(&r, scale);
        }
        get_player__20TWindowSubStatusDispFv();
        TLanguage__sub_803DAF70(2, 0x4B);
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int is_item_active__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x13) & 0x1; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TWindowMainMenu__sub_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p, void * _w1) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)(p), (void *)(_w1)); *(unsigned char*)((char*)p + 0x14) = 8; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TWindowMainMenu__sub_802AD790(u8 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((void *) (arg0)), (void *)((void *) (arg1)));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((void *) (arg0 + 8)), (void *)((void *) (arg1)));
    M2C_FIELD(arg0, s8 *, 0x10) = arg3;
    M2C_FIELD(arg0, s8 *, 0x11) = arg2;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) (M2C_FIELD(arg0, u8 *, 0x13) | 1);
}
extern int fold_flush_0;
#pragma pop

void TWindowMainMenu__sub_802AD7F0(Item_802AD7F0 *p) {
    if (is_item_active__15TWindowMainMenuFPv(p) != 0) {
        if (p->x14 <= 0) {
            p->x8 = p->x0;
            p->xc = p->x4;
        } else {
            p->x8 += (p->x0 - p->x8) / p->x14;
            p->xc += (p->x4 - p->xc) / p->x14;
            p->x14--;
        }
        if (p->x10 < 4) {
            p->x10++;
        }
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void init_color__15TWindowMainMenuFPv(void *a0)
{
  int new_var;
  char *new_var2;
  *((float *) (((char *) a0) + 0xc)) = (*((float *) (((char *) a0) + 0x8)) = (*((float *) (((char *) a0) + 0x4)) = (*((float *) (((char *) a0) + 0x0)) = lbl_805DE158)));
  new_var2 = (char *) a0;
  *((unsigned char *) (new_var2 + 0x10)) = 0;
  *((unsigned char *) (new_var2 + 0x11)) = -((double) 1);
  *((unsigned char *) (new_var2 + 0x12)) = 0;
  new_var = 0x13;
  *((unsigned char *) (new_var2 + new_var)) = 0;
  *((unsigned char *) (new_var2 + 0x14)) = 0;
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void pop_level__15TWindowMainMenuFPv(MM_802AD90C *arg0) {
    s32 i;
    arg0->cnt--;
    arg0->flags |= 8;
    for (i = 0; i < 8; i++) {
        if (arg0->slots[i] != 0) {
            init_color__15TWindowMainMenuFPv(arg0->slots[i]);
            arg0->slots[i] = 0;
        }
    }
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void park_selection__15TWindowMainMenuFPv(Menu_802AD980 *arg0) {
    Col_802ADA48 buf;
    u8 sp8[8];
    s32 i;
    Col_802ADA48 *slot;
    TWindowMainMenu__sub_802ADA48(&buf, arg0->slots[arg0->cur]);
    for (i = 0; i < 8; i++) {
        if (arg0->slots[i] != NULL) {
            init_color__15TWindowMainMenuFPv(arg0->slots[i]);
            arg0->slots[i] = NULL;
        }
    }
    ((M2C_UNK (*)(void *, void *, s32))get_row_position__15TWindowMainMenuFiPvi)(arg0, sp8, arg0->count);
    slot = (Col_802ADA48 *)((u8 * (*)(void *))find_free_slot__15TWindowMainMenuFi)(arg0);
    TWindowMainMenu__sub_802ADA48(slot, &buf);
    set_symbol_chat_parts__15TWindowMainMenuFPv(slot, sp8);
    ((u8 *)slot)[0x12] = 2;
    arg0->flags |= 4;
    arg0->count++;
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TWindowMainMenu__sub_802ADA48(Col_802ADA48 *arg0, Col_802ADA48 *arg1) {
    arg0->h = arg1->h;
    arg0->b0 = arg1->b0;
    arg0->b1 = arg1->b1;
    arg0->b2 = arg1->b2;
    arg0->b3 = arg1->b3;
    arg0->b4 = arg1->b4;
    arg0->b5 = arg1->b5;
    arg0->b6 = arg1->b6;
    arg0->b7 = arg1->b7;
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TWindowMainMenu__sub_802ADAAC(Obj_802ADAAC *self) {
    Item_802ADAAC *p = self->items[self->idx];
    if (p == 0) return 0x1f;
    return p->f11;
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TWindowMainMenu__sub_802ADADC(Obj_802ADADC *self, s8 i) {
    self->idx = i;
    self->items[self->idx]->f12 = 1;
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TWindowMainMenu__sub_802ADB00(u8 *arg0) {
  long long new_var;
  return new_var = (s8) ((*((u8 *) (((s8 *) arg0) + 0x61))) & 0xFFFFFFFFFFFFFFFFu);
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_menu_flags__15TWindowMainMenuFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int is_flag_set__15TWindowMainMenuFPv(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int get_menu_flag__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
#pragma pop

#pragma push
#pragma fp_contract on
u8 *TWindowMainMenu__sub_802ADB34(s32 arg0, s32 arg1) {
    s32 var_r31;
    u8 *var_r30;
    s32 var_r29;
    var_r29 = arg1;
    if (var_r29 == 0x1B) {
        var_r29 = 0x1A;
    }
    var_r30 = (u8 *)(arg0 + 0x64);
    var_r31 = 0;
loop_3:
    if ((((s32 (*)(s32))is_item_active__15TWindowMainMenuFPv)((s32)((int) (var_r30))) != 0) && ((s8) M2C_FIELD(var_r30, u8 *, 0x11) == var_r29)) {
        return var_r30;
    }
    var_r31 += 1;
    var_r30 += 0x18;
    if (var_r31 >= 8) {
        return NULL;
    }
    goto loop_3;
}
extern int fold_flush_8;
#pragma pop

s32 find_free_slot__15TWindowMainMenuFi(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (((s32 (*)(s32))is_item_active__15TWindowMainMenuFPv)(ptr) == 0) {
        return ptr;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 0;
    }
    goto loop_1;
}

int TWindowMainMenu__sub_802ADC04(Obj_802ADC04 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (self->items[i] == 0) return i;
    }
    return 8;
}

s32 count_active_items__15TWindowMainMenuFi(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (((s32 (*)(s32))is_item_active__15TWindowMainMenuFPv)(ptr) == 0) {
        return counter;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 8;
    }
    goto loop_1;
}

void get_row_position__15TWindowMainMenuFiPvi(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_805DE158;
    M2C_FIELD(arg1, f32 *, 4) = (f32) (lbl_805DE150 * (f32) arg2);
}

s32 is_not_split_screen__15TWindowMainMenuFv(void) {
    return (u32)__cntlzw(is_split_screen()) >> 5;
}

s32 update_if_active__15TWindowMainMenuFv(Menu_802ADD38 * _w0, s32 _w1) {
    s32 temp_r3;

    temp_r3 = append_child_rows__15TWindowMainMenuFPvi((Menu_802ADD38 *)(_w0), (s32)(_w1));
    if (temp_r3 != 0) {
        ((M2C_UNK (*)(void))TWindowMainMenu__sub_802AD74C)();
    }
    return temp_r3;
}

s32 append_child_rows__15TWindowMainMenuFPvi(Menu_802ADD38 *arg0, s32 arg1) {
    u8 sp8[8];
    s32 n;
    s32 slot;
    n = ((s32 (*)(void))TWindowMainMenu__sub_802ADC04)();
    if (n >= 8) {
        return 0;
    }
    ((M2C_UNK (*)(void *, void *, s32))get_row_position__15TWindowMainMenuFiPvi)(arg0, sp8, n + arg0->count);
    slot = ((s32 (*)(void *, s32))TWindowMainMenu__sub_802ADB34)(arg0, arg1);
    if (slot == 0) {
        slot = ((s32 (*)(void *))find_free_slot__15TWindowMainMenuFi)(arg0);
        if (slot == 0) {
            return 0;
        }
        ((M2C_UNK (*)(s32, void *, s8, s8))TWindowMainMenu__sub_802AD790)(slot, sp8, arg1, -(n * 2));
    } else {
        set_symbol_chat_parts__15TWindowMainMenuFPv((void *)slot, sp8);
    }
    arg0->slots[n] = slot;
    arg0->flags &= ~4;
    return slot;
}

void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0) {
    if (is_not_split_screen__15TWindowMainMenuFv() != 0) {
        farg0 += lbl_805DE15C;
    } else {
        farg0 += lbl_805DE160;
    }
    farg0 += lbl_805DE164;
    if (M2C_FIELD(arg0, f32 *, 0x3C) != farg0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 8;
    }
}

void update_scaled_position__15TWindowMainMenuFi(s32 arg0) {
    set_target_y__15TWindowMainMenuFPvf((void *)((void *)(arg0)), lbl_805DE150 * (f32) ((s32 (*)())count_active_items__15TWindowMainMenuFi)());
}

void draw_entries_reversed__15TWindowMainMenuFiPv(s32 arg0, u8 *arg1) {
    s32 var_r31;
    u8 *var_r30;
    var_r30 = (u8 *)(arg0 + 0x10C);
    var_r31 = 0;
    do {
        ((void (*)(void *, void *))draw_item_labels__15TWindowMainMenuFv)(var_r30, arg1);
        var_r31 += 1;
        var_r30 -= 0x18;
    } while (var_r31 < 8);
}

Rect_802AE2B0 *setup_content_frame__15TWindowMainMenuFPv(u8 *arg0) {
    f32 v;
    Rect_802AE2B0 *r;
    r = open_singleton__19TWindowKeyBoardSoftFiiii(arg0 + 0x40, arg0 + 0x48, fn_8026CB68(), M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x2C));
    if (((s32 (*)(void *))is_not_split_screen__15TWindowMainMenuFv)(arg0) != 0) {
        v = lbl_805DE15C;
    } else {
        v = lbl_805DE164;
    }
    set_bounds__19TWindowKeyBoardSoftFPvffff(r, lbl_805DE1A4 + r->x, r->y + v, (r->x + r->w) - lbl_805DE1A4, (r->y + r->h) - lbl_805DE164);
    r->color = ((s32)(lbl_805DE148 * TWindowSubComCard__sub_80244784(arg0)) << 24) | 0xFF0000 | 0xFFFF;
    return r;
}

void TWindowMainMenu__sub_802AE380(void *arg0) {
    s16 temp_r4;
    if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
        set_target_y__15TWindowMainMenuFPvf(arg0, lbl_805DE158);
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x22);
        M2C_FIELD(arg0, u32 *, 0x50) = (u32) (lbl_805DE1A8 - (f32) temp_r4);
        return;
    }
    update_scaled_position__15TWindowMainMenuFi((s32)(arg0));
}

void handle_cancel__15TWindowMainMenuFPv(void *arg0) {
    play_sound_effect(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
}

void handle_confirm__15TWindowMainMenuFPv(u8 *arg0) {
  char new_var;
  u8 *new_var2;
  int new_var3;
  u8 *temp_r3;
  new_var2 = arg0;
  new_var2 = new_var2 + (((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))) * 4);
  temp_r3 = (unsigned char *) (*((void **) (((s8 *) new_var2) + 0x124)));
  if (temp_r3 != 0)
  {
    new_var = (int) 0;
    if ((*((u8 *) (((s8 *) temp_r3) + 0x13))) & 2)
    {
      play_sound_effect((M2C_UNK)((int) 0x53F06), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      return;
    }
    new_var3 = (int) 0x52D01;
    play_sound_effect((M2C_UNK)(new_var3), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0), (M2C_UNK)(new_var));
    *((u8 *) (((s8 *) arg0) + 0x60)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x60))) | 1);
  }
}

void handle_navigation_input__15TWindowMainMenuFPv(u8 *arg0) {
    u8 *temp_r31;
    if ((is_window_reveal_complete() != 0) && (((s32 (*)(void *))get_menu_flag__15TWindowMainMenuFPv)((void *) (arg0)) == 0) && (((s32 (*)(void *))is_flag_set__15TWindowMainMenuFPv)((void *) (arg0)) == 0) && !(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
        temp_r31 = (u8 *)&lbl_8050E208.value + (is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20))) * 0x50) + 0x20;
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            play_cursor_sound__15TWindowMainMenuFv((void *) (arg0), (int) (-1));
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            play_cursor_sound__15TWindowMainMenuFv((void *) (arg0), (int) (1));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            handle_confirm__15TWindowMainMenuFPv((u8 *)((void *) (arg0)));
        }
        if ((((s32 (*)(void *))get_menu_flag__15TWindowMainMenuFPv)((void *) (arg0)) == 0) && ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0))) {
            handle_cancel__15TWindowMainMenuFPv((void *) (arg0));
        }
    }
}

}
