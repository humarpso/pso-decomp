#include "types.h"

extern "C" {

void set_position__11TWindowCtrlFPvPv(void *arg0, void *arg1);

void set_position__11TWindowCtrlFPvPv(void *arg0, void *arg1) {
    if ((*(f32 *)((s8 *)arg0 + 0x30) != *(f32 *)((s8 *)arg1 + 0)) || (*(f32 *)((s8 *)arg0 + 0x34) != *(f32 *)((s8 *)arg1 + 4))) {
        *(f32 *)((s8 *)arg0 + 0x30) = *(f32 *)((s8 *)arg1 + 0);
        *(f32 *)((s8 *)arg0 + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
        *(s32 *)((s8 *)arg0 + 0x50) = 3;
    }
}

}
