#include "types.h"

extern "C" {

void TWindowSubTradeMain__sub_80187D24(void* p);
void TWindowSubTradeMain__sub_80187D34(void* p);

void TWindowSubTradeMain__sub_80187D24(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }
void TWindowSubTradeMain__sub_80187D34(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

}
