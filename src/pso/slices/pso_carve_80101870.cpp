#include "types.h"

extern "C" {

int fn_80101870(void* p);
int fn_803DB470(void*);

int fn_80101870(void* p) { return fn_803DB470(*(void**)((char*)p + 0xf4)); }

}
