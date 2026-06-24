#include "types.h"

extern "C" {

int fn_8026042C(void* p);
int fn_80260438(void* p);
int fn_80260444(void* p);

int fn_8026038C(void) { return 0; }
int fn_802603B4(void) { return 0; }
int fn_802603DC(void) { return 0; }
int fn_80260404(void) { return 0; }
int fn_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int fn_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int fn_80260444(void* p) { return *(u32*)((char*)p + 0x60) & 0x200; }

}
