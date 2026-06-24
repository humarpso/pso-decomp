#include "types.h"

extern "C" {

int fn_801EE6A0(void* p);
int fn_801EE6C0(void* p);
int fn_8024A4EC(void*);
int fn_8024A530(void*);

int fn_801EE6A0(void* p) { return fn_8024A4EC(p); }
int fn_801EE6C0(void* p) { return fn_8024A530(p); }
int fn_801EE6E0(void) { return 0; }
int fn_801EE704(void) { return 0; }

}
