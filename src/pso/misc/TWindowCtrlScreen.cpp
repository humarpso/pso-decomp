#include "types.h"
#include "pso/misc/TWindowCtrlScreen.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__17TWindowCtrlScreen[];
extern void *TWindowCtrlScreen__name;

void *TWindowCtrlScreen__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowCtrlScreen;
    *(void * *)&((TWindowCtrlScreen *)arg0)->m_name = TWindowCtrlScreen__name;
    return arg0;
}

}
