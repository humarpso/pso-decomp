#include "types.h"

extern "C" {

int fn_80020898(void*, void*);
int fn_80072048(void*, void*);
int fn_801BC6C4(void*);
int fn_801BEAFC(void*, void*);
int fn_801BEB04(void*, void*);
int fn_801BEB54(void*, void*);
int fn_801BEEAC(void*, void*);
int fn_801BEEE0(void*, void*);
int fn_801BEEEC(void*, void*);
int fn_801BEF30(void*, void*);
void fn_801BC508(void* p, void* a1);
void TObjPlayer__sub_801BC504(void);

int fn_801BC404(void) { return 0; }
void TObjPlayer__sub_801BC504(void) {  }
void fn_801BC508(void* p, void* a1) { fn_801BC6C4(p); *(short*)((char*)p + 0x1c) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2e) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x30) = *(void**)((char*)a1 + 0x4); fn_80020898((char*)p + 0x5c, (char*)a1 + 0x14); *(short*)((char*)p + 0x326) = *(short*)((char*)a1 + 0x20); *(short*)((char*)p + 0x32c) = *(short*)((char*)a1 + 0x22); fn_80072048((char*)p + 0xdac, (char*)a1 + 0x68); fn_801BEF30((char*)p + 0x828, (char*)a1 + 0x70); fn_801BEEEC((char*)p + 0x830, (char*)a1 + 0x78); fn_801BEEE0((char*)p + 0x858, (char*)a1 + 0x94); fn_801BEEAC((char*)p + 0x730, (char*)a1 + 0x98); fn_801BEB04(p, *(void**)((char*)a1 + 0xac)); fn_801BEAFC(p, *(void**)((char*)a1 + 0x488)); *(void**)((char*)p + 0x334) = *(void**)((char*)a1 + 0xb0); fn_801BEB54(p, *(void**)((char*)a1 + 0x64)); }

}
