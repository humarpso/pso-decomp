#include "types.h"

extern "C" {

int fn_80100D10(void* p);
void fn_80100D94(void* p, u8 v);
void fn_80100D9C(void* p, u8 v);

int fn_80100CC8(void) { return 0; }
int fn_80100D10(void* p) { return *(u16*)((char*)p + 0x4) & 0x400; }
int fn_80100D1C(void) { return 0; }
int fn_80100D68(void) { return 0; }
void fn_80100D94(void* p, u8 v) { *(u8*)((char*)p + 0xee) = v; }
void fn_80100D9C(void* p, u8 v) { *(u8*)((char*)p + 0xed) = v; }
int fn_80100DA4(void) { return 0; }

}
