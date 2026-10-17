#include "types.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubSymbolChatFaceType.h"

struct Stack_80283F38
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80283A70_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80284074_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Win_80283FA8 { u8 pad[0x64]; s8 *f64; };

struct Ent_80283FA8 { u8 pad[0x2c]; s32 f2c; };

extern "C" {
s32 draw_default_entry__9TWindowDDFl();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 forward_render__20TWindowSubStatusDispFv(int, int);
void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
s32 fn_802839A4(void *);
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
extern const f32 lbl_805DD778;
extern const f32 lbl_805DD77C;
extern const f32 lbl_805DD780;
void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80283A70_lbl_8050E208 controller_input_state;
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
extern const f32 lbl_805DD784;
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);

typedef struct Stack_80283F38 Stack_80283F38;

typedef char RecoveredGlobal_80283A70_lbl_8050E208_size[sizeof(RecoveredGlobal_80283A70_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubSymbolChatFaceType::handle_input() {
    u8 *temp_r30;
    temp_r30 = (u8 *)&controller_input_state.value + 0x20;
    if ((TWindowChoiceSetting::apply_choice((s32)((void *) (temp_r30)), (s32)((int) (0xF0)), (s32)((int) (6)), (s32)((int) (1))) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), (s32)((int) (0xF0)), (s32)((int) (6)), (s32)((int) (1))) != 0)) {
        play_sound_effect(0x54100, 0U, 0, 0);
        if ((TWindowChoiceSetting::apply_choice((s32)((void *) (temp_r30)), (s32)((int) (0x10)), (s32)((int) (6)), (s32)((int) (1))) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), (s32)((int) (0x10)), (s32)((int) (6)), (s32)((int) (1))) != 0)) {
            this->m_62 = (u8) (this->m_62 - 1);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)((void *) (temp_r30)), (s32)((int) (0x20)), (s32)((int) (6)), (s32)((int) (1))) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), (s32)((int) (0x20)), (s32)((int) (6)), (s32)((int) (1))) != 0)) {
            this->m_62 = (u8) (this->m_62 + 1);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)((void *) (temp_r30)), (s32)((int) (0x80)), (s32)((int) (6)), (s32)((int) (1))) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), (s32)((int) (0x80)), (s32)((int) (6)), (s32)((int) (1))) != 0)) {
            this->m_61 = (u8) (this->m_61 + 1);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)((void *) (temp_r30)), (s32)((int) (0x40)), (s32)((int) (6)), (s32)((int) (1))) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), (s32)((int) (0x40)), (s32)((int) (6)), (s32)((int) (1))) != 0)) {
            this->m_61 = (u8) (this->m_61 - 1);
        }
        if ((s8) this->m_61 < 0) {
            this->m_61 = 0U;
        }
        if ((s8) this->m_61 >= 2) {
            this->m_61 = 1U;
        }
        if ((s8) this->m_62 < 0) {
            this->m_62 = 0U;
        }
        if ((s8) this->m_62 >= 2) {
            this->m_62 = 1U;
        }
    }
}

void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1) {
  int new_var;
  u8 *temp_r3;
  Stack_80283F38 stack;
  new_var = fn_802839A4(arg0);
  temp_r3 = (u8 *) ((TUnk_804CE018 *)arg0)->get_array_entry(new_var);
  stack.sp8 = (*((f32 *) (((s8 *) temp_r3) + 8))) - lbl_805DD778;
  stack.spC = (*((f32 *) (((s8 *) temp_r3) + 0xC))) - lbl_805DD778;
  TWindowSubSymbolChatFaceType__sub_80283C84(arg1, &stack.sp8, lbl_805DD77C, lbl_805DD780);
}

void TWindowSubSymbolChatFaceType::update_parts_entries() {
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_80283FA8 *e = (Ent_80283FA8 *)get_array_entry(i);
        e->f2c = TWindowSubSymbolChatPartsSet::get_parts_entry(*((Win_80283FA8 *)this)->f64);
    }
}

void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = draw_default_entry__9TWindowDDFl();
    ((TWindowSubSymbolChatFaceType *)arg0)->update_parts_entries();
    draw_window_frame((void *) (arg0), (int) (temp_r31));
    TWindowSubSymbolChatFaceType__sub_80283F38((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r31)));
    forward_render__20TWindowSubStatusDispFv((int) (*(s32 *)&((TWindowSubSymbolChatFaceType *)arg0)->m_68), (int) (temp_r31));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r31));
}
typedef char RecoveredGlobal_80284074_lbl_8050E208_size[sizeof(RecoveredGlobal_80284074_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    u8 *temp_r31;
    if (!(*(s32 *)&((TWindowSubSymbolChatFaceType *)arg0)->m_2c& 2)) {
        *(s32 *)&((TWindowSubSymbolChatFaceType *)arg0)->m_5c = 0x01000000;
    }
    if (((TWindowSubSymbolChatFaceType *)arg0)->is_open() == 0) {
        ((TWindowSubSymbolChatFaceType *)arg0)->handle_input();
        temp_r31 = (u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (4)) != 0)) {
            ((TWindowSubSymbolChatFaceType *)arg0)->confirm_selection();
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (2)) != 0)) {
            ((TWindowSubSymbolChatFaceType *)arg0)->close_when_chat_closed();
        }
    }
    if ((f32) *(s32 *)&((TWindowSubSymbolChatFaceType *)arg0)->m_5c >= lbl_805DD784) {
        ((TWindowSubStatusDisp *)(*(s32 *)&((TWindowSubSymbolChatFaceType *)arg0)->m_68))->update_subwindow();
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *) (arg0 + 0x24));
}

}
