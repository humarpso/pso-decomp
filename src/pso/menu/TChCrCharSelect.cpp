#include "pso/TChCrCharSelect.h"

TChCrCharSelect::~TChCrCharSelect() {}

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

M2C_UNK __ct__7TObjectFP7TObject(void *);
void init_widgets__15TChCrCharSelectFv(void);
M2C_UNK fn_802993F0();
M2C_UNK fn_8029945C(void *);
M2C_UNK set_eff_tag__11TChCrEffTagFi(M2C_UNK);
extern u8 lbl_80464E88[];
extern void *__vt__15TChCrCharSelect[];
extern s32 lbl_805D3CB0;
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__input_mode;

void *__ct__15TChCrCharSelectFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__15TChCrCharSelect;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3CB0;
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
