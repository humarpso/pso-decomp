#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_locally_controlled__10TObjPlayerFPv();
int TObjPlayer__sub_801BEF60(void*, int);
s32 init_pad_binding(void *, void *, int);
s32 obj_getField1c(void *);

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::init_control_mode(s32 arg1) {
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        *(s32 *)((s8 *)((u8 *)this) + 0x3D0) = (s32) (arg1 & 3);
        init_pad_binding((void *) (((u8 *)this) + 0x550), (void *) (obj_getField1c((void *) (((u8 *)this)))), (int) ((s16) *(s32 *)((s8 *)((u8 *)this) + 0x3D0)));
        return;
    }
    TObjPlayer__sub_801BEF60((void *) (((u8 *)this) + 0x550), (int) (0));
}

}

}
