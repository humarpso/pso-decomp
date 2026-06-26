#include "types.h"

extern "C" {

int fn_802A2058(void);
int fn_802A200C(void*);

int fn_802A2058(void) { return fn_802A200C((void*)(0)); }

}
