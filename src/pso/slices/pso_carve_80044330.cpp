#include "types.h"

extern "C" {

int fn_800443BC(void*);
void fn_80044330(void* p);

void fn_80044330(void* p) { *(s32*)((char*)p + 0x0) = 0; }
int fn_8004433C(void) { return 0; }
void* fn_8004438C(void* p) { fn_800443BC(p); return p; }

}
