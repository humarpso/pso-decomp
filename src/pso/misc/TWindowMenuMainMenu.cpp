#include "types.h"

struct W_802AE864 { u8 pad[0x124]; void *a[8]; };

extern "C" {
s32 draw_entries_reversed__15TWindowMainMenuFPUc(void *, int);
s32 draw_frame__19TWindowMenuMainMenuFv(void *, int);
s32 setup_content_frame__15TWindowMainMenuFPv();
s32 save_position__17TWindowSubComCardFPv(void *);
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
s32 init_color__15TWindowMainMenuFv(void *);
s32 update_scaled_position__15TWindowMainMenuFv(void *);
extern s32 window_menu_main_menu_params[];
extern s32 __vt__19TWindowMenuMainMenu[];
extern s32 lbl_805D3E68;
u8 *TWindowMenuMainMenu__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1);
void run_task__19TWindowMenuMainMenuFv(u8 *arg0);
s32 update_item_tween__15TWindowMainMenuFv(void *);
s32 update_slide_position__15TWindowMainMenuFv(void *);
s32 handle_navigation_input__15TWindowMainMenuFPv(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFs(void *, int);
s32 initialize_subwindow__9TWindowDDFv(void *);
s32 update_fade__17TWindowSubComCardFv(void *);

void render__19TWindowMenuMainMenuFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = setup_content_frame__15TWindowMainMenuFPv();
    draw_frame__19TWindowMenuMainMenuFv((void *) (arg0), (int) (temp_r3));
    draw_entries_reversed__15TWindowMainMenuFPUc((void *) (arg0), (int) (temp_r3));
}

void run_task__19TWindowMenuMainMenuFv(u8 *arg0) {
    s32 var_r31;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *var_r30;

    temp_r3 = *(u8 *)((s8 *)arg0 + 0x60);
    if (temp_r3 & 8) {
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (temp_r3 | 4);
    }
    var_r30 = arg0 + 0x64;
    var_r31 = 0;
    do {
        update_item_tween__15TWindowMainMenuFv(var_r30);
        var_r31 += 1;
        var_r30 += 0x18;
    } while (var_r31 < 8);
    handle_navigation_input__15TWindowMainMenuFPv(arg0);
    initialize_subwindow__9TWindowDDFv(arg0);
    update_slide_position__15TWindowMainMenuFv(arg0);
    update_fade__17TWindowSubComCardFv(arg0);
    temp_r3_2 = *(u8 *)((s8 *)arg0 + 0x60);
    if (temp_r3_2 & 8) {
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (temp_r3_2 & 0xFFFFFFF3);
    }
}

extern s32 __vt__19TWindowMenuMainMenu[];

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMenuMainMenu;
        destroy_window_base__9TWindowDDFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMenuMainMenu__ct(u8 *arg0, s32 arg1, s16 arg2) {
    s32 i;
    u8 *p;
    construct_base__9TWindowDDFPvPvsPv(arg0, window_menu_main_menu_params, arg2, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMenuMainMenu;
    p = arg0 + 0x64;
    i = 0;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3E68;
    *(s8 *)((s8 *)arg0 + 0x60) = 4;
    *(s8 *)((s8 *)arg0 + 0x61) = 0;
    *(s16 *)((s8 *)arg0 + 0x62) = 0;
    *(s16 *)((s8 *)arg0 + 0x20) = arg2;
    do {
        init_color__15TWindowMainMenuFv(p);
        i++;
        p += 0x18;
    } while (i < 8);
    for (i = 0; i < 8; i++) {
        ((W_802AE864 *)arg0)->a[i] = 0;
    }
    update_scaled_position__15TWindowMainMenuFv(arg0);
    save_position__17TWindowSubComCardFPv(arg0);
    return arg0;
}

}
