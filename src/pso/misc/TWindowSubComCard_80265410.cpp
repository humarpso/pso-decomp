#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Stack_80265500 {
    f32 sp8;
    f32 spC;
};

struct Stack_80265484 {
    f32 sp8;
    f32 spC;
};

struct Stack_8026556C {
    f32 sp8;
    f32 spC;
};

struct E_80265660 { u32 flags; u32 b; };

struct Obj_80265660 { u8 pad[0x80]; E_80265660 *entries; };

struct Rec_802655E4 { s32 a; s32 b; };

struct Win_802655E4 { u8 p0[0x72]; s16 f72; s16 f74; s16 f76; u8 p78[8]; Rec_802655E4 *f80; };

struct Rec_802656D8 { u32 flags; s32 b; };

struct Ent_802656D8 { u8 p0[0x24]; s32 f24; };

struct Win_802656D8 { u8 p0[0x80]; Rec_802656D8 *f80; };

struct Stack_80265A38 {
    f32 sp8;
    f32 spC;
};

struct E_80265BF8 { u32 a; u32 b; };

struct Obj_80265BF8 { u8 pad[0x78]; s16 f78; u8 pad2[6]; E_80265BF8 *entries; };

struct Win_80265C30 { u8 pad[0x38]; f32 x; u8 pad3c[0x3a]; s16 count; };

struct Ent_80265C30 { u8 pad[0x8]; f32 x; u8 padc[4]; f32 w; f32 h; };

struct Win_80265E60 { u8 pad[0x2c]; u32 flags; u8 pad30[8]; f32 x; f32 y; u8 pad40[0x36]; s16 count; u8 pad78[4]; f32 height; };

struct Ent_80265E60 { u8 pad[0x14]; f32 h; };

struct Ent_80265F60 { u8 pad[0x10]; f32 w; f32 h; };

struct Win_80265F60 { u8 pad[0x2C]; u32 flags; u8 pad30[8]; f32 x; f32 y; u8 pad40[0x36]; s16 count; u8 pad78[4]; f32 height; };

struct Ent_80265AA4 { u32 flags; u32 x; };

struct Card_80265AA4 {
    u8 pad0[0x74];
    s16 cur;
    s16 cnt;
    u8 pad1[8];
    Ent_80265AA4 *ents;
};

struct Ent_80265C30;

struct RecoveredGlobal_80266378_lbl_804D05A8 {
    M2C_UNK value;
    u8 remaining[0x20];
};

typedef char RecoveredGlobal_80266378_lbl_804D05A8_size[sizeof(RecoveredGlobal_80266378_lbl_804D05A8) == 0x24 ? 1 : -1];

struct RecoveredGlobal_80266B30_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

typedef char RecoveredGlobal_80266B30_lbl_8050E208_size[sizeof(RecoveredGlobal_80266B30_lbl_8050E208) == 0x1B0 ? 1 : -1];

