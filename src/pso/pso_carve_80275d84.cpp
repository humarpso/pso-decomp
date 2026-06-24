#include "types.h"

extern "C" {

int fn_80275D84(void* p);
int fn_80275D90(void* p);
int fn_80275D9C(void* p);
int fn_80275DA8(void* p);

int fn_80275D84(void* p) { return *(u8*)((char*)p + 0x73) & 0x1; }
int fn_80275D90(void* p) { return *(u8*)((char*)p + 0x73) & 0x2; }
int fn_80275D9C(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int fn_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }
int fn_80275DB4(void) { return 0; }

}
