#include "types.h"

extern "C" {

int fn_802BAB80(void*);
int fn_803D8910(void*, void*);
void fn_802BA6A0(void* p);

void fn_802BA6A0(void* p) { fn_803D8910((char*)p + 0x38, (char*)p + 0x524); fn_802BAB80(p); }

}
