#include "pso/TAdADXlogo.h"

#include "types.h"
#include "pso/misc/THunterGuildSeqOffline.h"

struct Obj_800198C8 { u8 pad[0x1c]; s32 f1c; };

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* lbl_805D49C8;
extern const f32 lbl_805D7DD0;
extern int TAdADXlogo__state;
extern void *tl_00;
extern const f32 lbl_805D7DD4;
void *__nw__7TObjectFUl(u32 size);
void TAdADXlogo__sub_80019848(void);
}

extern "C" {

void TAdADXlogo__sub_80019848(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D49D0;
void TAdADXlogo__sub_80019848(void) { queue_destruction__7TObjectFv(); lbl_805D49D0 = 1; }

    extern int TAdADXlogo__state;
void TAdADXlogo::destroy() { queue_destruction__7TObjectFv(); TAdADXlogo__state = 1; }

}

void TAdADXlogo::render() {
    render_logo_with_default(lbl_805D49C8, 0, -1, lbl_805D7DD0);
}
void TAdADXlogo::run_task() {
    Obj_800198C8 *self = (Obj_800198C8 *)this;
    switch (TAdADXlogo__state) {
    case 0:
        break;
    case 1:
        if ((f32)++self->f1c > lbl_805D7DD4) {
            void *p;
            TAdADXlogo__state = 2;
            p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                ((THunterGuildSeqOffline *)p)->init(tl_00, (void *)TAdADXlogo__sub_80019848);
            }
        }
        break;
    case 2:
        break;
    }
}
