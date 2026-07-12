#include "types.h"

extern "C" {

int TLobby__sub_801F3500(void* p);
void bswap_4x32__6TLobbyFPv(void* p);
void TLobby__sub_801F3568(void);
void sync_quest_register_and_send__6TLobbyFPv(void* p);
void bswap_header__6TLobbyFPv(void* p);
int TLobby__sub_801F3604(void);
int TLobby__sub_801F360C(void);
void TLobby__sub_801F3614(void);
void build_6x77_sync_quest_register(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int VecCopy__FP3VecPC3Vec(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

int TLobby__sub_801F3500(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0xc0); }
void bswap_4x32__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

    extern unsigned char lbl_805D4EE4;
void TLobby__sub_801F3568(void) { lbl_805D4EE4 = (lbl_805D4EE4 | 0x10); }

void sync_quest_register_and_send__6TLobbyFPv(void* p) { bswap_header__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void bswap_header__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void build_6x77_sync_quest_register(void* p) { *(u8*)((char*)p + 0x0) = 119; *(u8*)((char*)p + 0x1) = 3; }

    extern int lbl_805D6CE8;
int TLobby__sub_801F3604(void) {  return lbl_805D6CE8; }

    extern int lbl_805D6CF0;
int TLobby__sub_801F360C(void) {  return lbl_805D6CF0; }

    extern int lbl_805D6CF0;
void TLobby__sub_801F3614(void) { lbl_805D6CF0 = 0; }

}
