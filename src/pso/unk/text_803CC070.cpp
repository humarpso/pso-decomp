#include "types.h"

extern "C" {
void GCRNA_SetPlaySw(void *, s32);
void GCRNA_SetTransSw(void *, s32);
void gcrna_destroy_stream(void *);
void unregister_si_polling__6TLobbyFPv(u8 *arg0);
}

extern "C" {

void unregister_si_polling__6TLobbyFPv(u8 *arg0) {
    GCRNA_SetPlaySw(arg0, 0);
    GCRNA_SetTransSw(arg0, 0);
    gcrna_destroy_stream(arg0);
}

}
