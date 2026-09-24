#include "types.h"
extern "C" {
extern s32 lbl_8050E880[];
void TObjPlayer__sub_801A8840(void);
}

extern "C" {

void TObjPlayer__sub_801A8840(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        lbl_8050E880[i] = 0;
    }
}

}
