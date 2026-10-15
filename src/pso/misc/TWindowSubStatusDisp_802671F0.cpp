#include "types.h"
#include <stddef.h>

struct Stack_80266EB8 {
    f32 sp8;
    f32 spC;
};
struct Vec2_80266E34 { f32 x, y; };
struct List_80266E34 {
    u8 pad0[0x48]; f32 window_height; u8 pad1[0x72 - 0x4C]; s16 count; u8 pad2[0x84 - 0x74]; void *scrollbar;
};
struct RecoveredGlobal_80267704_lbl_804D0604 {
    s32 value;
    u8 remaining[0x10];
};
struct Stack_80267B18 {
    f32 sp8;
    f32 spC;
};
struct Win_80267AA8 { u8 p0[0x74]; s16 f74; s16 f76; };
struct Stack_80267D14 {
    f32 sp8;
    f32 spC;
};
struct V_80267F9C { f32 x; f32 y; };
struct RecoveredGlobal_80268048_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Win_80267714
{
  f32 x;
  f32 y;
  u8 pad8[0x30 - 8];
  s32 i30;
  u8 pad34[4];
  f32 f38;
};

struct Pt_80267714
{
  f32 x;
  f32 y;
};

extern "C" {
s32 get_shared_text_buffer();
u32 calc_text_width();
u8 get_font_char_advance();
void map_char_to_font_code(s32);
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append(char *);
void text_builder_reset();
s32 draw_window_text(void *, s32, s32, s32, f32);
void set_text_draw_params(void *, u8, s32, f32, f32);
void draw_window_tab(void *, void *, s32, f32);
extern const f32 lbl_805DD180;
extern const f32 lbl_805DD19C;
extern const f32 lbl_805DD1A0;
extern const f32 lbl_805DD1A4;
extern const f32 lbl_805DD1A8;
extern const f32 lbl_805DD1AC;
extern const f32 lbl_805DD1B0;
extern const f32 lbl_805DD1B4;
extern const f32 lbl_805DD1B8;
extern const f32 lbl_805DD1BC;
extern char lbl_805DD1C0[2];
void draw_item_list_capacity(void *arg0, Win_80267714 *arg1, s32 arg2, s32 arg3);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
void update_scroll_offset__20TWindowSubStatusDispFPv(void *arg0);
}

