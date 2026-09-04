#include "types.h"

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

void set_loss_flag__6TLobbyFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x200; }

}
