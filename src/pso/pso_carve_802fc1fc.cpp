#include "types.h"

extern "C" {

void fn_802FC1FC(void* p);
void fn_802FC208(void* p);
void fn_802FC214(void* p);

void fn_802FC1FC(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void fn_802FC208(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void fn_802FC214(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
