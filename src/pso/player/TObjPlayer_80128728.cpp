#include "types.h"

extern "C" {

void TObjPlayer__sub_80128728(void* p);
void TObjPlayer__sub_80128764(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TObjPlayer__sub_80121200(void*);

void TObjPlayer__sub_80128728(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1fc); } }

    extern const float lbl_805DADF0;
void TObjPlayer__sub_80128764(void* a0) { *(float*)((char*)a0 + 0x200) = lbl_805DADF0; }

}
