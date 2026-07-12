#include "types.h"

extern "C" {

void init_slime_display__10TObjPlayerFPv(void* a0);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, int);

    extern const float lbl_805DA67C;
    extern const float lbl_805DA6B4;
void init_slime_display__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x398) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a4) = lbl_805DA6B4; set_display_mode__15TObjEneSlimeOneFPvi(a0, 0); TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); }

}
