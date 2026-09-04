#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int TLobby__sub_8037F2EC(void);
int TLobby__sub_8037F2EC(void);
extern s32 lbl_805D725C;
s32 TLobby__sub_8037F2F4(void);
}

extern "C" {

int TLobby__sub_8037F2EC(void) { return 16384; }

s32 TLobby__sub_8037F2F4(void) {
    return lbl_805D725C;
}

}
