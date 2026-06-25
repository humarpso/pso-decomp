#include "types.h"

extern "C" {

int fn_8001BF40(void*);
int fn_802A14E4(void*);
int fn_802A16A8(void*);
void fn_802A1440(void* p);

void fn_802A1440(void* p) { *(int*)(p) = 0; fn_802A16A8((char*)p + 0x4); fn_8001BF40((char*)p + 0x428); fn_802A14E4((char*)p + 0xc); }

}
