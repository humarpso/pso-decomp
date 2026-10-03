#include "pso/misc/RenderFadeState.h"

extern "C" {
void matrix_mult_vec(int, const f32*, f32*);
extern const f32 lbl_805DA370;
extern const f32 lbl_805DA374;
}

s32 RenderFadeState::updateFromCamera(const f32* position) {
    f32 cameraPosition[3];
    matrix_mult_vec(0, position, cameraPosition);
    if (-cameraPosition[2] < lbl_805DA374) {
        fadeOut();
    } else {
        restore();
    }
    return isFading();
}

s32 RenderFadeState::isFading() const {
    return adjustment < lbl_805DA370;
}

void RenderFadeState::restore() {
    restoring = 1;
}

void RenderFadeState::fadeOut() {
    restoring = 0;
}
