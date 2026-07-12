#include "types.h"

extern "C" {
int TLobby__sub_80156B18(void);

s32 TObjPlayer__sub_8001960C();
s32 bswap_32__FPUl(s32);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80156BA8(void* p);

void TLobby__sub_80156B38(s32 arg0) {
    TObjPlayer__sub_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void TLobby__sub_80156B74(s32 arg0) {
    TLobby__sub_80156B18();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_80156BA8(void* p) { *(u8*)((char*)p + 0x0) = 11; *(u8*)((char*)p + 0x1) = 3; }

}
