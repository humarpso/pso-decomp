#ifndef PSO_MISC_CHARACTER_CREATION_MODELS_H
#define PSO_MISC_CHARACTER_CREATION_MODELS_H

#include "types.h"

struct CreationModelPart {
    u32 present;
    u32 model;
};

extern "C" {
extern CreationModelPart creation_hair_model_parts[10];
extern CreationModelPart creation_cap_model_parts[10];
extern CreationModelPart creation_head_model_parts[5];
extern u32 creation_models_ready;
extern u32 chara_select_hair_node_a;
extern u32 chara_select_hair_node_b;
extern u32 chara_select_head_node;
extern s32 chara_select_preview_resource;
}
extern u32 creation_player_character;

#endif
