#include "types.h"

extern "C" {
void heap_free__5THeapFPv(void *, void *);
extern void *lbl_805187D8[];
extern void *lbl_805D6460;
extern void *lbl_805D6464;
void fn_8026A14C(void);
char *TWindowSubStatusDisp__sub_80144B14(char *, s32 *, s32);
char *strncpy(char *, const char *, u32);
u32 strlen(const char *);
extern s32 lbl_805D5544;
void fn_8026A1C4(char *dst, char *src, s32 size);
}

extern "C" {

void fn_8026A14C(void) {
    s32 i;
    for (i = 0x1D; i >= 0; i--) {
        if (lbl_805187D8[i] != NULL) {
            heap_free__5THeapFPv(lbl_805D6460, lbl_805187D8[i]);
            lbl_805187D8[i] = NULL;
        }
    }
    if (lbl_805D6464 != NULL) {
        heap_free__5THeapFPv(lbl_805D6460, lbl_805D6464);
        lbl_805D6464 = NULL;
    }
}
void fn_8026A1C4(char *dst, char *src, s32 size) {
    s32 sjis;
    char *next;
    s32 len;
    s32 n;
    s8 c;
    sjis = 0;
    if (dst != NULL && size > 0) {
        if (src == NULL || size <= 1) {
            *dst = 0;
            return;
        }
        len = strlen(src) + 1;
        if (lbl_805D5544 == 0) {
            sjis = 1;
        }
        while (size < len) {
            if (*src == 0 || len <= 0 || size <= 1) {
                if (size > 0) {
                    *dst = 0;
                }
                return;
            }
            next = TWindowSubStatusDisp__sub_80144B14(src, &sjis, 0);
            if (next != src) {
                n = next - src;
                if (n >= size) {
                    *dst = 0;
                    return;
                }
                strncpy(dst, src, n);
                src = next;
                dst += n;
                size -= n;
                len -= n;
            } else {
                len--;
                c = *src++;
                if (sjis != 0 && ((c & 0xE0) == 0x80 || (c & 0xE0) == 0xE0)) {
                    src++;
                    len--;
                }
            }
        }
        strncpy(dst, src, len);
        dst[len] = 0;
    }
}

}
