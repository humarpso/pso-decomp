#include "types.h"
extern "C" {
s32 OSGetCurrentThread();
void OSSuspendThread(void *);
void OSSetThreadPriority(s32, s32);
extern u8 lbl_805764A0[];
extern s32 lbl_805D7594;
extern s32 lbl_805D75AC;
void fn_803CBCA0(void);
}

extern "C" {

void fn_803CBCA0(void) {
    s32 t;
    if (--lbl_805D7594 == 0) {
        t = OSGetCurrentThread();
        OSSuspendThread(lbl_805764A0);
        OSSetThreadPriority(t, lbl_805D75AC);
    }
}

}
