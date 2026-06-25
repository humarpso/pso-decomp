#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_8031FC7C(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void fn_8031FC58(void);
int fn_8031FC5C(void* p);
void fn_8031FCAC(void);
int fn_800BB780(void*);

void fn_8031FC2C(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void fn_8031FC58(void) {  }
int fn_8031FC5C(void* p) { return fn_800BB780(p); }
void fn_8031FC7C(void* p) { if (*(short*)((char*)p + 0x326) != 6) { fn_800BBA18(p, (void*)6); } }
void fn_8031FCAC(void) {  }

}
