#include "types.h"

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void TLobby__sub_8020E400(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_8020E43C(void* p) { TLobby__sub_8020E400(p); TLobby__send_and_handle_60(p); }
void build_6x76_set_entity_set_flags(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }
int TLobby__sub_8020E484(void) { return 0; }
s32 get_lobby_group__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 4;
    }
    if (arg0 >= 0x65) {
        return 4;
    }
    return -1;
}
int TLobby__sub_8020E550(void) { return 0; }
int TLobby__sub_8020E5E0(void) { return 0; }
int TLobby__sub_8020E670(void) { return 0; }

}
