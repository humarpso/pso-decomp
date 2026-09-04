#include "types.h"

extern "C" {

void TLobby__sub_8013A4A8(void* p, void* a1);
void TLobby__sub_8013A4E4(void* p);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);
int TLobby__sub_8013A5D4(void);
int TObjPlayer__sub_8013A748(void);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
int TObjPlayer__sub_8013A820(void*, void*);
int TProtocol__sub_8013A650(void);
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1);
void bswap_header_fields__6TLobbyFi(s32 arg0);
void send_packet_60__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_801E44D8(s32, s32);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();
int send_command__6TLobbyFPvUi(void* a0 = 0, void* a1 = 0);

void TLobby__sub_8013A4A8(void* p, void* a1) { TLobby__sub_8013A4E4((void*)(p)); send_command__6TLobbyFPvUi(p, a1); }

void TLobby__sub_8013A4E4(void* p) { bswap_header_fields__6TLobbyFi((s32)(p)); }

void bswap_header_fields__6TLobbyFi(s32 arg0) {
    bswap_16__FPUs(arg0 + 2);
    bswap_32__FPUl(arg0 + 4);
}
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__sub_801E44D8(arg0, arg1);
}
void TLobby__sub_8013A578(void* p) { *(u8*)((char*)p + 0x0) = 111; *(u8*)((char*)p + 0x1) = 129; }
void send_packet_60__6TLobbyFi(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_8013A5C0(void* p) { *(u8*)((char*)p + 0x0) = 114; *(u8*)((char*)p + 0x1) = 1; }

int TLobby__sub_8013A5D4(void) { return 0; }
int TProtocol__sub_8013A650(void) { return 0; }
int TObjPlayer__sub_8013A748(void) { return 0; }

void* TObjPlayer__sub_8013A788(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); TObjPlayer__sub_8013A820((void*)((char*)p + 0x4), (void*)((char*)a1 + 0x4)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x8), (void*)((char*)a1 + 0x8)); TObjPlayer__sub_8013A820((void*)((char*)p + 0xc), (void*)((char*)a1 + 0xc)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x10), (void*)((char*)a1 + 0x10)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x14), (void*)((char*)a1 + 0x14)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x18), (void*)((char*)a1 + 0x18)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x1c), (void*)((char*)a1 + 0x1c)); TObjPlayer__sub_8013A820((void*)((char*)p + 0x20), (void*)((char*)a1 + 0x20)); return p; }

int TObjPlayer__sub_8013A820(void*, void*) { return 0; }

}
