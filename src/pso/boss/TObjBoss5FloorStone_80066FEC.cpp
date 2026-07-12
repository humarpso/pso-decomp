#include "types.h"

extern "C" {

void TObjBoss5FloorStone__sub_80066FEC(void* p, void* a1);
int TObjPlayer__sub_80066F5C(void*);
int TObjPlayer__sub_80083B38(void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int TObjFish__sub_803DA798(void*);

void TObjBoss5FloorStone__sub_80066FEC(void* p, void* a1) { TObjPlayer__sub_80083B38(p); TObjFish__sub_803DA798(p); TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_80066F5C(a1); TObjPlayer__sub_803D9B78(); }

}
