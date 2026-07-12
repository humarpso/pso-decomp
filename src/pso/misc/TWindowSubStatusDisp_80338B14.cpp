#include "types.h"

extern "C" {

void* init_state__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2);
int reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804EF440[];
    extern const float lbl_805DF9CC;
void* init_state__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804EF440; *(float*)((char*)a0 + 0x14) = lbl_805DF9CC; *(unsigned char*)((char*)a0 + 0x1c) = 51; *(signed char*)((char*)a0 + 0x1d) = -1; *(signed char*)((char*)a0 + 0x1e) = -1; *(signed char*)((char*)a0 + 0x1f) = -1; *(signed char*)((char*)a0 + 0x20) = -1; *(signed char*)((char*)a0 + 0x21) = -1; *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
