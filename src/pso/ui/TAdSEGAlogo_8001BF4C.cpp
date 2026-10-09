#include "pso/TAdSEGAlogo.h"

#include "types.h"

struct Obj_8001BFCC { u8 pad[0x1c]; s32 f1c; };

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* logo_texture_e_handle;
extern const f32 lbl_805D7E70;
extern int TAdSEGAlogo__state;
extern void *tl_00;
extern const f32 lbl_805D7E74;
void *__nw__7TObjectFUl(u32 size);
void init__22THunterGuildSeqOfflineFPvPvPv(void *a, void *b, void *c);
void destroy_and_mark_done__11TAdSEGAlogoFv(void);
void run_task__11TAdSEGAlogoFv(Obj_8001BFCC *self);
}

extern "C" {

void destroy_and_mark_done__11TAdSEGAlogoFv(void);
void request_destroy__11TAdSEGAlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int sega_logo_done_flag;
void destroy_and_mark_done__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); sega_logo_done_flag = 1; }

    extern int TAdSEGAlogo__state;
void request_destroy__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); TAdSEGAlogo__state = 1; }

}

void TAdSEGAlogo::render() {
    render_logo_with_default(logo_texture_e_handle, 8, -1, lbl_805D7E70);
}
void run_task__11TAdSEGAlogoFv(Obj_8001BFCC *self) {
    switch (TAdSEGAlogo__state) {
    case 0:
        break;
    case 1:
        if ((f32)++self->f1c > lbl_805D7E74) {
            void *p;
            TAdSEGAlogo__state = 2;
            p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                init__22THunterGuildSeqOfflineFPvPvPv(p, tl_00, (void *)destroy_and_mark_done__11TAdSEGAlogoFv);
            }
        }
        break;
    case 2:
        break;
    }
}
