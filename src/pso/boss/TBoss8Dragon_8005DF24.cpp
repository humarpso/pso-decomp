#include "types.h"

extern "C" {

void TBoss8Dragon__sub_8005DF24(void* p);
int TBoss8Dragon__sub_8005DE94(void*);
int TObjPlayer__sub_80080750(void*);

void TBoss8Dragon__sub_8005DF24(void* p) { if (TObjPlayer__sub_80080750(p) == 0) { TBoss8Dragon__sub_8005DE94(p); } }

}
