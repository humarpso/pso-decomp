#include "types.h"
#include "pso/unk/text_803DC86C.h"

extern u32 ginja_blend_override;
#pragma push
#pragma scheduling off
#pragma peephole off
void set_color_blend_mode(s32 a, s32 b, s32 c, s32 d) {
    ginja_blend_override = (a << 14) | (b << 11) | (c << 8) | d;
}
#pragma pop
