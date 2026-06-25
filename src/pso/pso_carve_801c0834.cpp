#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_80102CE0(void*);
int fn_801BEE34(void*);
int fn_801C01BC(void*);
int fn_801C0768(void*);
int fn_801E4570(void*);
void fn_801C089C(void* p);
void fn_801C08E4(void* p);
void fn_801C0970(void* p);
void fn_801C09B8(void* p);
void fn_801C0A34(void* p);
void fn_801C0A48(void* p);
void fn_801C0A90(void* p);

void fn_801C0834(void* p) { fn_801C0768(p); fn_801E4570(p); }
void fn_801C0868(void* p) { fn_8001960C(p); fn_801BEE34((char*)p + 0x4); }
void fn_801C089C(void* p) { *(u8*)((char*)p + 0x0) = 13; *(u8*)((char*)p + 0x1) = 3; }
void fn_801C08B0(void* p) { fn_801C0868(p); fn_801E4570(p); }
void fn_801C08E4(void* p) { *(u8*)((char*)p + 0x0) = 14; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C08F8(void* p) { fn_8001960C(p); fn_801BEE34((char*)p + 0x4); }
int fn_801C092C(void) { return 0; }
void fn_801C0970(void* p) { *(u8*)((char*)p + 0x0) = 12; *(u8*)((char*)p + 0x1) = 3; }
void fn_801C0984(void* p) { fn_801C08F8(p); fn_801E4570(p); }
void fn_801C09B8(void* p) { *(u8*)((char*)p + 0x0) = 161; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C09CC(void* p) { fn_801C01BC(p); fn_801E4570(p); }
void fn_801C0A00(void* p) { fn_801C01BC(p); fn_801E4570(p); }
void fn_801C0A34(void* p) { *(u8*)((char*)p + 0x0) = 50; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C0A48(void* p) { *(u8*)((char*)p + 0x0) = 49; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C0A5C(void* p) { fn_801C01BC(p); fn_801E4570(p); }
void fn_801C0A90(void* p) { *(u8*)((char*)p + 0x0) = 45; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C0AA4(void* p) { fn_801C01BC(p); fn_801E4570(p); }
void fn_801C0AD8(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x10); fn_80102CE0((char*)p + 0x8); }

}
