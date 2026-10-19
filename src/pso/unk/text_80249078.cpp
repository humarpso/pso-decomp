#include "types.h"
#include "pso/misc/TWindowChoiceSetting.h"

extern "C" {
#pragma push
#pragma fp_contract on
void fn_80249078(TWindowChoiceSetting *window) {
    f32 target;
    u32 steps;

    if (window->m_80 & 1) {
        steps = window->get_array_entry(window->get_field_74());
        target = *(f32 *)(steps + 0xC);
    } else {
        target = 0.0f;
    }
    steps = *(u32 *)&window->unk_50;
    if (steps == 0) {
        *(f32 *)&window->unk_60[0xC] = target;
        return;
    }
    target += 0.5f * (window->m_3c - window->m_4c);
    *(f32 *)&window->unk_60[0xC] += (target - *(f32 *)&window->unk_60[0xC]) / (f32)steps;
}
#pragma pop
}
