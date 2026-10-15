#include "types.h"

extern "C" {

void allow_rendering__7TObjectFv(void *arg0);
void disallow_rendering__7TObjectFv(void *arg0);

void allow_rendering__7TObjectFv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 4) = (u16) (*(u16 *)((s8 *)arg0 + 4) & 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 4) = (u16) (*(u16 *)((s8 *)arg0 + 4) | 0x10);
}

}
