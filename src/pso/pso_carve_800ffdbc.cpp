#include "types.h"

extern "C" {

int fn_800FFE04(void);
int fn_800FFE14(void);
int fn_800FFE4C(void* p);
int fn_80102BEC(void*, int);

int fn_800FFDBC(void) { return 0; }
int fn_800FFE04(void) { return 0; }
int fn_800FFE0C(void) { return 0; }
int fn_800FFE10(void) { return 0; }
int fn_800FFE14(void) { return 0; }
int fn_800FFE1C(void) { return 0; }
int fn_800FFE4C(void* p) { return fn_80102BEC(p, 1024); }
int fn_800FFE70(void) { return 0; }

}
