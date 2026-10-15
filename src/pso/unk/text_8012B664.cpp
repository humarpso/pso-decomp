#include "types.h"

extern "C" {
f32 get_speed__10TObjPlayerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(void *, s32);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
extern const f32 lbl_805DAEA8;
extern const f32 lbl_805DAEAC;
extern const f32 lbl_805DAEB0;
extern const f32 lbl_805DAEB4;
extern const f32 lbl_805DAEB8;
extern const f32 lbl_805DAEBC;
void update_swing_angle__10TObjPlayerFPv(u8 *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
void update_swing_angle__10TObjPlayerFPv(u8 *self) {
    s32 flag;
    s32 ok;
    s32 lo;
    s32 hi;
    f32 speed;
    f32 flo;
    f32 fhi;
    if (*(void **)((s8 *)self + 0xF0) != NULL) {
        speed = get_speed__10TObjPlayerFPv(*(void **)((s8 *)self + 0xF0));
        flag = is_flag_b0_4__10TObjPlayerFPv(*(void **)((s8 *)self + 0xF0));
        ok = 1;
        if (test_action_mask__10TObjPlayerFPvi(*(void **)((s8 *)self + 0xF0), 0x20) != 0) {
            flo = lbl_805DAEA8;
            lo = 0;
            fhi = lbl_805DAEAC;
            hi = 0x4000;
        } else if (test_action_mask__10TObjPlayerFPvi(*(void **)((s8 *)self + 0xF0), 0x40) != 0) {
            flo = lbl_805DAEB0;
            lo = 0x4000;
            fhi = lbl_805DAEB4;
            hi = -0x4000;
        } else if (test_action_mask__10TObjPlayerFPvi(*(void **)((s8 *)self + 0xF0), 0x80) != 0) {
            flo = lbl_805DAEB8;
            lo = -0x4000;
            fhi = lbl_805DAEBC;
            hi = 0x2000;
        } else {
            ok = 0;
        }
        if (ok == 1) {
            if (flag == 0) {
                if (speed < flo) {
                    *(s32 *)((s8 *)self + 0x1F8) = lo;
                } else if (flo <= speed && speed <= fhi) {
                    *(s32 *)((s8 *)self + 0x1F8) = (s32)((speed - flo) * ((f32)(hi - lo) / (fhi - flo)) + (f32)lo);
                } else {
                    *(s32 *)((s8 *)self + 0x1F8) = hi;
                }
            } else {
                *(s32 *)((s8 *)self + 0x1F8) = hi;
            }
        }
    }
}
#pragma pop

}
