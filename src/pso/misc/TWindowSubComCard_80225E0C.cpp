#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 strncmp(void *, void *, s32);
void TWindowSubComCard__sub_80225E80(char *, char *);
extern char lbl_804CA3A0[][20];
extern const char lbl_8044C828[];
s32 memset(void *, s32, s32);
s32 strncpy(void *, s32, s32);

void TWindowSubComCard::submit_card_password(s32 arg0) {
    char name[0x11];
    char sp8[0x11];

    memset(name, 0, 0x11);
    memset(sp8, 0, 0x11);
    strncpy(name, arg0, 0x10);
    TWindowSubComCard__sub_80225E80(name, sp8);
    strncmp(name, sp8, 0x10);
}

void TWindowSubComCard__sub_80225E80(char *src, char *dst) {
    char buf[0x108];
    const char *mask = lbl_8044C828;
    s32 i;
    s32 j;
    s32 k;
    s32 l;
    s32 m;
    s32 pos;
    char *word;

    i = 0;
    buf[0] = ' ';
    while (src[i] != 0) {
        char c = src[i];
        u8 alpha = 0;
        s32 lc;
        if (c >= 'A' && c <= 'z') {
            alpha = 1;
        }
        lc = c;
        if (alpha) {
            lc = (lc & 0x5F) + 0x20;
        }
        dst[i] = c;
        buf[i + 1] = lc;
        i++;
    }
    buf[i + 1] = ' ';
    buf[i + 2] = 0;
    dst[i] = 0;

    for (j = 0; lbl_804CA3A0[j][0] != 0; j++) {
        word = lbl_804CA3A0[j];
        do {
            pos = -1;
            for (k = 0; buf[k] != 0; k++) {
                for (l = k, m = 0; buf[l] == word[m]; l++, m++) {
                    if (word[m + 1] == 0) {
                        pos = k;
                    }
                }
            }
            if (pos >= 0) {
                for (k = 0; word[k] != 0; k++) {
                    if (word[k] != ' ') {
                        buf[pos + k] = mask[k];
                        if (pos + k > 0 && dst[pos + k - 2] != 0) {
                            dst[pos + k - 1] = mask[k];
                        }
                    }
                }
            }
        } while (pos != -1);
    }
}

}
