#include "types.h"

extern "C" {

int fn_800BBA18(void*, void*);
void fn_80038A04(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TBoss2Mine__vt59(void);
void TBoss2Mine__vt26(void);

void fn_800389B4(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TBoss2Mine__vt59(void) {  }
int TBoss2Mine__vt60(void) { return 0; }
void fn_80038A04(void* p) { if (*(short*)((char*)p + 0x326) != 4) { fn_800BBA18(p, (void*)4); } }
void TBoss2Mine__vt26(void) {  }

}
