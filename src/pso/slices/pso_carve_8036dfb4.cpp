#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
M2C_UNK TLobby__sub_80269C6C(u32, s32, M2C_UNK);
s32 fn_8036DE10(void *, M2C_UNK, s32);
M2C_UNK fn_8036E19C(void *, M2C_UNK);
M2C_UNK fn_8036E2AC(void *, M2C_UNK);

void close_windows_and_cleanup(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    fn_8036E2AC(arg0, 0);
    fn_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TLobby__sub_80269C6C(M2C_FIELD(arg0, u32 *, 0x30), fn_8036DE10(arg0, 3, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

}
