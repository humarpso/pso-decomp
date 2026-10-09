#include "types.h"
#include "pso/misc/RenderFadeState.h"

typedef struct Fade_800D7AD0 {
    f32 value;
    u8 pad[0x14];
    s32 mode;
} Fade_800D7AD0;

extern "C" {

struct RenderFadeState_800D7BB0 {
    f32 adjustment;
    u8 unknown04[0x14 - 0x04];
    void* virtualTable;
    s32 restoring;
};

void update_fade_value(Fade_800D7AD0 *arg0);
void matrix_mult_vec(int, const f32*, f32*);

#pragma push
#pragma opt_common_subs off
void update_fade_value(Fade_800D7AD0 *arg0) {
    f32 v = arg0->value;
    if (arg0->mode == 0) {
        v -= 0.23333333f;
        if (v < -0.7f) {
            v = -0.7f;
        }
    } else {
        v += 0.23333333f;
        if (v > 0.0f) {
            v = 0.0f;
        }
    }
    arg0->value = v;
}
#pragma pop

}

s32 RenderFadeState::updateFromCamera(const f32* position) {
    f32 cameraPosition[3];
    matrix_mult_vec(0, position, cameraPosition);
    if (-cameraPosition[2] < 28.0f) {
        fadeOut();
    } else {
        restore();
    }
    return isFading();
}

s32 RenderFadeState::isFading() const {
    return adjustment < 0.0f;
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
