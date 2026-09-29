#include "types.h"
extern "C" {
extern void *lbl_805D7738;
void GXSetZMode(s32, s32, s32);
void GXSetColorUpdate(s32);
void GXCopyDisp(void *, s32);
void GXDrawDone(void);
void fn_803DCEC8(void);
}

extern "C" {

void fn_803DCEC8(void) {
    GXSetZMode(1, 3, 1);
    GXSetColorUpdate(1);
    GXCopyDisp(lbl_805D7738, 1);
    GXDrawDone();
}

}
