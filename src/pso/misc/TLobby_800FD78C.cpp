#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

u8 fn_800FD7C0(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

void TLobby::init_range(s32 arg1) {
    s32 temp_r5;

    *(s32 *)((s8 *)this + 4) = arg1;
    temp_r5 = arg1 + 1;
    *(s32 *)((s8 *)this + 8) = temp_r5;
    *(s32 *)((s8 *)this + 0xC) = temp_r5;
    *(s32 *)((s8 *)this + 0x10) = 0;
    *(s32 *)((s8 *)this + 0x14) = 0;
    *(s32 *)((s8 *)this + 0x18) = 0;
    *(s32 *)((s8 *)this + 0) = -1;
    *(s32 *)((s8 *)this + 0x1C) = 0;
    *(s32 *)((s8 *)this + 0x20) = 0;
}

u8 fn_800FD7C0(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 0)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 4)) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
