#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdGameStartGC.h"

TAdGameStartGC::~TAdGameStartGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802E637C
#include "types.h"

extern "C" {

void TAdGameStartGC__sub_802E6368(void* p);
void render__14TAdGameStartGCFv(void);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);

void render__14TAdGameStartGCFv(void) {  }

}
#endif
#endif
