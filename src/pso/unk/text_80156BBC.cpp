#include "types.h"
#include "pso/unk/text_80156BBC.h"
#include "pso/misc/TUnk_804AF8D8.h"
#include "pso/misc/TRaderMapCore.h"

struct O_80156BBC { u8 pad0[0x18]; s32 f18; f32 f1c; };

struct Laser_80156CA0 {
    f32 value;
    u8 pad[0x14];
    s32 dir;
};

extern "C" {
f32 xz_distance_squared(void *, void *);
extern u8 *camera_ctrl_instance;
s32 fn_80156BBC(O_80156BBC *arg0, void *arg1);
void step_laser_fence_fade(struct Laser_80156CA0 *p);

s32 fn_80156BBC(O_80156BBC *arg0, void *pos) {
    if (TRaderMapCore::is_not_split_screen() == 1) {
        return 1;
    }
    if (xz_distance_squared(camera_ctrl_instance + 0x178, pos) < arg0->f1c * arg0->f1c) {
        arg0->f18 = 0;
    } else {
        arg0->f18 = 1;
    }
    return fn_80156C88((f32 *)arg0);
}

s32 fn_80156C38(f32 *arg0) {
    if (TRaderMapCore::is_not_split_screen() == 1) {
        return 0;
    }
    return *arg0 < (0.0f);
}

s32 fn_80156C88(f32 *arg0) {
    return *arg0 > (-1.0f);
}

void step_laser_fence_fade(struct Laser_80156CA0 *p) {
    f32 x = p->value;
    if (p->dir == 0) {
        x += 0.04f;
        if (x > 0.0f) x = 0.0f;
    } else {
        x -= 0.04f;
        if (x < -1.0f) x = -1.0f;
    }
    p->value = x;
}

void TUnk_804AF8D8::sub_80156CEC() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x18) = 1;
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (3e+02f);
    this->reset_obstruction_fade();
}

}
