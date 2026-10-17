#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 strncmp(void *, void *, s32);
s32 TWindowSubComCard__sub_80225E80(void *, void *);
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

}
