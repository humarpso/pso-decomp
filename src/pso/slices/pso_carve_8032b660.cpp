#include "types.h"

extern "C" {

int fn_8032B660(void* p);
int fn_8032B680(void* p);
int fn_8023EA34(void*);
int fn_8023EA64(void*);

int fn_8032B660(void* p) { return fn_8023EA34(p); }
int fn_8032B680(void* p) { return fn_8023EA64(p); }

}
