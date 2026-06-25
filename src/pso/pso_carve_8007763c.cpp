#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_801E45D0(void*);
int fn_80077680(void* a0 = 0);
void fn_80077644(void* p);
void fn_800776D0(void* p);
void* fn_8007763C(void* p);
void fn_80077704(void* p);

void* fn_8007763C(void* p) { return (char*)p + 0x1c; }
void fn_80077644(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); fn_80077680((char*)p + 0x8); }
int fn_80077680(void*) { return 0; }
void fn_800776D0(void* p) { fn_80077644(p); fn_801E45D0(p); }
void fn_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

}
