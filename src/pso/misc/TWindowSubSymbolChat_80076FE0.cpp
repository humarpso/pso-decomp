#include "types.h"

extern "C" {

int TWindowSubSymbolChat__sub_80077718(void*);
void TWindowSubSymbolChat__sub_80077310(void* p);
void TWindowSubSymbolChat__sub_80077334(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

}
