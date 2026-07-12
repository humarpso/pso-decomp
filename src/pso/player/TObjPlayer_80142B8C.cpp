#include "types.h"
struct E16_80142b8c { u8 a[4]; s32 f4; u8 b[8]; };
struct E8_80142b8c  { u8 a[4]; s32 f4; };

extern "C" {

void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1);

void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    struct E16_80142b8c *a = *(struct E16_80142b8c **)(arg0 + 0xD8);
    s32 n = a[arg1].f4;
    struct E8_80142b8c *b = *(struct E8_80142b8c **)(arg0 + 0xDC);
    *(s32 *)(arg0 + 0xF8) = b[n].f4;
}

}
