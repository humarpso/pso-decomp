#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_8033471C(void*);
void fn_80332558(void* p);

void fn_80332558(void* p) { if (fn_800BB858(p) != 0) { fn_8033471C(p); } }

}
