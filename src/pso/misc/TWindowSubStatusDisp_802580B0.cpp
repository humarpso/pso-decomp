#include "types.h"

extern "C" {

void* reset_entry__20TWindowSubStatusDispFPv(void* a0);
int TWindowSubStatusDisp__sub_80256BDC(void);

    extern unsigned char lbl_804CF998[];
    extern const float lbl_805DCEF8;
void* reset_entry__20TWindowSubStatusDispFPv(void* a0) { TWindowSubStatusDisp__sub_80256BDC(); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF998; *(float*)((char*)a0 + 0x8) = lbl_805DCEF8; *(float*)((char*)a0 + 0xc) = lbl_805DCEF8; *(float*)((char*)a0 + 0x10) = lbl_805DCEF8; *(float*)((char*)a0 + 0x14) = lbl_805DCEF8; return a0; }

}
