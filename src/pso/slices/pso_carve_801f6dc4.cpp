#include "types.h"

extern "C" {

int TMedicalCenterMes__sub_802229F4(void*);
void TQuestVmDownLoadServer__sub_801F6DC4(void* p);

void TQuestVmDownLoadServer__sub_801F6DC4(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { TMedicalCenterMes__sub_802229F4((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }

}
