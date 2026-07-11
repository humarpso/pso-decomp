#include "types.h"

extern "C" {

void init_timer__14TBoss4DarkFalzFPv(void* a0);
int TBoss4DarkFalz__sub_8004B77C(void*);
int fn_80052284(void);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = fn_80052284(); TBoss4DarkFalz__sub_8004B77C(a0); }

}
