#include "types.h"

extern "C" {

s32 fn_800B8AF8(void* p);
void* fn_800B8B00(void* p);

s32 fn_800B8AF8(void* p) { return *(s32*)((char*)p + 0x3dc); }
void* fn_800B8B00(void* p) { return (char*)p + 0x3e8; }
int fn_800B8B08(void) { return 0; }

}
