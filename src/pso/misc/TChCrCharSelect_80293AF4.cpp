#include "types.h"

extern "C" {

class TChCr_80293AF4 {
public:
    void m0();
    void m1();
    void m2();
};

void reset_proportions__15TChCrCharSelectFv(void);
void reset_icon_flags__10TObjCMIconFv(void);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
const s32 lbl_80464E90[2] = {0, 4};
extern s32 TChCrCharSelect__data_805D6590;
const s32 lbl_805DD9D8[1] = {4};

void run_task__15TChCrCharSelectFv(TChCr_80293AF4 *self) {
    reset_proportions__15TChCrCharSelectFv();
    static void (TChCr_80293AF4::*tbl[3])() = {
        &TChCr_80293AF4::m0, &TChCr_80293AF4::m1, &TChCr_80293AF4::m2,
    };
    (self->*tbl[TChCrCharSelect__data_805D6590])();
    switch (TChCrCharSelect__data_805D6590) {
    case 0:
        TObjCMIcon__sub_802994C8(1, (s32 *)lbl_805DD9D8);
        return;
    case 1:
        TObjCMIcon__sub_802994C8(2, (s32 *)lbl_80464E90);
        return;
    case 2:
    default:
        reset_icon_flags__10TObjCMIconFv();
        return;
    }
}

}
