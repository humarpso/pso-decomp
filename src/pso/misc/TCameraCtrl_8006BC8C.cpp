#include "types.h"

extern "C" {

void* TCameraCtrl__sub_8006BC8C(void* a0);
int fn_80068714(void);

    extern unsigned char lbl_80488B38[];
    extern const float lbl_805D900C;
void* TCameraCtrl__sub_8006BC8C(void* a0) { fn_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = lbl_805D900C; *(int*)((char*)a0 + 0x38) = 0; return a0; }

}
