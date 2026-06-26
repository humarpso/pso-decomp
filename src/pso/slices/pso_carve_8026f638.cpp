#include "types.h"

extern "C" {

s16 fn_8026F664(void* p);
s16 fn_8026F69C(void* p);

int fn_8026F638(void) { return 0; }
s16 fn_8026F664(void* p) { return *(s16*)((char*)p + 0x78); }
int fn_8026F66C(void) { return 0; }
s16 fn_8026F69C(void* p) { return *(s16*)((char*)p + 0x7a); }

}
