#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80291DC0_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
int TLobby__sub_80293080(void*);
extern RecoveredGlobal_80291DC0_lbl_804DB1F0 lbl_804DB1F0;
void TLobby__sub_80291DC0(void* _w0);
}

extern "C" {

void update_screen__6TLobbyFPv(void* p);
int is_multi_ready__6TLobbyFv(void);

void update_screen__6TLobbyFPv(void* p) { if (TLobby__sub_80293080((void*)(p)) != 0) { is_multi_ready__6TLobbyFv(); } }
typedef char RecoveredGlobal_80291DC0_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291DC0_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80291DC0(void* _w0) {
    if (((s32)TLobby__sub_80293080((void*)(_w0))) != 0) {
        M2C_FIELD(&lbl_804DB1F0.value, s32 *, 0x34) = 1;
    }
}

}
