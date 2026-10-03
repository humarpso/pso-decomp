#include "types.h"
typedef void (*RecoveredCallback_2be3cacebb2e)(void);
extern "C" {
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void VIWaitForRetrace(void);
void VIFlush(void);
void VISetNextFrameBuffer(void *);
void VISetBlack(s32);
u32 VIGetRetraceCount(void);
extern u8 lbl_805D46C8;
extern RecoveredCallback_2be3cacebb2e lbl_805D7718;
extern u32 lbl_805D772C;
extern s32 lbl_805D7730;
extern void *lbl_805D7738;
extern void *lbl_805D773C;
extern void *lbl_805D7740;
void present_frame_and_wait_vsync(void);
}

extern "C" {

void present_frame_and_wait_vsync(void) {
    s32 level;
    VISetNextFrameBuffer(lbl_805D7738);
    if (lbl_805D46C8 != 0) {
        VISetBlack(0);
        lbl_805D46C8 = 0;
    }
    level = OSDisableInterrupts();
    while (VIGetRetraceCount() < lbl_805D772C + lbl_805D7730 - 1) {
        VIWaitForRetrace();
    }
    OSRestoreInterrupts(level);
    VIFlush();
    VIWaitForRetrace();
    lbl_805D772C = VIGetRetraceCount();
    if (lbl_805D7718 != NULL) {
        lbl_805D7718();
    }
    lbl_805D7738 = (lbl_805D7738 == lbl_805D7740) ? lbl_805D773C : lbl_805D7740;
}

}
