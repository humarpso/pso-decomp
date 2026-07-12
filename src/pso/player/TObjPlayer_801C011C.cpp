#include "types.h"

extern "C" {

int TObjPlayer__sub_801C00FC(void);
int TObjPlayer__sub_801C0104(void);
void TObjPlayer__sub_801C011C(void* p, s16 v);
int TObjPlayer__sub_801C0134(void);

void TObjPlayer__sub_801C011C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }

}
