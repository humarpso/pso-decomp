#include "types.h"

extern "C" {

void close_message__22TQuestVmDownLoadServerFPv(void* p);
int close__17TMedicalCenterMesFPv(void*);

void close_message__22TQuestVmDownLoadServerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { close__17TMedicalCenterMesFPv((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }

}
