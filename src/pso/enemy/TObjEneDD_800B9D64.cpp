#include "types.h"

extern "C" {

void clear_global_flag_400__9TObjEneDDFv(void);
int TObjEneDD__sub_800B9D74(void* p);
int TObjPlayer__sub_80011080(void*);

    extern int some_id_805c6f74;
void clear_global_flag_400__9TObjEneDDFv(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int TObjEneDD__sub_800B9D74(void* p) { return TObjPlayer__sub_80011080(p); }

}
