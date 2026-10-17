#include "types.h"
#include "pso/unk/text_80228E98.h"
extern "C" {
char *fn_80228E98(s32 v, char *out) {
    u8 digits[16];
    u32 n;
    u32 i;
    if (v == 0) {
        *out = '0';
        *++out = 0;
        return out;
    }
    if (v < 0) {
        *out = '-';
        v *= -1;
        out++;
    }
    n = 0;
    for (i = 0; i < 16; i++) {
        digits[n] = v % 10;
        v /= 10;
        if (v <= 0) {
            break;
        }
        n++;
    }
    if (n >= 16) {
        n = 15;
    }
    for (i = 0; i < n + 1; i++) {
        *out = digits[n - i] + '0';
        out++;
    }
    *out = 0;
    return out;
}

}
