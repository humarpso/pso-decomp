#include "types.h"

extern "C" {

void TOVS2Wall01__sub_8017CA48(void* p, s32 v);
s32 TOVS2Wall01__sub_8017CA50(void* p);
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p);
void update_and_send__11TOVS2Wall01FPv(void* p);
void* init__11TOVS2Wall01FPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_header__6TLobbyFi(void*);
void TOVS2Wall01__vt23(void);
int bswap_16__FPUs(void*);
int TOBarrierEnergy01__sub_80157CF4(void*);

void TOVS2Wall01__sub_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOVS2Wall01__sub_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void update_and_send__11TOVS2Wall01FPv(void* p) { byteswap_hit_packet__11TOVS2Wall01FPv(p); TLobby__send_and_handle_60(p); }
void* init__11TOVS2Wall01FPv(void* p) { TOBarrierEnergy01__sub_80157CF4(p); *(short*)((char*)p + 0xc) = 0; *(short*)((char*)p + 0xe) = 0; *(unsigned char*)(p) = 134; *(unsigned char*)((char*)p + 0x1) = 4; return p; }

}
