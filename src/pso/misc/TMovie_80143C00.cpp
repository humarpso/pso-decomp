#include "types.h"
typedef void (*RecoveredCallback_6d14191ba232)(u32, s32, s32, void *);
extern "C" {
void pack_movie_frame(void *);
void VISetNextFrameBuffer(void *);
void VISetBlack(int);
extern void *lbl_805D5688;
extern void *lbl_805D568C;
extern void *lbl_805D5690;
extern s32 lbl_805D5698;
extern u32 lbl_805D569C;
extern u32 lbl_805D56A0;
extern s32 lbl_805D56A4;
extern s32 lbl_805D56A8;
extern RecoveredCallback_6d14191ba232 lbl_805D6BF4;
void flip_frame_buffer__6TMovieFv(void);
}

extern "C" {

void flip_frame_buffer__6TMovieFv(void) {
    u32 sp8[4];
    if (lbl_805D56A0 != 0U) {
        if (lbl_805D569C & 1) {
            lbl_805D5688 = lbl_805D5690;
        } else {
            lbl_805D5688 = lbl_805D568C;
        }
        if (lbl_805D5698 == 1) {
            VISetBlack(0);
            lbl_805D5698 = 0;
        }
        lbl_805D6BF4(lbl_805D56A0, lbl_805D56A4, lbl_805D56A8, sp8);
        pack_movie_frame(sp8);
        VISetNextFrameBuffer(lbl_805D5688);
        lbl_805D56A0 = 0U;
    }
}

}
