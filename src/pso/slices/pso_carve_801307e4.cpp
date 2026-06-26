#include "types.h"

extern "C" {

int fn_801207E8(void*, void*, void*);
int fn_80120908(void*);
int fn_80120BBC(void*, void*);
void fn_801307E4(void* p);

void fn_801307E4(void* p) { fn_80120908(p); fn_801207E8(p, (void*)3, (char*)p + 0x208); fn_801207E8(p, (void*)1, (char*)p + 0x220); fn_80120BBC(p, (void*)35); fn_801207E8(p, (void*)3, (char*)p + 0x214); fn_801207E8(p, (void*)1, (char*)p + 0x22c); }

}
