#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK TObjPlayer__sub_800DA508(void *, void *, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA3FC;
extern const f32 lbl_805DA464;
void TObjPlayer__sub_800DB970(u8 *arg0);
}

extern "C" {

void begin_action4__10TObjPlayerFPv(void *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);

void begin_action4__10TObjPlayerFPv(void *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 4;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000 | 1);
}
void TObjPlayer__sub_800DB970(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
        TBoss3VoloptMonitor__sub_8004292C(arg0);
    case 1:
        advance_animation_playback(arg0);
        TObjPlayer__sub_800DA508(arg0, arg0 + 0x50, M2C_FIELD(arg0, f32 *, 0x358));
        if (objInBand__FP7GameObjf(arg0, lbl_805DA464) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DA3FC) != 0) {
            TBoss3Volopt__sub_8022675C(0x4003AD23, arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
        }
        check_object_collisions__10TObjPlayerFPv(arg0);
        apply_actor_gravity(arg0, 0, lbl_805DA3F8);
        break;
    case 2:
        advance_animation_playback(arg0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        break;
    }
}

}
