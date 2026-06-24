#include "types.h"

extern "C" {

void fn_8012BDA8(void* p);
void fn_8012BDB4(void* p);

void fn_8012BDA8(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }
void fn_8012BDB4(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }

}
