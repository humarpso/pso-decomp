#include "types.h"

extern "C" {

void set_ready_flag__18TCheckRoomSequenceFPv(void* p);
int get_status_flag__6TLobbyFPv(void* p);
int get_flag_bit2__6TLobbyFPv(void* p);
int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 TLobby__sub_8013AD64(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);

void set_ready_flag__18TCheckRoomSequenceFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x1; }

}
