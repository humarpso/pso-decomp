#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8027D888_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubQuestBoardSelect__sub_8027D444(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__26TWindowSubQuestBoardSelectFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 is_open__20TWindowSubQuestBoardFPv(void *);
s32 select_next__26TWindowSubQuestBoardSelectFPv(void *);
s32 handle_cancel__26TWindowSubQuestBoardSelectFPv(void *);
s32 handle_decide__26TWindowSubQuestBoardSelectFPv(void *);
s32 TWindowSubQuestBoardSelect__sub_8027D6A0(void *);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_8027D888_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD6B4;
void run_task__26TWindowSubQuestBoardSelectFv(u8 *arg0);
}

extern "C" {

void render__26TWindowSubQuestBoardSelectFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (temp_r3));
    TWindowSubQuestBoardSelect__sub_8027D444((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}
typedef char RecoveredGlobal_8027D888_lbl_8050E208_size[sizeof(RecoveredGlobal_8027D888_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__26TWindowSubQuestBoardSelectFv(u8 *arg0) {
    u8 *temp_r31;
    if (is_open__20TWindowSubQuestBoardFPv((void *) (arg0)) == 0) {
        select_next__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        TWindowSubQuestBoardSelect__sub_8027D6A0((void *) (arg0));
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            handle_decide__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD6B4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x186A0;
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x64)));
    }
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
}

}
