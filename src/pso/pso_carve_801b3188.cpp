#include "types.h"

extern "C" {

int fn_801B3188(void* p);
int fn_801B31AC(void* p);
void fn_801B31D4(void);
int fn_8001BEF8(void*, int);
int fn_801BE74C(void*, int);

int fn_801B3188(void* p) { return fn_801BE74C(p, 1); }
int fn_801B31AC(void* p) { return fn_8001BEF8((char*)p + 0x858, 2); }
void fn_801B31D4(void) {  }

}
