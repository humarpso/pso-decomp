#include "types.h"

extern "C" {

int fn_802A7B8C(void);
int fn_802A7B94(void);
int fn_802A7B9C(void);
int fn_802A7BA4(void);
void fn_802A7BAC(void);
int fn_802A7BB0(void);
s32 fn_802A7BB8(void* p);
s32 fn_802A7BC0(void* p);
void fn_802A7BC8(void* p);

int fn_802A7B8C(void) { return 0; }
int fn_802A7B94(void) { return 0; }
int fn_802A7B9C(void) { return 0; }
int fn_802A7BA4(void) { return 0; }
void fn_802A7BAC(void) {  }
int fn_802A7BB0(void) { return 0; }
s32 fn_802A7BB8(void* p) { return *(s32*)((char*)p + 0x0); }
s32 fn_802A7BC0(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_802A7BC8(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
