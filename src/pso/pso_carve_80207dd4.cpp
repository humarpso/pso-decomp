#include "types.h"

extern "C" {

int fn_80207E24(void* p);
int fn_80207E48(void* p);
int fn_80207E68(void* p);
int fn_802077CC(void*);
int fn_8020780C(void*);
int fn_802078A4(void*);

int fn_80207DD4(void) { return 0; }
int fn_80207E24(void* p) { return fn_8020780C(p); }
int fn_80207E44(void) { return 0; }
int fn_80207E48(void* p) { return fn_802078A4(p); }
int fn_80207E68(void* p) { return fn_802077CC(p); }

}
