#include "pso/system/ChunkMaterialState.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct ChunkMaterialColor { f32 alpha, red, green, blue; };
extern "C" {
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

void set_chunk_material_color(f32 *arg) {
    model_material_color.alpha = clampMaterialChannel(arg[0], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.red = clampMaterialChannel(arg[1], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.green = clampMaterialChannel(arg[2], lbl_805E0FC0, lbl_805E0FBC);
    model_material_color.blue = clampMaterialChannel(arg[3], lbl_805E0FC0, lbl_805E0FBC);
}
#pragma pop
}