s32 is_visible__17TWindowSubComCardFPv(void *);
u32 get_message_10__20TWindowSubStatusDispFPv(int);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int, f32, f32);
s32 set_ready_flag__18TCheckRoomSequenceFPv(int);
void free__11TOBoss4RockFUi(void *);
u8 * alloc_buffer__11TOBoss4RockFPv(s32);
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);
Ent_80265C30 * get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(int);
M2C_UNK step_window_tween(void *);
s32 get_draw_context__11TWindowBaseFPv();
void destroy_window__15TWindowAdditionFPvs(void *, int);
s32 construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s16, s32);
void * get_field_20__17TWindowSubComCardFPv(void *e);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
s32 fn_80244994(void *);
s32 set_field_1c__6TLobbyFPvf(int, f32);
M2C_UNK draw_selection_bar(s32, u16 *, s32);
M2C_UNK draw_window_frame(void *, s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
void refresh_status_display__9TWindowDDFv(void *);
int TWindowChat__sub_80247D2C(void*);
s32 is_player_input_active(int);
s32 is_window_display_enabled();
M2C_UNK draw_visible_window_entries(void *, void *, s32);
M2C_UNK update_window_entry_list(void *, void *);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(int);
void measure_message_text_width(Ent_80265C30 *e, f32 x);
M2C_UNK set_text_entry_string(void *, void *, int);
void set_default_status__17TWindowDuelResultFPvi(void *, s32);
void update_chat_window(void* p);
int get_flag__17TWindowSubComCardFPv(void* p);
void clear_flag_and_release2__17TWindowSubComCardFPv(void *arg0);
void TWindowSubComCard__sub_80265484(u8 *arg0);
void TWindowSubComCard__sub_80265500(u8 *arg0);
void TWindowSubComCard__sub_8026556C(u8 *arg0);
void TWindowSubComCard__sub_802655E4(Win_802655E4 *w);
s32 TWindowSubComCard__sub_80265660(Obj_80265660 *o, s16 i);
void TWindowSubComCard__sub_80265680(u8 *arg0, s16 arg1);
void TWindowSubComCard__sub_802656D8(Win_802656D8 *w, s32 idx, s32 val);
s32 get_selected_entry__17TWindowSubComCardFPv(u8 *arg0);
void set_active_flag__11TWindowMenuFPv(void *arg0);
void confirm_selection__11TWindowMenuFPv(u8 *arg0);
void select_next_item__11TWindowMenuFPv(void *arg0);
void move_cursor_prev__11TWindowMenuFPv(void *arg0);
void update_target_y__17TWindowSubComCardFPv(u8 *arg0);
void clamp_menu_choice_scroll(u8 *arg0);
void advance_past_disabled_menu_rows(Card_80265AA4 *arg0);
M2C_UNK TWindowSubComCard__sub_80265B5C(void *);
u32 get_selected_menu_value(Obj_80265BF8 *o);
void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1);
void align_menu_entry_positions(Win_80265C30 *self);
void TWindowSubComCard__sub_80265CFC(u8 *arg0, f32 farg0);
void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1);
void update_layout_height__17TWindowSubComCardFPvf(Win_80265E60 *self, f32 x);
void TWindowSubComCard__sub_80265F60(Win_80265F60 *self);
void TWindowSubComCard__sub_80266078(u8 *arg0);
void clear_transition_flag__17TWindowSubComCardFPv(void *arg0);
void open__17TWindowOptionCtrlFPv(void *arg0);
void draw_text_gray__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void* p, int a1, int a2, int a3);
void fn_80266378(s32 arg0);
u8 * create_yes_no_window(s32 arg0, s32 arg1, u32 arg2, u32 arg3);
u8 * init_shop_judgment_window(void* p);
s32 create_window_menu(s32 arg0, s32 arg1, s32 arg2);
void check_room_seq_4__16TAdChrSelASlotGCFii(s32 arg0, s32 arg1);
s32 create_titled_window_menu(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void draw_card_icon__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void TWindowSubComCard__sub_802665C0(u8 *arg0, u8 *arg1);
void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1);
void render__11TWindowMenuFv(u8 *arg0);
void * __dt__11TWindowMenuFv(void *arg0, s16 arg1);
u8 * TWindowMenu__ct(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
void copy_position__11TWindowMenuFPvPv(void* p, void* q);
s32 TWindowMenu__sub_80266B18(u8 *arg0, s32 arg1);
u8 TWindowMenu__sub_80266B30(u8 *arg0);
s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1);
int TWindowMenu__sub_80266BB8(void* p);
void reset_selection__17TWindowSubComCardFPv(void* p);
M2C_UNK clamp_list_scroll_offset(int, void *, void *);
M2C_UNK draw_window_scrollbar(s32, s32, void *);
M2C_UNK increment_counter__20TWindowSubStatusDispFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
u32 reset_selection__20TWindowSubStatusDispFPv(int, void *);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
M2C_UNK update_subwindow__20TWindowSubStatusDispFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
s32 construct_type1_heading__20TWindowSubStatusDispFPvii(s32, s32, s32);

