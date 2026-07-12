#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TAdRicoRing__sub_8001BEE8(void *, int);
M2C_UNK TObjPlayer__sub_801BF690(void *);
M2C_UNK TObjPlayer__sub_801BF964(void *);
M2C_UNK init_tag__10TObjPlayerFPv(void *);
M2C_UNK reset_counter_field4__10TObjPlayerFPv(void *);
M2C_UNK set_vec4_const__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8002AEAC(void *);
M2C_UNK TObjPlayer__sub_8011E204(void *, int);
M2C_UNK reset_movement_state__10TObjPlayerFPv(void *);

extern const f32 TObjPlayer__data_805DC278;

void reset_state__10TObjPlayerFPv(u8 *arg0) {
    TAdRicoRing__sub_8001BEE8(arg0 + 0x858, 2);
    reset_counter_field4__10TObjPlayerFPv(arg0 + 0x63C);
    TObjPlayer__sub_8002AEAC(arg0 + 0x644);
    reset_movement_state__10TObjPlayerFPv(arg0 + 0x7CC);
    TObjPlayer__sub_801BF690(arg0 + 0x730);
    set_vec4_const__10TObjPlayerFPv(arg0 + 0x608);
    M2C_FIELD(arg0, s32 *, 0x548) = 0;
    init_tag__10TObjPlayerFPv(arg0 + 0x340);
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    TObjPlayer__sub_8011E204(arg0, 0x283);
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjPlayer__data_805DC278;
    TObjPlayer__sub_801BF964(arg0 + 0x5FC);
}

}
