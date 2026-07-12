#include "types.h"

extern "C" {

int TOTrapChainSaw__sub_802C90F8(void* p);
int memset(void*, int, int);

int TOTrapChainSaw__sub_802C90F8(void* p) { return memset((char*)p + 0xd8, 0, 16); }

}