extern M2C_UNK __vt__11TWindowMenu[];
extern const f64 lbl_8044F330;
extern RecoveredGlobal_80266378_lbl_804D05A8 lbl_804D05A8;
extern u8 lbl_804D05CC[];
extern s8 lbl_8050E208[];
extern s32 lbl_805D3960;
extern s32 lbl_805D53A4;
extern const f32 lbl_805DD148;
extern const f32 lbl_805DD14C;
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
extern const f32 lbl_805DD15C;
extern const f32 lbl_805DD160;
extern const f32 lbl_805DD164;
extern const f32 lbl_805DD168;
extern const f32 lbl_805DD16C;
extern const f32 lbl_805DD170;
extern const f32 lbl_805DD174;
extern const f32 lbl_805DD178;

void update_chat_window(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) TWindowChat__sub_80247D2C(m); }

int get_flag__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }

void clear_flag_and_release2__17TWindowSubComCardFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x78), 1);
    }
}

void TWindowSubComCard__sub_80265484(u8 *arg0) {
    Stack_80265484 stack;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x84));
    if (temp_r5 != NULL) {
        stack.sp8 = (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DD148) - lbl_805DD14C;
        stack.spC = (f32) ((M2C_FIELD(arg0, s16 *, 0x72) * 0x14) - 2);
        copy_position__11TWindowMenuFPvPv(temp_r5, &stack.sp8);
    }
}

void TWindowSubComCard__sub_80265500(u8 *arg0) {
    Stack_80265500 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD150;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD154;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            stack.spC = temp_f1 - lbl_805DD158;
        }
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void TWindowSubComCard__sub_8026556C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8026556C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8026556C, spC) == 0x4) ? 1 : -1];
    Stack_8026556C stack;
    f32 temp_f1;
    f32 temp_f2;
    u32 temp_r3;
    u32 var_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x38);
        temp_f1 = temp_f2 - lbl_805DD15C;
        stack.spC = lbl_805DD150;
        stack.sp8 = temp_f1;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xC), (f32) (temp_f1), (f32) (temp_f2));
        var_r0 = temp_r3;
        if (var_r0 != 0U) {
            var_r0 = reset_selection__20TWindowSubStatusDispFPv((int) (temp_r3), (void *) (&stack.sp8));
        }
        M2C_FIELD(arg0, u32 *, 0x84) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x80);
    }
}

