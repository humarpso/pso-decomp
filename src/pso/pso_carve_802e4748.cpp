#include "types.h"

extern "C" {

int fn_802E4778(void* p);
int fn_802E456C(void*);

int fn_802E4748(void) { return 0; }
int fn_802E4778(void* p) { return fn_802E456C(p); }

}
