#include "types.h"

extern "C" {

void TObjEneDD__sub_800B9D64(void);
int TObjEneDD__sub_800B9D74(void* p);
int fn_80011080(void*);

    extern int some_id_805c6f74;
void TObjEneDD__sub_800B9D64(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int TObjEneDD__sub_800B9D74(void* p) { return fn_80011080(p); }

}
