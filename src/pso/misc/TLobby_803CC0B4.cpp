#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_step_5210__6TLobbyFv(void);
void flush_update__6TLobbyFv(void);
void shutdown_cleanup__6TLobbyFv(void);
void TLobby__sub_803CC114(void);
M2C_UNK GCRNA_Create();
M2C_UNK gcrna_shutdown();
M2C_UNK gcrna_initialize();
M2C_UNK gcrna_set_error_callback();

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
