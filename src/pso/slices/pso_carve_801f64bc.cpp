#include "types.h"

extern "C" {

void TQuestThread__sub_801F64BC(void* p);

void TQuestThread__sub_801F64BC(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }

}
