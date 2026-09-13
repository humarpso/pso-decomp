#ifndef PSO_MISC_CHARACTER_APPEARANCE_H
#define PSO_MISC_CHARACTER_APPEARANCE_H
#include "types.h"
#include <stddef.h>

struct CharacterAppearanceFields {
    u8 name[0x30];
    u8 section, classId, flags, spare;
    u32 classFlags;
    s16 costume, skin, face, head, hair, red, green, blue;
    f32 width, height;
};
typedef char CharacterAppearanceFields_size[sizeof(CharacterAppearanceFields) == 0x50 ? 1 : -1];
typedef char CharacterAppearanceFields_head[offsetof(CharacterAppearanceFields, head) == 0x3e ? 1 : -1];
typedef char CharacterAppearanceFields_rgb[offsetof(CharacterAppearanceFields, red) == 0x42 ? 1 : -1];

struct CreationModelNodeState { void *node; u32 flags; };
struct CreationHeadModelStates { CreationModelNodeState nodes[5]; };
struct CreationBodyModelStates { CreationModelNodeState nodes[65]; };
typedef char CreationHeadModelStates_size[sizeof(CreationHeadModelStates) == 0x28 ? 1 : -1];
typedef char CreationBodyModelStates_size[sizeof(CreationBodyModelStates) == 0x208 ? 1 : -1];

extern "C" {
void TCharaMaking__draw_colored_hair(f32 alpha, s32 model, CharacterAppearanceFields *appearance, s32 specialColor);
void TCharaMaking__bind_head_shape_nodes(CharacterAppearanceFields *appearance, void *model);
void TCharaMaking__bind_body_shape_nodes(CharacterAppearanceFields *appearance, void *model);
}
#endif
