#include "pso/boss/TUnk_804848A0.h"
#include "pso/TMainTask.h"

extern "C" {
extern void *__vt__13TUnk_804848A0[];
extern void *__vt__13TUnk_804848B8[];
extern void *__vt__13TUnk_804999E8[];
TObject *__ct__7TObjectFP7TObject(TObject *object, TObject *parent);
TObject *__dt__7TObjectFv(TObject *object, s16 flags);
}

s32 volopt_fade_out_done;
s32 volopt_fade_in_done;

void TUnk_804848A0::run_task() {
    alpha -= 8.0f;
    if (alpha <= 0.0f) {
        alpha = 0.0f;
        if (on_done != NULL) {
            on_done();
        } else {
            queue_destruction();
        }
        volopt_fade_in_done = 1;
    }
}

extern "C" TUnk_804848A0 *__dt__13TUnk_804848A0Fv(TUnk_804848A0 *fade, s16 flags) {
    if (fade != NULL) {
        *(void ***)((u8 *)fade + 0x18) = __vt__13TUnk_804848A0;
        fade->destroy_task_object(0);
        if (flags > 0) {
            TObject::operator delete(fade);
        }
    }
    return fade;
}

void *TUnk_804999E8::destroy_task_object(s16 flags) {
    if (this != NULL) {
        *(void ***)((u8 *)this + 0x18) = __vt__13TUnk_804999E8;
        __dt__7TObjectFv(this, 0);
        if (flags > 0) {
            TObject::operator delete(this);
        }
    }
    return this;
}

void *TUnk_804848A0::init_fade_color(void *parent, void *on_done) {
    init_object(tl_fade);
    *(void ***)((u8 *)this + 0x18) = __vt__13TUnk_804848A0;
    this->on_done = (VoloptFadeCallback)on_done;
    alpha = 255.0f;
    color[0] = 255;
    color[1] = 255;
    color[2] = 255;
    volopt_fade_in_done = 0;
    return this;
}

void TUnk_804848B8::run_task() {
    alpha += 8.0f;
    if (alpha >= 255.0f) {
        alpha = 255.0f;
        if (on_done != NULL) {
            on_done();
        } else {
            queue_destruction();
        }
        volopt_fade_out_done = 1;
    }
}

extern "C" TUnk_804848B8 *__dt__13TUnk_804848B8Fv(TUnk_804848B8 *fade, s16 flags) {
    if (fade != NULL) {
        *(void ***)((u8 *)fade + 0x18) = __vt__13TUnk_804848B8;
        fade->destroy_task_object(0);
        if (flags > 0) {
            TObject::operator delete(fade);
        }
    }
    return fade;
}

void *TUnk_804848B8::init_fade(void *parent, void *on_done) {
    init_object(tl_fade);
    *(void ***)((u8 *)this + 0x18) = __vt__13TUnk_804848B8;
    this->on_done = (VoloptFadeCallback)on_done;
    alpha = 0.0f;
    color[0] = 255;
    color[1] = 255;
    color[2] = 255;
    volopt_fade_out_done = 0;
    return this;
}

void *TUnk_804999E8::init_object(void *parent) {
    __ct__7TObjectFP7TObject(this, (TObject *)parent);
    *(void ***)((u8 *)this + 0x18) = __vt__13TUnk_804999E8;
    return this;
}
