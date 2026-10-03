#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void TWindowSubStatusDisp__sub_80228D4C(void);
extern char *lbl_805D6338;
extern char lbl_80515BC8[];
void append_text_space(void);
extern char *lbl_805D6338;
void append_padded_number(s32 v, u8 n);
void append_padded_number(s32 v, u8 n);
M2C_UNK text_builder_append(void *);
extern M2C_UNK lbl_8044CB60[];
extern M2C_UNK lbl_805DC790;
extern M2C_UNK lbl_805DC794;
void TWindowSubStatusDisp__sub_80228CC0(u32 arg0);
}

extern "C" {

void TWindowSubStatusDisp__sub_80228CC0(u32 arg0) {
    u32 h = arg0 / 3600U;
    u32 rem = arg0 % 3600U;
    if (h > 99U) {
        text_builder_append(lbl_8044CB60);
        return;
    }
    append_padded_number(h, 2);
    text_builder_append(&lbl_805DC790);
    u32 m = rem / 60U;
    rem = rem % 60U;
    append_padded_number(m, 2);
    text_builder_append(&lbl_805DC794);
    append_padded_number(rem, 2);
}

void TWindowSubStatusDisp__sub_80228D4C(void) {
    if (lbl_805D6338 != lbl_80515BC8) {
        *lbl_805D6338++ = 0x2c;
        *lbl_805D6338 = 0;
    }
}
void append_text_space(void) {
    if (lbl_805D6338 != lbl_80515BC8) {
        *lbl_805D6338++ = 0x20;
        *lbl_805D6338 = 0;
    }
}
void append_padded_number(s32 v, u8 n) {
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
