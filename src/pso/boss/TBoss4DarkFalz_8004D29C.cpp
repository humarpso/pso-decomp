#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004D29C(void* p);
int TBoss4DarkFalz__sub_8004B20C(void*, void*);
int check_demo_mode__10TObjPlayerFv(void*);

void TBoss4DarkFalz__sub_8004D29C(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss4DarkFalz__sub_8004B20C(p, (void*)1); } }

}
