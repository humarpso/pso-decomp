#include "types.h"

extern "C" {

void TCheckRoomSequence__sub_8013AD28(void* p);
int TLobby__sub_8013AD38(void* p);
int TLobby__sub_8013AD44(void* p);
int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 TLobby__sub_8013AD64(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);

void TCheckRoomSequence__sub_8013AD28(void* p) { *(u16*)((char*)p + 0x70) |= 0x1; }

}
