#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_800D11FC(void* p);
void fn_800D11F8(void);
void fn_800D1264(void);

void fn_800D11F8(void) {  }
void fn_800D11FC(void* p) { if (*(short*)((char*)p + 0x326) != 16) { fn_800BBA18(p, (void*)16); } }
int fn_800D122C(void) { return 0; }
void fn_800D1264(void) {  }

}
