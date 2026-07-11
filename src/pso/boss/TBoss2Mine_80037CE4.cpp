#include "types.h"

extern "C" {

void* TBoss2Mine__sub_80037CE4(void* a0, int a1, int a2, int a3);
void* TBoss2Mine__ct(void* a0, int a1, int a2, int a3, int a4);

    extern unsigned char lbl_80482D04[];
    extern const float lbl_805D84D4;
void* TBoss2Mine__sub_80037CE4(void* a0, int a1, int a2, int a3) { TBoss2Mine__ct(a0, a1, a2, a3, 1); *(int*)((char*)a0 + 0x18) = (int)lbl_80482D04; *(int*)((char*)a0 + 0x3f0) = 0; *(int*)((char*)a0 + 0x3f4) = 0; *(float*)((char*)a0 + 0x3f8) = lbl_805D84D4; *(float*)((char*)a0 + 0x3fc) = lbl_805D84D4; *(float*)((char*)a0 + 0x400) = lbl_805D84D4; *(float*)((char*)a0 + 0x404) = lbl_805D84D4; *(float*)((char*)a0 + 0x408) = lbl_805D84D4; *(float*)((char*)a0 + 0x40c) = lbl_805D84D4; return a0; }

}
