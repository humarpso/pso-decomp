#include "types.h"

extern "C" {

int clear_field_d8__14TOTrapChainSawFPv(void* p);
int memset(void*, int, int);

int clear_field_d8__14TOTrapChainSawFPv(void* p) { return memset((char*)p + 0xd8, 0, 16); }

}
