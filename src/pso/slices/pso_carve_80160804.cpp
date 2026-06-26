#include "types.h"

extern "C" {

int fn_80156B18(void*);
int fn_801E4570(void*);
void fn_80160804(void* p);

void fn_80160804(void* p) { fn_80156B18(p); fn_801E4570(p); }

}
