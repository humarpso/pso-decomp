#include "types.h"
extern "C" {
extern s32 lbl_804C233C[];
extern s32 lbl_804C2354[];
void fn_801A69E4(s32 arg0, s32 *arg1);
}

extern "C" {

void fn_801A69E4(s32 arg0, s32 *arg1) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (arg0 == lbl_804C2354[i]) {
            *arg1 |= lbl_804C233C[i];
        }
    }
}

}
