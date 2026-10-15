#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 strncmp(void *, void *, s32);
s32 TWindowSubComCard__sub_80225E80(void *, void *);
s32 memset(void *, s32, s32);
s32 strncpy(void *, s32, s32);

void TWindowSubComCard::submit_card_password(s32 arg0) {
    char sp1C[0x11];
    char sp8[0x11];

    memset(sp1C, 0, 0x11);
    memset(sp8, 0, 0x11);
    strncpy(sp1C, arg0, 0x10);
    TWindowSubComCard__sub_80225E80(sp1C, sp8);
    strncmp(sp1C, sp8, 0x10);
}

}
