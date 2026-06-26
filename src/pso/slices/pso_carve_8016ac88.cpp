#include "types.h"

extern "C" {

int fn_8016AD3C(void* a0 = 0);
void* fn_8016ACFC(void* p);
int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int fn_801E4570(void*);
void fn_8016AC88(void);
void fn_8016AC8C(void);
void fn_8016AC90(void);
void fn_8016AD58(void* p);
void TOKeyAncient01__vt23(void);

void fn_8016AC88(void) {  }
void fn_8016AC8C(void) {  }
void fn_8016AC90(void) {  }
void fn_8016AC94(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x8); }
void fn_8016ACC8(void* p) { fn_8016AC94(p); fn_801E4570(p); }
void* fn_8016ACFC(void* p) { fn_8016AD3C(p); *(unsigned char*)(p) = 5; *(unsigned char*)((char*)p + 0x1) = 3; return p; }
int fn_8016AD3C(void*) { return 0; }
void fn_8016AD58(void* p) { *(s32*)((char*)p + 0x0) = 3; }
void TOKeyAncient01__vt23(void) {  }

}
