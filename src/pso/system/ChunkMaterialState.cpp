#include "pso/system/ChunkMaterialState.h"
#include "pso/player/TUnk_80494AE0.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct ChunkMaterialColor { f32 alpha, red, green, blue; };

extern ChunkMaterialColor model_material_color;
extern const f32 lbl_805E0FC0, lbl_805E0FBC;
extern s32 chunk_polygon_flags_or_mask, chunk_polygon_flags_and_mask;

void set_chunk_material_override_pair(s32 arg0, s32 arg1) {
    chunk_polygon_flags_and_mask = arg0;
    chunk_polygon_flags_or_mask = arg1;
}

#pragma push
#pragma peephole off
#pragma opt_common_subs off
#pragma scheduling off
inline f32 clampMaterialChannel(f32 value, f32 lower, f32 upper) {
    if (value < lower) return lower;
    if (value < upper) return value;
    return upper;
}

void TUnk_80494AE0::set_chunk_material_color() {
    model_material_color.alpha = clampMaterialChannel(((f32 *)this)[0], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.red = clampMaterialChannel(((f32 *)this)[1], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.green = clampMaterialChannel(((f32 *)this)[2], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.blue = clampMaterialChannel(((f32 *)this)[3], lbl_805E0FC0, lbl_805E0FBC);
}
#pragma pop
