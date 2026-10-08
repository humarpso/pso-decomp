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
void TObjEneDelDepth__sub_80315D34(f32 farg0);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK set_chunk_blend(M2C_UNK);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
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
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;

void reset_globals__15TObjEneDelDepthFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_chunk_material_override_pair(0xFF00, 0);
    set_chunk_blend(0x2500);
    set_chunk_blend(0x2500);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}

    extern int TObjEneDelDepth__data_805D6AC4;

void TObjEneDelDepth__sub_80315D34(f32 farg0) {
    setup_draw_material__15TObjEneDelDepthFffff(farg0, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258);
}

void setup_draw_material__15TObjEneDelDepthFffff(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_80315D60 stack;
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= 0x8820;
    set_chunk_material_override_pair((M2C_UNK)(0xFF00), (M2C_UNK)(0x800));
    set_chunk_blend((M2C_UNK)((int) (0x2100)));
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp8 = lbl_805DF2E0 + farg0;
    stack.sp14 = farg3;
    set_chunk_material_color((void *) (&stack.sp8));
}

int get_data__15TObjEneDelDepthFv(void) {  return TObjEneDelDepth__data_805D6AC4; }

}
