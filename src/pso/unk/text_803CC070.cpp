#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
