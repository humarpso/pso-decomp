#include "pso/TChCrCharSelect.h"

TChCrCharSelect::~TChCrCharSelect() {}

extern "C" {

s32 __ct__7TObjectFP7TObject(void *);
void init_widgets__15TChCrCharSelectFv(void);
s32 fn_802993F0();
s32 fn_8029945C(void *);
s32 set_eff_tag__11TChCrEffTagFi(s32);
extern u8 lbl_80464E88[];
extern void *__vt__15TChCrCharSelect[];
extern s32 lbl_805D3CB0;
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__input_mode;

void *__ct__15TChCrCharSelectFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = __vt__15TChCrCharSelect;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3CB0;
    set_eff_tag__11TChCrEffTagFi(0);
    fn_802993F0();
    if (TChCrCharSelect__selected_char_index == -1 || TChCrCharSelect__selected_slot_index == -1) {
        TChCrCharSelect__selected_char_index = 0;
        TChCrCharSelect__selected_slot_index = 0;
        TChCrCharSelect__input_mode = 0;
    } else {
        TChCrCharSelect__input_mode = 1;
    }
    fn_8029945C(lbl_80464E88);
    ((void (*)(void *))init_widgets__15TChCrCharSelectFv)(arg0);
    return arg0;
}

}
