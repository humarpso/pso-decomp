#include "types.h"

extern "C" {
void TObjPlayer__sub_801C08F8(void* p);

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_80102CE0(void*);
int TObjPlayer__sub_801BEE34(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int fn_801C0768(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801C089C(void* p);
void TObjPlayer__sub_801C08E4(void* p);
void TObjPlayer__sub_801C0970(void* p);
void TObjPlayer__sub_801C09B8(void* p);
void TObjPlayer__sub_801C0A34(void* p);
void TObjPlayer__sub_801C0A48(void* p);
void TObjPlayer__sub_801C0A90(void* p);

void TObjPlayer__sub_801C0970(void* p) { *(u8*)((char*)p + 0x0) = 12; *(u8*)((char*)p + 0x1) = 3; }
void TObjPlayer__sub_801C0984(void* p) { TObjPlayer__sub_801C08F8(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C09B8(void* p) { *(u8*)((char*)p + 0x0) = 161; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C09CC(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0A00(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0A34(void* p) { *(u8*)((char*)p + 0x0) = 50; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C0A48(void* p) { *(u8*)((char*)p + 0x0) = 49; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C0A5C(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0A90(void* p) { *(u8*)((char*)p + 0x0) = 45; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C0AA4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0AD8(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x10); fn_80102CE0((char*)p + 0x8); }

}