extern "C" {

extern const f32 lbl_805DD180;
extern const f32 lbl_805DD184;
extern const f32 lbl_805DD188;
extern const f32 lbl_805DD18C;
extern const f32 lbl_805DD190;
extern const f32 lbl_805DD194;
extern const f32 lbl_805DD1BC;
extern const f32 lbl_805DD1C4;
extern const f32 lbl_805DD1C8;
extern const f32 lbl_805DD1CC;
extern const f32 lbl_805DD1D0;
extern s32 lbl_805D3968;
extern RecoveredGlobal_80267704_lbl_804D0604 lbl_804D0604;
extern s32 lbl_804D05F8[];
extern RecoveredGlobal_80268048_lbl_8050E208 controller_input_state;
extern s32 lbl_804D0618[];

s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
s32 clamp_list_scroll_offset(int, void *, void *);
s32 get_cursor_pos__14TWindowSubItemFPv();
s32 copy_position__11TWindowMenuFPvPv(void *, void *);
s32 setup_entry_msg_d1__20TWindowSubStatusDispFPvi(s32, s32);
s32 setup_entry_msg_d0__20TWindowSubStatusDispFPvi(s32, s32);
s32 init_no_item_entry__20TWindowSubStatusDispFPvi(s32, s32);
s32 init_entry__20TWindowSubStatusDispFPvccUcUii(s32, u8, u8, int, s32, s32);
s32 fn_80266BD0(s32, u8 *, u8 *, s16);
s32 TWindowSubStatusDisp__sub_80258A28(s32, s32, s32);
s32 get_localized_text_entry(s32, s32);
u32 get_player_by_client_id(s16);
s32 fn_801C5404(s32);
s8 clamp_char_at__10TObjPlayerFPvi(s32, s32);
s32 is_boss_area();
s32 reset_key_machine_state__10TObjPlayerFv();
s32 setup_stat_line__20TWindowSubStatusDispFPviii(u16 *, s32, s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 finalize_state__20TWindowSubStatusDispFPv(s32);
s32 is_flag80_set__20TWindowSubStatusDispFPv(s32);
s32 advance_state__20TWindowSubStatusDispFPv();
s32 init_status_entry__20TWindowSubStatusDispFPvcUii(void*, s32, s32, s32);
s32 set_inventory_item__20TWindowSubStatusDispFPvPvii(s32, s32, s32, s32);
s32 update_from_player__20TWindowSubStatusDispFPvPvii(s32, s32, s32, s32);
s32 init_item_row__20TWindowSubStatusDispFPvPvi(s32, s32, s32);
s32 set_ground_item__20TWindowSubStatusDispFPvPvi(s32, s32, s32);
s32 set_item_info__20TWindowSubStatusDispFPvPviPv(s32, s32, s32, s32);
s32 init_display__20TWindowSubStatusDispFPvii(s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 reset_selection__20TWindowSubStatusDispFPv(int, void *);
s32 TWindowMenu__sub_80266B18(void *, s32);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
s32 get_status_flag__6TLobbyFPv(void *);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(void *, s32);
s32 draw_selection_bar(s32, u16 *, s32);
u8 *fn_802683F4(void *, s32, s32, s16);
u8 *__nw__7TObjectFUl(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 step_window_tween(void *);
s32 fn_80244994(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 get_flag__20TWindowSubStatusDispFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 draw_window_scrollbar(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
s32 forward_render__20TWindowSubStatusDispFPv(s32, s32);

void select_cursor_entry__6TLobbyFPv(void *arg0);
void calc_list_content_extent(struct List_80266E34 *s);
void clamp_scroll_offset__20TWindowSubStatusDispFPv(u8 *arg0);
void advance_line__19TWindowSubShortMailFPvi(void *arg0, s32 arg1);
void advance_status_disp_entry(void *arg0, s32 arg1);
void add_list_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
void push_status_disp_entry(void *arg0, s32 arg1, s32 arg2);
void add_battle_stat_entry(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void advance_all_entries__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1);
void refresh_selected_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void add_status_entry__20TWindowSubStatusDispFPvcii(void *arg0, s8 arg1, s32 arg2, s32 arg3);
void add_inventory_item__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void add_item__24TShopEquipmentSellWindowFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *arg0, s32 arg1, s32 arg2);
void add_item_info_entry__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void add_ground_item__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
void TAdVIConfigGC__sub_80267704(s32 arg0);
void set_flag4__20TWindowSubStatusDispFPv(void *arg0);
void handle_open__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor__20TWindowSubStatusDispFPv(void *arg0);
void set_cursor_index__20TWindowSubStatusDispFPvs(Win_80267AA8 *w, s16 v);
void create_menu_scroll_bar(u8 *arg0);
void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void start_scroll__13TWindowSubMagFPvf(void *arg0, f32 farg0);
void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0);
void center_list_selection(u8 *arg0);
void clamp_item_list_scroll(u8 *arg0);
void draw_selected_list_entry(void *arg0, s32 arg1);
void TWindowMenuIconLine__ct(u8 *arg0, u32 arg1, s32 arg2);
u8 *fn_80267F38(s32 arg0, s32 arg1, s32 arg2, s16 arg3);
void TShopJudgmentItemWindow__sub_80267F9C(V_80267F9C v, s32 x);
void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0);
void update_item_list_window(u8 *arg0);
void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);

extern "C" {
extern const f32 lbl_805DD188 = 0.0f;
extern const f32 lbl_805DD18C = 20.0f;
extern const f32 lbl_805DD190 = 6.0f;
extern const f32 lbl_805DD194 = -18.0f;
extern const f32 lbl_805DD198 = 40.0f;
extern const f32 lbl_805DD19C = 166.0f;
extern const f32 lbl_805DD1A0 = 13.0f;
extern const f32 lbl_805DD1A4 = -60.0f;
extern const f32 lbl_805DD1A8 = 50.0f;
extern const f32 lbl_805DD1AC = 4.0f;
extern const f32 lbl_805DD1B0 = -1.0f;
extern const f32 lbl_805DD1B4 = 0.1794f;
extern const f32 lbl_805DD1B8 = 100000.0f;
extern const f32 lbl_805DD1BC = 0.5f;
}
#define lbl_805DD188 (*(const f32 *)&lbl_805DD188)
#define lbl_805DD18C (*(const f32 *)&lbl_805DD18C)
#define lbl_805DD190 (*(const f32 *)&lbl_805DD190)
#define lbl_805DD194 (*(const f32 *)&lbl_805DD194)
#define lbl_805DD198 (*(const f32 *)&lbl_805DD198)
#define lbl_805DD19C (*(const f32 *)&lbl_805DD19C)
#define lbl_805DD1A0 (*(const f32 *)&lbl_805DD1A0)
#define lbl_805DD1A4 (*(const f32 *)&lbl_805DD1A4)
#define lbl_805DD1A8 (*(const f32 *)&lbl_805DD1A8)
#define lbl_805DD1AC (*(const f32 *)&lbl_805DD1AC)
#define lbl_805DD1B0 (*(const f32 *)&lbl_805DD1B0)
#define lbl_805DD1B4 (*(const f32 *)&lbl_805DD1B4)
#define lbl_805DD1B8 (*(const f32 *)&lbl_805DD1B8)
#define lbl_805DD1BC (*(const f32 *)&lbl_805DD1BC)

void select_cursor_entry__6TLobbyFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x74));
    get_cursor_pos__14TWindowSubItemFPv();
}

