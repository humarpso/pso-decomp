#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80315D60 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
extern const f32 TObjEneDelDepth__data_805DF258;
void setup_draw_material_default__15TObjEneDelDepthFf(f32 farg0);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK set_chunk_blend(M2C_UNK);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805DF2E0;
void setup_draw_material__15TObjEneDelDepthFffff(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
}

extern "C" {

int get_data__15TObjEneDelDepthFv(void);
void reset_globals__15TObjEneDelDepthFv(void);
M2C_UNK set_chunk_blend(M2C_UNK);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);

extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;

void reset_globals__15TObjEneDelDepthFv(void) {
    model_render_flags &= 0xFFFF77DF;
    set_chunk_material_override_pair(0xFF00, 0);
    set_chunk_blend(0x2500);
    set_chunk_blend(0x2500);
    chunk_polygon_flags_and_mask = lbl_805D5664;
    chunk_polygon_flags_or_mask = lbl_805D5668;
    model_render_flags = lbl_805D5660;
}

    extern int TObjEneDelDepth__shared_resource;

void setup_draw_material_default__15TObjEneDelDepthFf(f32 farg0) {
    setup_draw_material__15TObjEneDelDepthFffff(farg0, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258);
}

void setup_draw_material__15TObjEneDelDepthFffff(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_80315D60 stack;
    lbl_805D5660 = model_render_flags;
    lbl_805D5664 = chunk_polygon_flags_and_mask;
    lbl_805D5668 = chunk_polygon_flags_or_mask;
    model_render_flags |= 0x8820;
    set_chunk_material_override_pair((M2C_UNK)(0xFF00), (M2C_UNK)(0x800));
    set_chunk_blend((M2C_UNK)((int) (0x2100)));
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp8 = lbl_805DF2E0 + farg0;
    stack.sp14 = farg3;
    set_chunk_material_color((void *) (&stack.sp8));
}

int get_data__15TObjEneDelDepthFv(void) {  return TObjEneDelDepth__shared_resource; }

}
