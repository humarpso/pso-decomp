#include "types.h"

extern "C" {

int fn_802DC2F0(void* p);
int fn_8023EC14(void*);

int fn_802DC294(void) { return 0; }
int fn_802DC2F0(void* p) { return fn_8023EC14(p); }
int fn_802DC310(void) { return 0; }

}
