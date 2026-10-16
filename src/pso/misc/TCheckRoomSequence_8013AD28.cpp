#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"

extern "C" {

int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);

void TCheckRoomSequence::set_ready_flag() { *(u16*)((char*)this + 0x70) |= 0x1; }

}