void TWindowSubComCard__sub_802655E4(Win_802655E4 *w) {
    s32 i;
    Rec_802655E4 *r;
    void *e;
    w->f72 = 0;
    w->f74 = 0;
    r = w->f80;
    for (i = 0; i < w->f76; i++, r++) {
        e = ((void *)((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(w, i));
        set_default_status__17TWindowDuelResultFPvi(e, 0);
        refresh_status_display__9TWindowDDFv(e);
        r->a = 0;
        r->b = 0;
    }
}

s32 TWindowSubComCard__sub_80265660(Obj_80265660 *o, s16 i) {
    if (o->entries[i].flags & 0x10) return 0;
    return 1;
}

void TWindowSubComCard__sub_80265680(u8 *arg0, s16 arg1) {
  M2C_UNK *new_var;
  s16 var_r31;
  s16 var_r4;
  s32 temp_r3;
  s32 var_r3;
  s32 var_r5;
  u8 *var_r30;
  var_r31 = arg1;
  var_r30 = (u8 *) arg0;
  var_r4 = var_r31;
  temp_r3 = ((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)((void *)(arg0), (s32)((s32) var_r4));
  var_r4 = 0xFF910000;
  var_r5 = *((s32 *) (((s8 *) var_r30) + 0x80));
  var_r4 = var_r31;
  new_var = (M2C_UNK *) (((s8 *) var_r5) + (var_r4 * 8));
  *((s32 *) (((s8 *) temp_r3) + 0x24)) = 0xFF909090;
  ;
  *new_var = (*new_var) | 0x10;
}

void TWindowSubComCard__sub_802656D8(Win_802656D8 *w, s32 idx, s32 val) {
    Ent_802656D8 *e = ((Ent_802656D8 *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(w, idx);
    Rec_802656D8 *r = w->f80;
    e->f24 = val;
    r[(s16)idx].flags &= ~0x10;
}

s32 get_selected_entry__17TWindowSubComCardFPv(u8 *arg0) {
    s16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x78);
    if (temp_r4 < 0) {
        return 0;
    }
    if (temp_r4 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        return 0;
    }
    return ((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)((void *)(arg0), (s32)((s32) temp_r4));
}

void set_active_flag__11TWindowMenuFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (is_visible__17TWindowSubComCardFPv((void *)(arg0)) == 0)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x400)) {
            play_sound_effect(0x52F16, 0, 0, 0);
        }
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void confirm_selection__11TWindowMenuFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    if (((int)is_visible__17TWindowSubComCardFPv((void *)(arg0))) == 0) {
        temp_r3 = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x80), M2C_UNK *, (M2C_FIELD(arg0, s16 *, 0x78) * 8));
        if (temp_r3 & 0x10) {
            if (!(temp_r3 & 0x20)) {
                play_sound_effect((M2C_UNK)((int) (0x53F06)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            }
        } else {
            if (!(temp_r3 & 0x20)) {
                play_sound_effect((M2C_UNK)((int) (0x52D01)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            }
            M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
            temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x88));
            if (temp_r3_2 != NULL) {
                ((void (*)(void *, s8))set_entry_state__20TWindowSubStatusDispFPvc)(temp_r3_2, 2);
            }
        }
    }
}

void select_next_item__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (((s32 (*)(void *, s32))TWindowMenu__sub_80266B18)(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor_prev__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (((s32 (*)(void *, s32))TWindowMenu__sub_80266B18)(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

#pragma push
#pragma fp_contract on
void update_target_y__17TWindowSubComCardFPv(u8 *arg0) {
    f32 v;
    f32 t;
    f32 base;
    if (*(u32 *)(arg0 + 0x84) != 0 && *(u32 *)(arg0 + 0x50) == 0) {
        v = lbl_805DD14C + (f32)(*(s16 *)(arg0 + 0x78) * 0x14);
        v -= lbl_805DD160 * (*(f32 *)(arg0 + 0x4C) - lbl_805DD154);
        if (*(u32 *)(arg0 + 0x88) != 0) {
            v -= lbl_805DD164;
        }
        t = *(f32 *)(arg0 + 0x6C);
        *(f32 *)(arg0 + 0x6C) = t + (v - t);
    }
}
#pragma pop

void clamp_menu_choice_scroll(u8 *arg0) {
    Stack_80265A38 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD150;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD154;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            stack.spC = temp_f1 - lbl_805DD158;
        }
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void advance_past_disabled_menu_rows(Card_80265AA4 *arg0) {
    u16 *e;
    s16 t;
    if (arg0->cur < arg0->cnt) {
        e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg0->cur)));
        while (((u32)get_field_20__17TWindowSubComCardFPv(e)) != 0 && (*e & 0x10)) {
            t = arg0->cur + 1;
            arg0->cur = t;
            if (t >= arg0->cnt) {
                break;
            }
            e = ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg0->cur)));
            if (arg0->ents[arg0->cur].flags & 2) {
                arg0->ents[arg0->cur].flags &= ~2;
                *e &= ~8;
            }
        }
    }
}

u32 get_selected_menu_value(Obj_80265BF8 *o) {
    return o->entries[o->f78].b;
}

void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1) {
    if ((arg1 >= 0) && (arg1 < (s16) M2C_FIELD(arg0, s16 *, 0x76))) {
        M2C_FIELD(arg0, s16 *, 0x78) = arg1;
    }
}

#pragma push
#pragma fp_contract on
void align_menu_entry_positions(Win_80265C30 *self) {
    f32 left = self->x - lbl_805DD15C;
    f32 right = lbl_805DD160 * self->x - lbl_805DD148;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265C30 *e = get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            measure_message_text_width(e, left);
            if (e->h > lbl_805DD168) {
                e->x = lbl_805DD150;
            } else {
                e->x = right - lbl_805DD160 * e->w;
            }
        }
    }
}
#pragma pop

