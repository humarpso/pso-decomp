#include "types.h"

extern "C" {
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void TWindowSubStatusDisp__sub_80228D4C(void);
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void TWindowSubStatusDisp__sub_80228D80(void);
extern char *lbl_805D6338;
void TWindowChallengeResult__sub_80228DB4(s32 v, u8 n);
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
void TWindowChallengeResult__sub_80228DB4(s32 v, u8 n) {
    char buf[16];
    u32 i;
    if (v == 0) {
        for (i = 0; i < n; i++) {
            *lbl_805D6338++ = '0';
        }
        *lbl_805D6338 = 0;
        return;
    }
    if (v < 0) {
        v *= -1;
        *lbl_805D6338++ = '-';
    }
    for (i = 0; i < n; i++) {
        buf[i] = v % 10;
        v /= 10;
    }
    for (i = 0; i < n; i++) {
        *lbl_805D6338++ = buf[n - i - 1] + '0';
    }
    *lbl_805D6338 = 0;
}

}
