#include "types.h"

extern "C" {
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void TWindowSubStatusDisp__sub_80228D4C(void);
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void TWindowSubStatusDisp__sub_80228D80(void);
}

extern "C" {

void TWindowSubStatusDisp__sub_80228D4C(void) {
    if (lbl_805D6338 != lbl_80515BC8) {
        *lbl_805D6338++ = 0x2c;
        *lbl_805D6338 = 0;
    }
}
void TWindowSubStatusDisp__sub_80228D80(void) {
    if (lbl_805D6338 != lbl_80515BC8) {
        *lbl_805D6338++ = 0x20;
        *lbl_805D6338 = 0;
    }
}

}