void calc_list_content_extent(struct List_80266E34 *s) {
    struct Vec2_80266E34 v;

    if (s->scrollbar != NULL) {
        v.x = s->window_height - lbl_805DD180;
        if (s->scrollbar != NULL) {
            v.x -= lbl_805DD184;
        }
        v.y = (f32) (s->count * 20 - 2);
        copy_position__11TWindowMenuFPvPv(s->scrollbar, &v);
    }
}

void clamp_scroll_offset__20TWindowSubStatusDispFPv(u8 *arg0) {
    Stack_80266EB8 stack;
    f32 temp_f1;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
        stack.sp8 = lbl_805DD188;
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x4C) - lbl_805DD18C;
        stack.spC = temp_f1;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            stack.spC = temp_f1 - lbl_805DD190;
        }
        clamp_list_scroll_offset((int) (*(u32 *)((s8 *)arg0 + 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void advance_line__19TWindowSubShortMailFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;
    temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        setup_entry_msg_d1__20TWindowSubStatusDispFPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void advance_status_disp_entry(void *arg0, s32 arg1) {
    s16 temp_r4;
    temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        setup_entry_msg_d0__20TWindowSubStatusDispFPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void add_list_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;
    temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        init_no_item_entry__20TWindowSubStatusDispFPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    u8 sp9;
    u8 sp8;

    if ((s16) *(s16 *)((s8 *)arg0 + 0x72) < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        fn_80266BD0(arg1, &sp9, &sp8, *(s16 *)((s8 *)arg0 + 0x20));
        init_entry__20TWindowSubStatusDispFPvccUcUii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x72)), sp9, sp8, arg2, arg3, arg4);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void push_status_disp_entry(void *arg0, s32 arg1, s32 arg2) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x72) < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        TWindowSubStatusDisp__sub_80258A28(((s32 (*)(void *))get_array_entry__20TWindowSubStatusDispFPvi)(arg0), arg1, arg2);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void add_battle_stat_entry(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;
    u16 *temp_r30;
    u32 temp_r3;

    if ((s16) *(s16 *)((s8 *)arg0 + 0x72) < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        temp_r3 = get_player_by_client_id(*(s16 *)((s8 *)arg0 + 0x20));
        if (temp_r3 != 0U) {
            if (arg1 == 4) {
                var_r31 = fn_801C5404(temp_r3 + 0x7C8);
            } else {
                var_r31 = clamp_char_at__10TObjPlayerFPvi(temp_r3 + 0x7C4, arg1);
            }
            if (var_r31 > 0) {
                temp_r30 = ((u16 *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, *(s16 *)((s8 *)arg0 + 0x72));
                setup_stat_line__20TWindowSubStatusDispFPviii(temp_r30, get_localized_text_entry(0x10, arg1 + 0x13), var_r31, arg2);
                if ((arg3 != 0) && ((reset_key_machine_state__10TObjPlayerFv() == 0) || (is_boss_area() != 0))) {
                    *temp_r30 |= 0x80;
                }
                *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
            }
        }
    }
}

void advance_all_entries__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1) {
    s32 i;
    ((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, *(s16 *)(arg0 + 0x74));
    if (((s32 (*)(void))is_flag80_set__20TWindowSubStatusDispFPv)() == 0) {
        if (arg1 != 0) {
            play_sound_effect(0x52D01, 0, 0, 0);
        }
        for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
            ((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
            advance_state__20TWindowSubStatusDispFPv();
        }
        ((s32 (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, *(s16 *)(arg0 + 0x74));
        ((s32 (*)(void))finalize_state__20TWindowSubStatusDispFPv)();
    }
}

void refresh_selected_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x74));
    if (((s32 (*)(void))is_flag80_set__20TWindowSubStatusDispFPv)() == 0) {
        if (arg1 != 0) {
            play_sound_effect(0x52D01, 0, 0, 0);
        }
        finalize_state__20TWindowSubStatusDispFPv(temp_r31);
    }
}

void add_status_entry__20TWindowSubStatusDispFPvcii(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    s32 var_r29;
    s16 temp_r5;
    void *temp_r31;

    temp_r5 = *(s16 *)((s8 *)arg0 + 0x72);
    if (temp_r5 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        if (arg1 & 8) {
            var_r29 = 0xD;
        } else if (arg1 & 4) {
            var_r29 = 0xF;
        } else {
            var_r29 = 0x33;
        }
        temp_r31 = ((void *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, temp_r5);
        init_status_entry__20TWindowSubStatusDispFPvcUii(temp_r31, var_r29, arg2, arg3);
        *(f32 *)((s8 *)temp_r31 + 8) = (f32) lbl_805DD194;
        if (arg1 & 2) {
            *(s8 *)((s8 *)temp_r31 + 0x1C) = 0xE;
            *(u16 *)((s8 *)temp_r31 + 0) = (u16) (*(u16 *)((s8 *)temp_r31 + 0) | 0x100);
        }
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

void init_status_entry_by_flag__20TWindowSubStatusDispFPvi(void *, s32, s32, s32);
void append_entry__20TWindowSubStatusDispFPviiiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 *e;
    s32 i;
    f32 k;
    u8 *p;

    if (*(s16 *)(arg0 + 0x72) < *(s16 *)(arg0 + 0x76)) {
        e = (u16 *)((void *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, *(s16 *)(arg0 + 0x72));
        init_status_entry_by_flag__20TWindowSubStatusDispFPvi(e, arg1, arg2, arg3);
        if (arg4 != 0) {
            *e |= 0x400;
        }
        if (arg5 != 0) {
            k = lbl_805DD198;
            i = 0;
            *e |= 0x1000;
            while (i < *(s16 *)(arg0 + 0x76)) {
                p = (u8 *)((void *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
                *(f32 *)(p + 0xC) = k * (f32)i++;
            }
        }
        (*(s16 *)(arg0 + 0x72))++;
    }
}

void add_inventory_item__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
        if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
            set_inventory_item__20TWindowSubStatusDispFPvPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
        }
    }
}

void add_item__24TShopEquipmentSellWindowFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
        if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
            update_from_player__20TWindowSubStatusDispFPvPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
        }
    }
}

void add_list_entry__23TShopJudgmentItemWindowFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
        if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
            init_item_row__20TWindowSubStatusDispFPvPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2);
            *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
        }
    }
}

