#include "types.h"

extern "C" {

s8 fn_80107AE0(void* p);
int fn_80107B04(void);
int fn_801D6DDC(void*);

int fn_80107A68(void) { return 0; }
s8 fn_80107AE0(void* p) { return (s8)(fn_801D6DDC(p)); }
int fn_80107B04(void) { return 0; }

}
