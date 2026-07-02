#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F092C(void* a0);
void TBoss7Tentacle__sub_802F0988(void* a0);
int TBoss7Tentacle__sub_802F0A5C(void);

    extern const float lbl_805DEC00;
    extern const float lbl_805DEC04;
    extern const float lbl_805DEC48;
void TBoss7Tentacle__sub_802F092C(void* a0) { *(int*)((char*)a0 + 0x13c) = 0; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x38) = 0; TBoss7Tentacle__sub_802F0A5C(); *(float*)((char*)a0 + 0x158) = lbl_805DEC48; *(int*)((char*)a0 + 0x164) = 0; *(float*)((char*)a0 + 0x15c) = lbl_805DEC04; *(float*)((char*)a0 + 0x160) = lbl_805DEC00; }

    extern int lbl_8047407C[];
void TBoss7Tentacle__sub_802F0988(void* a0) { *(int*)((char*)a0 + 0x13c) = lbl_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 16384; *(int*)((char*)a0 + 0x38) = 0; }

}
