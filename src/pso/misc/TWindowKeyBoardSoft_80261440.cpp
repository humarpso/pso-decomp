#include "types.h"

extern "C" {

void close__19TWindowKeyBoardSoftFPv(void* p);
int fn_8025CD10(void*);
int TWindowKeyBoardSoft__sub_8026119C(void*);

void close__19TWindowKeyBoardSoftFPv(void* p) { if (*(unsigned int*)((char*)p + 0x6c) != 0) { fn_8025CD10(*(void**)((char*)p + 0x6c)); TWindowKeyBoardSoft__sub_8026119C(p); } }

}
