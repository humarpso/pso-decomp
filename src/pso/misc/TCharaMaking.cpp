#include "types.h"

extern "C" {

void clear_flag_bit0__12TCharaMakingFv(void);
void enable_making__12TCharaMakingFv(void);
int TObjPlayer__sub_801417E8(void);
int TObjPlayer__sub_80141820(void*);

    extern int some_id_805c6f74;
void clear_flag_bit0__12TCharaMakingFv(void) { TObjPlayer__sub_801417E8(); some_id_805c6f74 = (some_id_805c6f74 & 0xfffffffe); }

    extern int some_id_805c6f74;
void enable_making__12TCharaMakingFv(void) { some_id_805c6f74 = (some_id_805c6f74 | 0x1); TObjPlayer__sub_80141820((void*)31); }

}
