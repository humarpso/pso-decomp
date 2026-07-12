#include "types.h"

extern "C" {

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p);
void TWindowSubTradeMain__sub_80287560(void* p);

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
void TWindowSubTradeMain__sub_80287560(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
