#include "types.h"

extern "C" {

void create__12TObjRainCtrlFv(void);
s32 TObjRainCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 tl_particle;

void create__12TObjRainCtrlFv(void) {
    void *temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != 0) {
            TObjRainCtrl__ct(temp_r3, tl_particle);
        }
    }
}

}
