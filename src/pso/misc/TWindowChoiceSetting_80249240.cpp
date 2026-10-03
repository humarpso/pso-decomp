#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802492C8_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
void render__20TWindowChoiceSettingFv(u8 *arg0);
M2C_UNK draw_window_frame(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK draw_setting__20TWindowChoiceSettingFPvi(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
extern M2C_UNK lbl_804D0658[];
void render__20TWindowChoiceSettingFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 TWindowSubStatusDisp__sub_80244238(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 fn_80249078(void *);
s32 is_open__17TWindowSubComCardFPv(void *);
s32 is_selected__20TWindowChoiceSettingFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 request_close__20TWindowChoiceSettingFPv(void *);
s32 draw__20TWindowChoiceSettingFPv(void *);
s32 move_next_choice__20TWindowChoiceSettingFPv(void *);
s32 move_cursor_prev__20TWindowChoiceSettingFPv(void *);
s32 TWindowChoiceSetting__sub_802689EC(void *);
s32 TWindowChoiceSetting__sub_80268A6C(void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_802492C8_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DCBC0;
void run_task__20TWindowChoiceSettingFv(u8 *arg0);
}

extern "C" {

void *TWindowChoiceSetting__ct(void *arg0);
void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1);
int TWindowSubComCard__sub_80249220(void* p);
void __dl__7TObjectFPv(void *);
void destroy_children__20TWindowSubStatusDispFPvs(void *, int);
int fn_80268C5C(void*);
void fn_80269004(void *);

extern M2C_UNK __vt__20TWindowChoiceSetting[];

void render__20TWindowChoiceSettingFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    draw_window_frame(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_setting__20TWindowChoiceSettingFPvi(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x78), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x7C), temp_r3, arg0 + 0x68);
    }
}

typedef char RecoveredGlobal_802492C8_lbl_8050E208_size[sizeof(RecoveredGlobal_802492C8_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__20TWindowChoiceSettingFv(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    if ((is_selected__20TWindowChoiceSettingFPv((void *) (arg0)) == 0) && (is_open__17TWindowSubComCardFPv((void *) (arg0)) == 0)) {
        if (M2C_FIELD(arg0, u16 *, 0x70) & 0x10) {
            temp_r30 = (u8 *)&lbl_8050E208.value + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                move_cursor_prev__20TWindowChoiceSettingFPv((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                move_next_choice__20TWindowChoiceSettingFPv((void *) (arg0));
            }
        } else {
            temp_r30_2 = (u8 *)&lbl_8050E208.value + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                move_cursor_prev__20TWindowChoiceSettingFPv((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                move_next_choice__20TWindowChoiceSettingFPv((void *) (arg0));
            }
        }
        temp_r30_3 = (u8 *)&lbl_8050E208.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            draw__20TWindowChoiceSettingFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            request_close__20TWindowChoiceSettingFPv((void *) (arg0));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCBC0) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x78);
        if (temp_r3 != 0U) {
            update_subwindow__20TWindowSubStatusDispFPv((int) (temp_r3));
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x7C);
        if (temp_r3_2 != 0U) {
            increment_counter__20TWindowSubStatusDispFPv((int) (temp_r3_2));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    fn_80249078((void *) (arg0));
    TWindowSubStatusDisp__sub_80244238((void *) (arg0));
    TWindowChoiceSetting__sub_802689EC((void *) (arg0));
    TWindowChoiceSetting__sub_80268A6C((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
        destroy_children__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__20TWindowChoiceSetting[];
extern void *lbl_805D38B8;

void *TWindowChoiceSetting__ct(void *arg0) {
    fn_80269004(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38B8;
    M2C_FIELD(arg0, u16 *, 0x80) = 0;
    return arg0;
}

}
