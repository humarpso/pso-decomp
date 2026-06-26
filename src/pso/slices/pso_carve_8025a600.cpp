#include "types.h"

extern "C" {

int fn_8025A600(void* p);

int fn_8025A600(void* p) { return *(u16*)((char*)p + 0x0) & 0x20; }

}
