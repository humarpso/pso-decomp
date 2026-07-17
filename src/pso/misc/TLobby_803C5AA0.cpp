#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 ar_alloc__6TLobbyFv(void);
s32 get_state_zero__6TLobbyFv(void);
s32 TLobby__sub_803C5AE8(void);
M2C_UNK ARAlloc();
M2C_UNK TLobby__sub_803C9608();
s32 TLobby__sub_803CB844();
M2C_UNK TLobby__sub_803CBA38();
M2C_UNK TLobby__sub_803CE240();
M2C_UNK TLobby__sub_803D1444();

s32 ar_alloc__6TLobbyFv(void) {
    ARAlloc();
    return 0;
}

s32 get_state_zero__6TLobbyFv(void) {
    TLobby__sub_803C9608();
    return 0;
}

s32 TLobby__sub_803C5AE8(void) {
    if (TLobby__sub_803CB844() == 1) {
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    } else {
        TLobby__sub_803CBA38();
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    }
    return 0;
}

}
