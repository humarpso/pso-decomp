#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int is_visible__17TWindowSubComCardFv(void* p);

void TLobby::set_loss_flag() { *(u16*)((char*)this + 0x70) |= 0x200; }

}
