#include "types.h"

extern "C" {

int fn_802AACEC(void*);
int fn_802AC86C(void*, void*);
void fn_802B09F4(void* p);
void fn_802B0A34(void* p);

int fn_802B0984(void) { return 0; }
void fn_802B09F4(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)2); } }
void fn_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
