#include "types.h"

extern "C" {

void fn_80186AB8(void);
void fn_80186AE4(void* p);

void fn_80186AB8(void) {  }
int fn_80186ABC(void) { return 0; }
void fn_80186AE4(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
