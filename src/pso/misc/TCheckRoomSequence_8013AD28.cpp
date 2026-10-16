#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TCheckRoomSequence::set_ready_flag() { *(u16*)((char*)this + 0x70) |= 0x1; }

}
