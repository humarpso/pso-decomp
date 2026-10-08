#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct W_802AE864 { u8 pad[0x124]; void *a[8]; };

extern "C" {
M2C_UNK draw_entries_reversed__15TWindowMainMenuFiPv(void *, int);
M2C_UNK draw_frame__19TWindowMenuMainMenuFv(void *, int);
s32 setup_content_frame__15TWindowMainMenuFPv();
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
M2C_UNK construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
M2C_UNK init_color__15TWindowMainMenuFPv(void *);
M2C_UNK update_scaled_position__15TWindowMainMenuFi(void *);
extern M2C_UNK lbl_804DE3C8[];
extern M2C_UNK __vt__19TWindowMenuMainMenu[];
extern s32 lbl_805D3E68;
u8 *TWindowMenuMainMenu__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1);
void run_task__19TWindowMenuMainMenuFv(u8 *arg0);
M2C_UNK TWindowMainMenu__sub_802AD7F0(void *);
M2C_UNK TWindowMainMenu__sub_802AE380(void *);
M2C_UNK handle_navigation_input__15TWindowMainMenuFPv(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);

void render__19TWindowMenuMainMenuFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = setup_content_frame__15TWindowMainMenuFPv();
    draw_frame__19TWindowMenuMainMenuFv((void *) (arg0), (int) (temp_r3));
    draw_entries_reversed__15TWindowMainMenuFiPv((void *) (arg0), (int) (temp_r3));
}

void run_task__19TWindowMenuMainMenuFv(u8 *arg0) {
    s32 var_r31;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *var_r30;

    temp_r3 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3 | 4);
    }
    var_r30 = arg0 + 0x64;
    var_r31 = 0;
    do {
        TWindowMainMenu__sub_802AD7F0(var_r30);
        var_r31 += 1;
        var_r30 += 0x18;
    } while (var_r31 < 8);
    handle_navigation_input__15TWindowMainMenuFPv(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowMainMenu__sub_802AE380(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3_2 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3_2 & 0xFFFFFFF3);
    }
}

extern M2C_UNK __vt__19TWindowMenuMainMenu[];

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMenuMainMenu;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMenuMainMenu__ct(u8 *arg0, s32 arg1, s16 arg2) {
    s32 i;
    u8 *p;
    construct_base__9TWindowDDFPvPvsPv(arg0, lbl_804DE3C8, arg2, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMenuMainMenu;
    p = arg0 + 0x64;
    i = 0;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3E68;
    M2C_FIELD(arg0, s8 *, 0x60) = 4;
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s16 *, 0x62) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    do {
        init_color__15TWindowMainMenuFPv(p);
        i++;
        p += 0x18;
    } while (i < 8);
    for (i = 0; i < 8; i++) {
        ((W_802AE864 *)arg0)->a[i] = 0;
    }
    update_scaled_position__15TWindowMainMenuFi(arg0);
    save_position__17TWindowSubComCardFPv(arg0);
    return arg0;
}

}
