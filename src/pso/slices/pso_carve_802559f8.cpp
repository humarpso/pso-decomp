#include "types.h"

extern "C" {

int TWindowHelpItem__sub_80255440(void*);
int fn_8026C7C0(void*);
void TWindowSubMag__sub_802559F8(void* p);

void TWindowSubMag__sub_802559F8(void* p) { if (fn_8026C7C0(*(void**)((char*)p + 0x64)) != 0) { TWindowHelpItem__sub_80255440(p); } }

}
