#include "types.h"

extern "C" {

void* TBoss2Mine__sub_80037CE4(void* a0, int a1, int a2, int a3);
void* TBoss2Mine__ct(void* a0, int a1, int a2, int a3, int a4);

    extern unsigned char lbl_80482D04[];
    extern const float TBoss2Mine__data_805D84D4;
void* TBoss2Mine__sub_80037CE4(void* a0, int a1, int a2, int a3) { TBoss2Mine__ct(a0, a1, a2, a3, 1); *(int*)((char*)a0 + 0x18) = (int)lbl_80482D04; *(int*)((char*)a0 + 0x3f0) = 0; *(int*)((char*)a0 + 0x3f4) = 0; *(float*)((char*)a0 + 0x3f8) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x3fc) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x400) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x404) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x408) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x40c) = TBoss2Mine__data_805D84D4; return a0; }

}
