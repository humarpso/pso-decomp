#include "types.h"

extern "C" {

void TAdDialingMessageWindow__sub_8036A174(void* a0);
int TAdMcSelectGC__sub_80019DA8(void*, int, float);

    extern const float lbl_805E0360;
void TAdDialingMessageWindow__sub_8036A174(void* a0) { *(int*)((char*)a0 + 0x1c) = (*(int*)((char*)a0 + 0x1c) | 0x1); TAdMcSelectGC__sub_80019DA8((void*)(*(int*)((char*)a0 + 0x28)), 17, lbl_805E0360); }

}