void add_item_info_entry__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
        if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
            set_item_info__20TWindowSubStatusDispFPvPviPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
        }
    }
}

void add_ground_item__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) *(s16 *)((s8 *)arg0 + 0x72);
        if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
            set_ground_item__20TWindowSubStatusDispFPvPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2);
            *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
        }
    }
}

void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x72) < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        init_display__20TWindowSubStatusDispFPvii(((s32 (*)(void *))get_array_entry__20TWindowSubStatusDispFPvi)(arg0), arg1, arg2);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

typedef char RecoveredGlobal_80267704_lbl_804D0604_size[sizeof(RecoveredGlobal_80267704_lbl_804D0604) == 0x14 ? 1 : -1];
void TAdVIConfigGC__sub_80267704(s32 arg0) {
    *(s32 *)((s8 *)(&lbl_804D0604.value) + 0x10) = arg0;
}

typedef struct Pt_80267714 Pt_80267714;
typedef struct Win_80267714 Win_80267714;
#pragma fp_contract on
void draw_item_list_capacity(void *arg0, Win_80267714 *arg1, s32 arg2, s32 arg3) {
  u8 new_var;
  Pt_80267714 pt;
  if (arg1->i30 >= 0)
  {
    pt.x = (lbl_805DD19C + arg1->x) - lbl_805DD180;
    pt.y = arg1->y - lbl_805DD1A0;
    draw_window_tab(arg1, &pt, 0, lbl_805DD1A4);
    pt.x += lbl_805DD1A8;
    pt.y += lbl_805DD1AC;
    set_text_draw_params(arg1, 0, 0, lbl_805DD1B0 / (lbl_805DD1B4 + arg1->f38), lbl_805DD1B8);
    text_builder_reset();
    TWindowSubStatusDisp__sub_80228F5C(arg2);
    get_shared_text_buffer();
    pt.x -= (f32) calc_text_width();
    map_char_to_font_code(0x2F);
    new_var = get_font_char_advance();
    pt.x -= lbl_805DD1BC * new_var;
    text_builder_append(lbl_805DD1C0);
    TWindowSubStatusDisp__sub_80228F5C(arg3);
    draw_window_text(&pt, get_shared_text_buffer(), -1, 0, lbl_805DD1B8);
  }
}

