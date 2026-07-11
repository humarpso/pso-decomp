#include "types.h"

extern "C" {

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2);
int fn_801B7E14(void*);
int TObjPlayer__sub_801B8DE8(void*, void*, void*);

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2) { fn_801B7E14(p); TObjPlayer__sub_801B8DE8(p, a2, (void*)1); }

}
