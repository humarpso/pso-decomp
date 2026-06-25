#include "types.h"

extern "C" {

int fn_801E4570(void*);
int fn_80357250(void* p);
void fn_80357270(void* p);
int fn_8001960C(void*);

void fn_8035721C(void* p) { fn_80357250(p); fn_801E4570(p); }
int fn_80357250(void* p) { return fn_8001960C(p); }
void fn_80357270(void* p) { *(u8*)((char*)p + 0x0) = 173; *(u8*)((char*)p + 0x1) = 17; }
int fn_80357284(void) { return 0; }

}
