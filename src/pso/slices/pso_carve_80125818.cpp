#include "types.h"

extern "C" {

void fn_80125818(void* p);
void fn_8012583C(void* p);

void fn_80125818(void* p) { *(s32*)((char*)p + 0x234) = 60; }
int fn_80125824(void) { return 0; }
void fn_8012583C(void* p) { *(s32*)((char*)p + 0x234) = 0; }

}
