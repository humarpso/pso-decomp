#include "types.h"

extern "C" {

int fn_8022675C(void*, void*, void*, void*);
int fn_80348304(void* p);
int fn_80340508(void*, int);

void TWindowDD__sub_80348214(void) { fn_8022675C((void*)344320, (void*)0, (void*)0, (void*)0); }
void fn_80348248(void) { fn_8022675C((void*)339734, (void*)0, (void*)0, (void*)0); }
void fn_8034827C(void) { fn_8022675C((void*)339201, (void*)0, (void*)0, (void*)0); }
int fn_803482B0(void) { return 0; }
int fn_80348304(void* p) { return fn_80340508((char*)p + 0x1c, 4); }

}
