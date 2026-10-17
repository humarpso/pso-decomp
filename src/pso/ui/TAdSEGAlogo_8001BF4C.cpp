#include "pso/TAdSEGAlogo.h"

#include "types.h"
#include "pso/misc/THunterGuildSeqOffline.h"

struct Obj_8001BFCC { u8 pad[0x1c]; s32 f1c; };

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* logo_texture_e_handle;
extern const f32 lbl_805D7E70;
extern int TAdSEGAlogo__state;
extern void *tl_00;
extern const f32 lbl_805D7E74;
void *__nw__7TObjectFUl(u32 size);
int queue_destruction__7TObjectFv(void);

    extern int sega_logo_done_flag;
void TAdSEGAlogo::destroy_and_mark_done() { queue_destruction__7TObjectFv(); sega_logo_done_flag = 1; }

void TAdSEGAlogo::request_destroy() { queue_destruction__7TObjectFv(); TAdSEGAlogo__state = 1; }

}

void TAdSEGAlogo::render() {
    render_logo_with_default(logo_texture_e_handle, 8, -1, lbl_805D7E70);
}
void TAdSEGAlogo::run_task() {
    Obj_8001BFCC *self = (Obj_8001BFCC *)this;
    switch (TAdSEGAlogo__state) {
    case 0:
        break;
    case 1:
        if ((f32)++self->f1c > lbl_805D7E74) {
            void *p;
            TAdSEGAlogo__state = 2;
            p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                ((THunterGuildSeqOffline *)p)->init(tl_00, (void *)TAdSEGAlogo::destroy_and_mark_done);
            }
        }
        break;
    case 2:
        break;
    }
}
