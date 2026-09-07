#ifndef PSO_MISC_CAVESIGNMODEL_H
#define PSO_MISC_CAVESIGNMODEL_H
#include "types.h"
#include <stddef.h>

struct CaveSignModel {
    u32 flags;
    s32 model;
    f32 x, y, z;
    u8 rotation_scale[0x2C - 0x14];
    CaveSignModel* child;
    CaveSignModel* sibling;
};
typedef char CaveSignModel_model_offset[offsetof(CaveSignModel, model) == 4 ? 1 : -1];
typedef char CaveSignModel_position_offset[offsetof(CaveSignModel, x) == 8 ? 1 : -1];
typedef char CaveSignModel_child_offset[offsetof(CaveSignModel, child) == 0x2C ? 1 : -1];
typedef char CaveSignModel_sibling_offset[offsetof(CaveSignModel, sibling) == 0x30 ? 1 : -1];
typedef char CaveSignModel_size[sizeof(CaveSignModel) == 0x34 ? 1 : -1];
#endif
