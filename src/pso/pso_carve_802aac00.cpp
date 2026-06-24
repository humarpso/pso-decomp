#include "types.h"

extern "C" {

void fn_802AAC98(void* p);
int fn_802AACEC(void);

int fn_802AAC00(void) { return 0; }
int fn_802AAC74(void) { return 0; }
void fn_802AAC98(void* p) { *(s32*)((char*)p + 0x3c8) = 1; }
int fn_802AACA4(void) { return 0; }
int fn_802AACEC(void) { return 0; }

}