void TWindowSubComCard__sub_80265CFC(u8 *arg0, f32 farg0) {
    f32 h;
    u32 i;
    Ent_80265C30 *e;
    h = lbl_805DD150;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0 && !(e->h <= lbl_8044F330)) {
            measure_message_text_width(e, farg0);
            h += lbl_805DD16C + e->h;
        }
    }
    h -= lbl_805DD16C;
    if (*(s32 *)(arg0 + 0x2C) & 0x40) {
        h += lbl_805DD158;
    }
    *(f32 *)(arg0 + 0x38) = farg0;
    *(f32 *)(arg0 + 0x3C) = lbl_805DD154 + h;
    *(f32 *)(arg0 + 0x7C) = h;
    save_position__17TWindowSubComCardFPv(arg0);
}

void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1) {
    update_layout_height__17TWindowSubComCardFPvf((Win_80265E60 *)(arg0), farg0);
    if (M2C_FIELD(arg0, f32 *, 0x3C) > farg1) {
        ((M2C_UNK (*)(void *))TWindowSubComCard__sub_8026556C)(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (farg1 - lbl_805DD154);
    save_position__17TWindowSubComCardFPv(arg0);
    ((M2C_UNK (*)(void *))TWindowSubComCard__sub_80265484)(arg0);
}

void update_layout_height__17TWindowSubComCardFPvf(Win_80265E60 *self, f32 x) {
    f32 sum = lbl_805DD150;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265E60 *e = ((Ent_80265E60 *)get_array_entry__20TWindowSubStatusDispFPvi(self, i));
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            if (!(e->h <= lbl_8044F330)) {
                sum += lbl_805DD16C + e->h;
            }
        }
    }
    sum -= lbl_805DD16C;
    if (self->flags & 0x40) {
        sum += lbl_805DD158;
    }
    self->x = x;
    self->y = lbl_805DD154 + sum;
    self->height = sum;
    save_position__17TWindowSubComCardFPv(self);
}

void TWindowSubComCard__sub_80265F60(Win_80265F60 *self) {
    f32 width = lbl_805DD150;
    f32 sum = width;
    u32 i;
    for (i = 0; i < self->count; i++) {
        Ent_80265F60 *e = (Ent_80265F60 *)get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            if (e->w > width) {
                width = e->w;
            }
            if (!(e->h <= lbl_8044F330)) {
                sum += lbl_805DD16C + e->h;
            }
        }
    }
    sum -= lbl_805DD16C;
    self->height = sum;
    if (self->flags & 0x40) {
        sum += lbl_805DD158;
    }
    self->x = lbl_805DD15C + width;
    self->y = lbl_805DD154 + sum;
    save_position__17TWindowSubComCardFPv(self);
}

void TWindowSubComCard__sub_80266078(u8 *arg0) {
    f32 gap;
    f64 zero;
    f32 y;
    u32 i;
    u8 *e;
    f32 h;
    y = lbl_805DD150;
    gap = lbl_805DD16C;
    zero = lbl_8044F330;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        if (((u32 (*)(void))get_field_20__17TWindowSubComCardFPv)() != 0) {
            *(f32 *)(e + 0xC) = y;
            h = *(f32 *)(e + 0x14);
            if (!(h <= zero)) {
                y += gap + h;
            }
        }
    }
}

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD154 + M2C_FIELD(arg0, f32 *, 0x7C));
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

void open__17TWindowOptionCtrlFPv(void *arg0) {
    u16 temp_r4;
    void *temp_r3;
    f32 temp_f1;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp_r3 = ((void * (*)(void *))get_selected_entry__17TWindowSubComCardFPv)(arg0);
        temp_f1 = lbl_805DD154;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f1 + M2C_FIELD(temp_r3, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD158);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

void draw_text_gray__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((M2C_UNK (*)(s32, s32, s32, s32, s32))add_text_entry__19TWindowSubTradeMainFPviiii)(arg0, arg1, arg2 | 0x10, arg3, 0xFF909090);
}

