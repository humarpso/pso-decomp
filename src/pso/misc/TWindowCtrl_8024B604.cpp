#include "types.h"

extern "C" {

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1);
s32 __ct__17TWindowSetLevelUpFv(void *, s32, s32, s32);
void *__nw__7TObjectFUl(s32);

extern s32 tl_07;

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1) {
    void *obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        __ct__17TWindowSetLevelUpFv(obj, tl_07, arg0, arg1);
    }
}

}
