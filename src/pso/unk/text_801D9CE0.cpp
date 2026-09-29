#include "types.h"
extern "C" {
void TObjPlayer__sub_801D9E2C(void *, s16);
void TObjPlayer__sub_801D9CE0(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801D9CE0(void *arg0) {
    s32 i = 0;
    do {
        TObjPlayer__sub_801D9E2C(arg0, i);
        i++;
    } while (i < 0x13);
}

}
