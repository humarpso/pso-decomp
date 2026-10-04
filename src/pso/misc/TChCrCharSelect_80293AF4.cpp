#include "types.h"

extern "C" {

class TChCr_80293AF4 {
public:
    void m0();
    void m1();
    void m2();
};

void reset_proportions__15TChCrCharSelectFv(void);
void TObjCMIcon__sub_80299488(void);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
extern s32 lbl_80464E90[];
extern s32 TChCrCharSelect__data_805D6590;
extern s32 lbl_805DD9D8[2];

void run_task__15TChCrCharSelectFv(TChCr_80293AF4 *self) {
    reset_proportions__15TChCrCharSelectFv();
    static void (TChCr_80293AF4::*tbl[3])() = {
        &TChCr_80293AF4::m0, &TChCr_80293AF4::m1, &TChCr_80293AF4::m2,
    };
    (self->*tbl[TChCrCharSelect__data_805D6590])();
    switch (TChCrCharSelect__data_805D6590) {
    case 0:
        TObjCMIcon__sub_802994C8(1, lbl_805DD9D8);
        return;
    case 1:
        TObjCMIcon__sub_802994C8(2, lbl_80464E90);
        return;
    case 2:
    default:
        TObjCMIcon__sub_80299488();
        return;
    }
}

}
