#include "types.h"

extern "C" {

void fn_802FE6C4(void* p);
void fn_802FE6EC(void* p);
int fn_802FE714(void* p);
int fn_8002B094(void*);

void fn_802FE6C4(void* p) { *(int*)((char*)p + 0xbc) = 1; fn_802FE714(p); }
void fn_802FE6EC(void* p) { *(int*)((char*)p + 0xbc) = 0; fn_802FE714(p); }
int fn_802FE714(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
