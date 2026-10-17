#ifndef PSO_CHUNK_MATERIAL_STATE_H
#define PSO_CHUNK_MATERIAL_STATE_H
#include "types.h"
extern "C" {
void set_chunk_material_override_pair(s32 first, s32 second);
void set_chunk_material_color__13TUnk_80494AE0Fv(f32 *argb);
void submit_chunk_material_color(u8 chunkType, s16 *packedMaterial);
}
extern "C" {
f32 clampMaterialChannel(f32 value, f32 lower, f32 upper);
void set_chunk_material_color__13TUnk_80494AE0Fv(f32 *arg);
void set_chunk_material_override_pair(s32 arg0, s32 arg1);
}

#endif
