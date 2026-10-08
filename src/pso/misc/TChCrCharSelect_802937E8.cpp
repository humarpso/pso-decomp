#include "types.h"
struct Range_802937E8 { s32 min; s32 max; };

extern "C" {
extern Range_802937E8 lbl_80464E70[];
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
void TChCrCharSelect__sub_802937E8(void);
extern Range_802937E8 lbl_80464E70[];
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
void TChCrCharSelect__sub_80293828(void);
}

extern "C" {

void TChCrCharSelect__sub_802937E8(void) {
    s32 min = lbl_80464E70[TChCrCharSelect__selected_char_index].min;
    s32 max = lbl_80464E70[TChCrCharSelect__selected_char_index].max;
    if (TChCrCharSelect__selected_slot_index < min) {
        TChCrCharSelect__selected_slot_index = max;
    } else if (TChCrCharSelect__selected_slot_index > max) {
        TChCrCharSelect__selected_slot_index = min;
    }
}
void TChCrCharSelect__sub_80293828(void) {
    s32 min = lbl_80464E70[TChCrCharSelect__selected_char_index].min;
    s32 max = lbl_80464E70[TChCrCharSelect__selected_char_index].max;
    if (TChCrCharSelect__selected_slot_index < min || TChCrCharSelect__selected_slot_index > max) {
        TChCrCharSelect__selected_slot_index = min;
    }
}

}
