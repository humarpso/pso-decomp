#include "types.h"

extern "C" {

s32 is_rand_below_threshold__10TObjPlayerFv(void);
s32 rand();

extern s32 lbl_8043E980;
extern f32 lbl_805DAE78;
extern f32 lbl_805DAE7C;

s32 is_rand_below_threshold__10TObjPlayerFv(void) {
    return (u32)__cntlzw(((lbl_805DAE78 * (f32) rand()) < lbl_805DAE7C)) >> 5;
}

}
