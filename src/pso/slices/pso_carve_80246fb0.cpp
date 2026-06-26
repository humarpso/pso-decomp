#include "types.h"

extern "C" {

void fn_80246FF0(void* p);
int fn_80247D2C(void*);

int fn_80246FB0(void) { return 0; }
void fn_80246FF0(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_80247D2C(m); }
int fn_8024701C(void) { return 0; }
int fn_80247080(void) { return 0; }
int fn_80247128(void) { return 0; }
int fn_802471AC(void) { return 0; }

}
