#include "types.h"
struct O_80362638 { u8 pad0[4]; u8 b4; u8 b5; u8 b6; u8 b7; };

struct A_80362638 { u8 pad0[4]; f32 f4; f32 f8; f32 fC; };

extern "C" {
extern O_80362638 *lbl_80543A24[];
void fn_80362638(void *arg0, A_80362638 *arg1);
}

extern "C" {

void fn_80362638(void *arg0, A_80362638 *arg1) {
    s32 i;
    for (i = 0; i < 9; i++) {
        lbl_80543A24[i]->b7 = (u8)arg1->f4;
        lbl_80543A24[i]->b4 = (u8)arg1->f8;
        lbl_80543A24[i]->b5 = (u8)arg1->fC;
    }
}

}
