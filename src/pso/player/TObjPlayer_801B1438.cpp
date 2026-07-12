#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__10TObjPlayerFPvf(void *arg0, f32 farg0);
s32 TObjPlayer__sub_80055694(void *);
M2C_UNK draw_model_with_callback__10TObjPlayerFPviif(void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D8C7C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void draw__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8C7C(0, TObjPlayer__sub_80055694(arg0));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    draw_model_with_callback__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, s32 *, 0xE0), farg0);
    TObjPlayer__sub_803D9B78();
}

}
