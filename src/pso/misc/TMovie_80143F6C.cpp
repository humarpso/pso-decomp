#include "types.h"

extern "C" {

void release__6TMovieFPv(void *arg0);

void release__6TMovieFPv(void *arg0) {
    void **temp_r3;
    void *temp_r4;

    temp_r3 = *(void ***)((s8 *)arg0 + 4);
    temp_r4 = *temp_r3;
    (*(s32 (**)(void **, void *))((s8 *)temp_r4 + 0x14))(temp_r3, temp_r4);
    *(void ***)((s8 *)arg0 + 4) = NULL;
}

}
