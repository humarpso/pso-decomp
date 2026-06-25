#include "types.h"

extern "C" {

int fn_80102C4C(void*);
int fn_80108164(void);
int obj_getField1c(void*);
void fn_80117B58(void* p);

void fn_80117B58(void* p) { if (fn_80102C4C(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); fn_80108164(); } }

}
