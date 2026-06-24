#include "types.h"

extern "C" {

int fn_802FE714(void* p);
int fn_8002B094(void*);

int fn_802FE6C4(void) { return 0; }
int fn_802FE6EC(void) { return 0; }
int fn_802FE714(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
