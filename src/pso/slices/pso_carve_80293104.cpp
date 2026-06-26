#include "types.h"

extern "C" {

int fn_80293104(void* p);
int fn_80293124(void* p);
int fn_80076578(void*);
int fn_800765B4(void*);

int fn_80293104(void* p) { return fn_80076578(p); }
int fn_80293124(void* p) { return fn_800765B4(p); }

}
