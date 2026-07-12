#include "types.h"

extern "C" {

void init_timer__14TBoss4DarkFalzFPv(void* a0);
int TBoss4DarkFalz__sub_8004B77C(void*);
int create__14TObjDFUsoTowerFPv(void);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = create__14TObjDFUsoTowerFPv(); TBoss4DarkFalz__sub_8004B77C(a0); }

}
