#include "types.h"
struct Range_802937E8 { s32 min; s32 max; };

extern "C" {
extern Range_802937E8 lbl_80464E70[];
extern s32 TChCrCharSelect__data_805D3CB4;
extern s32 TChCrCharSelect__data_805D3CB8;
void TChCrCharSelect__sub_802937E8(void);
}

extern "C" {

void TChCrCharSelect__sub_802937E8(void) {
    s32 min = lbl_80464E70[TChCrCharSelect__data_805D3CB4].min;
    s32 max = lbl_80464E70[TChCrCharSelect__data_805D3CB4].max;
    if (TChCrCharSelect__data_805D3CB8 < min) {
        TChCrCharSelect__data_805D3CB8 = max;
    } else if (TChCrCharSelect__data_805D3CB8 > max) {
        TChCrCharSelect__data_805D3CB8 = min;
    }
}

}
