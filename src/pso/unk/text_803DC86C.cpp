#include "types.h"
extern "C" {
extern u32 lbl_805D46C0;
void fn_803DC86C(s32 a, s32 b, s32 c, s32 d);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DC86C(s32 a, s32 b, s32 c, s32 d) {
    lbl_805D46C0 = (a << 14) | (b << 11) | (c << 8) | d;
}
#pragma pop

}
