#include "types.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TWindowSubEquipKind.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_80278FE0___vt__19TWindowSubEquipKind {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
s32 fn_802683F4(void *, void *, int, void *);
extern s32 __vt__19TWindowSubEquipKind[];
extern s32 TWindowSubEquipKind__class_name;
u8 *TWindowSubEquipKind__ct(u8 *arg0, s32 arg1, s16 arg2);
void *__dt__19TWindowSubEquipKindFv(void *arg0, s16 arg1);
void render__19TWindowSubEquipKindFv(u8 *arg0);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 update_item_list_window();
s32 draw_window_scrollbar(s32, s32, void *);
s32 draw_tab_label__20TWindowSubStatusDispFPvPv(void *, s32);
void __dl__7TObjectFPv(void *);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);

void render__19TWindowSubEquipKindFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    ((TUnk_804D0618 *)arg0)->draw_selected_list_entry(temp_r3);
    if ((s16) ((TWindowSubEquipKind *)arg0)->m_88 != 4) {
        draw_tab_label__20TWindowSubStatusDispFPvPv(arg0, temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFv(*(u32 *)((s8 *)arg0 + 0x80), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
        draw_window_scrollbar(*(u32 *)((s8 *)arg0 + 0x84), temp_r3, arg0 + 0x68);
    }
}

void TWindowSubEquipKind::run_task() {
    int temp_r3;

    update_item_list_window();
    temp_r3 = this->m_8a;
    if (temp_r3 != 0) {
        this->m_8a = (s16) (temp_r3 - 1);
    }
}

void *__dt__19TWindowSubEquipKindFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSubEquipKind;
        ((TWindowSubStatusDisp *)arg0)->destroy_item_list_resources(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80278FE0___vt__19TWindowSubEquipKind_size[sizeof(RecoveredGlobal_80278FE0___vt__19TWindowSubEquipKind) == 0x20 ? 1 : -1];
u8 *TWindowSubEquipKind__ct(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4((void *) (arg0), (void *) (arg1), (int) (0x1F), (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80278FE0___vt__19TWindowSubEquipKind *)&__vt__19TWindowSubEquipKind).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubEquipKind__class_name;
    ((TUnk_804D0618 *)arg0)->create_menu_scroll_bar();
    ((TWindowSubEquipKind *)arg0)->m_88 = 4;
    ((TWindowSubEquipKind *)arg0)->m_8a = 0;
    return arg0;
}

}
