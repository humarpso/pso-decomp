#include "types.h"

extern "C" {

void TNpcPlayer__sub_80152DE4(void* a0);
void TNpcPlayer__sub_80152E04(void* p);
void TNpcPlayer__sub_80152E38(void* p);
void TNpcPlayer__sub_80152E74(void* a0);
int TObjPlayer__sub_8001960C(void*);
int bswap_32__FPUl(void*);
int fn_80102CE0(void*);
int update_players__6TLobbyFi(void*);

    extern const float TNpcPlayer__data_805DB1F0;
void TNpcPlayer__sub_80152DE4(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(unsigned char*)((char*)a0 + 0x0) = 66; *(unsigned char*)((char*)a0 + 0x1) = 3; }

void TNpcPlayer__sub_80152E04(void* p) { TNpcPlayer__sub_80152E38((void*)(p)); update_players__6TLobbyFi(p); }

void TNpcPlayer__sub_80152E38(void* p) { TObjPlayer__sub_8001960C(p); fn_80102CE0((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }

    extern const float TNpcPlayer__data_805DB1F0;
void TNpcPlayer__sub_80152E74(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(int*)((char*)a0 + 0xc) = 0; *(unsigned char*)((char*)a0 + 0x0) = 64; *(unsigned char*)((char*)a0 + 0x1) = 4; }

}
