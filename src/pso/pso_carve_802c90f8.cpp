#include "types.h"

extern "C" {

int fn_802C90F8(void* p);
int memset(void*, int, int);

int fn_802C90F8(void* p) { return memset((char*)p + 0xd8, 0, 16); }
int fn_802C9124(void) { return 0; }
int fn_802C9174(void) { return 0; }

}
