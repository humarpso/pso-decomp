#include "types.h"

extern "C" {

s32 fn_80101A48(s32 arg0, s32 arg1) {
    if (arg0 == 4) {
        return 1;
    }
    if (arg0 != 3) {
        return 0;
    }
    if ((arg1 < 9) && (arg1 != 2)) {
        return 1;
    }
    if (arg1 == 0x10) {
        return 1;
    }
    return 0;
}

    extern int* lbl_805D53F4;
int fn_80101A98(int a0) {  return lbl_805D53F4[a0]; }

    extern int lbl_805D53F0;
int fn_80101AA8(void) {  return lbl_805D53F0; }

}
