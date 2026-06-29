#include "types.h"

extern "C" {

void TCharaMaking__sub_8028E25C(void);
void TCharaMaking__sub_8028E288(void);
int fn_801417E8(void);
int fn_80141820(void*);

    extern int some_id_805c6f74;
void TCharaMaking__sub_8028E25C(void) { fn_801417E8(); some_id_805c6f74 = (some_id_805c6f74 & 0xfffffffe); }

    extern int some_id_805c6f74;
void TCharaMaking__sub_8028E288(void) { some_id_805c6f74 = (some_id_805c6f74 | 0x1); fn_80141820((void*)31); }

}
