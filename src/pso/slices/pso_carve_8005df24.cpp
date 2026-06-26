#include "types.h"

extern "C" {

int fn_8005DE94(void*);
int fn_80080750(void*);
void fn_8005DF24(void* p);

void fn_8005DF24(void* p) { if (fn_80080750(p) == 0) { fn_8005DE94(p); } }

}
