#include "types.h"
#include "pso/TObjRainCtrl.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

s32 TObjRainCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(s32);

extern s32 tl_particle;

void TObjRainCtrl::create() {
    void *temp_r3;

    if (TRaderMapCore::is_not_split_screen() == 0) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != 0) {
            TObjRainCtrl__ct(temp_r3, tl_particle);
        }
    }
}

}
