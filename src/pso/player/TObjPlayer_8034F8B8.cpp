#include "types.h"

extern "C" {

void TObjPlayer__sub_8034F8B8(void* p);
void TObjPlayer__sub_8034F900(void* p);
int TObjPlayer__sub_80115BC0(void*, void*, void*);

void TObjPlayer__sub_8034F8B8(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)-8192, (void*)-30947); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)-1820, (void*)-7281); }

void TObjPlayer__sub_8034F900(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)16384, (void*)0); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)3640, (void*)0); }

}
