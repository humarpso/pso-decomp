#include "types.h"

extern "C" {

int fn_80084774(void*);
int fn_80141448(void*);
void fn_80083480(void* p);
void fn_800834B0(void);

void fn_80083480(void* p) { if (fn_80084774(p) != 0) { fn_80141448((void*)0); } }
void fn_800834B0(void) {  }

}
