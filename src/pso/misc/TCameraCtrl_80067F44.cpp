#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067F44(void* a0);
int TCameraCtrl__sub_80067E30(void*);
int TCameraCtrl__sub_80067EE0(void);

    extern const float lbl_805D8F7C;
void TCameraCtrl__sub_80067F44(void* a0) { *(float*)((char*)a0 + 0x70) = lbl_805D8F7C; *(int*)((char*)a0 + 0x2c) = 0; *(int*)((char*)a0 + 0x34) = 0; TCameraCtrl__sub_80067EE0(); TCameraCtrl__sub_80067E30(a0); }

}
