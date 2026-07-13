#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CA2C8(u8 *arg0);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s16 TObjPlayer__sub_801BE40C(void *);
M2C_UNK TObjPlayer__sub_801D2620(void *);
M2C_UNK draw__10TObjPlayerFPvf(void *, f32);
s16 get_model_field_m25__10TObjPlayerFPv(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);

extern const f32 TObjPlayer__data_805DC360;

void TObjPlayer__sub_801CA2C8(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x858), (int) (1)) != 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801BE40C((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = get_model_field_m25__10TObjPlayerFPv((void *) (arg0));
    }
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) - TObjPlayer__data_805DC360);
    draw__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    TObjPlayer__sub_801D2620((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFDF);
}

}
