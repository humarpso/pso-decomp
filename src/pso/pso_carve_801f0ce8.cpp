#include "types.h"

extern "C" {

int fn_801F0CF0(void* p);
int fn_801F0D10(void* p);
int fn_8006D494(void*);
int fn_8006D610(void*);

int fn_801F0CE8(void) { return 0; }
int fn_801F0CEC(void) { return 0; }
int fn_801F0CF0(void* p) { return fn_8006D494(p); }
int fn_801F0D10(void* p) { return fn_8006D610(p); }
int fn_801F0D30(void) { return 0; }

}
