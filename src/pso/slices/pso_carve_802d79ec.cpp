#include "types.h"

extern "C" {

int fn_802D79EC(void* p);
int fn_802D7A0C(void* p);
int fn_802D73F8(void*);

int fn_802D79EC(void* p) { return fn_802D73F8(p); }
int fn_802D7A0C(void* p) { return fn_802D73F8(p); }

}
