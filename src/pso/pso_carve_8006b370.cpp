#include "types.h"

extern "C" {

int fn_8006B398(void* p);
int fn_8006B3B8(void* p);
int fn_8006CCEC(void*);
int fn_8006CD78(void*);

int fn_8006B370(void) { return 0; }
int fn_8006B398(void* p) { return fn_8006CCEC(p); }
int fn_8006B3B8(void* p) { return fn_8006CD78(p); }

}