void set_flag4__20TWindowSubStatusDispFPv(void *arg0) {
    if (!(*(u16 *)((s8 *)arg0 + 0x70) & 8) && (((s32 (*)(void))get_status_flag__6TLobbyFPv)() == 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(u16 *)((s8 *)arg0 + 0x70) = (u16) (*(u16 *)((s8 *)arg0 + 0x70) | 4);
    }
}

void handle_open__20TWindowSubStatusDispFPv(void *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x74));
    if ((is_flag_4_set__20TWindowSubStatusDispFPv() == 0) || (is_flag80_set__20TWindowSubStatusDispFPv(temp_r31) != 0)) {
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    }
    if (!(*(u16 *)((s8 *)arg0 + 0x70) & 0x100)) {
        play_sound_effect(0x52D01, 0, 0, 0);
    }
    *(u16 *)((s8 *)arg0 + 0x70) = (u16) (*(u16 *)((s8 *)arg0 + 0x70) | 2);
    if (*(void **)((s8 *)arg0 + 0x80) != NULL) {
        set_entry_state__20TWindowSubStatusDispFPvc(*(void **)((s8 *)arg0 + 0x80), 2);
    }
}

void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = *(s16 *)((s8 *)arg0 + 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        if (!(*(u16 *)((s8 *)arg0 + 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) *(s16 *)((s8 *)arg0 + 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                *(s16 *)((s8 *)arg0 + 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = *(s16 *)((s8 *)arg0 + 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(*(u16 *)((s8 *)arg0 + 0x70) & 1)) {
            var_r31 = *(s16 *)((s8 *)arg0 + 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) *(s16 *)((s8 *)arg0 + 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                *(s16 *)((s8 *)arg0 + 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void set_cursor_index__20TWindowSubStatusDispFPvs(Win_80267AA8 *w, s16 v) {
    if (v >= 0) {
        if (v >= w->f76) {
            return;
        }
        while (TWindowMenu__sub_80266B18(w, v) == 0) {
            if (v > 0) {
                v -= 1;
                continue;
            }
            break;
        }
        w->f74 = v;
    }
}

void create_menu_scroll_bar(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80267B18, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80267B18, spC) == 0x4) ? 1 : -1];
    Stack_80267B18 stack;
    f32 temp_f1;
    f32 temp_f2;
    u32 temp_r3;
    u32 var_r0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x38);
        temp_f1 = temp_f2 - lbl_805DD180;
        stack.spC = lbl_805DD188;
        stack.sp8 = temp_f1;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
        var_r0 = temp_r3;
        if (var_r0 != 0U) {
            var_r0 = reset_selection__20TWindowSubStatusDispFPv((int) (temp_r3), (void *) (&stack.sp8));
        }
        *(u32 *)((s8 *)arg0 + 0x84) = var_r0;
        *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) | 0x80);
    }
}

void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            var_r0 = construct_type1_heading__20TWindowSubStatusDispFPvii(var_r0, arg1, *(s16 *)((s8 *)arg0 + 0x20));
        }
        *(u32 *)((s8 *)arg0 + 0x80) = var_r0;
        *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (*(s32 *)((s8 *)arg0 + 0x2C) | 0x40);
    }
}

