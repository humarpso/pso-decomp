#include "types.h"

extern "C" {

int fn_80100B8C(void* p);
int fn_80100A40(void*);

int fn_80100B8C(void* p) { return fn_80100A40((char*)p + 0x38); }

}
