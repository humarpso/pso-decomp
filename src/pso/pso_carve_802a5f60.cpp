#include "types.h"

extern "C" {

int fn_802A6044(void);
void fn_802A604C(void* p, s32 v);
s32 fn_802A6054(void* p);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
int fn_802A6080(void);

int fn_802A5F60(void) { return 0; }
int fn_802A5F94(void) { return 0; }
int fn_802A6044(void) { return 32; }
void fn_802A604C(void* p, s32 v) { *(s32*)((char*)p + 0x18) = v; }
s32 fn_802A6054(void* p) { return *(s32*)((char*)p + 0xc); }
int fn_802A605C(void) { return 0; }
void fn_802A6070(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_802A6078(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int fn_802A6080(void) { return 8; }
int TObjSuisoChip__vt6(void) { return 0; }
int fn_802A60A8(void) { return 0; }
int fn_802A60CC(void) { return 0; }

}
