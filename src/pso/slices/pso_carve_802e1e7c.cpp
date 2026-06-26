#include "types.h"

extern "C" {

int fn_802E1F8C(void* p);
int fn_802E1BF4(void*);

int fn_802E1E7C(void) { return 0; }
int fn_802E1F14(void) { return 0; }
int fn_802E1F3C(void) { return 0; }
int fn_802E1F8C(void* p) { return fn_802E1BF4(p); }
int fn_802E1FAC(void) { return 0; }

}
