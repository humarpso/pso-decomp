#include "types.h"

extern "C" {

void fn_80348D74(void* p);
void fn_80348D80(void* p, s32 v);
s32 fn_80348D88(void* p);

int fn_80348CC4(void) { return 0; }
int fn_80348CF8(void) { return 0; }
int fn_80348D0C(void) { return 0; }
void fn_80348D74(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void fn_80348D80(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 fn_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }
int fn_80348D90(void) { return 0; }
int fn_80348DAC(void) { return 0; }
int fn_80348DD8(void) { return 0; }
int fn_80348DFC(void) { return 0; }

}
