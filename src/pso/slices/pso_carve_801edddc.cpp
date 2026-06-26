#include "types.h"

extern "C" {

int fn_801EDDDC(void);
int fn_801EDE00(void);
int fn_801F3710(void*);

int fn_801EDDDC(void) { return fn_801F3710((void*)(0)); }
int fn_801EDE00(void) { return fn_801F3710((void*)(1)); }

}
