#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_800EFE30(void*);
void fn_800EDC90(void* p);

void fn_800EDC90(void* p) { if (fn_800BB858(p) != 0) { fn_800EFE30(p); } }

}
