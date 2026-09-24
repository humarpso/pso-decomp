#include "types.h"

extern "C" {
extern u32 *lbl_805D79F0;
void fn_803F7660(u32 *mask);
void fn_803F7308(u32 *dst, u32 *src);
extern u32 *lbl_805D79F0;
void fn_803F7424(void);
extern u32 *lbl_805D79F0;
void fn_803F7404(u32 *p, s32 n);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7308(u32 *dst, u32 *src) {
    s32 i;
    for (i = 0; i < 4; i++, dst++, src++) {
        *dst = *src;
    }
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma optimization_level 1
void fn_803F7404(u32 *p, s32 n) {
    lbl_805D79F0 = p;
    if (n > 16) {
        n = 16;
    }
    *lbl_805D79F0 = n << 16;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7424(void) {
    *lbl_805D79F0 = 0;
    lbl_805D79F0 = 0;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7660(u32 *mask) {
    *lbl_805D79F0 &= ~*mask;
}
#pragma pop

}
