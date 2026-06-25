#include "types.h"

extern "C" {

int memset(void*, void*, void*);
int fn_802A5B74(void* a0 = 0, void* a1 = 0);
int fn_802A5BFC(void* a0 = 0, void* a1 = 0);
void fn_802A5B2C(void* p);
void fn_802A5B50(void* p);
void fn_802A5BB4(void* p);
void fn_802A5BD8(void* p);
void fn_802A5E84(void* p);
void fn_802A5CB8(void* p);

void fn_802A5B2C(void* p) { fn_802A5B74(p, (char*)p + 0x4); }
void fn_802A5B50(void* p) { fn_802A5B74(p, p); }
int fn_802A5B74(void*, void*) { return 0; }
void fn_802A5BB4(void* p) { fn_802A5BFC(p, (char*)p + 0x14); }
void fn_802A5BD8(void* p) { fn_802A5BFC(p, (char*)p + 0x10); }
int fn_802A5BFC(void*, void*) { return 0; }
int fn_802A5C3C(void) { return 0; }
int fn_802A5C7C(void) { return 0; }
void fn_802A5CB8(void* p) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)p + 0x8); }
int fn_802A5CC4(void) { return 0; }
int fn_802A5D28(void) { return 0; }
int fn_802A5D68(void) { return 0; }
int fn_802A5DC0(void) { return 0; }
int fn_802A5E28(void) { return 0; }
void fn_802A5E84(void* p) { *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; memset((char*)p + 0x1c, (void*)0, (void*)32); *(int*)((char*)p + 0x8) = 0; *(int*)((char*)p + 0xc) = 0; *(int*)((char*)p + 0x14) = 0; *(int*)((char*)p + 0x18) = 0; }

}