s32 add_text_entry__19TWindowSubTradeMainFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_r7;
    u8 *temp_r3;
    u8 *temp_r30;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        return 0;
    }
    temp_r3 = ((u8 * (*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, M2C_FIELD(arg0, s16 *, 0x72));
    temp_r7 = M2C_FIELD(arg0, s16 *, 0x72);
    temp_r30 = (unsigned char *) (M2C_FIELD(arg0, s32 *, 0x80) + (temp_r7 * 8));
    M2C_FIELD(temp_r3, f32 *, 0xC) = (f32) (temp_r7 * 0x14);
    M2C_FIELD(temp_r3, s32 *, 0x24) = arg4;
    if (arg2 & 1) {
        set_text_entry_string(temp_r3, (void *) (arg1), (int) (0x20));
    } else {
        set_text_entry_string(temp_r3, (void *) (arg1), (int) (0));
    }
    if (arg2 & 4) {
        M2C_FIELD(temp_r3, u16 *, 0) = (u16) (M2C_FIELD(temp_r3, u16 *, 0) | 1);
    }
    if (arg2 & 8) {
        M2C_FIELD(temp_r3, u16 *, 0) = (u16) (M2C_FIELD(temp_r3, u16 *, 0) | 0x40);
    }
    if (arg2 & 0x40) {
        M2C_FIELD(temp_r3, u16 *, 0) = (u16) (M2C_FIELD(temp_r3, u16 *, 0) | 0x200);
    }
    if (arg2 & 2) {
        if ((s16) M2C_FIELD(arg0, s16 *, 0x72) == (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            arg2 &= 0xFFFFFFFD;
        } else {
            M2C_FIELD(temp_r3, u16 *, 0) = (u16) (M2C_FIELD(temp_r3, u16 *, 0) | 8);
        }
    }
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x100) {
        reset_float_field__15TWindowHelpItemFPv((int) (temp_r3));
    }
    ((M2C_UNK (*)(int))refresh_status_display__9TWindowDDFv)((int) (temp_r3));
    M2C_FIELD(temp_r30, s32 *, 0) = arg2;
    M2C_FIELD(temp_r30, s32 *, 4) = arg3;
    M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    return 1;
}

int forward_trade_action_default__16TObjCityMainWarpFPviii(void* p, int a1, int a2, int a3) { return ((int (*)(void*, int, int, int, int))add_text_entry__19TWindowSubTradeMainFPviiii)(p, a1, a2, a3, -1); }

void fn_80266378(s32 arg0) {
    M2C_FIELD(&lbl_804D05A8.value, s32 *, 4) = arg0;
}

u8 *create_yes_no_window(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
  u8 *temp_r31;
  u8 *temp_r3;
  temp_r3 = (u8 *) ((u8 *)create_window_menu(arg0, 2, arg1));
  temp_r31 = (u8 *) temp_r3;
  if (arg2 == 0U)
  {
    ((s32 (*)(int, void *, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)((int) ((u8 *) temp_r3), (void *) get_message_10__20TWindowSubStatusDispFPv((int) 0x5B), (int) 6, (int) 0);
  }
  else
  {
    ((s32 (*)(int, void *, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)((int) temp_r3, (void *) arg2, (int) 6, (int) 0);
  }
  if (0U == arg3)
  {
    ((s32 (*)(int, void *, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)((int) ((u8 *) temp_r3), (void *) get_message_10__20TWindowSubStatusDispFPv((int) 0x5C), (int) 6, (int) 1);
  }
  else
  {
    ((s32 (*)(int, void *, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)((int) ((u8 *) temp_r3), (void *) arg3, (int) 6, (int) 1);
  }
  ((s32 (*)(int))TWindowSubComCard__sub_80265F60)((int) ((u8 *) temp_r3));
  if ((*((f32 *) (((s8 *) ((u8 *) temp_r3)) + 0x48))) < lbl_805DD170)
  {
    ((s32 (*)(int, f32))update_layout_height__17TWindowSubComCardFPvf)((int) ((u8 *) temp_r3), (f32) lbl_805DD170);
  }
  ((s32 (*)(int))align_menu_entry_positions)((int) ((u8 *) temp_r3));
  set_ready_flag__18TCheckRoomSequenceFPv((int) ((u8 *) temp_r3));
  set_field_1c__6TLobbyFPvf((int) ((u8 *) temp_r3), (f32) lbl_805DD174);
  return (u8 *) temp_r3;
}

u8 * init_shop_judgment_window(void* p) { return create_yes_no_window((s32)(p), (s32)(4), (u32)(0), (u32)(0)); }

s32 create_window_menu(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    ((s32 (*)(void *))fn_80266378)((void *) (arg1));
    temp_r3 = __nw__7TObjectFUl((int) (0x8C));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32 (*)(int, void *, void *, void *))TWindowMenu__ct)((int) (temp_r3), (void *) (arg1), (void *) (arg2), (void *) (arg0));
    }
    return var_r0;
}

void check_room_seq_4__16TAdChrSelASlotGCFii(s32 arg0, s32 arg1) {
    ((int (*)(void*, void*, void*))create_window_menu)((void*)(arg0), (void*)(arg1), (void*)(4));
}

s32 create_titled_window_menu(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = ((s32)((int (*)(void*, void*, void*))create_window_menu)((void*)(arg0), (void*)(arg1), (void*)(arg3)));
    temp_r3 = ((int (*)(void *))alloc__23TAdSinglePlyChrSelectGCFPv)((void *)0x24);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = construct_type1_heading__20TWindowSubStatusDispFPvii(temp_r3, arg2, arg3);
    }
    M2C_FIELD(temp_r31, s32 *, 0x88) = var_r0;
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x2C) | 0x40);
    return temp_r31;
}

void draw_card_icon__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    ((int (*)(void*, void*, void*, void*))create_titled_window_menu)((void*)(arg0), (void*)(arg1), (void*)(arg2), (void*)(4));
}

void TWindowSubComCard__sub_802665C0(u8 *arg0, u8 *arg1) {
    s16 temp_r4;
    u16 *temp_r3;
    if (!(lbl_805D53A4 & 0x10)) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x7A);
        if (temp_r4 >= 0) {
            temp_r3 = (u16 *)(((s32)((u16 * (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, (s32) temp_r4)));
            if (*temp_r3 & 1) {
                draw_selection_bar((s32)(arg1), (u16 *)(temp_r3), (s32)(1));
            }
        }
    }
}

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = ((u16 * (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, M2C_FIELD(arg0, s16 *, 0x78));
    if (*temp_r3 & 1) {
        draw_selection_bar(arg1, temp_r3, is_visible__17TWindowSubComCardFPv(arg0));
    }
}

void render__11TWindowMenuFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        ((M2C_UNK (*)(void *, s32))render_selected_entry__17TWindowSubComCardFPvi)(arg0, temp_r3);
        ((M2C_UNK (*)(void *, s32))TWindowSubComCard__sub_802665C0)(arg0, temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        draw_window_scrollbar(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

void run_task__11TWindowMenuFv(u8 *arg0) {
    s32 temp_r30;
    u8 *temp_r29;
    u8 *temp_r29_2;
    u8 *temp_r29_3;

    ((M2C_UNK (*)(void))TWindowSubComCard__sub_80266078)();
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((TWindowMenu__sub_80266BB8((void *) (arg0)) == 0) && (is_visible__17TWindowSubComCardFPv((void *) (arg0)) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x5C) > 2) && (is_window_display_enabled() != 0) && (fn_80244994((void *) (arg0)) != 0)) {
        temp_r30 = is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20)));
        if (M2C_FIELD(arg0, u16 *, 0x70) & 0x10) {
            temp_r29 = (u8 *)lbl_8050E208 + (temp_r30 * 0x50) + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x10), (int) (6), (int) (1)) != 0) || (is_locked__11TWindowMenuFPvi((void *) (arg0), (int) (0x10)) != 0)) {
                ((M2C_UNK (*)(void *))move_cursor_prev__11TWindowMenuFPv)((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x20), (int) (6), (int) (1)) != 0) || (is_locked__11TWindowMenuFPvi((void *) (arg0), (int) (0x20)) != 0)) {
                ((M2C_UNK (*)(void *))select_next_item__11TWindowMenuFPv)((void *) (arg0));
            }
        } else {
            temp_r29_2 = (u8 *)lbl_8050E208 + (temp_r30 * 0x50) + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (is_locked__11TWindowMenuFPvi((void *) (arg0), (int) (0x10)) != 0)) {
                ((M2C_UNK (*)(void *))move_cursor_prev__11TWindowMenuFPv)((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (is_locked__11TWindowMenuFPvi((void *) (arg0), (int) (0x20)) != 0)) {
                ((M2C_UNK (*)(void *))select_next_item__11TWindowMenuFPv)((void *) (arg0));
            }
        }
        temp_r29_3 = (u8 *)lbl_8050E208 + (temp_r30 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (4)) != 0) || (((s32 (*)(void *, int))TWindowMenu__sub_80266B30)((void *) (arg0), 4) != 0)) {
            ((M2C_UNK (*)(void *))confirm_selection__11TWindowMenuFPv)((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (((s32 (*)(void *, int))TWindowMenu__sub_80266B30)((void *) (arg0), 2) != 0)) {
            ((M2C_UNK (*)(void *))set_active_flag__11TWindowMenuFPv)((void *) (arg0));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD178) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            update_subwindow__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, void **, 0x88));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            increment_counter__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, void **, 0x84));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    TWindowSubComCard__sub_80265B5C((void *) (arg0));
    step_window_tween((void *) (arg0));
    ((M2C_UNK (*)(void *))update_target_y__17TWindowSubComCardFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *))clamp_menu_choice_scroll)((void *) (arg0));
    ((M2C_UNK (*)(void *))advance_past_disabled_menu_rows)((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__11TWindowMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowMenu;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TWindowMenu__ct(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 i;
    u8 *p;
    construct_with_parent__15TWindowAdditionFPvPv(arg0, lbl_804D05CC, arg2, arg3);
    *(void **)(arg0 + 0x18) = ((s32 *)&__vt__11TWindowMenu);
    *(s32 *)arg0 = lbl_805D3960;
    *(s16 *)(arg0 + 0x72) = 0;
    *(s16 *)(arg0 + 0x74) = 0;
    *(u16 *)(arg0 + 0x76) = arg1;
    *(s16 *)(arg0 + 0x78) = 0;
    *(s16 *)(arg0 + 0x70) = 0;
    *(s16 *)(arg0 + 0x20) = arg2;
    reset_selection__17TWindowSubComCardFPv((void*)(arg0));
    *(u8 **)(arg0 + 0x80) = alloc_buffer__11TOBoss4RockFPv(arg1 * 8);
    p = *(u8 **)(arg0 + 0x80);
    for (i = 0; i < arg1; i++) {
        *(s32 *)p = 0;
        *(s32 *)(p + 4) = 0;
        p += 8;
    }
    *(s32 *)(arg0 + 0x88) = 0;
    *(s32 *)(arg0 + 0x84) = 0;
    return arg0;
}

void copy_position__11TWindowMenuFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

s32 TWindowMenu__sub_80266B18(u8 *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x28) + (arg1 * 4)), u16 **, 0), u16 *, 0) & 1;
}

u8 TWindowMenu__sub_80266B30(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0U;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((u8 *)&(*(RecoveredGlobal_80266B30_lbl_8050E208 *)&lbl_8050E208).value + 0x160);
}

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(lbl_8050E208 + 0x160, arg1, 6, 1);
}

int TWindowMenu__sub_80266BB8(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
