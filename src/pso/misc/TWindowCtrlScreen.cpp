#include "types.h"
#include "pso/misc/TWindowCtrlScreen.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__17TWindowCtrlScreen[];
extern void *TWindowCtrlScreen__name;

void *TWindowCtrlScreen__ct(void *window_ctrl_screen) {
    __ct__7TObjectFP7TObject(window_ctrl_screen);
    *(s32 **)((s8 *)window_ctrl_screen + 0x18) = __vt__17TWindowCtrlScreen;
    *(void * *)&((TWindowCtrlScreen *)window_ctrl_screen)->m_name = TWindowCtrlScreen__name;
    return window_ctrl_screen;
}

}
