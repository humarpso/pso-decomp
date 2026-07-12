#include "types.h"

extern "C" {

int fn_801F3620(void* p);
int fn_801F3694(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TObjPlayer__sub_8001BED8(void*, int);

int fn_801F3620(void* p) { return VecCopy__FP3VecPC3Vec(p); }
int fn_801F3640(void) { return 0; }
int fn_801F3694(void* p) { return TObjPlayer__sub_8001BED8((char*)p + 0x10, 2); }

}
