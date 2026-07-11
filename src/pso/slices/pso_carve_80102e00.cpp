#include "types.h"

extern "C" {

int fn_80102FA0(void*);
void* fn_80102F50(void* p);
int bswap_16__FPUs(void*);
int bswap__9TItemDataFv(void*);
int TObjPlayer__sub_8001960C(void*);
int fn_80102CE0(void*);
int TLobby__send_and_handle_60(void*);
void fn_80102E68(void* p, void* q);
void fn_80102EBC(void* p);

void fn_80102E00(void* p) { TObjPlayer__sub_8001960C(p); bswap__9TItemDataFv((char*)p + 0x4); }
void fn_80102E34(void* p) { fn_80102E00(p); TLobby__send_and_handle_60(p); }
void fn_80102E68(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x6) = *(u32*)((char*)q + 0x6); *(u16*)((char*)p + 0xa) = *(u16*)((char*)q + 0xa); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
void fn_80102EBC(void* p) { *(u8*)((char*)p + 0x0) = 94; *(u8*)((char*)p + 0x1) = 6; }
void fn_80102ED0(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); fn_80102CE0((char*)p + 0x8); bswap__9TItemDataFv((char*)p + 0x10); }
void fn_80102F1C(void* p) { fn_80102ED0(p); TLobby__send_and_handle_60(p); }
void* fn_80102F50(void* p) { fn_80102FA0(p); *(unsigned char*)((char*)p + 0x24) = 2; *(unsigned char*)((char*)p + 0x25) = 0; *(unsigned char*)((char*)p + 0x26) = 0; *(unsigned char*)((char*)p + 0x27) = 0; *(unsigned char*)((char*)p + 0x1) = 10; return p; }

}
