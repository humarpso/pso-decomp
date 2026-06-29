#include "types.h"

extern "C" {

int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FFC(void*);
void TWindowDD__sub_80341EB8(void* p);

void TWindowDD__sub_80341EB8(void* p) { TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); *(int*)((char*)p + 0x8c) = 1; }

}
