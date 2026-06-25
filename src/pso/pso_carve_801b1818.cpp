#include "types.h"

extern "C" {

int fn_801C0228(void*);
int fn_801B189C(void* p);
int fn_80019734(void*);

void* fn_801B1818(void* p) { fn_801C0228(p); return p; }
int fn_801B1848(void) { return 0; }
int fn_801B189C(void* p) { return fn_80019734((char*)p + 0x828); }

}
