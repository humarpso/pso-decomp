#include "types.h"

extern "C" {

void set_position__19TWindowSubShortMailFPvPv(void *arg0, void *arg1);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void set_position__19TWindowSubShortMailFPvPv(void *arg0, void *arg1) {
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x20)) + 0x30) = (f32) (*(f32 *)((s8 *)arg1 + 0) - lbl_805DB078);
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x20)) + 0x34) = (f32) (*(f32 *)((s8 *)arg1 + 4) - lbl_805DB07C);
    *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x20)) + 0x50) = 3;
}

}
