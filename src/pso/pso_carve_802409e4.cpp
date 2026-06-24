#include "types.h"

extern "C" {

void fn_802409E4(void* p);

void fn_802409E4(void* p) { *(s16*)((char*)p + 0x92) = 5; }
int fn_802409F0(void) { return 0; }
int fn_80240A50(void) { return 0; }
int fn_80240B40(void) { return 0; }

}
