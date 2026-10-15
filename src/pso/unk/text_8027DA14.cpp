#include "types.h"

struct RecoveredGlobal_8027DA14_lbl_804D19A8 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * get_quest_name__12TQuestThreadFv(void);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 get_field_20__17TWindowSubComCardFPv(void *);
u8 * get_window_layout_position(s32);
s32 construct_type1_heading__20TWindowSubStatusDispFPvii(s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
u32 calc_text_width();
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
s32 set_text_entry_string(int, int, int);
s32 update_slot_display_flags__26TWindowSubQuestBoardSelectFPv(void *, f32, f32);
s32 select_next__26TWindowSubQuestBoardSelectFPv(void *);
extern RecoveredGlobal_8027DA14_lbl_804D19A8 TWindowSubQuestBoardSelect__window_parameters;
extern RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect __vt__26TWindowSubQuestBoardSelect;
extern s32 TWindowSubQuestBoardSelect__class_name;
extern const f32 lbl_805DD6B8;
extern const f32 lbl_805DD6BC;
u8 *TWindowSubQuestBoardSelect__ct(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8027DA14_lbl_804D19A8_size[sizeof(RecoveredGlobal_8027DA14_lbl_804D19A8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect_size[sizeof(RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect) == 0x1C ? 1 : -1];
u8 *TWindowSubQuestBoardSelect__ct(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r30;
    s32 var_r30;
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&TWindowSubQuestBoardSelect__window_parameters.value), (int) (4), (int) (get_window_layout_position(0x70)));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__26TWindowSubQuestBoardSelect.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubQuestBoardSelect__class_name;
    var_r30 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x24);
    if (var_r30 != 0) {
        var_r30 = construct_type1_heading__20TWindowSubStatusDispFPvii(var_r30, get_message_10__20TWindowSubStatusDispFPv((int) (0x2B)), (s32) *(s16 *)((s8 *)arg0 + 0x20));
    }
    *(s32 *)((s8 *)arg0 + 0x64) = var_r30;
    *(s8 *)((s8 *)arg0 + 0x60) = 0;
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    set_text_entry_string((int) (temp_r30), (int) (get_quest_name__12TQuestThreadFv()), (int) (0));
    get_field_20__17TWindowSubComCardFPv((void *) temp_r30);
    temp_f2 = (f32) calc_text_width();
    *(f32 *)((s8 *)temp_r30 + 8) = (f32) -((lbl_805DD6BC * temp_f2) - lbl_805DD6B8);
    *(s8 *)((s8 *)arg0 + 0x61) = -1;
    update_slot_display_flags__26TWindowSubQuestBoardSelectFPv((void *) (arg0), (f32) (lbl_805DD6BC), (f32) (temp_f2));
    select_next__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
    return arg0;
}
#pragma pop

}
