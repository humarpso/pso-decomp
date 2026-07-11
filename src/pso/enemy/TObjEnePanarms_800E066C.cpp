#include "types.h"

extern "C" {

void TObjEnePanarms__sub_800E066C(void* a0);
void fn_8002AE74(void*, s32);
void fn_800E2EF0(void*, s32, s32);

    extern const float TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800E066C(void* a0) {
    void* t = *(void**)((char*)a0 + 0x37c);
    *(int*)((char*)t + 0x18) = (*(int*)((char*)t + 0x18) | 0x1);
    fn_800E2EF0(a0, 0xf, 0x1e);
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    fn_8002AE74(a0, 2);
}

}
