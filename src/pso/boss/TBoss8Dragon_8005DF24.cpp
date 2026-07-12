#include "types.h"

extern "C" {

void TBoss8Dragon__sub_8005DF24(void* p);
int TBoss8Dragon__sub_8005DE94(void*);
int check_demo_mode__10TObjPlayerFv(void*);

void TBoss8Dragon__sub_8005DF24(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss8Dragon__sub_8005DE94(p); } }

}
