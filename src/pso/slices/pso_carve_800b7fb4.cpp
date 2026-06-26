#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_800B7FB8(void* p);
void fn_800B7FB4(void);
void fn_800B8020(void);

void fn_800B7FB4(void) {  }
void fn_800B7FB8(void* p) { if (*(short*)((char*)p + 0x326) != 15) { fn_800BBA18(p, (void*)15); } }
int fn_800B7FE8(void) { return 0; }
void fn_800B8020(void) {  }

}
