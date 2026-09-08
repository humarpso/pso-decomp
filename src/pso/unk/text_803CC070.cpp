#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TLobby__sub_803D4CA0(void *, s32);
void TLobby__sub_803D504C(void *, s32);
void SIUnregisterPollingHandler(void *);
void TLobby__sub_803CC070(u8 *arg0);
}

extern "C" {

void TLobby__sub_803CC070(u8 *arg0) {
    TLobby__sub_803D4CA0(arg0, 0);
    TLobby__sub_803D504C(arg0, 0);
    SIUnregisterPollingHandler(arg0);
}

}
