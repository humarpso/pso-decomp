#ifndef PSO_MISC_CHARACTER_SHAPE_H
#define PSO_MISC_CHARACTER_SHAPE_H
#include "types.h"
#include "pso/misc/CharacterAppearance.h"

struct CreationShapePoint { f32 width, height; };
struct CreationShapeTriangle { s32 sample[3]; };
struct CreationShapeBlend {
    s32 region;
    f32 weights[3];
    CreationModelNodeState *destination, *sources[3];
};
void reset_creation_body_shapes();
void reset_creation_head_shapes();
#endif
