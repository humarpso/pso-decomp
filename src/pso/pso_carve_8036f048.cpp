#include "types.h"

extern "C" {

int fn_8036F06C(void* p);
int fn_8036F08C(void* p);
int fn_8036F0AC(void* p);
int fn_8023E974(void*);
int fn_8023EA64(void*);
int fn_8023EC14(void*);

int fn_8036F048(void) { return 0; }
int fn_8036F06C(void* p) { return fn_8023EA64(p); }
int fn_8036F08C(void* p) { return fn_8023EC14(p); }
int fn_8036F0AC(void* p) { return fn_8023E974(p); }
int fn_8036F0CC(void) { return 0; }

}
