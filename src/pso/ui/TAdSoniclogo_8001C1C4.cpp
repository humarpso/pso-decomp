#include "pso/TAdSoniclogo.h"

#include "types.h"

struct Obj_8001C21C { u8 pad[0x1c]; s32 f1c; };

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* sonic_logo_object;
extern const f32 lbl_805D7E78;
extern int TAdSoniclogo__state;
extern void *tl_00;
void *__nw__7TObjectFUl(u32 size);
void request_exit__5TLogoFv(void);
void init__22THunterGuildSeqOfflineFPvPvPv(void *a, void *b, void *c);
void run_task__12TAdSoniclogoFv(Obj_8001C21C *self);
}

extern "C" {

void request_destroy__12TAdSoniclogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int TAdSoniclogo__state;
void request_destroy__12TAdSoniclogoFv(void) { queue_destruction__7TObjectFv(); TAdSoniclogo__state = 1; }

}

void TAdSoniclogo::render() {
    render_logo_with_default(sonic_logo_object, 16, -1, lbl_805D7E78);
}
void run_task__12TAdSoniclogoFv(Obj_8001C21C *self) {
    switch (TAdSoniclogo__state) {
    case 0:
        break;
    case 1:
        if (++self->f1c > 0x3c) {
            void *p;
            TAdSoniclogo__state = 2;
            p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                init__22THunterGuildSeqOfflineFPvPvPv(p, tl_00, (void *)request_exit__5TLogoFv);
            }
        }
        break;
    case 2:
        break;
    }
}
TAdSoniclogo::~TAdSoniclogo() {}
