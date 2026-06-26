#include "types.h"

extern "C" {

int fn_802FB7E0(void* p);
int fn_802FB804(void* p);
int fn_802FB828(void*, int);

int fn_802FB7E0(void* p) { return fn_802FB828(p, 1); }
int fn_802FB804(void* p) { return fn_802FB828(p, 0); }

}
