#include "types.h"

struct V3_800C7458 { f32 x; s32 y; f32 z; };

struct Obj_800C7458 { u8 pad0[0x38]; u8 pos[0xC]; u8 pad44[0x60 - 0x44]; s32 h; };

extern "C" {
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, void *);
void subtract_vector(void *, void *);
extern const f64 lbl_8043BCC8[];
void TBoss3Volopt__sub_800C7458(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3);
}

extern "C" {

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0);
void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0);

void TBoss3Volopt__sub_800C7458(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3) {
    V3_800C7458 v = *arg1;
    subtract_vector(&v, arg0->pos);
    arg3 += (s32)(lbl_8043BCC8[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
    arg0->h = approach_angle_limited(arg0->h, arg3, arg2);
    angle_difference_abs(arg0->h, arg3);
}

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p &= ~8;
    }
}

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}

}