void start_scroll__13TWindowSubMagFPvf(void *arg0, f32 farg0) {
    u16 temp_r4;

    temp_r4 = *(u16 *)((s8 *)arg0 + 0x70);
    if (temp_r4 & 0x20) {
        *(u16 *)((s8 *)arg0 + 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        *(f32 *)((s8 *)arg0 + 0x3C) = farg0;
        *(s32 *)((s8 *)arg0 + 0x50) = 3;
    }
}

void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0) {
    u16 temp_r4;
    void *temp;

    temp_r4 = *(u16 *)((s8 *)arg0 + 0x70);
    if (!(temp_r4 & 0x20)) {
        *(u16 *)((s8 *)arg0 + 0x70) = (u16) (temp_r4 | 0x20);
        temp = ((u16 *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)((void *)(arg0), (s16)(*(s16 *)((s8 *)arg0 + 0x74)));
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (lbl_805DD18C + *(f32 *)((s8 *)temp + 0x14));
        if (*(s32 *)((s8 *)arg0 + 0x2C) & 0x40) {
            *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) + lbl_805DD190);
        }
        *(s32 *)((s8 *)arg0 + 0x50) = 3;
    }
}

#pragma push
#pragma fp_contract on
void center_list_selection(u8 *arg0) {
    f32 target;

    if ((*(u32 *)((s8 *)arg0 + 0x84) != 0U) && (*(u32 *)((s8 *)arg0 + 0x50) == 0U)) {
        f32 t = (*(f32 *)((s8 *)arg0 + 0x4C) - lbl_805DD1C8) - lbl_805DD1CC;
        target = lbl_805DD1C4 + (f32) (*(s16 *)((s8 *)arg0 + 0x74) * 0x14);
        target -= lbl_805DD1BC * t;
        *(f32 *)((s8 *)arg0 + 0x6C) += target - *(f32 *)((s8 *)arg0 + 0x6C);
    }
}
#pragma pop

