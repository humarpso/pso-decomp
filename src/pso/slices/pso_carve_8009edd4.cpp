#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_8009EE1C(void* p);
void fn_8009EE18(void);
void fn_8009EE84(void);

int fn_8009EDD4(void) { return 0; }
void fn_8009EE18(void) {  }
void fn_8009EE1C(void* p) { if (*(short*)((char*)p + 0x326) != 12) { fn_800BBA18(p, (void*)12); } }
int fn_8009EE4C(void) { return 0; }
void fn_8009EE84(void) {  }

}
