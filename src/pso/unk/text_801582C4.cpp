#include "types.h"
struct V3_801582C4 { f32 x, y, z; };

struct O_801582C4 { u8 pad[0x38]; V3_801582C4 pos; u8 pad44[0xA4 - 0x44]; u32 f; };

extern "C" {
f32 get_collision_body_radius(void *, int);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 fn_801582C4(O_801582C4 *arg0, f32 lim);
}

extern "C" {

s32 fn_801582C4(O_801582C4 *arg0, f32 lim) {
    V3_801582C4 sp8;
    f32 v;
    if (arg0->f != 0U) {
        v = get_collision_body_radius(arg0, 0);
        if (v < lim) {
            v = lim;
        }
        TCameraCtrl__sub_803D8934(0, &arg0->pos, &sp8);
        if (sp8.z > -v) {
            return 0;
        }
    }
    return 1;
}

}
