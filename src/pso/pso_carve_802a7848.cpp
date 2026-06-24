#include "types.h"

extern "C" {

int fn_802A7848(void* p);
int fn_802A7868(void* p);
int fn_802A7238(void*);
int fn_802A7890(void*);

int fn_802A7848(void* p) { return fn_802A7890(p); }
int fn_802A7868(void* p) { return fn_802A7238(p); }

}
