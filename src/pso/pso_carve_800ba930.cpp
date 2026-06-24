#include "types.h"

extern "C" {

void fn_800BAB8C(void* p);
void fn_800BAB98(void* p);

int fn_800BA930(void) { return 0; }
int fn_800BA934(void) { return 0; }
int fn_800BA9BC(void) { return 0; }
int fn_800BAA2C(void) { return 0; }
int fn_800BAAE4(void) { return 0; }
int fn_800BAB58(void) { return 0; }
void fn_800BAB8C(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void fn_800BAB98(void* p) { *(s32*)((char*)p + 0x388) = 1; }
int fn_800BABA4(void) { return 0; }

}
