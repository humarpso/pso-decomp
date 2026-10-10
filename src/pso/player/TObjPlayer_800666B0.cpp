#include "types.h"

struct O_800666C4 { s16 a; s16 b; s32 arr[4]; };

extern "C" {
void fn_800666C4(O_800666C4 *self);
}

extern "C" {

void set_active_player__10TObjPlayerFi(int a0);
void render__22TBoss5GryphonShockWaveFv(void);

    extern unsigned char lbl_805D2910;
    extern unsigned char camera_capture_flags;
void set_active_player__10TObjPlayerFi(int a0) { lbl_805D2910 = a0; camera_capture_flags = (camera_capture_flags | 0x2); }
void fn_800666C4(O_800666C4 *self) {
    s32 i;
    self->a = 0x21;
    self->b = -1;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

}
