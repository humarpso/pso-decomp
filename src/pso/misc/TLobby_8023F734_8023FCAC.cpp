#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8023FF38 { u8 pad[0x40]; s32 f40; u8 pad2[0x5c]; };

extern "C" {
extern E_8023FF38 lbl_805162EC[];
void TLobby__sub_8023FF38(void);
}

extern "C" {

u8 is_ready__6TLobbyFPv(void *arg0);

u8 is_ready__6TLobbyFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x298) == 1);
}
void TLobby__sub_8023FF38(void) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        lbl_805162EC[i].f40 = -0x100;
    }
}

}
