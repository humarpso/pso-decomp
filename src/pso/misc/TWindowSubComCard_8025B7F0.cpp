#include "types.h"

extern "C" {

void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804CFA58[];
    extern const float lbl_805DD02C;
void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CFA58; *(float*)((char*)a0 + 0x14) = lbl_805DD02C; *(int*)((char*)a0 + 0x24) = -1; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
