#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"

void TCheckRoomSequence::set_ready_flag() { *(u16*)((char*)this + 0x70) |= 0x1; }
