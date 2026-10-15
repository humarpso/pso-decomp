#include "types.h"

extern "C" {

void run_step_5210__6TLobbyFv(void);
void flush_update__6TLobbyFv(void);
void shutdown_cleanup__6TLobbyFv(void);
void TLobby__sub_803CC114(void);
s32 GCRNA_Create();
s32 gcrna_shutdown();
s32 gcrna_initialize();
s32 gcrna_set_error_callback();

void run_step_5210__6TLobbyFv(void) {
    GCRNA_Create();
}

void flush_update__6TLobbyFv(void) {
    gcrna_set_error_callback();
}

void shutdown_cleanup__6TLobbyFv(void) {
    gcrna_shutdown();
}

void TLobby__sub_803CC114(void) {
    gcrna_initialize();
}

}
