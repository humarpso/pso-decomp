#include "types.h"

extern "C" {

int fn_80348424(void);
int fn_80348448(void);
int fn_8034B008(void*);

int fn_80348398(void) { return 0; }
int fn_80348424(void) { return fn_8034B008((void*)(1)); }
int fn_80348448(void) { return fn_8034B008((void*)(0)); }
int fn_80348470(void) { return 0; }
int fn_8034849C(void) { return 0; }
int fn_803484C4(void) { return 0; }
int fn_80348520(void) { return 0; }
int fn_803485F4(void) { return 0; }

}
