#include "types.h"

extern "C" {

int fn_80339F98(void*, void*);
int fn_8033A088(void*);
void fn_80339F5C(void* p, void* a1);

void fn_80339F5C(void* p, void* a1) { fn_8033A088(p); fn_80339F98(p, a1); }

}
