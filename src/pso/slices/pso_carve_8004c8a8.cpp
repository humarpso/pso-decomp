#include "types.h"

extern "C" {

int fn_8004BA70(void*);
int fn_8004F1A4(void*, void*, void*);
void fn_8004C8AC(void* p);
void fn_8004C8A8(void);

void fn_8004C8A8(void) {  }
void fn_8004C8AC(void* p) { fn_8004BA70(p); fn_8004F1A4(p, (char*)p + 0x39c, *(void**)((char*)p + 0x3a8)); *(int*)((char*)p + 0x380) = 142; }

}
