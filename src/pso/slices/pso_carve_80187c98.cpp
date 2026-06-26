#include "types.h"

extern "C" {

void fn_80187C98(void* p);
int fn_801E4570(void*);
int fn_80187CCC(void*);
void fn_80187D08(void* p);

void fn_80187C98(void* p) { fn_80187CCC(p); fn_801E4570(p); }
int fn_80187CCC(void*) { return 0; }
void fn_80187D08(void* p) { *(u8*)((char*)p + 0x0) = 106; *(u8*)((char*)p + 0x1) = 2; }

}
