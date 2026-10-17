#include "types.h"
#include "pso/player/TObjPlayer_800D7BFC.h"
#include "pso/player/TObjPlayer_800D8FDC.h"
#include "pso/unk/text_803E2D70.h"
#include "pso/system/memory.h"
#include "pso/player/TObjPlayer.h"

struct Base_800D7BFC { char pad[0x14]; };
struct VObj_800D7BFC : Base_800D7BFC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

extern "C" {

void TObjPlayer__sub_800D9718(void *);

void TObjPlayer::activate_and_dispatch() {
    struct VObj_800D7BFC *o = (struct VObj_800D7BFC *)this;
    *(s32 *)((s8 *)this + 0x18) = 1;
    o->m2();
}

void TObjPlayer::init_effect_9472() { TObjPlayer::set_flags_and_apply_damage_color(); set_chunk_blend(9472); }

extern s32 lbl_804949A8[];

void *__dt__13TUnk_804949A8Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = lbl_804949A8;
        __dt__13TUnk_80494AE0Fv(arg0, 0);
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

void *TObjPlayer::init_and_activate() {
    TObjPlayer__sub_800D9718(this);
    *(s32 * *)&this->m_down = lbl_804949A8;
    activate_and_dispatch();
    return this;
}

}
