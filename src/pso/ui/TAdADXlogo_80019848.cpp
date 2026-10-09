#include "pso/TAdADXlogo.h"

#include "types.h"

struct Obj_800198C8 { u8 pad[0x1c]; s32 f1c; };

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* lbl_805D49C8;
extern const f32 lbl_805D7DD0;
extern int TAdADXlogo__state;
extern void *tl_00;
extern const f32 lbl_805D7DD4;
void *__nw__7TObjectFUl(u32 size);
void init__22THunterGuildSeqOfflineFPvPvPv(void *a, void *b, void *c);
void TAdADXlogo__sub_80019848(void);
void run_task__10TAdADXlogoFv(Obj_800198C8 *self);
}

extern "C" {

void TAdADXlogo__sub_80019848(void);
void destroy__10TAdADXlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D49D0;
void TAdADXlogo__sub_80019848(void) { queue_destruction__7TObjectFv(); lbl_805D49D0 = 1; }

    extern int TAdADXlogo__state;
void destroy__10TAdADXlogoFv(void) { queue_destruction__7TObjectFv(); TAdADXlogo__state = 1; }

}

void TAdADXlogo::render() {
    render_logo_with_default(lbl_805D49C8, 0, -1, lbl_805D7DD0);
}
void run_task__10TAdADXlogoFv(Obj_800198C8 *self) {
    switch (TAdADXlogo__state) {
    case 0:
        break;
    case 1:
        if ((f32)++self->f1c > lbl_805D7DD4) {
            void *p;
            TAdADXlogo__state = 2;
            p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                init__22THunterGuildSeqOfflineFPvPvPv(p, tl_00, (void *)TAdADXlogo__sub_80019848);
            }
        }
        break;
    case 2:
        break;
    }
}
