#include "pso/TAdSoniclogo.h"

TAdSoniclogo::~TAdSoniclogo() {}

#include "types.h"

extern "C" {
s32 render_logo_with_default(void *, int, int, f32);
extern void* lbl_805D4A48;
extern const f32 lbl_805D7E78;
}

extern "C" {

void request_destroy__12TAdSoniclogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int TAdSoniclogo__data_805D4A4C;
void request_destroy__12TAdSoniclogoFv(void) { queue_destruction__7TObjectFv(); TAdSoniclogo__data_805D4A4C = 1; }

}

void TAdSoniclogo::render() {
    render_logo_with_default(lbl_805D4A48, 16, -1, lbl_805D7E78);
}
