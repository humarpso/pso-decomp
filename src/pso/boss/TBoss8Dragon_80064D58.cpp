#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80064D58(void* a0);
void TBoss8Dragon__sub_80064D64(void* a0);
void TBoss8Dragon__sub_80064D70(void* a0);
void TBoss8Dragon__sub_80064D7C(void* a0);
void TBoss8Dragon__sub_80064D88(void* p);
void TBoss8Dragon__sub_80064D94(void* p);
void TBoss8Dragon__sub_80064DA0(void* p);
void TBoss8Dragon__sub_80064DAC(void* p);

    extern const float lbl_805D8EC4;
void TBoss8Dragon__sub_80064D58(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }

    extern const float lbl_805D8E20;
void TBoss8Dragon__sub_80064D64(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }

    extern const float lbl_805D8DEC;
void TBoss8Dragon__sub_80064D70(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }

    extern const float lbl_805D8D84;
void TBoss8Dragon__sub_80064D7C(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }

void TBoss8Dragon__sub_80064D88(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
void TBoss8Dragon__sub_80064D94(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
void TBoss8Dragon__sub_80064DA0(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
void TBoss8Dragon__sub_80064DAC(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }

}
