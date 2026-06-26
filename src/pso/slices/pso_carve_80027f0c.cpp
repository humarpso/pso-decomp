#include "types.h"

extern "C" {

int fn_80027F0C(void* p);
int fn_80027F30(void* p);
int fn_80027F54(void*, int);

int fn_80027F0C(void* p) { return fn_80027F54(p, 1); }
int fn_80027F30(void* p) { return fn_80027F54(p, 0); }

}
