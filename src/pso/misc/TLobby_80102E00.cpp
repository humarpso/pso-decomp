#include "types.h"

extern "C" {

void bswap_shop_item__6TLobbyFPv(void* p);
void send_item_and_handle_60__6TLobbyFPv(void* p);
void copy_item_data__6TLobbyFPvPv(void* p, void* q);
void TLobby__sub_80102EBC(void* p);
void bswap_6x5D__6TLobbyFPv(void* p);
void send_6x5D__6TLobbyFPv(void* p);
void* init_fields__6TLobbyFPv(void* p);
void init_default_fields__6TLobbyFPv(void* a0);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void*);
int bswap__9TItemDataFv(void*);
int TObjPlayer__sub_80102CE0(void*);

void bswap_shop_item__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap__9TItemDataFv((char*)p + 0x4); }
void send_item_and_handle_60__6TLobbyFPv(void* p) { bswap_shop_item__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void copy_item_data__6TLobbyFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x6) = *(u32*)((char*)q + 0x6); *(u16*)((char*)p + 0xa) = *(u16*)((char*)q + 0xa); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
void TLobby__sub_80102EBC(void* p) { *(u8*)((char*)p + 0x0) = 94; *(u8*)((char*)p + 0x1) = 6; }
void bswap_6x5D__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_80102CE0((char*)p + 0x8); bswap__9TItemDataFv((char*)p + 0x10); }
void send_6x5D__6TLobbyFPv(void* p) { bswap_6x5D__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void* init_fields__6TLobbyFPv(void* p) { init_default_fields__6TLobbyFPv((void*)(p)); *(unsigned char*)((char*)p + 0x24) = 2; *(unsigned char*)((char*)p + 0x25) = 0; *(unsigned char*)((char*)p + 0x26) = 0; *(unsigned char*)((char*)p + 0x27) = 0; *(unsigned char*)((char*)p + 0x1) = 10; return p; }

    extern const float lbl_805DAA88;
void init_default_fields__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(float*)((char*)a0 + 0xc) = lbl_805DAA88; *(float*)((char*)a0 + 0x8) = lbl_805DAA88; *(unsigned char*)((char*)a0 + 0x0) = 93; *(unsigned char*)((char*)a0 + 0x1) = 9; }

}
