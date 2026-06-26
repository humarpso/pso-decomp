#include "types.h"

extern "C" {

void fn_80115D68(void);
u8 fn_80115D7C(void* p);

void fn_80115D68(void) {  }
int fn_80115D6C(void) { return 0; }
u8 fn_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }
int fn_80115D84(void) { return 0; }

}
