#include "types.h"

extern "C" {

int get_status_flag__6TLobbyFPv(void* p);
int get_flag_bit2__6TLobbyFPv(void* p);
int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 TLobby__sub_8013AD64(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);
void set_ready_flag__18TCheckRoomSequenceFPv(void* p);

int get_status_flag__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
int get_flag_bit2__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
int TLobby__sub_8013AD50(void* p) { return (*(u8*)((char*)p + 0x1d) >> 1) & 0x1; }
s32 TLobby__sub_8013AD5C(void* p) { return *(s32*)((char*)p + 0x20); }
u8 TLobby__sub_8013AD64(void* p) { return *(u8*)((char*)p + 0x1e); }
u8 TLobby__sub_8013AD6C(void* p) { return *(u8*)((char*)p + 0x1e); }
int TLobby__sub_8013AD74(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }

}
