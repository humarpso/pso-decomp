#include "types.h"

extern "C" {
extern const f32 lbl_805D937C;
extern const f32 lbl_805D9380;
void update_freeze_shell_timer(u8 *arg0);
}

extern "C" {

void update_freeze_shell_timer(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x340) = (f32) (*(f32 *)((s8 *)arg0 + 0x340) - lbl_805D937C);
    if (*(f32 *)((s8 *)arg0 + 0x340) <= lbl_805D9380) {
        *(s32 *)((s8 *)arg0 + 0x334) = 3;
        *(f32 *)((s8 *)arg0 + 0x340) = (f32) lbl_805D9380;
    }
}

}
