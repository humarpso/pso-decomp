#include "types.h"

extern "C" {

int fn_80075A00(void*);
int fn_80075AE8(void*);
int fn_80075B5C(void*);
int fn_80075BE0(void*);
int fn_80075C60(void*);
int fn_80075CB4(void*);
void fn_80075DA8(void* p);

void fn_80075DA8(void* p) { fn_80075CB4(p); fn_80075C60(p); fn_80075BE0(p); fn_80075B5C(p); fn_80075AE8(p); fn_80075A00(p); }

}
