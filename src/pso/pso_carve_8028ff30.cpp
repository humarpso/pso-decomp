#include "types.h"

extern "C" {

int fn_80142F9C(void*);
int fn_8014394C(void*);
void fn_8028FF30(void* p);

void fn_8028FF30(void* p) { fn_8014394C(p); fn_80142F9C(p); }

}
