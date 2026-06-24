#include "types.h"

extern "C" {

int fn_80208FFC(void* p);
int fn_80208E30(void*);

int fn_80208F7C(void) { return 0; }
int fn_80208FFC(void* p) { return fn_80208E30(p); }

}
