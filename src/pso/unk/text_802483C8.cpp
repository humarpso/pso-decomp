#include "types.h"

extern "C" {

int fn_802483C8(void* p);
int fn_80248374(void*);

int fn_802483C8(void* p) { return fn_80248374(*(void**)((char*)p + 0x0)); }

}
