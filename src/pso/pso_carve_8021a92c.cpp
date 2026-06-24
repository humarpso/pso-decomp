#include "types.h"

extern "C" {

int fn_8021AA08(void* p);
int fn_80073DC4(void*, int);

int fn_8021A92C(void) { return 0; }
int fn_8021AA08(void* p) { return fn_80073DC4(p, 8); }

}
