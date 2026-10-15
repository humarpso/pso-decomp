#include "types.h"

extern "C" {

void tick_and_apply_selection__15TChCrCharSelectFv(u8 *arg0);
s32 get_char_select_class_id(void *);
s32 get_class_appearance_preset();
s32 create__12TCharaMakingFPvPv(void *, int);
s32 copy_player_visual_record(int, int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 queue_destruction__7TObjectFv(void *);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 tl_03;

void tick_and_apply_selection__15TChCrCharSelectFv(u8 *arg0) {
    s32 temp_r0;
    u8 *temp_r31;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) - 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r31 = (unsigned char *) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF)) + 0x370);
        get_char_select_class_id((void *) (TChCrCharSelect__selected_slot_index));
        copy_player_visual_record((int) (temp_r31), (int) (get_class_appearance_preset()));
        *(s8 *)((s8 *)temp_r31 + 0x30) = -1;
        *(s8 *)((s8 *)temp_r31 + 0) = 0;
        create__12TCharaMakingFPvPv((void *) (tl_03), (int) (temp_r31));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
