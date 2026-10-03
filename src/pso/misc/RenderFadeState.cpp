#include "types.h"
#include "pso/misc/RenderFadeState.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

extern "C" {

struct RenderFadeState_800D7BB0 {
    f32 adjustment;
    u8 unknown04[0x14 - 0x04];
    void* virtualTable;
    s32 restoring;
};

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

extern "C" {
void update_obstruction_fade(RenderFadeState_800D7BB0* state) {
    f32 adjustment = state->adjustment;
    if (state->restoring == 0) {
        adjustment -= 0.04f;
        if (adjustment < -0.7f) {
            adjustment = -0.7f;
        }
    } else {
        adjustment += 0.04f;
        if (adjustment > 0.0f) {
            adjustment = 0.0f;
        }
    }
    state->adjustment = adjustment;
}

}
