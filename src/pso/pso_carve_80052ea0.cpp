#include "types.h"

extern "C" {

void fn_80052EE8(void);
void fn_80052EEC(void* p);

int fn_80052EA0(void) { return 0; }
int fn_80052EB4(void) { return 0; }
void fn_80052EE8(void) {  }
void fn_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
