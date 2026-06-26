#include "types.h"

extern "C" {

void fn_80186AB8(void);
void fn_80186ABC(void);
void fn_80186AE4(void* p);
int fn_80186634(void);
int fn_801868A8(int);

void fn_80186AB8(void) {  }
void fn_80186ABC(void) { fn_80186634(); fn_801868A8(0); }
void fn_80186AE4(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
