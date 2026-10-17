#include "types.h"
extern "C" {
extern u8 lbl_8048D208[];
void fn_80074C70(void);
void fn_80074C70(void) {
    s32 i;
    for (i = 0; i < 0x14; i++) {
        lbl_8048D208[i] = 0;
    }
}

}
