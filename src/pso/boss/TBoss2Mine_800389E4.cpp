#include "types.h"

extern "C" {
int TBoss2Mine__vt60(void* p);
int TBoss8Dragon__sub_800BB780(void*);
}

extern "C" {

void TBoss2Mine__vt26(void);
void TBoss2Mine__vt61(void* p);
void TBoss2Mine__vt59(void);
int TObjEneDD__sub_800BBA18(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

int TBoss2Mine__vt60(void* p) { return TBoss8Dragon__sub_800BB780(p); }

void TBoss2Mine__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 4) { TObjEneDD__sub_800BBA18(p, (void*)4); } }
void TBoss2Mine__vt26(void) {  }

}
