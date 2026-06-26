#include "types.h"

extern "C" {

int fn_8025CD10(void*);
int fn_8026119C(void*);
void TWindowKeyBoardSoft__sub_80261440(void* p);

void TWindowKeyBoardSoft__sub_80261440(void* p) { if (*(unsigned int*)((char*)p + 0x6c) != 0) { fn_8025CD10(*(void**)((char*)p + 0x6c)); fn_8026119C(p); } }

}
