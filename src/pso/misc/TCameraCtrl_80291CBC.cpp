#include "types.h"

extern "C" {

void* TCameraCtrl__sub_80291CBC(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_804DAB08[];
    extern int lbl_805D6570;
    extern const float lbl_805DD974;
    extern const float lbl_805DD9C4;
    extern const float lbl_805DD9C8;
void* TCameraCtrl__sub_80291CBC(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_804DAB08; *(int*)((char*)a0 + 0x38) = 0; *(float*)((char*)a0 + 0x48) = lbl_805DD974; *(float*)((char*)a0 + 0x4c) = lbl_805DD9C4; *(float*)((char*)a0 + 0x50) = lbl_805DD974; *(float*)((char*)a0 + 0x6c) = lbl_805DD9C8; *(int*)((char*)a0 + 0x74) = 0; *(int*)((char*)a0 + 0x70) = 0; *(int*)((char*)a0 + 0x78) = 2; *(int*)((char*)a0 + 0x7c) = 0; *(float*)((char*)a0 + 0x88) = lbl_805DD974; *(float*)((char*)a0 + 0x8c) = lbl_805DD974; lbl_805D6570 = 0; *(int*)((char*)a0 + 0x54) = 17294; return a0; }

}
