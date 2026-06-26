#include "types.h"

extern "C" {

int fn_80064798(void* p);
int fn_800647BC(void* p);
int fn_800647E0(void* p);
int fn_80064804(void* p);
int fn_80064968(void*, int);

void fn_80064764(void* p) { fn_80064804(p); fn_800647E0(p); }
int fn_80064798(void* p) { return fn_80064968(p, 3); }
int fn_800647BC(void* p) { return fn_80064968(p, 2); }
int fn_800647E0(void* p) { return fn_80064968(p, 1); }
int fn_80064804(void* p) { return fn_80064968(p, 0); }

}
