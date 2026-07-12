#include "types.h"

extern "C" {

void* TWindowSubStatusDisp__sub_802598E4(void* a0, int a1, int a2);
void TWindowSubStatusDisp__sub_802580B0(void*, int);

    extern unsigned char lbl_804CF9B0[];
    extern const float lbl_805DCF14;
void* TWindowSubStatusDisp__sub_802598E4(void* a0, int a1, int a2) { TWindowSubStatusDisp__sub_802580B0(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF9B0; *(float*)((char*)a0 + 0x14) = lbl_805DCF14; *(unsigned char*)((char*)a0 + 0x1c) = 51; *(unsigned char*)((char*)a0 + 0x1d) = 51; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x28) = -1; *(int*)((char*)a0 + 0x2c) = -1; *(int*)((char*)a0 + 0x30) = -1; *(int*)((char*)a0 + 0x34) = -1; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
