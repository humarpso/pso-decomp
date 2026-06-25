#include "types.h"

extern "C" {

int fn_80095328(void*);
int fn_800BB858(void*);
void fn_80092C90(void* p);

void fn_80092C90(void* p) { if (fn_800BB858(p) != 0) { fn_80095328(p); } }

}
