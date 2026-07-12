#include "types.h"

extern "C" {

void TObjEneRecon__sub_8031FC2C(void* p);
void TObjEneRecon__sub_8031FC58(void);
int TObjEneRecon__sub_8031FC5C(void* p);
void TObjEneRecon__sub_8031FC7C(void* p);
void TObjEneRecon__sub_8031FCAC(void);
int TBoss8Dragon__sub_800BB780(void*);
int TObjEneDD__sub_800BBA18(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

void TObjEneRecon__sub_8031FC2C(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneRecon__sub_8031FC58(void) {  }
int TObjEneRecon__sub_8031FC5C(void* p) { return TBoss8Dragon__sub_800BB780(p); }
void TObjEneRecon__sub_8031FC7C(void* p) { if (*(short*)((char*)p + 0x326) != 6) { TObjEneDD__sub_800BBA18(p, (void*)6); } }
void TObjEneRecon__sub_8031FCAC(void) {  }

}
