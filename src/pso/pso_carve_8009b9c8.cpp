#include "types.h"

extern "C" {

int fn_8009ED04(void*);
int fn_800BB858(void*);
void fn_8009B9C8(void* p);

void fn_8009B9C8(void* p) { if (fn_800BB858(p) != 0) { fn_8009ED04(p); } }

}
