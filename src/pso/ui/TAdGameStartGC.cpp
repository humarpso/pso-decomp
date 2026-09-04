#include "pso/TAdGameStartGC.h"

TAdGameStartGC::~TAdGameStartGC() {}

#include "types.h"

extern "C" {

void TAdGameStartGC__sub_802E6368(void* p);
int TAdGameStartGC__sub_802E6380(void);
void bswap_6x92__14TAdGameStartGCFPv(void* p);
void render__14TAdGameStartGCFv(void);
void send_6x92__14TAdGameStartGCFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_6x92__14TAdGameStartGCFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void send_6x92__14TAdGameStartGCFPv(void* p) { bswap_6x92__14TAdGameStartGCFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TAdGameStartGC__sub_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }

void render__14TAdGameStartGCFv(void) {  }

int TAdGameStartGC__sub_802E6380(void) { return 0; }

}
