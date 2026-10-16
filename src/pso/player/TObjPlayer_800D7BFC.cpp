#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Base_800D7BFC { char pad[0x14]; };
struct VObj_800D7BFC : Base_800D7BFC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

extern "C" {

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1);
s32 TObjPlayer__sub_800D96D0(s32, s32 *);
void TObjPlayer__sub_800D9718(void *);
int set_chunk_blend(int);
s32 __dl__FPv(void *);

void TObjPlayer::activate_and_dispatch() {
    struct VObj_800D7BFC *o = (struct VObj_800D7BFC *)this;
    *(s32 *)((s8 *)this + 0x18) = 1;
    o->m2();
}

void TObjPlayer::init_effect_9472() { TObjPlayer::set_flags_and_apply_damage_color(); set_chunk_blend(9472); }

extern s32 lbl_804949A8[];

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = lbl_804949A8;
        TObjPlayer__sub_800D96D0((s32)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804949A8[];

void *TObjPlayer::init_and_activate() {
    TObjPlayer__sub_800D9718(this);
    *(s32 **)((s8 *)this + 0x14) = lbl_804949A8;
    activate_and_dispatch();
    return this;
}

}
