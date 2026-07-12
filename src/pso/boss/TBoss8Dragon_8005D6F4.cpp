#include "types.h"

extern "C" {

int TBoss8Dragon__sub_8005D6F4(void* p);
int TBoss8Dragon__sub_8005D700(void);

int TBoss8Dragon__sub_8005D6F4(void* p) { return (*(u32*)((char*)p + 0x4c0) >> 6) & 0x1; }

}
