#include "types.h"

struct Obj_8027E558 { s32 f0; u8 pad[0x14]; void *vt; u8 pad2[0x88 - 0x1C]; void *list; };

extern "C" {
void TShopJudgmentItemWindow__sub_80267F9C(void *, int);
void *__nw__7TObjectFUl(int);
extern s32 lbl_8044FAA8[];
void *create__22TWindowSubShortCutListFPvPv(void *arg0, void *arg1);
void *get_message_10__20TWindowSubStatusDispFPv(s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void set_flag70_bit10__20TWindowShortListCtrlFPv(void *);
void set_cursor_index__20TWindowSubStatusDispFPvs(void *, s16);
void ensure_status_display__20TWindowSubStatusDispFPvi(void *, void *);
void fn_802683F4(void *, void *, s32, s16);
void *init__21TWindowSubComCardListFPviii(void *, s8, s32, s32);
extern s32 __vt__22TWindowSubShortCutList[];
extern s32 TWindowSubShortCutList__class_name;
extern s32 local_client_id;
void *TWindowSubShortCutList__ct(void *arg0, void *arg1, void *arg2);
s32 get_shared_text_buffer();
s32 fn_80076BC4(s32 *);
s32 *get_chat_shortcut(s32);
s32 get_symbol_chat_data__20TWindowSubSymbolChatFPv();
s32 open_symbol_chat__11TWindowChatFPv(s32 *);
s8 get_type__20TWindowSubStatusDispFPv(s32);
s32 clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void *);
s32 save_cursor_selection__20TShopArmorListWindowFPv();
s32 reset_list__20TShopArmorListWindowFPv(void *);
void draw_entry__22TWindowSubShortCutListFPviUcii(void *, s32, u8, s32, s32);
s32 update_state__9TWindowDDFv(s32 *, s32, u16);
extern s32 local_client_id;
void refresh_entries__22TWindowSubShortCutListFPv(void *arg0);
}

extern "C" {

void *__dt__22TWindowSubShortCutListFv(void *arg0, s16 arg1);
void render__22TWindowSubShortCutListFv(u8 *arg0);
void run_task__22TWindowSubShortCutListFv(void *arg0);
s32 handle_list_page_flip_input(s32);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 update_item_list_window();
s32 draw_list_page_indicator(s32, s32);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
s32 draw_selected_list_entry(void *, s32);
s32 forward_render__20TWindowSubStatusDispFPv(s32, s32);
s32 get_status_flag__6TLobbyFPv(void *);

void refresh_entries__22TWindowSubShortCutListFPv(void *arg0) {
    s32 *temp_r3;
    s32 temp_r0;
    s32 var_r30;
    s32 var_r29;
    save_cursor_selection__20TShopArmorListWindowFPv();
    reset_list__20TShopArmorListWindowFPv(arg0);
    var_r29 = get_type__20TWindowSubStatusDispFPv(*(s32 *)((s8 *)arg0 + 0x88));
    var_r30 = 0;
    var_r29 *= 4;
    do {
        temp_r3 = get_chat_shortcut(var_r29);
        switch (*temp_r3) {
        case 0:
            draw_entry__22TWindowSubShortCutListFPviUcii(arg0, var_r29, 0x33, 0, var_r29);
            break;
        case 1:
            temp_r0 = fn_80076BC4(temp_r3 + 1);
            draw_entry__22TWindowSubShortCutListFPviUcii(arg0, var_r29, 0x12, temp_r0, var_r29);
            break;
        case 2:
            update_state__9TWindowDDFv(temp_r3 + 1, get_shared_text_buffer(), (u16) local_client_id);
            draw_entry__22TWindowSubShortCutListFPviUcii(arg0, var_r29, 0x10, get_shared_text_buffer(), var_r29);
            break;
        case 3:
            open_symbol_chat__11TWindowChatFPv(temp_r3 + 1);
            {
                s32 d = get_symbol_chat_data__20TWindowSubSymbolChatFPv();
                draw_entry__22TWindowSubShortCutListFPviUcii(arg0, var_r29, 0x11, d, var_r29);
            }
            break;
        }
        var_r30 += 1;
        var_r29 += 1;
    } while (var_r30 < 4);
    clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(arg0);
}

void *create__22TWindowSubShortCutListFPvPv(void *arg0, void *arg1) {
    void *p;
    TShopJudgmentItemWindow__sub_80267F9C(lbl_8044FAA8, 4);
    p = __nw__7TObjectFUl(0x8C);
    if (p != 0) {
        p = TWindowSubShortCutList__ct((void *)(p), (void *)(arg0), (void *)(arg1));
    }
    return p;
}

void render__22TWindowSubShortCutListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(*(u32 *)((s8 *)arg0 + 0x80), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x88) != 0U) {
        draw_list_page_indicator(*(u32 *)((s8 *)arg0 + 0x88), temp_r3);
    }
}

void run_task__22TWindowSubShortCutListFv(void *arg0) {
    update_item_list_window();
    if ((get_status_flag__6TLobbyFPv(arg0) == 0) && (handle_list_page_flip_input(*(s32 *)((s8 *)arg0 + 0x88)) != 0)) {
        refresh_entries__22TWindowSubShortCutListFPv((void *)(arg0));
    }
}

extern s32 __vt__22TWindowSubShortCutList[];

void *__dt__22TWindowSubShortCutListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TWindowSubShortCutList;
        delete_if_allocated(*(void **)((s8 *)arg0 + 0x88), 1);
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TWindowSubShortCutList__ct(void *arg0, void *arg1, void *arg2) {
    s32 row;
    s32 col;
    void *p;
    fn_802683F4(arg0, arg1, 4, local_client_id);
    ((Obj_8027E558 *)arg0)->vt = ((s32 *)&__vt__22TWindowSubShortCutList);
    ((Obj_8027E558 *)arg0)->f0 = TWindowSubShortCutList__class_name;
    row = (s32)arg2 / 4;
    col = (s32)arg2 % 4;
    ensure_status_display__20TWindowSubStatusDispFPvi(arg0, get_message_10__20TWindowSubStatusDispFPv(0x2D));
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (p != NULL) {
        p = init__21TWindowSubComCardListFPviii(p, row, 5, local_client_id);
    }
    ((Obj_8027E558 *)arg0)->list = p;
    set_flag70_bit10__20TWindowShortListCtrlFPv(arg0);
    refresh_entries__22TWindowSubShortCutListFPv((void *)(arg0));
    set_cursor_index__20TWindowSubStatusDispFPvs(arg0, col);
    return arg0;
}

}