void clamp_item_list_scroll(u8 *arg0) {
    Stack_80267D14 stack;
    f32 temp_f1;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
        stack.sp8 = lbl_805DD188;
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x4C) - (*(const f32 *)&lbl_805DD18C);
        stack.spC = temp_f1;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            stack.spC = temp_f1 - (*(const f32 *)&lbl_805DD190);
        }
        clamp_list_scroll_offset((int) (*(u32 *)((s8 *)arg0 + 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

#pragma fp_contract on
void update_scroll_offset__20TWindowSubStatusDispFPv(void *arg0) {
  s8 *new_var;
  f32 var_f4;
  u32 n;
  if ((*((u16 *) (((s8 *) arg0) + 0x70))) & 0x20)
  {
    new_var = ((s8 *) ((u16 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, *((s16 *) (((s8 *) arg0) + 0x74))))) + 0xC;
    var_f4 = *((f32 *) new_var);
  }
  else
  {
    var_f4 = lbl_805DD188;
  }
  n = *((u32 *) (((s8 *) arg0) + 0x50));
  if (n == 0)
  {
    *((f32 *) (((s8 *) arg0) + 0x6C)) = var_f4;
  }
  else
  {
    var_f4 += lbl_805DD1BC * ((*((f32 *) (((s8 *) arg0) + 0x3C))) - (*((f32 *) (((s8 *) arg0) + 0x4C))));
    *((f32 *) (((s8 *) arg0) + 0x6C)) += (var_f4 - (*((f32 *) (((s8 *) arg0) + 0x6C)))) / ((f32) n);
  }
}

void draw_selected_list_entry(void *arg0, s32 arg1) {
    u16 *temp_r3;

    if (!(*(u16 *)((s8 *)arg0 + 0x70) & 0x80)) {
        temp_r3 = ((u16 *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)((void *)(arg0), (s16)(*(s16 *)((s8 *)arg0 + 0x74)));
        if (*temp_r3 & 1) {
            draw_selection_bar(arg1, temp_r3, get_status_flag__6TLobbyFPv(arg0));
        }
    }
}

void TWindowMenuIconLine__ct(u8 *arg0, u32 arg1, s32 arg2) {
    u32 i;
    u8 *e;
    *(s32 *)arg0 = lbl_805D3968;
    *(s16 *)(arg0 + 0x20) = arg2;
    *(s16 *)(arg0 + 0x72) = 0;
    *(s16 *)(arg0 + 0x74) = 0;
    *(u16 *)(arg0 + 0x76) = arg1;
    *(s16 *)(arg0 + 0x78) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    *(s16 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x80) = 0;
    *(s32 *)(arg0 + 0x84) = 0;
    for (i = 0; i < arg1; i++) {
        e = ((u8 *(*)(void *, u32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        *(f32 *)(e + 0xC) = (f32)(i * 0x14);
    }
}

u8 *fn_80267F38(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    ((s32 (*)(void *, void *))TShopJudgmentItemWindow__sub_80267F9C)((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x88));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(fn_802683F4(temp_r3, arg0, arg2, arg3));
    }
    return var_r0;
}

void TShopJudgmentItemWindow__sub_80267F9C(V_80267F9C v, s32 x) {
    ((V_80267F9C *)&lbl_804D0604)[0].x = v.x;
    ((V_80267F9C *)&lbl_804D0604)[0].y = v.y;
    lbl_804D05F8[1] = x;
}

void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(*(u32 *)((s8 *)arg0 + 0x80), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
        draw_window_scrollbar(*(u32 *)((s8 *)arg0 + 0x84), temp_r3, arg0 + 0x68);
    }
}

typedef char RecoveredGlobal_80268048_lbl_8050E208_size[sizeof(RecoveredGlobal_80268048_lbl_8050E208) == 0x1B0 ? 1 : -1];
void update_item_list_window(u8 *arg0) {
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r29;
    u8 *temp_r29_2;
    u8 *temp_r29_3;
    temp_r31 = is_player_input_active((int) ((s32) *(s16 *)((s8 *)arg0 + 0x20)));
    if ((get_flag__20TWindowSubStatusDispFPv((void *) (arg0)) == 0) && (get_status_flag__6TLobbyFPv((void *) (arg0)) == 0) && (fn_80244994((void *) (arg0)) != 0)) {
        if (*(u16 *)((s8 *)arg0 + 0x70) & 0x10) {
            temp_r29 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor__20TWindowSubStatusDispFPv)((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor_next__20TWindowSubStatusDispFPv)((void *) (arg0));
            }
        } else {
            temp_r29_2 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor__20TWindowSubStatusDispFPv)((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor_next__20TWindowSubStatusDispFPv)((void *) (arg0));
            }
        }
        temp_r29_3 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            ((s32 (*)(void *))handle_open__20TWindowSubStatusDispFPv)((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            ((s32 (*)(void *))set_flag4__20TWindowSubStatusDispFPv)((void *) (arg0));
        }
    }
    if ((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DD1D0) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x80);
        if (temp_r3 != 0U) {
            update_subwindow__20TWindowSubStatusDispFPv((int) (temp_r3));
        }
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x84);
        if (temp_r3_2 != 0U) {
            increment_counter__20TWindowSubStatusDispFPv((int) (temp_r3_2));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_scroll_offset__20TWindowSubStatusDispFPv((void *)((void *) (arg0)));
    step_window_tween((void *) (arg0));
    ((s32 (*)(void *))center_list_selection)((void *) (arg0));
    ((s32 (*)(void *))clamp_item_list_scroll)((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804D0618;
        destroy_allocation__20TWindowSubStatusDispFis(*(void **)((s8 *)arg0 + 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(*(void **)((s8 *)arg0 + 0x80), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
