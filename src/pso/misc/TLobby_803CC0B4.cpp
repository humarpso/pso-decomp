#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_803CC114(void);
s32 GCRNA_Create();
s32 gcrna_shutdown();
s32 gcrna_initialize();
s32 gcrna_set_error_callback();

void TLobby::run_step_5210() {
    GCRNA_Create();
}

void TLobby::flush_update() {
    gcrna_set_error_callback();
}

void TLobby::shutdown_cleanup() {
    gcrna_shutdown();
}

void TLobby__sub_803CC114(void) {
    gcrna_initialize();
}

}
