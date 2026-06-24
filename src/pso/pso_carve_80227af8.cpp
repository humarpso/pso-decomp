#include "types.h"

extern "C" {

int fn_80227AF8(void* p);
int fn_8023F754(void*);

int fn_80227AF8(void* p) { return fn_8023F754(p); }
int fn_80227B18(void) { return 0; }

}
