#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_and_apply_selection__15TChCrCharSelectFv(u8 *arg0);
M2C_UNK get_char_select_class_id(void *);
s32 get_class_appearance_preset();
M2C_UNK create__12TCharaMakingFPvPv(void *, int);
M2C_UNK copy_player_visual_record(int, int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 tl_03;

void tick_and_apply_selection__15TChCrCharSelectFv(u8 *arg0) {
    s32 temp_r0;
    u8 *temp_r31;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r31 = (unsigned char *) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF)) + 0x370);
        get_char_select_class_id((void *) (TChCrCharSelect__selected_slot_index));
        copy_player_visual_record((int) (temp_r31), (int) (get_class_appearance_preset()));
        M2C_FIELD(temp_r31, s8 *, 0x30) = -1;
        M2C_FIELD(temp_r31, s8 *, 0) = 0;
        create__12TCharaMakingFPvPv((void *) (tl_03), (int) (temp_r31));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
