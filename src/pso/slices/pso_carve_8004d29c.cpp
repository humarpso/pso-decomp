#include "types.h"

extern "C" {

int TBoss4DarkFalz__sub_8004B20C(void*, void*);
int TObjPlayer__sub_80080750(void*);
void fn_8004D29C(void* p);

void fn_8004D29C(void* p) { if (TObjPlayer__sub_80080750(p) == 0) { TBoss4DarkFalz__sub_8004B20C(p, (void*)1); } }

}
