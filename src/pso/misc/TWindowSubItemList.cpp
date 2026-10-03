#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList_size[sizeof(RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList) == 0x20 ? 1 : -1];

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
M2C_UNK draw_item_list_capacity(void *, int, int, int);
M2C_UNK draw_selected_list_entry(void *, int);
M2C_UNK draw_window_scrollbar(void *, int, void *);
M2C_UNK fn_8027ACF8(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
void render__18TWindowSubItemListFv(u8 *arg0);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *create_sub_item_list_window(s32 arg0, s32 arg1, s16 arg2);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 create_menu_scroll_bar(void *);
s32 ensure_status_display__20TWindowSubStatusDispFPvi(void *, int);
s32 fn_802683F4(void *, void *, int, void *);
s32 reset_selected__14TWindowSubItemFPv(void *);
extern M2C_UNK __vt__18TWindowSubItemList[];
extern s32 lbl_805D3A58;
u8 *TWindowSubItemList__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1);
int run_task__18TWindowSubItemListFv(void* p);
int update_item_list_window(void*);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

u8 *create_sub_item_list_window(s32 arg0, s32 arg1, s16 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TShopJudgmentItemWindow__sub_80267F9C((void *) (arg1), (int) (0x24));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowSubItemList__ct((u8 *)(temp_r3), (s32)(arg0), arg2));
    }
    return var_r0;
}

#pragma push
#pragma fp_contract on
void render__18TWindowSubItemListFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    draw_selected_list_entry((void *) (arg0), (int) (temp_r3));
    fn_8027ACF8((void *) (arg0), (int) (temp_r3));
    draw_item_list_capacity((void *) (arg0), (int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x8C)), (int) (0x1E));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, void **, 0x80), (int) (temp_r3));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        draw_window_scrollbar(M2C_FIELD(arg0, void **, 0x84), (int) (temp_r3), (void *) (arg0 + 0x68));
    }
}
#pragma pop

int run_task__18TWindowSubItemListFv(void* p) { return update_item_list_window(p); }

extern M2C_UNK __vt__18TWindowSubItemList[];

void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowSubItemList;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowSubItemList__ct(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4((void *) (arg0), (void *) (arg1), (int) (0x24), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList *)&__vt__18TWindowSubItemList).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A58;
    ensure_status_display__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x24))));
    create_menu_scroll_bar((void *) (arg0));
    reset_selected__14TWindowSubItemFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    return arg0;
}

}
