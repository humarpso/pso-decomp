#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_800F4758(void*);
int fn_800F4DE8(void*);
void fn_800F1C90(void* p);

void fn_800F1C90(void* p) { if (fn_800BB858(p) != 0) { fn_800F4DE8(p); fn_800F4758(p); } }

}
