#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"

extern "C" {

s32 TObjPlayer__sub_801BF690(void *);
s32 zero_vec3(void *);
s32 TObjPlayer__sub_8011E204(void *, int);
s32 reset_movement_state__10TObjPlayerFPv(void *);

extern const f32 TObjPlayer__data_805DC278;

void TObjPlayer::reset_state() {
    u8 *arg0 = (u8 *)this;
    ((TAdRicoRing *)(arg0 + 0x858))->clear_flags(2);
    ((TObjPlayer *)(arg0 + 0x63C))->reset_counter_field4();
    ((TObjPlayer *)(arg0 + 0x644))->reset_type();
    reset_movement_state__10TObjPlayerFPv(arg0 + 0x7CC);
    TObjPlayer__sub_801BF690(arg0 + 0x730);
    ((TObjPlayer *)(arg0 + 0x608))->set_vec4_const();
    *(s32 *)((s8 *)arg0 + 0x548) = 0;
    ((TObjPlayer *)(arg0 + 0x340))->init_tag();
    *(s32 *)((s8 *)arg0 + 0x3D4) = 0;
    TObjPlayer__sub_8011E204(arg0, 0x283);
    *(s32 *)((s8 *)arg0 + 0x3F4) = 0;
    *(s32 *)((s8 *)arg0 + 0x3F0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
    *(f32 *)((s8 *)arg0 + 0x400) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x3FC) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x310) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x30C) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x308) = (f32) TObjPlayer__data_805DC278;
    zero_vec3(arg0 + 0x5FC);
}

}
