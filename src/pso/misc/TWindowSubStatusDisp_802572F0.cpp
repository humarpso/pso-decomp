#include "types.h"

extern "C" {

void* TWindowSubStatusDisp__sub_802572F0(void* a0, void* a1, int a2);
int TWindowSubStatusDisp__sub_80256BDC(void*, int);

    extern unsigned char lbl_804CF930[];
    extern const float lbl_805DCE58;
void* TWindowSubStatusDisp__sub_802572F0(void* a0, void* a1, int a2) { TWindowSubStatusDisp__sub_80256BDC(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF930; *(float*)((char*)a0 + 0x1c) = lbl_805DCE58; *(float*)((char*)a0 + 0xc) = *(float*)((char*)a1 + 0x4); *(float*)((char*)a0 + 0x10) = *(float*)((char*)a1 + 0x8); *(float*)((char*)a0 + 0x8) = *(float*)((char*)a1 + 0xc); *(float*)((char*)a0 + 0x14) = *(float*)((char*)a1 + 0x18); *(int*)((char*)a0 + 0x18) = *(int*)((char*)a1 + 0x10); *(short*)((char*)a0 + 0x0) = *(int*)((char*)a1 + 0x14); *(float*)((char*)a0 + 0x20) = *(float*)((char*)a1 + 0x1c); *(float*)((char*)a0 + 0x24) = *(float*)((char*)a1 + 0x20); return a0; }

}
