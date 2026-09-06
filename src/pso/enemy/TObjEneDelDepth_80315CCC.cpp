#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneDelDepth__sub_80315D60(f32, f32, f32, f32);
extern const f32 TObjEneDelDepth__data_805DF258;
void TObjEneDelDepth__sub_80315D34(f32 farg0);
}

extern "C" {

int get_data__15TObjEneDelDepthFv(void);
void reset_globals__15TObjEneDelDepthFv(void);
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);

extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;

void reset_globals__15TObjEneDelDepthFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
    TObjPlayer__sub_803E38FC(0x2500);
    TObjPlayer__sub_803E38FC(0x2500);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}

    extern int TObjEneDelDepth__data_805D6AC4;

void TObjEneDelDepth__sub_80315D34(f32 farg0) {
    TObjEneDelDepth__sub_80315D60(farg0, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258, TObjEneDelDepth__data_805DF258);
}

int get_data__15TObjEneDelDepthFv(void) {  return TObjEneDelDepth__data_805D6AC4; }

}
