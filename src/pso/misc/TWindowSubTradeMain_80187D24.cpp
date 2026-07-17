#include "types.h"

extern "C" {

void set_close_flag__19TWindowSubTradeMainFPv(void* p);
void set_visible__19TWindowSubTradeMainFPv(void* p);

void set_close_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }
void set_visible__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

}
