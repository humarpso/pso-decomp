#ifndef PSO_MISC_TOSIGNCAVE02_H
#define PSO_MISC_TOSIGNCAVE02_H
#include "pso/misc/CaveSignModel.h"

class TOSignCave02 {
public:
    void render();
    u8 object_state[0x24];
    s32 render_parameter;
    u8 unknown028[0x34 - 0x28];
    CaveSignModel* model;
    u8 transform[0x28];
    s32 angle;
    u8 unknown064[0xC0 - 0x64];
    f32 field_c0;
    f32 field_c4;
};
typedef char TOSignCave02_render_parameter_offset[offsetof(TOSignCave02, render_parameter) == 0x24 ? 1 : -1];
typedef char TOSignCave02_model_offset[offsetof(TOSignCave02, model) == 0x34 ? 1 : -1];
typedef char TOSignCave02_transform_offset[offsetof(TOSignCave02, transform) == 0x38 ? 1 : -1];
typedef char TOSignCave02_angle_offset[offsetof(TOSignCave02, angle) == 0x60 ? 1 : -1];
typedef char TOSignCave02_field_c0_offset[offsetof(TOSignCave02, field_c0) == 0xC0 ? 1 : -1];
typedef char TOSignCave02_field_c4_offset[offsetof(TOSignCave02, field_c4) == 0xC4 ? 1 : -1];
typedef char TOSignCave02_size[sizeof(TOSignCave02) == 0xC8 ? 1 : -1];
#endif
