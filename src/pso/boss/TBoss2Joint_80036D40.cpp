#include "types.h"

extern "C" {

void TBoss2Joint__vt26(void);
void TBoss2Joint__vt61(void* p);

void TBoss2Joint__vt61(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffff7ff; }
void TBoss2Joint__vt26(void) {  }

}
