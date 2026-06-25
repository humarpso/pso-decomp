#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_800E76F0(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void fn_800E762C(void);
void fn_800E767C(void);
void fn_800E7720(void);

void fn_800E762C(void) {  }
int fn_800E7630(void) { return 0; }
void fn_800E7650(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void fn_800E767C(void) {  }
int fn_800E7680(void) { return 0; }
void fn_800E76F0(void* p) { if (*(short*)((char*)p + 0x326) != 13) { fn_800BBA18(p, (void*)13); } }
void fn_800E7720(void) {  }

}
