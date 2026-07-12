#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int TLobby__sub_80156BA8(void*);
int TLobby__send_and_handle_60(void*);
void TOAttackableCol__vt23(void);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOBarrierEnergy01__vt18(void);

void TOAttackableCol__sub_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOAttackableCol__sub_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
void bswap_state__15TOAttackableColFPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x10); }
void broadcast_state__15TOAttackableColFPv(void* p) { bswap_state__15TOAttackableColFPv(p); TLobby__send_and_handle_60(p); }

}
