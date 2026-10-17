#include "types.h"
#include "pso/misc/TScene.h"

extern void *TScene__data_805D5FCC;

void TScene::set_field4() {
    if ((void *) TScene__data_805D5FCC != NULL) {
        *(s32 *)((s8 *)TScene__data_805D5FCC + 4) = 0x8F;
    }
}
