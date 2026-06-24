#include "types.h"

extern "C" {

int fn_8021A010(void*);
int fn_8021A05C(void*);
void fn_8021A360(void* p);

void fn_8021A360(void* p) { fn_8021A010(p); fn_8021A05C(p); }

}
