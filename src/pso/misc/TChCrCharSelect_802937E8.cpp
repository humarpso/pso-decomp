#include "types.h"
struct Range_802937E8 { s32 min; s32 max; };

extern "C" {
extern Range_802937E8 char_select_class_group_range_table[];
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
void wrap_slot_index_to_range__15TChCrCharSelectFv(void);
extern Range_802937E8 char_select_class_group_range_table[];
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
void clamp_slot_index_to_range__15TChCrCharSelectFv(void);
}

extern "C" {

void wrap_slot_index_to_range__15TChCrCharSelectFv(void) {
    s32 min = char_select_class_group_range_table[TChCrCharSelect__selected_char_index].min;
    s32 max = char_select_class_group_range_table[TChCrCharSelect__selected_char_index].max;
    if (TChCrCharSelect__selected_slot_index < min) {
        TChCrCharSelect__selected_slot_index = max;
    } else if (TChCrCharSelect__selected_slot_index > max) {
        TChCrCharSelect__selected_slot_index = min;
    }
}
void clamp_slot_index_to_range__15TChCrCharSelectFv(void) {
    s32 min = char_select_class_group_range_table[TChCrCharSelect__selected_char_index].min;
    s32 max = char_select_class_group_range_table[TChCrCharSelect__selected_char_index].max;
    if (TChCrCharSelect__selected_slot_index < min || TChCrCharSelect__selected_slot_index > max) {
        TChCrCharSelect__selected_slot_index = min;
    }
}

}
