#include "types.h"

extern "C" {

void* TObjLight__sub_80133568(void* a0, int a1);
void TObjLight__sub_801335EC(void);
int fn_801334E4(void*);
int fn_80133544(void*);
int fn_80133548(void);

    extern int lbl_804A6F28[];
    extern const float TObjLight__data_805DB088;
    extern const float lbl_805DB08C;
    extern const float lbl_805DB090;
    extern const float lbl_805DB094;
void* TObjLight__sub_80133568(void* a0, int a1) { *(int*)((char*)a0 + 0x0) = lbl_804A6F28[a1]; *(float*)((char*)a0 + 0x10) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0xc) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0x8) = TObjLight__data_805DB088; fn_80133548(); *(float*)((char*)a0 + 0x14) = lbl_805DB08C; *(float*)((char*)a0 + 0x18) = lbl_805DB090; fn_80133544(a0); *(float*)((char*)a0 + 0x20) = lbl_805DB094; *(float*)((char*)a0 + 0x24) = lbl_805DB094; *(float*)((char*)a0 + 0x28) = lbl_805DB094; fn_801334E4(a0); return a0; }

void TObjLight__sub_801335EC(void) {  }

}
