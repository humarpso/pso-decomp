#include "types.h"

extern "C" {

int TObjPlayer__sub_801D4CEC(void* a0, int a1);
void TObjPlayer__sub_801D4D20(void* a0, int a1);
int TObjPlayer__sub_801D53E8(void*);
int TObjPlayer__sub_801D5468(void*);

    extern int lbl_805D5DF4;
    extern int lbl_805D5DF8;
int TObjPlayer__sub_801D4CEC(void* a0, int a1) { lbl_805D5DF8 = a1; lbl_805D5DF4 = 0; TObjPlayer__sub_801D53E8((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

    extern int lbl_805D5DE0;
void TObjPlayer__sub_801D4D20(void* a0, int a1) { lbl_805D5DE0 = a1; TObjPlayer__sub_801D5468((void*)(*(int*)((char*)a0 + 0x1c4))); }

}
