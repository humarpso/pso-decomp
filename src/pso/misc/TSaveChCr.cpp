#include "types.h"

extern "C" {

void TSaveChCr__sub_80339F5C(void* p, void* a1);
int TSaveChCr__sub_80339F98(void*, void*);
int close_window__9TSaveChCrFPv(void*);

void TSaveChCr__sub_80339F5C(void* p, void* a1) { close_window__9TSaveChCrFPv(p); TSaveChCr__sub_80339F98(p, a1); }

}
