#include "types.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TWindowSubItemList.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList { s32 value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList_size[sizeof(RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList) == 0x20 ? 1 : -1];

extern "C" {
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 draw_item_list_capacity(void *, int, int, int);
s32 draw_window_scrollbar(void *, int, void *);
s32 forward_render__20TWindowSubStatusDispFv(void *, int);
u8 *__nw__7TObjectFUl(s32);
s32 TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *create_sub_item_list_window(s32 arg0, s32 arg1, s16 arg2);
s32 fn_802683F4(void *, void *, int, void *);
extern s32 __vt__18TWindowSubItemList[];
extern s32 TWindowSubItemList__class_name;
u8 *TWindowSubItemList__ct(u8 *arg0, s32 arg1, s16 arg2);
void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1);
int update_item_list_window(void*);
void __dl__7TObjectFPv(void *);

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
void TWindowSubItemList::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    ((TUnk_804D0618 *)arg0)->draw_selected_list_entry((int) (temp_r3));
    ((TWindowSubItemList *)arg0)->sub_8027ACF8((u8 *)temp_r3);
    draw_item_list_capacity((void *) (arg0), (int) (temp_r3), (int) (this->m_8c), (int) (0x1E));
    if ((u32) *(u32 *)&this->m_80 != 0U) {
        forward_render__20TWindowSubStatusDispFv(this->m_80, (int) (temp_r3));
    }
    if ((u32) *(u32 *)&this->unk_84 != 0U) {
        draw_window_scrollbar(*(void * *)&this->unk_84, (int) (temp_r3), (void *) (arg0 + 0x68));
    }
}
#pragma pop

void TWindowSubItemList::run_task() { { (void)(update_item_list_window(this)); return; } }

void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TWindowSubItemList;
        ((TWindowSubStatusDisp *)arg0)->destroy_item_list_resources(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowSubItemList__ct(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4((void *) (arg0), (void *) (arg1), (int) (0x24), (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8027AEDC___vt__18TWindowSubItemList *)&__vt__18TWindowSubItemList).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubItemList__class_name;
    ((TUnk_804D0618 *)arg0)->ensure_status_display((int) (TWindowSubStatusDisp::get_message_10((int) (0x24))));
    ((TUnk_804D0618 *)arg0)->create_menu_scroll_bar();
    ((TWindowSubItem *)arg0)->reset_selected();
    ((TWindowSubItemList *)arg0)->m_8c = 0;
    return arg0;
}

}
