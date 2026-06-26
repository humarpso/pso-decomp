#include "types.h"

extern "C" {

void fn_80123F70(void* p);
void fn_80123F7C(void* p);

void fn_80123F70(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void fn_80123F7C(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
int fn_80123F88(void) { return 0; }

}
