#include "pso/TAdSEGAlogo.h"

#include "types.h"

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* lbl_805D4A38;
extern const f32 lbl_805D7E70;
}

extern "C" {

void destroy_and_mark_done__11TAdSEGAlogoFv(void);
void request_destroy__11TAdSEGAlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D4A40;
void destroy_and_mark_done__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A40 = 1; }

    extern int TAdSEGAlogo__data_805D4A3C;
void request_destroy__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); TAdSEGAlogo__data_805D4A3C = 1; }

}

void TAdSEGAlogo::render() {
    render_logo_with_default(lbl_805D4A38, 8, -1, lbl_805D7E70);
}
