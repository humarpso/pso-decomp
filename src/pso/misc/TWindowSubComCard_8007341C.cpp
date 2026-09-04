#include "types.h"

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

int is_visible__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
