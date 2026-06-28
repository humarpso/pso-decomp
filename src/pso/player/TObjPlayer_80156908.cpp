#include "types.h"

extern "C" {

void TObjPlayer__sub_80156908(void* p);
void fn_80156934(void);
int fn_80019828(void*);
int fn_801549D0(void);
int fn_80154D7C(void);

void TObjPlayer__sub_80156908(void* p) { void* m = *(void**)((char*)p + 0x90); if (m) fn_80019828(m); }
void fn_80156934(void) { fn_801549D0(); fn_80154D7C(); }

}
